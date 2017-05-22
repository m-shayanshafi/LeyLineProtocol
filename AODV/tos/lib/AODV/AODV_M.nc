/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */

#define AODV_DEBUG  1

module AODV_M {
  provides {
    interface SplitControl;
    interface AMSend[am_id_t id];
    interface Receive[uint8_t id];
  }
  
  uses {
    interface SplitControl as AMControl;
    interface Timer<TMilli> as AODVTimer;
    interface Timer<TMilli> as RREQTimer;
    interface Leds;
    interface Random;
    interface AMPacket;
    interface Packet;
    interface AMSend as SendRREQ;
    interface AMSend as SendRREP;
    interface AMSend as SendRERR;
    interface Receive as ReceiveRREQ;
    interface Receive as ReceiveRREP;
    interface Receive as ReceiveRERR;
    interface AMSend as SubSend;
    interface Receive as SubReceive;
    interface PacketAcknowledgements;
  }
}

implementation {
  
  message_t rreq_msg_;
  message_t rrep_msg_;
  message_t rerr_msg_;
  message_t aodv_msg_;
  message_t app_msg_;
  
  message_t* p_rreq_msg_;
  message_t* p_rrep_msg_;
  message_t* p_rerr_msg_;
  message_t* p_aodv_msg_;
  message_t* p_app_msg_;
  
  uint8_t rreq_seq_ = 0;
  
  bool send_pending_    = FALSE;
  bool rreq_pending_    = FALSE;
  bool rrep_pending_    = FALSE;
  bool rerr_pending_    = FALSE;
  bool msg_pending_ = FALSE;
  
  uint8_t rreq_retries_    = AODV_RREQ_RETRIES;
  uint8_t rrep_retries_    = AODV_RREP_RETRIES;
  uint8_t rerr_retries_    = AODV_RERR_RETRIES;
  uint8_t msg_retries_     = AODV_MSG_RETRIES;
  
  AODV_ROUTE_TABLE route_table_[AODV_ROUTE_TABLE_SIZE];
  AODV_RREQ_CACHE rreq_cache_[AODV_RREQ_CACHE_SIZE];
  
  bool sendRREQ( am_addr_t dest, bool forward );
  task void resendRREQ();
  
  bool sendRREP( am_addr_t dest, bool forward );
  task void resendRREP();
  
  bool sendRERR( am_addr_t dest, am_addr_t src, bool forward );
  task void resendRERR();
  
  error_t forwardMSG( message_t* msg, am_addr_t nextHop, uint8_t len );
  void resendMSG();
  
  uint8_t get_rreq_cache_index( am_addr_t src, am_addr_t dest );
  bool is_rreq_cached( aodv_rreq_hdr* msg );
  bool add_rreq_cache( uint8_t seq, am_addr_t dest, am_addr_t src, uint8_t hop );
  void del_rreq_cache( uint8_t id );
  task void update_rreq_cache();
  
  uint8_t get_route_table_index( am_addr_t dest );
  bool add_route_table( uint8_t seq, am_addr_t dest, am_addr_t nexthop, uint8_t hop );
  void del_route_table( am_addr_t dest );
  am_addr_t get_next_hop( am_addr_t dest );
  
#if AODV_DEBUG
  void print_route_table();
  void print_rreq_cache();
#endif
  
  command error_t SplitControl.start() {
    int i;
    
    p_rreq_msg_     = &rreq_msg_;
    p_rrep_msg_     = &rrep_msg_;
    p_rerr_msg_     = &rerr_msg_;
    p_aodv_msg_     = &aodv_msg_;
    p_app_msg_      = &app_msg_;
    
    for(i = 0; i< AODV_ROUTE_TABLE_SIZE; i++) {
      route_table_[i].seq  = 0;
      route_table_[i].dest = INVALID_NODE_ID;
      route_table_[i].next = INVALID_NODE_ID;
      route_table_[i].hop  = 0;
    }
    
    for(i = 0; i< AODV_RREQ_CACHE_SIZE; i++) {
      rreq_cache_[i].seq  = 0;
      rreq_cache_[i].dest = INVALID_NODE_ID;
      rreq_cache_[i].src  = INVALID_NODE_ID;
      rreq_cache_[i].hop  = 0;
    }
    
    call AMControl.start();
    
    return SUCCESS;
  } // start
  
  
  command error_t SplitControl.stop() {
    call AMControl.stop();
    return SUCCESS;
  }
  
  
  event void AMControl.startDone( error_t e ) {
    if ( e == SUCCESS ) {
      call AODVTimer.startPeriodic( AODV_DEFAULT_PERIOD );
      signal SplitControl.startDone(e);
    } else {
      call AMControl.start();
    }
  }
  
  
  event void AMControl.stopDone(error_t e){
    call AODVTimer.stop();
    signal SplitControl.stopDone(e);
  }
  
  
  //--------------------------------------------------------------------------
  //  sendRREQ: This broadcasts the RREQ to find the path from the source to
  //  the destination.
  //--------------------------------------------------------------------------
  bool sendRREQ( am_addr_t dest, bool forward ) {
    aodv_rreq_hdr* aodv_hdr = (aodv_rreq_hdr*)(p_rreq_msg_->data);
    
    // dbg("AODV", "%s\t AODV: sendRREQ() dest: %d\n", sim_time_string(), dest);
    
    if( rreq_pending_ == TRUE ) {
      return FALSE;
    }
    
    if( forward == FALSE ) { // generate the RREQ for the first time
      aodv_hdr->seq      = rreq_seq_++;
      aodv_hdr->dest     = dest;
      aodv_hdr->src      = call AMPacket.address();
      aodv_hdr->hop      = 1;
      add_rreq_cache( aodv_hdr->seq, aodv_hdr->dest, aodv_hdr->src, 0 );
    } else { // forward the RREQ
      aodv_hdr->hop++;
    }
    
    if (!send_pending_) {
      if( call SendRREQ.send(TOS_BCAST_ADDR, p_rreq_msg_, 
                                    AODV_RREQ_HEADER_LEN) == SUCCESS) {
        dbg("AODV", "%s\t AODV: sendRREQ()\n", sim_time_string());
        send_pending_ = TRUE;
        return TRUE;
      }
    }
    
    rreq_pending_ = TRUE;
    rreq_retries_ = AODV_RREQ_RETRIES;
    return FALSE;
  }
  
  
  //--------------------------------------------------------------------------
  //  sendRREP: This forwards the RREP to the nexthop of the source of RREQ
  //  to establish and inform the route.
  //--------------------------------------------------------------------------
  bool sendRREP( am_addr_t dest, bool forward ){
    
    // dbg("AODV_DBG", "%s\t AODV: sendRREP() dest: %d send_pending_: %d\n", 
                                      // sim_time_string(), dest, send_pending_);
    
    if ( !send_pending_ ) {
      call PacketAcknowledgements.requestAck(p_rrep_msg_);
      if( call SendRREP.send(dest, p_rrep_msg_, 
                                           AODV_RREP_HEADER_LEN) == SUCCESS) {
        dbg("AODV", "%s\t AODV: sendRREP() to %d\n", sim_time_string(), dest);
        send_pending_ = TRUE;
        return TRUE;
      }
    }
    
    rrep_pending_ = TRUE;
    rrep_retries_ = AODV_RREP_RETRIES;
    return FALSE;
  }
  
  
  //--------------------------------------------------------------------------
  //  sendRERR: If the node fails to transmit a message over the retransmission
  //  limit, it will send RERR to the source node of the message.
  //--------------------------------------------------------------------------
  bool sendRERR( am_addr_t dest, am_addr_t src, bool forward ){
    aodv_rerr_hdr* aodv_hdr = (aodv_rerr_hdr*)(p_rerr_msg_->data);
    am_addr_t target;
    
    // dbg("AODV_DBG", "%s\t AODV: sendRERR() dest: %d\n", sim_time_string(), dest);
    
    aodv_hdr->dest = dest;
    aodv_hdr->src = src;
    
    target = get_next_hop( src );
    
    if (!send_pending_) {
      if( call SendRERR.send(target, p_rerr_msg_, AODV_RERR_HEADER_LEN)) {
        dbg("AODV", "%s\t AODV: sendRREQ() to %d\n", sim_time_string(), target);
        send_pending_ = TRUE;
        return TRUE;
      }
    }
    
    rerr_pending_ = TRUE;
    rerr_retries_ = AODV_RERR_RETRIES;
    return FALSE;
  }
  
  
  task void resendRREQ() {
    // dbg("AODV", "%s\t AODV: resendRREQ()\n", sim_time_string());
    
    if(rreq_retries_ <= 0){
      rreq_pending_ = FALSE;
      return;
    }
    rreq_retries_--;
    
    if ( !send_pending_ ) {
      if( call SendRREQ.send(TOS_BCAST_ADDR, p_rreq_msg_, AODV_RREQ_HEADER_LEN) ) {
        send_pending_ = TRUE;
        rreq_pending_ = FALSE;
      }
    }
  }
  
  
  task void resendRREP(){
    am_addr_t dest = call AMPacket.destination( p_rrep_msg_ );
    if( rrep_retries_ == 0 ) {
      rrep_pending_ = FALSE;
      return;
    }
    rrep_retries_--;
    
    if ( !send_pending_ ) {
      call PacketAcknowledgements.requestAck( p_rrep_msg_ );
      if( call SendRREP.send( dest, 
                               p_rrep_msg_, AODV_RREP_HEADER_LEN) == SUCCESS) {
        dbg("AODV", "%s\t AODV: resendRREP() to %d\n", sim_time_string(), dest);
        send_pending_ = TRUE;
        rrep_pending_ = FALSE;
      }
    }
  }
  
  
  task void resendRERR(){
    am_addr_t dest = call AMPacket.destination( p_rerr_msg_ );
    if( rerr_retries_ == 0 ) {
      rerr_pending_ = FALSE;
      return;
    }
    rerr_retries_--;
    
    if ( !send_pending_ ) {
      call PacketAcknowledgements.requestAck( p_rerr_msg_ );
      if( call SendRERR.send( dest, 
                               p_rerr_msg_, AODV_RERR_HEADER_LEN) == SUCCESS) {
        dbg("AODV", "%s\t AODV: resendRERR() to %d\n", sim_time_string());
        send_pending_ = TRUE;
        rerr_pending_ = FALSE;
      }
    }
  }
  
  
  //--------------------------------------------------------------------------
  //  resendMSG: This is triggered by the timer. If the forward_retries_ equals
  //  zero, the retransmission will be canceled. Or, the cached message will
  //  be retransmitted.
  //--------------------------------------------------------------------------
  void resendMSG() {
    if( msg_retries_ == 0 ) {
      msg_pending_ = FALSE;
      return;
    }
    msg_retries_--;
    call PacketAcknowledgements.requestAck( p_aodv_msg_ );
    if( !send_pending_ ) {
      if( call SubSend.send( call AMPacket.destination(p_aodv_msg_),
                        p_aodv_msg_,
                        call Packet.payloadLength(p_aodv_msg_) ) == SUCCESS ) {
        dbg("AODV", "%s\t AODV: resendMSG() broadcast\n", sim_time_string());
        send_pending_ = TRUE;
        msg_pending_ = FALSE;
      }
    }
  }
  
  
  uint8_t get_rreq_cache_index( am_addr_t src, am_addr_t dest ){
    int i;
    for( i=0 ; i < AODV_RREQ_CACHE_SIZE ; i++ ) {
      if( rreq_cache_[i].src == src && rreq_cache_[i].dest == dest ) {
        return i;
      }
      return INVALID_INDEX;
    }
  }
  
  
  bool is_rreq_cached( aodv_rreq_hdr* rreq_hdr ) {
    int i;
    
    for( i=0; i < AODV_RREQ_CACHE_SIZE ; i++ ) {
      if( rreq_cache_[i].dest == INVALID_NODE_ID ) {
        return TRUE;
      }
      if( rreq_cache_[i].src == rreq_hdr->src && rreq_cache_[i].dest == rreq_hdr->dest ) {
        if( rreq_cache_[i].seq < rreq_hdr->seq || 
           ( rreq_cache_[i].seq == rreq_hdr->seq && rreq_cache_[i].hop > rreq_hdr->hop )) {
          // this is a newer rreq
	  return TRUE;
        } else {
          return FALSE;
        }
      }
    }
    return TRUE;
  } //
  
  
  bool add_rreq_cache( uint8_t seq, am_addr_t dest, am_addr_t src, uint8_t hop ) {
    uint8_t i;
    uint8_t id = AODV_RREQ_CACHE_SIZE;
    
    for( i=0; i < AODV_RREQ_CACHE_SIZE-1 ; i++ ) {
      if( rreq_cache_[i].src == src && rreq_cache_[i].dest == dest ) {
        id = i;
        break;
      }
      if( rreq_cache_[i].dest == INVALID_NODE_ID )
      break;
    }
    
    if( id != AODV_RREQ_CACHE_SIZE ) {
      if( rreq_cache_[i].src == src && rreq_cache_[i].dest == dest ) {
        if( rreq_cache_[id].seq < seq || rreq_cache_[id].hop > hop ) {
          rreq_cache_[id].seq = seq;
          rreq_cache_[id].hop = hop;
          rreq_cache_[i].ttl  = AODV_RREQ_CACHE_TTL;
          return TRUE;
        }
      }
    } else if( i != AODV_RREQ_CACHE_SIZE ) {
      rreq_cache_[i].seq  = seq;
      rreq_cache_[i].dest = dest;
      rreq_cache_[i].src  = src;
      rreq_cache_[i].hop  = hop;
      rreq_cache_[i].ttl  = AODV_RREQ_CACHE_TTL;
      return TRUE;
    }
    
    print_rreq_cache();
    return FALSE;
  }
  
  
  void del_rreq_cache( uint8_t id ) {
    uint8_t i;
    
    for(i = id; i< AODV_ROUTE_TABLE_SIZE-1; i++) {
      if(rreq_cache_[i+1].dest == INVALID_NODE_ID) {
        break;
      }
      rreq_cache_[i] = rreq_cache_[i+1];
    }
    
    rreq_cache_[i].dest = INVALID_NODE_ID;
    rreq_cache_[i].src = INVALID_NODE_ID;
    rreq_cache_[i].seq  = 0;
    rreq_cache_[i].hop  = 0;
    
    print_rreq_cache();
  }
  
  
  //--------------------------------------------------------------------------
  //  update_rreq_cache: This is triggered periodically by the timer.
  //  If the ttl of a rreq_cache entity equals to zero, the entity will be 
  //  removed.
  //--------------------------------------------------------------------------
  task void update_rreq_cache() {
    uint8_t i;
    for( i=0 ; i < AODV_RREQ_CACHE_SIZE-1 ; i++ ) {
      if( rreq_cache_[i].dest == INVALID_NODE_ID )
	break;
      else if( rreq_cache_[i].ttl-- == 0 )
        del_rreq_cache(i);
    }
  }
  
  
  //--------------------------------------------------------------------------
  //  get_route_table_index: Return the index which is correspoing to
  //  the destination
  //--------------------------------------------------------------------------
  uint8_t get_route_table_index( am_addr_t dest ) {
    int i;
    for(i=0; i< AODV_ROUTE_TABLE_SIZE; i++) {
      if(route_table_[i].dest == dest)
        return i;
    }
    return INVALID_INDEX;
  } //
  
  
  void del_route_table( am_addr_t dest ) {
    uint8_t i;
    uint8_t id = get_route_table_index( dest );
    
    // dbg("AODV", "%s\t AODV: del_route_table() dest:%d\n",
                                       // sim_time_string(), dest);
    
    for(i = id; i< AODV_ROUTE_TABLE_SIZE-1; i++) {
      if(route_table_[i+1].dest == INVALID_NODE_ID) {
        break;
      }
      route_table_[i] = route_table_[i+1];
    }
    
    route_table_[i].dest = INVALID_NODE_ID;
    route_table_[i].next = INVALID_NODE_ID;
    route_table_[i].seq  = 0;
    route_table_[i].hop  = 0;
    
    // print_route_table();
  }
  
  
  //--------------------------------------------------------------------------
  //  add_route_table: If a route information is a new or fresh one, it is 
  //  added to the route table.
  //--------------------------------------------------------------------------
  bool add_route_table( uint8_t seq, am_addr_t dest, am_addr_t nexthop, uint8_t hop ) {
    uint8_t i;
    uint8_t id = AODV_ROUTE_TABLE_SIZE;
    
    // dbg("AODV_DBG", "%s\t AODV: add_route_table() seq:%d dest:%d next:%d hop:%d\n",
                                    // sim_time_string(), seq, dest, nexthop, hop);
    for( i=0 ; i < AODV_ROUTE_TABLE_SIZE-1 ; i++ ) {
      if( route_table_[i].dest == dest ) {
        id = i;
        break;
      }
      if( route_table_[i].dest == INVALID_NODE_ID ) {
        break;
      }
    }
    
    if( id != AODV_ROUTE_TABLE_SIZE ) {
      if( route_table_[id].next == nexthop ) {
        if( route_table_[id].seq < seq || route_table_[id].hop > hop ) {
          route_table_[id].seq = seq;
          route_table_[id].hop = hop;
          //route_table_[id].ttl = 0;
          return TRUE;
        }
      }
    } else if( i != AODV_ROUTE_TABLE_SIZE ) {
      route_table_[i].seq  = seq;
      route_table_[i].dest = dest;
      route_table_[i].next = nexthop;
      route_table_[i].hop  = hop;
      //route_table_[i].ttl = 0;
      return TRUE;
    }
    print_route_table();
    return FALSE;

  }
  
  
  //--------------------------------------------------------------------------
  //  get_next_hop: Return the nexthop node address of the message if the 
  //  address exists in the route table.
  //--------------------------------------------------------------------------
  am_addr_t get_next_hop( am_addr_t dest ) {
    int i = 0;
    for( i=0 ; i < AODV_ROUTE_TABLE_SIZE ; i++ ) {
      if(route_table_[i].dest == dest) {
        return route_table_[i].next;
      }
    }
    return INVALID_NODE_ID;
  }
  
  
  //--------------------------------------------------------------------------
  //  forwardMSG: The node forwards a message to the next-hop node if the 
  //  target of the message is not itself.
  //--------------------------------------------------------------------------
  error_t forwardMSG( message_t* p_msg, am_addr_t nexthop, uint8_t len ) {
    aodv_msg_hdr* aodv_hdr = (aodv_msg_hdr*)(p_msg->data);
    aodv_msg_hdr* msg_aodv_hdr = (aodv_msg_hdr*)(p_aodv_msg_->data);
    uint8_t i;
    
    if ( msg_pending_ ) {
      // dbg("AODV", "%s\t AODV: forwardMSG() msg_pending_\n", sim_time_string());
      return FAIL;
    }
    // dbg("AODV_DBG", "%s\t AODV: forwardMSG() try to forward to %d \n", 
                                                    // sim_time_string(), nexthop);
    
    // forward MSG
    msg_aodv_hdr->dest = aodv_hdr->dest;
    msg_aodv_hdr->src  = aodv_hdr->src;
    msg_aodv_hdr->app  = aodv_hdr->app;
    
    for( i=0 ; i < len-AODV_MSG_HEADER_LEN ; i++ ) {
      msg_aodv_hdr->data[i] = aodv_hdr->data[i];
    }
    
    call PacketAcknowledgements.requestAck(p_aodv_msg_);
    
    if( call SubSend.send(nexthop, p_aodv_msg_, len) == SUCCESS ) {
      dbg("AODV", "%s\t AODV: forwardMSG() send MSG to: %d\n", 
                                                 sim_time_string(), nexthop);
      msg_retries_ = AODV_MSG_RETRIES;
      msg_pending_ = TRUE;
    } else {
      // dbg("AODV", "%s\t AODV: forwardMSG() fail to send\n", sim_time_string());
      msg_pending_ = FALSE;
    }
    return SUCCESS;
  }
  
  
  //--------------------------------------------------------------------------
  //  AMSend.send: If there is a route to the destination, the message will be 
  //  sent to the next-hop node for the destination. Or, the node will broadcast
  //  the RREQ.
  //--------------------------------------------------------------------------
  command error_t AMSend.send[am_id_t id](am_addr_t addr, message_t* msg, uint8_t len) {
    uint8_t i;
    aodv_msg_hdr* aodv_hdr = (aodv_msg_hdr*)(p_aodv_msg_->data);
    am_addr_t nexthop = get_next_hop( addr );
    am_addr_t me = call AMPacket.address();
    
    // dbg("AODV", "%s\t AODV: AMSend.send() dest: %d id: %d len: %d nexthop: %d\n", 
                // sim_time_string(), addr, id, len, nexthop);
    
    if( addr == me ) {
      return SUCCESS;
    }
    /* If the next-hop node for the destination does not exist, the RREQ will be
       broadcasted */
    if( nexthop == INVALID_NODE_ID ) {
      if( !rreq_pending_ ) {
        // dbg("AODV", "%s\t AODV: AMSend.send() a new destination\n", 
                                                             // sim_time_string());
        sendRREQ( addr, FALSE );
        return SUCCESS;
      }
      return FAIL;
    }
    // dbg("AODV", "%s\t AODV: AMSend.send() there is a route to %d\n", 
                                                        // sim_time_string(), addr);
    aodv_hdr->dest = addr;
    aodv_hdr->src  = me;
    aodv_hdr->app  = id;
    
    for( i=0;i<len;i++ ) {
      aodv_hdr->data[i] = msg->data[i];
    }
    
    call PacketAcknowledgements.requestAck(p_aodv_msg_);
    
    if( !send_pending_ ) {
      if( call SubSend.send( nexthop, p_aodv_msg_, len + AODV_MSG_HEADER_LEN ) == SUCCESS ) {
        send_pending_ = TRUE;
        return SUCCESS;
      }
      msg_pending_ = TRUE;
    }
    return FAIL;
  }
  
  
  //--------------------------------------------------------------------------
  //  SendRREQ.sendDone: If the RREQ transmission is finished, it will release
  //  the RREQ and SEND pendings.
  //--------------------------------------------------------------------------
  event void SendRREQ.sendDone(message_t* p_msg, error_t e) {
    // dbg("AODV_DBG", "%s\t AODV: SendRREQ.sendDone()\n", sim_time_string());
    send_pending_ = FALSE;
    rreq_pending_ = FALSE;
  }
  
  
  //--------------------------------------------------------------------------
  //  SendRREP.sendDone: If the RREP transmission is finished, it will release
  //  the RREP and SEND pendings.
  //--------------------------------------------------------------------------
  event void SendRREP.sendDone(message_t* p_msg, error_t e) {
    // dbg("AODV_DBG", "%s\t AODV: SendRREP.sendDone()\n", sim_time_string());
    send_pending_ = FALSE;
    if( call PacketAcknowledgements.wasAcked(p_msg) )
      rrep_pending_ = FALSE;
    else
      rrep_pending_ = TRUE;
  }
  
  
  //--------------------------------------------------------------------------
  //  SendRERR.sendDone: If the RERR transmission is finished, it will release
  //  the RERR and SEND pendings.
  //--------------------------------------------------------------------------
  event void SendRERR.sendDone(message_t* p_msg, error_t e) {
    // dbg("AODV_DBG", "%s\t AODV: SendRERR.sendDone() \n", sim_time_string());
    send_pending_ = FALSE;
    if( call PacketAcknowledgements.wasAcked(p_msg) )
      rerr_pending_ = FALSE;
    else
      rerr_pending_ = TRUE;
  }
  
  
  //--------------------------------------------------------------------------
  //  ReceiveRREQ.receive: If the destination of the RREQ is me, the node will
  //  send the RREP back to establish the reverse route. Or, the node forwards
  //  the RREQ to the nextt-hop node.
  //--------------------------------------------------------------------------
  event message_t* ReceiveRREQ.receive( message_t* p_msg, 
                                                 void* payload, uint8_t len ) {
    bool cached = FALSE;
    bool added  = FALSE;
    
    am_addr_t me  = call AMPacket.address();
    am_addr_t src = call AMPacket.source( p_msg );
    aodv_rreq_hdr* aodv_hdr      = (aodv_rreq_hdr*)(p_msg->data);
    aodv_rreq_hdr* rreq_aodv_hdr = (aodv_rreq_hdr*)(p_rreq_msg_->data);
    aodv_rrep_hdr* rrep_aodv_hdr = (aodv_rrep_hdr*)(p_rrep_msg_->data);
    
    // dbg("AODV", "%s\t AODV: ReceiveRREQ.receive() src:%d dest: %d me:%d \n",
    //                  sim_time_string(), aodv_hdr->src, aodv_hdr->dest, me);
    
    if( aodv_hdr->hop > AODV_MAX_HOP ) {
      return p_msg;
    }
    
    /* if the received RREQ is already received one, it will be ignored */
    if( !is_rreq_cached( aodv_hdr ) ) {
      // dbg("AODV_DBG", "%s\t AODV: ReceiveRREQ.receive() already received one\n", 
                                                             // sim_time_string());
      return p_msg;
    }
    
    /* add the route information into the route table */
    add_route_table( aodv_hdr->seq, src, src, 1 );
    added = add_route_table( aodv_hdr->seq, aodv_hdr->src, src, aodv_hdr->hop );
    
    cached = add_rreq_cache( aodv_hdr->seq, aodv_hdr->dest, aodv_hdr->src, aodv_hdr->hop );
    
    
    /* if the destination of the RREQ is me, the node will send the RREP */
    if( aodv_hdr->dest == me) {
      rrep_aodv_hdr->seq  = aodv_hdr->seq;
      rrep_aodv_hdr->dest = aodv_hdr->dest;
      rrep_aodv_hdr->src  = aodv_hdr->src;
      rrep_aodv_hdr->hop  = 1;
      // dbg("AODV","Sending RREP...\n");
      sendRREP( src, FALSE );
      return p_msg;
    }
    
    // not for me
    if( !rreq_pending_ && aodv_hdr->src != me && cached ) {
      // forward RREQ
      // dbg("AODV","Not Sending RREP...\n");
      rreq_aodv_hdr->seq  = aodv_hdr->seq;
      rreq_aodv_hdr->dest = aodv_hdr->dest;
      rreq_aodv_hdr->src  = aodv_hdr->src;
      rreq_aodv_hdr->hop  = aodv_hdr->hop + 1;
      call RREQTimer.stop();
      call RREQTimer.startOneShot( (call Random.rand16() % 7) * 10 );
    }
    
    return p_msg;
  }
  
  
  //--------------------------------------------------------------------------
  //  ReceiveRREP.receive: If the source address of the RREP is me, it means
  //  the route to the destination is established. Or, the node forwards
  //  the RREP to the next-hop node.
  //--------------------------------------------------------------------------
  event message_t* ReceiveRREP.receive( message_t* p_msg, 
                                                 void* payload, uint8_t len ) {
    aodv_rrep_hdr* aodv_hdr = (aodv_rrep_hdr*)(p_msg->data);
    aodv_rrep_hdr* rrep_aodv_hdr = (aodv_rrep_hdr*)(p_rrep_msg_->data);
    am_addr_t src = call AMPacket.source(p_msg);
    
    // dbg("AODV", "%s\t AODV: ReceiveRREP.receive() src: %d dest: %d \n", 
                             // sim_time_string(), aodv_hdr->src, aodv_hdr->dest);
    if( aodv_hdr->src == call AMPacket.address() ) {
      add_route_table( aodv_hdr->seq, aodv_hdr->dest, src, aodv_hdr->hop );
    } else { // not to me
      am_addr_t dest = get_next_hop( aodv_hdr->src );
      if( dest != INVALID_NODE_ID ) {
        // forward RREP
        rrep_aodv_hdr->seq  = aodv_hdr->seq;
        rrep_aodv_hdr->dest = aodv_hdr->dest;
        rrep_aodv_hdr->src  = aodv_hdr->src;
        rrep_aodv_hdr->hop  = aodv_hdr->hop++;
        
        add_route_table( aodv_hdr->seq, aodv_hdr->dest, src, aodv_hdr->hop );
        sendRREP( dest, TRUE );
      }
    }
    return p_msg;
  }
  
  
  event message_t* ReceiveRERR.receive( message_t* p_msg, 
                                                 void* payload, uint8_t len ) {
    aodv_rerr_hdr* aodv_hdr = (aodv_rerr_hdr*)(p_msg->data);
    // dbg("AODV", "%s\t AODV: ReceiveRERR.receive()\n", sim_time_string());
    del_route_table( aodv_hdr->dest );
    if( aodv_hdr->src != call AMPacket.address())
      sendRERR( aodv_hdr->dest, aodv_hdr->src, TRUE );
    
    return p_msg;
  }
  
  
  command error_t AMSend.cancel[am_id_t id](message_t* msg) {
    return call SubSend.cancel(msg);
  }
  
  
  command uint8_t AMSend.maxPayloadLength[am_id_t id]() {
    return call Packet.maxPayloadLength();
  }
  
  
  command void* AMSend.getPayload[am_id_t id](message_t* m, uint8_t len) {
    return call Packet.getPayload(m, 0);
  }
  
  /*
  command void * Receive.getPayload[uint8_t am](message_t *msg, uint8_t *len){
    return call Packet.getPayload(msg, len);
  }
  
  
  command uint8_t Receive.payloadLength[uint8_t am](message_t *msg){
    return call Packet.payloadLength(msg);
  }
  */
  
  /***************** SubSend Events ****************/
  event void SubSend.sendDone(message_t* p_msg, error_t e) {
    aodv_msg_hdr* aodv_hdr = (aodv_msg_hdr*)(p_msg->data);
    bool wasAcked = call PacketAcknowledgements.wasAcked(p_msg);
    am_addr_t dest = call AMPacket.destination(p_aodv_msg_);
    
    // dbg("AODV_DBG", "%s\t AODV: SubSend.sendDone() dest:%d src:%d wasAcked:%d\n",
    //                sim_time_string(), aodv_hdr->dest, aodv_hdr->src, wasAcked);
    
    send_pending_ = FALSE;
    
    if ( msg_pending_ == TRUE && p_msg == p_aodv_msg_ ) {
      if ( wasAcked ) {
        msg_retries_ = 0;
        msg_pending_ = FALSE;
      } else {
        msg_retries_--;
        if( msg_retries_ > 0 ) {
          dbg("AODV", "%s\t AODV: SubSend.sendDone() msg was not acked, resend\n",
                                                             sim_time_string());
          call PacketAcknowledgements.requestAck( p_aodv_msg_ );
          call SubSend.send( dest, p_aodv_msg_, 
                                     call Packet.payloadLength(p_aodv_msg_) );
        } else {
          dbg("AODV", "%s\t AODV: SubSend.sendDone() route may be corrupted\n", 
                                                             sim_time_string());
          msg_pending_ = FALSE;
          del_route_table( dest );
          sendRERR( aodv_hdr->dest, aodv_hdr->src, FALSE );
        }
      }
    } else {
      signal AMSend.sendDone[aodv_hdr->app](p_msg, e);
    }
  }
  
  
  /***************** SubReceive Events ****************/
  event message_t* SubReceive.receive( message_t* p_msg, 
                                                 void* payload, uint8_t len ) {
    uint8_t i;
    aodv_msg_hdr* aodv_hdr = (aodv_msg_hdr*)(p_msg->data);
    
    // dbg("msgCount", "%s\t AODV: SubReceive.receive() dest: %d src:%d\n",
    //                 sim_time_string(), aodv_hdr->dest, aodv_hdr->src);
    
    if( aodv_hdr->dest == call AMPacket.address() ) {
      dbg("msgCount", "%s\t AODV: SubReceive.receive() deliver to upper layer\n", 
                                                             sim_time_string());
      for( i=0;i<len;i++ ) {
        p_app_msg_->data[i] = aodv_hdr->data[i];
      }
      p_msg = signal Receive.receive[aodv_hdr->app]( p_app_msg_, p_app_msg_->data, 
                                                     len - AODV_MSG_HEADER_LEN );
    } else {
      am_addr_t nexthop = get_next_hop( aodv_hdr->dest );
      dbg("msgCount", "%s\t AODV: SubReceive.receive() deliver to next hop:%x\n",
                                                  sim_time_string(), nexthop);
      /* If there is a next-hop for the destination of the message, 
         the message will be forwarded to the next-hop.            */
      if (nexthop != INVALID_NODE_ID) {
        forwardMSG( p_msg, nexthop, len );
      }
    }
    return p_msg;
  }
  
  
  event void AODVTimer.fired() {
      // dbg("AODV_DBG2", "%s\t AODV: Timer.fired()\n", sim_time_string());
    if( rreq_pending_ ){
      post resendRREQ();
    }
    
    if( rrep_pending_ ) {
      post resendRREP();
    }
    
    if( rreq_pending_ ) {
      post resendRERR();
    }
    
    post update_rreq_cache();
  }
  
  
  event void RREQTimer.fired() {
    // dbg("AODV_DBG", "%s\t AODV: RREQTimer.fired()\n", sim_time_string());
    sendRREQ( 0 , TRUE );
  }
  
  /***************** Defaults ****************/
  default event void AMSend.sendDone[uint8_t id](message_t* msg, error_t err) {
    return;
  }
  
  default event message_t* Receive.receive[am_id_t id](message_t* msg, void* payload, uint8_t len) {
    return msg;
  }
  
  
#if AODV_DEBUG  
  void print_route_table(){
    uint8_t i;
    for( i=0; i < AODV_ROUTE_TABLE_SIZE ; i++ ) {
      if(route_table_[i].dest == INVALID_NODE_ID)
        break;
      // dbg("AODV", "%s\t AODV: ROUTE_TABLE i: %d: dest: %d next: %d seq:%d hop: %d \n", 
      //      sim_time_string(), i, route_table_[i].dest, route_table_[i].next, 
      //            route_table_[i].seq, route_table_[i].hop );
    }
  }
  
  
  void print_rreq_cache() {
    uint8_t i;
    for( i=0 ; i < AODV_RREQ_CACHE_SIZE ; i++ ) {
      if(rreq_cache_[i].dest == INVALID_NODE_ID )
        break;
      // dbg("AODV_DBG2", "%s\t AODV: RREQ_CACHE i: %d: dest: %d src: %d seq:%d hop: %d \n", 
           // sim_time_string(), i, rreq_cache_[i].dest, rreq_cache_[i].src, rreq_cache_[i].seq, rreq_cache_[i].hop );
    }
  }
#endif

}

