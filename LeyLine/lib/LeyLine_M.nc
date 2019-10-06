#define AODV_DEBUG  1
#include <Timer.h>
#include "LeyLine.h"
#include "printf.h"	

// AssignAddressMsg stuck at intersectionNode

module LeyLine_M {

	provides{
		interface SplitControl;
    	interface AMSend[am_id_t id];
    	interface Receive[am_id_t id];
	}
	
	uses {
		interface Boot;
		interface Leds;
  		interface Timer<TMilli> as HelloMsgTimer;
  		interface Timer<TMilli> as LeyLineBuildTimer;
  	 	interface Timer<TMilli> as BackPropTimer;
  	 	interface Timer<TMilli> as LeyLineAckTimer;
  	 	interface Timer<TMilli> as AppTimer;
  	 	// interface Timer<TMilli> as finishTimer;
	 	interface Packet;
	 	interface AMPacket;
	 	interface AMSend as HelloSend;
	 	interface AMSend as JoinReqSend;
	 	interface AMSend as RTBroadcastSend;
	 	interface AMSend as IncorpReqSend;
	 	interface AMSend as LeyLineBuildSend;
	 	interface AMSend as LeyLineAckSend;
	 	interface AMSend as BackPropagationSend;
	 	interface AMSend as ChangeSuccessorSend;
	 	interface AMSend as IncorpNodeSend;
	 	interface AMSend as IncorpAckSend;
	 	interface AMSend as AuthSINSend;
	 	interface AMSend as SINSend;
	 	interface AMSend as IntLineBuiltMsgSend;
	 	interface AMSend as AssignAddressMsgSend;
	 	interface AMSend as IntAssignAddressCompleteSend;
	 	interface AMSend as SubSend;
	 	interface AMSend as AddrBroadcastSend;
	 	interface Receive as HelloReceive;
	 	interface Receive as JoinReqReceive;
	 	interface Receive as RTBroadcastReceive;
	 	interface Receive as IncorpReqReceive;
	 	interface Receive as LeyLineBuildReceive;
	 	interface Receive as LeyLineAckReceive;
	 	interface Receive as BackPropagationReceive;
	 	interface Receive as ChangeSuccessorReceive;
	 	interface Receive as IncorpNodeReceive;
	 	interface Receive as IncorpAckReceive;
	 	interface Receive as AuthSINReceive;
	 	interface Receive as SINReceive;
	 	interface Receive as IntLineBuiltMsgReceive;
	 	interface Receive as AssignAddressMsgReceive;
	 	interface Receive as IntAssignAddressCompleteReceive;
		interface Receive as SubReceive;
		interface Receive as AddrBroadcastReceive;
	// uses interface SerialPacket;
	// uses interface SerialReceive;
		interface SplitControl as AMControl;	

	}
		
}

implementation {
	int counter = 0;
	int nodeCount = 1;
	bool busy = FALSE;
	bool starterNode = FALSE;
	bool amIntersection = FALSE;
	bool addressBroadcasted = FALSE;
	int myAddress = 0;
	int skipBy = 0;
	int addressSpace = 100;
	int tempAddr = 0;
	
	message_t hello;
	message_t joinreq;
	message_t rtbroadcast;
	message_t incorpreq;
	message_t startLine;
	message_t leylineAck;
	message_t backPropMsg;
	message_t changeSucc;
	message_t incorpNode;
	message_t incorpACK;
	message_t authSIN;
	message_t SIN;
	message_t intLineBuiltMsg;
	message_t assignAddrMsg;
	message_t assignAddrComp;
	message_t leyline_msg_;
	message_t app_msg_;
	message_t p_leyline_msg_;
	message_t addrBroadcastMsg;
	message_t* p_app_msg_;
	
	BackPropagationMsg pkt;
	LeyLineShortcutTable shortcutTable[MAX_NEIGHBOR_ENTRIES];

	am_addr_t dest;
	am_addr_t SINnext = 0;
	am_addr_t latestRTFrom = 0;
	bool onCore = FALSE;
	bool onIntersection = FALSE;
	bool amCoreLeaf = FALSE;
	bool leftDone = FALSE;
	bool rightDone = FALSE;
	bool waitingJoinReq = FALSE;
	bool SINMode = FALSE;
	bool waitingforAck = FALSE;
	bool amSrc = FALSE;
	// bool waitingforAckL = FALSE;
	uint16_t myNode;
	int neighborCount;

	LeyLineRoutingTable routingTable;

	void sendHelloMsg();
	void sendLeyLineBuild();
	void sendIncorpAckMsg(am_addr_t destination);
	uint16_t getNeighbor(uint16_t prevNeighbor);
	void markShortcut(uint16_t mac,uint16_t addr);
	void sendIncorpReq(am_addr_t destination, am_addr_t predecessor, am_addr_t successor);
	void sendLeyLineBuildMsg(am_addr_t destination);
	void sendBackPropogation(am_addr_t predecessor);
	void sendRTBroadcast();
	void incorporateNode(uint16_t node);
	void sendChangeSuccessor(uint16_t node);
	uint16_t findNodeToIncorporate();
	void sendAuthSINMsg();
	void sendSINPacket(uint16_t node);
	void sendIntLineBuiltMsg();
	void sendAssignAddressMsg(am_addr_t node);
	void sendIntAssignAddressComplete(uint16_t addr,uint16_t src);
	am_addr_t get_next_hop( am_addr_t destination );
	void printRouteTable();
	void sendAddrBroadcast();

command error_t SplitControl.start() {

	uint16_t i;
	if (TOS_NODE_ID == 1) {
		starterNode = TRUE;
		onCore = TRUE;
		// printfflush();
		// dbg("Leyline","I am the starter node....\n");
	} 	
	for(i = 0; i<MAX_NEIGHBOR_ENTRIES;i++){
		shortcutTable[i].mac = 0;
		shortcutTable[i].addr = 0;
	}
	// dbg("Leyline","I am the here 1....\n");
	p_app_msg_      = &app_msg_;
	// dbg("Leyline","I am the here 2....\n");
		
	call AMControl.start();
	// dbg("Leyline","I am the here 3....\n");

	return SUCCESS;
}

command error_t SplitControl.stop() {

    call AMControl.stop();
    return SUCCESS;

}

am_addr_t get_next_hop( uint16_t destination ) {
	
	uint16_t i;
	uint16_t pred = routingTable.predecessorAddr;
	uint16_t succ = routingTable.successorAddr;
	int dist = destination - myAddress;	
	dbg("APPS","Predecessor Addr:%u....\n",pred);
	dbg("APPS","Successor Addr:%u....\n",succ);
	
	for(i = 0; i < MAX_NEIGHBOR_ENTRIES; i++){
		if(shortcutTable[i].addr == destination){
			return shortcutTable[i].mac;
		}
	}


	// if(amSrc){
		

		if(!amIntersection) {
			// if(onIntersection){

			// 	if (pred < succ) {
			// 		dbg("APPS","Destination is 1:%u....\n",routingTable.predecessor);					
			// 		return routingTable.predecessor;
			// 	}else{
			// 		dbg("APPS","Destination is 2:%u....\n",routingTable.successor);					
			// 		return routingTable.successor;
			// 	}
			// }else if(onCore) {
				if(amCoreLeaf){
					if (routingTable.successor == 0){
						return routingTable.predecessor;
					}else{
						return routingTable.successor;
					}
				}
				if (dist < 0) {
					if (pred < succ) {
						dbg("APPS","Destination is 3:%u....\n",routingTable.predecessor);
						return routingTable.predecessor;
					}else{
						dbg("APPS","Destination is 4:%u....\n",routingTable.successor);
						return routingTable.successor;
					}
				}else{
					if (pred > succ) {
						dbg("APPS","Destination is 5:%u....\n",routingTable.predecessor);

						return routingTable.predecessor;
					}else{
						dbg("APPS","Destination is 6:%u....\n",routingTable.successor);
						return routingTable.successor;
					}
				}
			// }
		}else{
			if(destination >= routingTable.successorAddr){
				dbg("APPS","Destination is 7:%u....\n",routingTable.successor);
				return routingTable.successor;
			}else if(destination <= routingTable.predecessorAddr){
				dbg("APPS","Destination is 8:%u....\n",routingTable.predecessor);
				return routingTable.predecessor;
			}else if(destination < myAddress && destination >= routingTable.intersectionSuccAddr && (destination < routingTable.intersectionPredAddr || routingTable.intersectionPredAddr == 0)){
				dbg("APPS","Destination is 9:%u....\n",routingTable.intersectionSucc);
				return routingTable.intersectionSucc;
			}else{
				dbg("APPS","Destination is 10:%u....\n",routingTable.intersectionPred);				
				return routingTable.intersectionPred;
			}
		}
	// }else{

	// }

	// neighbor1 = routingTable.predecessor;
	// neighbor2 = routingTable.successor;
	// if(onCore){

	// }

}

command error_t AMSend.send[am_id_t id](am_addr_t addr, message_t* msg, uint8_t len) {
 
	uint8_t i;

	// leyline_msg_hdr* leyline_hdr = (leyline_msg_hdr*)(p_leyline_msg_->data);
	
	leyline_msg_hdr* leyline_hdr = (leyline_msg_hdr*)(call Packet.getPayload(&p_leyline_msg_, sizeof (leyline_msg_hdr)));
	am_addr_t nexthop = 0;
	amSrc = TRUE;

	printRouteTable();

	if( addr == myAddress ) {
      	return SUCCESS;
    }else{
		nexthop = get_next_hop( addr );
    }	


	// return SUCCESS;

	leyline_hdr->dest = addr;
    leyline_hdr->src  = myAddress;
    // leyline_hdr->app  = id;

	dbg("APPS","Next Hop:%u...\n",nexthop);


	// for( i=0;i<len;i++ ) {
 //      leyline_hdr->data[i] = msg->data[i];
 //    }
   
    // uint8_t i;
    // leyline_msg_hdr* aodv_hdr = (leyline*)(p_aodv_msg_->data);
    // am_addr_t nexthop = get_next_hop( addr );
    // am_addr_t me = call AMPacket.address();
    
    dbg("APPS", "%s\t AODV: AMSend.send() dest: %d id: %d len: %d nexthop: %d\n", 
                sim_time_string(), addr, id, len, nexthop);
    
	if( call SubSend.send( nexthop, &p_leyline_msg_, sizeof(leyline_msg_hdr) ) == SUCCESS ) {
        // send_pending_ = TRUE;
        dbg("APPS","Here2...\n");
        amSrc = FALSE;
        return SUCCESS;
    
    }
    

    // /* If the next-hop node for the destination does not exist, the RREQ will be
    //    broadcasted */
    // if( nexthop == INVALID_NODE_ID ) {
    //   if( !rreq_pending_ ) {
    //     // dbg("AODV", "%s\t AODV: AMSend.send() a new destination\n", 
    //                                                          // sim_time_string());
    //     sendRREQ( addr, FALSE );
    //     return SUCCESS;
    //   }
    //   return FAIL;
    // }
    // // dbg("AODV", "%s\t AODV: AMSend.send() there is a route to %d\n", 
    //                                                     // sim_time_string(), addr);
    
    

    
    // call PacketAcknowledgements.requestAck(p_aodv_msg_);
    
    // if( !send_pending_ ) {
    //   msg_pending_ = TRUE;
    // }
    // return FAIL;
 }

default event void AMSend.sendDone[uint8_t id](message_t* msg, error_t err) {
	return;
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

default event message_t* Receive.receive[am_id_t id](message_t* msg, void* payload, uint8_t len) {
    return msg;
}

event void SubSend.sendDone(message_t* msg, error_t error) {
	// leyline_msg_hdr* leyline_hdr = (leyline_msg_hdr*)(msg->data);
	signal AMSend.sendDone[1](msg, error);
}


event message_t* SubReceive.receive( message_t* p_msg, 
                                             void* payload, uint8_t len ) {
	uint8_t i;
	leyline_msg_hdr* leyline_hdr = (leyline_msg_hdr*)(payload);

	leyline_msg_hdr* leyline_hdr2 = (leyline_msg_hdr*)(call Packet.getPayload(&p_leyline_msg_, sizeof (leyline_msg_hdr)));

	leyline_hdr2->src = leyline_hdr->src;
	leyline_hdr2->dest = leyline_hdr->dest;

	// dbg("APPS", "%s\t AODV: SubReceive.receive() dest: %d src:%d\n",
	                // sim_time_string(), leyline_hdr->dest, leyline_hdr->src);

	printRouteTable();
	if( leyline_hdr->dest == myAddress ) {
	  dbg("msgCount", "%s\t LeyLine: SubReceive.receive() deliver to upper layer:%u\n", 
	                                                         sim_time_string(),myAddress);
	 // for(i=0;i<len;i++ ) {
	 //    p_app_msg_->data[i] = leyline_hdr->data[i];
	 //  }

	  p_msg = signal Receive.receive[1]( p_msg, payload, 
	                                                 len );
	} else {
	  am_addr_t nexthop = get_next_hop( leyline_hdr->dest );
	  dbg("msgCount", "%s\t LeyLine: SubReceive.receive() deliver to next hop:%x\n",
	                                              sim_time_string(), nexthop);
	  /* If there is a next-hop for the destination of the message, 
	     the message will be forwarded to the next-hop.            */
	  // if (nexthop != INVALID_NODE_ID) {
	  //   forwardMSG( p_msg, nexthop, len );
	  // }
	  	if( call SubSend.send( nexthop, &p_leyline_msg_, sizeof(leyline_msg_hdr) ) == SUCCESS ) {
			dbg("APPS", "%s\t Delivered to next hop:%x\n",
	                                              sim_time_string(), nexthop);
	        
	        // send_pending_ = TRUE;
	        // amSrc = FALSE;
	        // return SUCCESS;
	        // return p_msg;
	    
	    }	 

	}
	return p_msg;
}

event void Boot.booted() {
	// if (TOS_NODE_ID == 1) {
	// 	starterNode = TRUE;
	// 	onCore = TRUE;
	// 	// dbg("Leyline","I am the starter node....\n");
	// 	// printfflush();
	// } 
	// p_leyline_msg_     = &leyline_msg_;
	// call AMControl.start();
}

event void AMControl.startDone(error_t err) {

	if (err == SUCCESS) {	  
	  // call HelloMsgTimer.startOneShot(TIMER_PERIOD_MILLI);	  
		// dbg("Leyline","In AMControl....\n");	  	
	  	call LeyLineBuildTimer.startOneShot(TIMER_PERIOD_MILLI);

	}else {
      call AMControl.start();
    }
}

event void LeyLineBuildTimer.fired() {

  if (starterNode) {
  	sendHelloMsg();
  }
}

void sendHelloMsg(){
 	
	LeyLineHelloMsg* btrpkt = (LeyLineHelloMsg*)(call Packet.getPayload(&hello, sizeof (LeyLineHelloMsg)));
    btrpkt->nodeid = TOS_NODE_ID;
    
	// printfflush();
    if (call HelloSend.send(AM_BROADCAST_ADDR, &hello, sizeof(LeyLineHelloMsg)) == SUCCESS) {
      waitingJoinReq = TRUE;
      dbg("Leyline","Broadcasting Hello Msg...\n");
    }
}

event void HelloSend.sendDone(message_t* msg, error_t error) {

	call HelloMsgTimer.startOneShot(TIMER_PERIOD_MILLI);

	// printf("Broadcast Hello Msg\n");
	// printfflush();
	// busy = FALSE;
	// if (&hello == msg) {
	//   busy = FALSE;
	//   if (starterNode) {
	//   	call LeyLineBuildTimer.startOneShot(TIMER_PERIOD_MILLI);
	//   }
	// }

}

event message_t* HelloReceive.receive(message_t* msg, void* payload, uint8_t len) {
	// on receiving the msg send request to join LeyLine.	
	LeyLineJoinReqMsg* pktToSend = (LeyLineJoinReqMsg*)(call Packet.getPayload(&joinreq, sizeof (LeyLineJoinReqMsg)));
	uint8_t accept = TOS_NODE_ID;
	if (onCore || onIntersection) {		   
		accept = 0;
	}
	if (accept) {
		LeyLineHelloMsg* pktRecv = (LeyLineHelloMsg*)payload;
		dest = pktRecv->nodeid;	

	    // LeyLineJoinReqMsg* btrpkt = (LeyLineJoinReqMsg*)(call Packet.getPayload(&joinreq, sizeof (LeyLineJoinReqMsg)));
	    pktToSend->nodeid = TOS_NODE_ID;
		  			    
		// printfflush();
	    if (call JoinReqSend.send(dest, &joinreq, sizeof(LeyLineJoinReqMsg)) == SUCCESS) {
	      // busy = TRUE;
	    	dbg("Leyline", "Join Req Sent to %u...\n",dest);
	    }
	}	
	return msg;
}

event void JoinReqSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Sending Join Req Msg\n");
	// busy = FALSE;
}

event void HelloMsgTimer.fired() {
  if (waitingJoinReq) {  	
  	
  	waitingJoinReq = FALSE;
  	
  	if (SINMode){
		if (!amIntersection)
			sendSINPacket(myNode);
		else{
			sendSINPacket(routingTable.intersectionPred);
		}		
  	}else {
	  	amCoreLeaf = TRUE;
	  	if (leftDone && starterNode){
	  		rightDone = TRUE;  		
	  		sendAuthSINMsg();
	  	}else{
	  		// sendBackPropogation(routingTable.predecessor);
	  		sendRTBroadcast();
	  		call BackPropTimer.startOneShot(TIMER_PERIOD_MILLI);
	  	} 	  
  	}
  }
}

event void BackPropTimer.fired() {
	// if(waitingforAckL){
	// 	sendIncorpAckMsg(dest);
	// 	call BackPropTimer.startOneShot(TIMER_PERIOD_MILLI);
	// }else{
	if (leftDone){
		// //dbg("Leyline","Here...\n");
		// printfflush();
		sendBackPropogation(routingTable.successor);
	}else{
		sendBackPropogation(routingTable.predecessor);
	}
	// }
	
}



event message_t* JoinReqReceive.receive(message_t* msg, void* payload, uint8_t len) {



	LeyLineJoinReqMsg* pktRecv = (LeyLineJoinReqMsg*)payload;

	// printfflush();
	//dbg("Leyline","Received LeyLine Join Msg from %u...\n:",pktRecv->nodeid);
	if (waitingJoinReq){
		   

		waitingJoinReq = FALSE;
		dest = pktRecv->nodeid;

		if (SINMode){
			amIntersection = TRUE;
			starterNode = FALSE;
			SINMode = FALSE;
		}
		if (amIntersection) {
			if (!starterNode){
				starterNode = TRUE;
				routingTable.intersectionSucc = pktRecv->nodeid;
				leftDone = FALSE;
				rightDone = FALSE;
			}else {
				routingTable.intersectionPred = pktRecv->nodeid;
			}
		// }else if(starterNode){
		// 	if (leftDone){
		// 		routingTable.successor = pktRecv->nodeid;
		// 	}else {
		// 		routingTable.predecessor = pktRecv->nodeid;
		// 	}
		}else {
			if(leftDone){
				routingTable.predecessor = pktRecv->nodeid;
			}else{
				routingTable.successor = pktRecv->nodeid;
			}			
		}
		dest = pktRecv->nodeid;
		sendLeyLineBuildMsg(pktRecv->nodeid);
		waitingforAck = TRUE;
	}
	return msg;
}

// event void HelloSend.sendDone(message_t* msg, error_t error) {
// 	if (&hello == msg) {
// 	  busy = FALSE;
// 	  if (starterNode) {
// 	  	call LeyLineBuildTimer.startOneShot(TIMER_PERIOD_MILLI);
// 	  }
// 	}
// }

// event message_t* HelloReceive.receive(message_t* msg, void* payload, uint8_t len) {
	
// 	if (len == sizeof(LeyLineHelloMsg)) {
// 		LeyLineHelloMsg* btrpkt = (LeyLineHelloMsg*)payload;
// 		neighbor_table_[counter].nodeid = btrpkt->nodeid;
// 		neighbor_table_[counter].onLeyLine = 0;
		// //dbg("Leyline","My neighbor: %u\n", neighbor_table_[counter].nodeid);
// 		printfflush();
// 		call Leds.set(counter);  
// 		counter++;
// 	}	
// 	// dbg("Leyline","Hello, world\n");	    
// 	// printfflush();
// 	return msg;
// }

// event void LeyLineBuildTimer.fired() {

//   if (starterNode && !busy) {
//     LeyLineBuildMsg* btrpkt = (LeyLineBuildMsg*)(call Packet.getPayload(&startLine, sizeof (LeyLineBuildMsg)));
//     if (btrpkt == NULL) {
// 		return;
//      }
//     btrpkt->predecessor = TOS_NODE_ID;
//     btrpkt->onCore = 1;
//     btrpkt->nodeCount = 1;
//     dest = neighbor_table_[0].nodeid; // this needs to be randomized
//     // routingTable.predecessor = dest;
//     dbg("Leyline","Sending first LeyLine Msg %u...\n", neighbor_table_[0].nodeid);	    
// 	printfflush();

//     if (call LeyLineBuildSend.send(dest, &startLine, sizeof(LeyLineBuildMsg)) == SUCCESS) {
//       busy = TRUE;
//       dbg("Leyline","First LeyLine Msg sent ... \n");
//       printfflush();
//     }
//   }
// }

event void LeyLineAckTimer.fired() {
	if (waitingforAck){
		sendLeyLineBuildMsg(dest);
	}else{
		call LeyLineAckTimer.stop();
	}	
	
}

void sendLeyLineAck(am_addr_t destination){

	LeyLineBuildAck* ackpkt = (LeyLineBuildAck*)(call Packet.getPayload(&leylineAck, sizeof (LeyLineBuildAck)));
	//dbg("Leyline","SENDING ACK MSG.....\n");
	ackpkt->participating = 1;
	if (call LeyLineAckSend.send(destination, &leylineAck, sizeof(LeyLineBuildAck)) == SUCCESS) {
  		// busy = TRUE;
  		dbg("Leyline","ACK sent ..... \n");
  		// printfflush();
	}


}

event message_t* LeyLineBuildReceive.receive(message_t* msg, void* payload, uint8_t len) {	

	// uint8_t accept = TOS_NODE_ID;
	LeyLineBuildMsg* btrpkt = (LeyLineBuildMsg*)payload;	

	if (!(onCore || onIntersection)){
		// dest = btrpkt->predecessor;	
		// dbg("Leyline","LeyLine MSG received.....\n");
		// printfflush();
		nodeCount = btrpkt->nodeCount + 1;
		if (btrpkt->predecessor!=0){
			routingTable.predecessor = btrpkt->predecessor;
			sendLeyLineAck(routingTable.predecessor);
		}else{
			leftDone = TRUE;
			routingTable.successor = btrpkt->successor;
			sendLeyLineAck(routingTable.successor);
		}
		if (btrpkt->onCore == 1){
			onCore = TRUE;
		}else {
			onIntersection = TRUE;
		}
		// dbg("Leyline","Number of Nodes: %u .\n", nodeCount);	
		// printfflush();
		sendHelloMsg();
	}else{
		if (btrpkt->predecessor!=0){
			
			sendLeyLineAck(routingTable.predecessor);
		}else{
			sendLeyLineAck(routingTable.successor);
		}
	}
	
	// int accept;	// send an acknowledgement back to sender if already on line.
	// if (onCore || onIntersection) {		   
	// 	accept = 0;
	// }else {
		

	// }
	

	// if (TRUE) {
	// 	LeyLineBuildAck* ackpkt = (LeyLineBuildAck*)(call Packet.getPayload(&leylineAck, sizeof (LeyLineBuildAck)));
	// 	dbg("Leyline","SENDING ACK MSG.....\n");
	// 	printfflush();
	// 	ackpkt->participating = accept;
	
	// }	
		
	// choose a neighbor from 

	// dbg("Leyline","Hello, world\n");	    
	// printfflush();
	return msg;
}


void markShortcut(uint16_t mac,uint16_t address){
	int i;
	shortcutTable[neighborCount].mac = mac;
	shortcutTable[neighborCount].addr = address; 
}

uint16_t getNeighbor(uint16_t mac) {
	
	int i = 0;
	uint16_t thisNeighbor= 0;
	if(mac == routingTable.predecessor || mac == routingTable.successor || mac == routingTable.intersectionPred || mac == routingTable.intersectionSucc){
		thisNeighbor = mac;
		return thisNeighbor;
	}

	for(i = 0; i< counter; i++) {
    	if(shortcutTable[i].mac==mac){
			thisNeighbor=shortcutTable[i].mac;
			break; 			  				  		
    	}
    }
    return thisNeighbor;
}

void sendLeyLineBuildMsg(am_addr_t destination) {

	// if (!busy) {
    	LeyLineBuildMsg* btrpkt = (LeyLineBuildMsg*)(call Packet.getPayload(&startLine, sizeof (LeyLineBuildMsg)));
    	//dbg("Leyline","Sending LeyLineBuildMsg to next neighbour.....\n");
		// printfflush();
   //  	if (btrpkt == NULL) {
			// return;
   //  	}
	    if (leftDone){
	    	btrpkt->predecessor = 0;
	    	btrpkt->successor = TOS_NODE_ID;
	    }else{
			btrpkt->predecessor = TOS_NODE_ID;
	    	btrpkt->successor = 0;
	    }
	    
	    if ( (onIntersection || amIntersection)) {
	    	btrpkt->onCore = 0;
	    }else{
	    	btrpkt->onCore = 1;
	    }

	    btrpkt->nodeCount = nodeCount;
	    // this needs to be randomized
	    // dbg("Leyline","Sending LeyLine Build Msg %u...\n", dest);	    
		// printfflush();
	    if (call LeyLineBuildSend.send(destination, &startLine, sizeof(LeyLineBuildMsg)) == SUCCESS) {
	      // busy = TRUE;
	      dbg("Leyline","LeyLine Build Msg sent to %u..... \n", destination);
	      // printfflush();
	    }
  		
}

void sendRTBroadcast(){

	RTBroadcast* pktToSend = (RTBroadcast*)(call Packet.getPayload(&rtbroadcast, sizeof (RTBroadcast)));
    pktToSend->nodeid = TOS_NODE_ID;
    pktToSend->predecessor = routingTable.predecessor;
    pktToSend->successor = routingTable.successor;
 //    dbg("Leyline","RT Broadcast Sent\n");
	// printfflush();
    if (call RTBroadcastSend.send(AM_BROADCAST_ADDR, &rtbroadcast, sizeof(RTBroadcast)) == SUCCESS) {
		 dbg("Leyline","Sent RTBroadcast...\n");     
    }

}

event message_t* RTBroadcastReceive.receive(message_t* msg, void* payload, uint8_t len) {
	
	RTBroadcast* pktRecv = (RTBroadcast*)payload;
	if (!(onCore || onIntersection)) {

		if (latestRTFrom){
			if (pktRecv->successor == latestRTFrom){
				// dbg("Leyline","RT Broadcast Received...\n");
				// printfflush();
				latestRTFrom = pktRecv->nodeid;
				sendIncorpReq(pktRecv->nodeid, pktRecv->nodeid, latestRTFrom);
				// sendIncorpReq(latestRTFrom, pktRecv->nodeid, latestRTFrom);
				// send a message requesting node incorporation
			}
		}
	}
	
	// if (TOS_NODE_ID == 4){
	// 	dbg("Leyline","RT Broadcast Received...\n");
	// 	printfflush();
	// }
	return msg;

}



void sendIncorpReq(am_addr_t destination, am_addr_t predecessor, am_addr_t successor) {

	IncorpReq* pktToSend = (IncorpReq*)(call Packet.getPayload(&incorpreq, sizeof (IncorpReq)));
    pktToSend->nodeid = TOS_NODE_ID;
    pktToSend->predecessor = predecessor;
    pktToSend->successor = successor;
    if (call IncorpReqSend.send(latestRTFrom, &incorpreq, sizeof(IncorpReq)) == SUCCESS) {
    	dbg("Leyline","Incorp Req Sent...\n");		    	
    }


}

event void IncorpReqSend.sendDone(message_t* msg, error_t error) {
	


	// sendIncorpReq(msg-)	
	
}

event message_t* IncorpReqReceive.receive(message_t* msg, void* payload, uint8_t len) {
	
	IncorpReq* pktRecv = (IncorpReq*)payload;
	if( (pktRecv->predecessor == TOS_NODE_ID && pktRecv->successor == routingTable.successor) ){		
		// dbg("Leyline","Incorp Req Received...\n");
		nodeCount = nodeCount + 1;
		// printfflush();
		dest = routingTable.successor;
		routingTable.successor = pktRecv->nodeid;
		dest = pktRecv->nodeid;		
		sendIncorpAckMsg(pktRecv->nodeid);
		

	}else if (pktRecv->successor == TOS_NODE_ID && pktRecv->predecessor == routingTable.predecessor){
		// dbg("Leyline","Incorp Req Received...\n");
		// printfflush();
		dest = routingTable.predecessor;
		routingTable.predecessor = pktRecv->nodeid;
		// dest = pktRecv->nodeid;
		nodeCount = nodeCount + 1;
		sendIncorpAckMsg(pktRecv->nodeid);
	}

	// dbg("Leyline","Incorp Req Received 3...\n");
	// printfflush();
	return msg;

}

void sendIncorpAckMsg(am_addr_t destination) {

	IncorpAckMsg* btrpkt = (IncorpAckMsg*)(call Packet.getPayload(&incorpACK, sizeof (IncorpAckMsg)));
	
	btrpkt->nodeid = TOS_NODE_ID;
	if (routingTable.predecessor==destination){
		btrpkt->predecessor = dest;
		btrpkt->successor = TOS_NODE_ID;
	}else{
		btrpkt->predecessor = TOS_NODE_ID;
		btrpkt->successor = dest;
	}

	// btrpkt->successor = routingTable.successor;


	if (call IncorpAckSend.send(destination, &incorpACK, sizeof(IncorpAckMsg)) == SUCCESS) {
      		dbg("Leyline","Incorp ACK sent to %u ..... \n", destination);

      		// busy = TRUE;
      		// dest = destination;
      		onCore = TRUE;
      		// waitingforAckL = TRUE;
      		// printfflush();
    }
}

event message_t* LeyLineAckReceive.receive(message_t* msg, void* payload, uint8_t len) {	

	waitingforAck = FALSE;
	// waitingforAckL = FALSE;
	// dbg("Leyline","ACK Received\n");
	return msg;
}

void sendSINPacket(uint16_t node){
	
	SINMsg* btrpkt =(SINMsg*)(call Packet.getPayload(&SIN, sizeof (SINMsg)));
	btrpkt->intersection = 1;
	btrpkt->nodeCount = nodeCount;	
	dest = node;
	if (call SINSend.send(dest, &SIN, sizeof(SINMsg)) == SUCCESS) {
		// busy = TRUE;
		// onCore = TRUE;
		dbg("Leyline","SIN Packet sent to %u ..... \n", node);
		// printfflush();
	}
}

void sendBackPropogation(am_addr_t predecessor){
	
	// need to send out broadcast containing my predecessor, successor and my nodeID
	// int i;
	BackPropagationMsg* btrpkt = (BackPropagationMsg*)(call Packet.getPayload(&backPropMsg, sizeof (BackPropagationMsg)));
	
	// uint16_t thisNeighbor= 0;
	// uint8_t unsolictedNeighbors = 0;
	// dbg("Leyline","counter: %u", counter);
	// printfflush();
	// for(i = 0; i< counter; i++) {
 //    	thisNeighbor=neighbor_table_[i].nodeid;
 //    	dbg("Leyline","thisNeighbor: %u ..... \n", thisNeighbor);
	// 	dbg("Leyline","onLeyLine: %u", neighbor_table_[i].onLeyLine);
	// 	printfflush();
 //    	if(neighbor_table_[i].onLeyLine != 1){
	// 		btrpkt->neighbors[unsolictedNeighbors] = thisNeighbor; 			  				  		
 //    		unsolictedNeighbors++;
 //    	}else {
 //    		continue;
 //    	}    	
 //    }
 //    dbg("Leyline","Undiscovered neighbors: %u..... \n", unsolictedNeighbors);
	// printfflush();
    // btrpkt->count = unsolictedNeighbors; 
    btrpkt->nodeCount = nodeCount;
    // thisNeighbor = predecessor;
    // dbg("Leyline","Sending Back Propagation Msg To %u...\n", predecessor);
    // printfflush();
    if (call BackPropagationSend.send(predecessor, &backPropMsg, sizeof(BackPropagationMsg)) == SUCCESS) {
	      busy = TRUE;
	      dbg("Leyline","Back Propagation Msg sent ..... \n");
	      // printfflush();
	}

}

void sendAuthSINMsg() {

	AuthSINMsg* btrpkt =(AuthSINMsg*)(call Packet.getPayload(&authSIN, sizeof (AuthSINMsg)));
	btrpkt->nodeCount = nodeCount;
	if (amIntersection) {
		dest = routingTable.intersectionSucc;
	}else {
		dest = routingTable.successor;
	}
	if (call AuthSINSend.send(dest, &authSIN, sizeof(AuthSINMsg)) == SUCCESS) {
		// busy = TRUE;
		// onCore = TRUE;
		dbg("Leyline","AuthSINMsg sent to %u ..... \n", dest);
		// printfflush();
	}
	
}

// uint16_t findNodeToIncorporate(){

// 	uint16_t node = 0;
// 	int i;
// 	int j;	
// 	BackPropagationMsg* btrpkt =(BackPropagationMsg*)(call Packet.getPayload(&backPropMsg, sizeof (BackPropagationMsg)));
	
// 	dbg("Leyline","Finding Node to Incorporate.....\n");
// 	printfflush();
// 	dbg("Leyline","This count is...%u",btrpkt->count);
// 	printfflush();
// 	// printfflush();	
// 	for(i = 0; i < btrpkt->count  ; i++) {
// 		for (j = 0; j < counter; j++) {
// 			dbg("Leyline","This node is...%u",btrpkt->neighbors[i]);
// 			printfflush();
// 			if (btrpkt->neighbors[i] == neighbor_table_[j].nodeid && neighbor_table_[j].onLeyLine == 0) {
// 				dbg("Leyline","Found Node to Incorporate.....\n");
// 				printfflush();
				
// 				node = btrpkt->neighbors[i]; 
// 				break;
// 			}
// 		}
//     }
//     return node;
// }

void incorporateNode(uint16_t node) {	
	// send msg to node asking to join leyline
	if (!busy) {
		IncorporateNodeMsg* btrpkt = (IncorporateNodeMsg*)(call Packet.getPayload(&incorpNode, sizeof (IncorporateNodeMsg)));	
		btrpkt->predecessor = TOS_NODE_ID;
		btrpkt->successor = routingTable.successor;
		dest = node; 
		if (call IncorpNodeSend.send(dest, &incorpNode, sizeof(IncorporateNodeMsg)) == SUCCESS) {
	      busy = TRUE;
	      dbg("Leyline","IncorporateNodeMsg sent ..... \n");
	      // printfflush();
		}		
	}

}

void sendChangeSuccessorMsg(uint16_t node) {
	
	// if (!busy) {
		ChangeSuccessorMsg* btrpkt = (ChangeSuccessorMsg*)(call Packet.getPayload(&changeSucc, sizeof (ChangeSuccessorMsg)));	
		if (node==routingTable.predecessor){
			btrpkt->successor = node; 	
			btrpkt->predecessor = 0;
		}else{
			btrpkt->successor = 0; 	
			btrpkt->predecessor = node;
		}
		btrpkt->nodeCount = nodeCount;
		// dbg("Leyline","Node to change: %u ..... \n",btrpkt->successor);
		// dbg("Leyline","Number of Nodes: %u .\n", nodeCount);
	    // printfflush();
		if (call ChangeSuccessorSend.send(dest, &changeSucc, sizeof(ChangeSuccessorMsg)) == SUCCESS) {
	      // busy = TRUE;
	      dbg("Leyline","Change Successor Msg sent to %u ..... \n",routingTable.successor);
	      // printfflush();
		}		
	// }

}

event void RTBroadcastSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","RTBroadcast Sent");

}





event void AMControl.stopDone(error_t err) {
}




event void LeyLineBuildSend.sendDone(message_t* msg, error_t error) {
	// busy = FALSE;
	if (error == SUCCESS){
		// dbg("Leyline","LeyLine Send Done....\n");
		call LeyLineAckTimer.startPeriodic(TIMER_PERIOD_MILLI);	
	}
	
	// printfflush();
}

event void LeyLineAckSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","LeyLine Ack Sent....\n");	
}

event void BackPropagationSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","BackPropagation Sent....\n");
}

event void ChangeSuccessorSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Change Successor Sent....\n");
}

event void IncorpNodeSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Incorp Node Sent....\n");
}

event void IncorpAckSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Incorp Ack Sent....\n");
	IncorpAckMsg* btrpkt = (IncorpAckMsg*)(call Packet.getPayload(msg,sizeof (IncorpAckMsg)));
	sendChangeSuccessorMsg(btrpkt->nodeid);
}

event void AuthSINSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Auth SIN Sent....\n");
}

event void SINSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","SIN Sent....\n");	
}

event void IntLineBuiltMsgSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Intersection Line Built Sent....\n");	
}

event void AssignAddressMsgSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Assign Address Msg Sent....\n");	
	// signal SplitControl.startDone(SUCCESS);
	
}

event void IntAssignAddressCompleteSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Intersection Assign Address Complete Msg Sent....\n");	
	// signal SplitControl.startDone(SUCCESS);
}

event void AddrBroadcastSend.sendDone(message_t* msg, error_t error) {
	// dbg("Leyline","Intersection Assign Address Complete Msg Sent....\n");	
	// signal SplitControl.startDone(SUCCESS);
}

event message_t* BackPropagationReceive.receive(message_t* msg, void* payload, uint8_t len) {	


	BackPropagationMsg* btrpkt =(BackPropagationMsg*)payload;
	uint16_t node = 0;
	// dbg("Leyline","BACK PROP received....\n");
	// printfflush();
	
	nodeCount = btrpkt->nodeCount;
	// dbg("Leyline","Number of Nodes: %u .\n", nodeCount);
	// printfflush();	
	backPropMsg = *(msg);

	
	// node = findNodeToIncorporate();
    
    if (node){
        incorporateNode(node);
    }else {

    	if (!starterNode && !amIntersection) {
    	 	// sendBackPropogation(routingTable.predecessor);
    	 	// dbg("Leyline","Sending RT Broadcast....\n");
    	 	sendRTBroadcast();
    	 	call BackPropTimer.startOneShot(TIMER_PERIOD_MILLI);
    	
    	}else{
    		// dbg("Leyline","Here Starter Node left:%u....\n",leftDone);
			// dbg("Leyline","Here Starter Node right:%u....\n",rightDone);
			// printfflush();

    		if (leftDone && !rightDone) {
				// dbg("Leyline","Core Leyline built....\n");
				// printfflush();
				rightDone = TRUE;
				sendAuthSINMsg();   	

			// send out msg to leaf node for starting SIN Packet			
			}else if(!leftDone && !rightDone) {
				// dbg("Leyline","Sending HelloMsg....\n");
				
				leftDone = TRUE;
				sendHelloMsg();
				
				// node = getNeighbor(0);
				// dest = node;
				// if (dest!=0){

				// 	sendLeyLineBuildMsg();
			
				// }else{
				// 	sendAuthSINMsg();
				// }			
			}
		} 	

    }		
	return msg;
}

event message_t* ChangeSuccessorReceive.receive(message_t* msg, void* payload, uint8_t len) {

	ChangeSuccessorMsg* btrpkt = (ChangeSuccessorMsg*)payload;
	if (btrpkt->predecessor!=0){
		routingTable.predecessor = btrpkt->predecessor;
		sendBackPropogation(routingTable.predecessor);
		// dbg("Leyline","My predecessor is: %u .\n", routingTable.predecessor);

	}else{
		routingTable.successor = btrpkt->successor;
		sendBackPropogation(routingTable.successor);
		// dbg("Leyline","My successor is: %u .\n", routingTable.successor);

	}
	nodeCount = btrpkt->nodeCount;
	// printfflush();
	// markNeighborOnLine(routingTable.predecessor);
	
	return msg;

}

event message_t* IncorpNodeReceive.receive(message_t* msg, void* payload, uint8_t len) {

		
	// IncorpAckMsg* btrpkt = (IncorpAckMsg*)(call Packet.getPayload(&incorpACK, sizeof (IncorpAckMsg)));
	// IncorporateNodeMsg* brpkt = (IncorporateNodeMsg*)payload;
	// dest = brpkt->predecessor;
	// if (!onCore && !onIntersection){
	// 	routingTable.successor = brpkt->successor;
	// 	routingTable.predecessor = brpkt->predecessor;
	// 	markNeighborOnLine(brpkt->successor);
	// 	markNeighborOnLine(brpkt->predecessor);
	// 	btrpkt->participating = TOS_NODE_ID; 

	// }else {
	// 	btrpkt->participating = 0;		
	// }

	// if (call IncorpAckSend.send(dest, &incorpACK, sizeof(IncorpAckMsg)) == SUCCESS) {
 //      		// busy = TRUE;
 //      		onCore = TRUE;
 //      		dbg("Leyline","Incorp ACK sent ..... \n");
 //      		printfflush();
 //    }
	return msg;
	
}

event message_t* IncorpAckReceive.receive(message_t* msg, void* payload, uint8_t len) {
	
	
	IncorpAckMsg* btrpkt = (IncorpAckMsg*)payload;
	routingTable.predecessor = btrpkt->predecessor;
	routingTable.successor = btrpkt->successor;
	// if (btrpkt->predecessor == TOS_NODE_ID){		
	// 	routingTable.successor = btrpkt->nodeid;	
	// }else if(btrpkt->successor == TOS_NODE_ID){
	// 	routingTable.predecessor = btrpkt->nodeid; 
	// }
	// dbg("Leyline","Incorp ACK received from %u....\n",btrpkt->nodeid);
	onCore = TRUE;
	// sendLeyLineAck(btrpkt->nodeid);
	// uint16_t node;
	// if (btrpkt->participating > 0){
	// 	dbg("Leyline","Incorp ACK received.....\n");
	// 	printfflush();
	// 	markNeighborOnLine(btrpkt->participating);
	// 	nodeCount = nodeCount + 1;
	// 	sendChangeSuccessorMsg(btrpkt->participating);
	// 	routingTable.successor = btrpkt->participating;

	// }else {

	// 	dbg("Leyline","Incorp NACK received.....\n");
	// 	printfflush();
	// 	markNeighborOnLine(dest);
	// 	node = findNodeToIncorporate();
	// 	if (node){
 //        	incorporateNode(node);
 //    	}else {
 //    		sendBackPropogation(routingTable.predecessor);
 //    	}
		
	// }
	return msg;	
}

event message_t* AuthSINReceive.receive(message_t* msg, void* payload, uint8_t len) {	

	AuthSINMsg* btrpkt = (AuthSINMsg*)payload;
	// dbg("Leyline","AuthSINMsg received ..... \n");
	// printfflush();
	if (!amCoreLeaf) {
		if (call AuthSINSend.send(routingTable.successor, msg, sizeof(AuthSINMsg)) == SUCCESS) {
      		// busy = TRUE;
      		// onCore = TRUE;
			dbg("Leyline","AuthSINMsg forwarded to %u ..... \n",routingTable.successor);
			// printfflush();
    	}	
	}else {
		// dbg("Leyline","Time to send out SIN packet ..... \n");
		// printfflush();
		nodeCount = btrpkt->nodeCount;
		// uint16_t myNode = routingTable.predecessor; 	
		sendSINPacket(routingTable.predecessor);
		// send SIN packet to next neighbor
	}
	return msg;
}

event message_t* SINReceive.receive(message_t* msg, void* payload, uint8_t len) {	

	// AuthSINMsg* btrpkt = (AuthSINMsg*)payload;
	
	uint16_t undiscoveredNeighbor;	
	SINMsg* btrpkt = (SINMsg*)payload;
	SINMode = TRUE;
	nodeCount = btrpkt->nodeCount;
	// dbg("Leyline","Number of Nodes: %u .\n", nodeCount);
	// printfflush();
	// if (!starterNode){
		// dbg("Leyline","Here0 \n");
	// 	myNode = routingTable.predecessor;	
	// }else{	
		// dbg("Leyline","Here1 \n");
	// 	myNode = routingTable.successor;
	// }
	myNode =routingTable.predecessor;
	// dbg("Leyline","My Node is : %u ..... \n", myNode);
	// dbg("Leyline","SIN Packet received ..... \n");
	// printfflush();
	if (!amCoreLeaf) {
		sendHelloMsg();
		// undiscoveredNeighbor = getNeighbor(0);
		// if (undiscoveredNeighbor!=0) {
		// 	dest = undiscoveredNeighbor;
		// 	amIntersection = TRUE;
		// 	SINnext = myNode;
		// 	sendLeyLineBuildMsg();
		// }else{
		// 	if (!amIntersection)
		// 		sendSINPacket(myNode);
		// 	else{
		// 		sendSINPacket(routingTable.intersectionPred);
		// 	}
		// }
		// look if you have any undiscovered neighbors
		// if yes turn amIntersetionNode true // turn it to false if cant find any other neighbors
		//send LeyLineBuildMsg			
	}else {
		SINMode = FALSE;
		if (onCore) {
			// dbg("Leyline","Leyline Build complete ..... \n");
			// dbg("Leyline","Number of Nodes: %u .\n", nodeCount);
			// printfflush();
			
			if(amIntersection){
				sendSINPacket(routingTable.predecessor);
			}else{
				skipBy = addressSpace/nodeCount;
				myAddress = myAddress + skipBy;
				routingTable.successorAddr = myAddress + skipBy;
				sendAssignAddressMsg(routingTable.successor);
				// dbg("Leyline","My Address: %u ..... \n", myAddress);
				// printfflush();	
			}

			
		}else{
			if(amIntersection){
				sendSINPacket(routingTable.predecessor);
			}else{
				sendIntLineBuiltMsg();
			}
		}

	}
	return msg;
}

event message_t* IntLineBuiltMsgReceive.receive(message_t* msg, void* payload, uint8_t len){
	if(amIntersection) {
		sendSINPacket(routingTable.predecessor);
	}else {
		sendIntLineBuiltMsg();
	}
	return msg;
}

event message_t* AssignAddressMsgReceive.receive(message_t* msg, void* payload, uint8_t len){

	AssignAddressMsg* btrpkt = (AssignAddressMsg*)payload;
	
	skipBy = btrpkt->skipBy;
	myAddress = btrpkt->previousAddr + btrpkt->skipBy;
	
	if (amIntersection) {
			myAddress = btrpkt->previousAddr;
			leftDone = FALSE;
			rightDone = FALSE;
			if (btrpkt->src != routingTable.predecessor) {			
				SINnext = routingTable.predecessor;
			}else{
				SINnext = routingTable.successor;
			}
			// dbg("Leyline","Sending AssignAddressMsg to %u....\n", routingTable.intersectionSucc);
			// printfflush();
			routingTable.predecessorAddr = btrpkt->previousAddr;
			routingTable.intersectionSuccAddr = myAddress + btrpkt->skipBy; 
			sendAssignAddressMsg(routingTable.intersectionSucc);
				
	}else {
			if (!amCoreLeaf){
				if (btrpkt->src != routingTable.predecessor) {
					routingTable.successorAddr = btrpkt->previousAddr;
					routingTable.predecessorAddr = myAddress + btrpkt->skipBy;			
					sendAssignAddressMsg(routingTable.predecessor);
				}else{
					routingTable.predecessorAddr = btrpkt->previousAddr;
					routingTable.successorAddr = myAddress + btrpkt->skipBy;
					sendAssignAddressMsg(routingTable.successor);
				}
			}else{
				if (onIntersection) {	
					routingTable.predecessorAddr = btrpkt->previousAddr;
					sendIntAssignAddressComplete(myAddress,0);
				//done addressing msg sent to intersection node
				}else{
					// signal SplitControl.startDone(SUCCESS);
					call AppTimer.startOneShot(500);
					routingTable.predecessorAddr = btrpkt->previousAddr;
					sendAddrBroadcast();
				}
			}
	}		
	
	// dbg("Leyline","My Address: %u ..... \n", myAddress);
	// printfflush();
	return msg;

}

event message_t* IntAssignAddressCompleteReceive.receive(message_t* msg, void* payload, uint8_t len){

	IntAddressCompleteMsg* btrpkt = (IntAddressCompleteMsg*)payload;  
	// dbg("Leyline","here....\n");
	if(amIntersection){
		tempAddr = myAddress;
		myAddress = btrpkt->previousAddr;

		if (leftDone && !rightDone) {
			rightDone = TRUE;
			myAddress = myAddress + skipBy;						
			routingTable.successorAddr = myAddress + skipBy;
			sendAssignAddressMsg(SINnext);
			
			
		}else if(!leftDone && ! rightDone) {
			
			leftDone = TRUE;
			
			if(routingTable.intersectionPred!=0) {
				routingTable.intersectionPredAddr = myAddress + skipBy;
				sendAssignAddressMsg(routingTable.intersectionPred);
			}else {
				rightDone = TRUE;
				myAddress = myAddress + skipBy;
				routingTable.successorAddr = myAddress + skipBy;
				sendAssignAddressMsg(SINnext);
			}
		}
		// myAddress = tempAddr;
		// check Left and right and other shit
	}else{

		sendIntAssignAddressComplete(btrpkt->previousAddr, btrpkt->src);
	
	}
	return msg;
}

void sendIntLineBuiltMsg(){
	// IntLineBuiltMsg* btrpkt =(IntLineBuiltMsg*)(call Packet.getPayload(&backPropMsg, sizeof (BackPropagationMsg)));
	if (call IntLineBuiltMsgSend.send(routingTable.successor, &intLineBuiltMsg, sizeof(IntLineBuiltMsg)) == SUCCESS) {
			dbg("Leyline","IntLineBuiltMsg sent ..... \n");
			// printfflush();
    }
}


void sendAssignAddressMsg(am_addr_t node) {
	
	AssignAddressMsg* btrpkt = (AssignAddressMsg*)(call Packet.getPayload(&assignAddrMsg, sizeof (AssignAddressMsg)));
	btrpkt->previousAddr = myAddress;
	btrpkt->skipBy = skipBy;
	btrpkt->src = TOS_NODE_ID;
	if (call AssignAddressMsgSend.send(node, &assignAddrMsg, sizeof(AssignAddressMsg)) == SUCCESS) {
			dbg("Leyline","AssignAddressMsg sent ..... \n");
			// printfflush();
    }

}

void sendIntAssignAddressComplete(uint16_t addr,uint16_t src) {
	
	IntAddressCompleteMsg* btrpkt = (IntAddressCompleteMsg*)(call Packet.getPayload(&assignAddrComp, sizeof (IntAddressCompleteMsg)));
	btrpkt->previousAddr = addr;
	btrpkt->src = TOS_NODE_ID;

	if (routingTable.predecessor == 0 || routingTable.successor == 0){
			if (routingTable.predecessor!=0){
				dest = routingTable.predecessor;
			}else{
				dest = routingTable.successor;				
			}
	
	}else{
		if(routingTable.predecessor==src){
			dest = routingTable.successor;
		}else{
			dest = routingTable.predecessor;
		} 	
	}


	if (call IntAssignAddressCompleteSend.send(dest, &assignAddrComp, sizeof(IntAddressCompleteMsg)) == SUCCESS) {
			dbg("Leyline","Assign Address Complete sent to %u..... \n", dest);
			// printfflush();
    }

}

void printRouteTable(){

	// dbg("Leyline","I am node:%u.....\n",TOS_NODE_ID);
	// dbg("Leyline","My Address is:%u.....\n",myAddress);
	// dbg("Leyline","Predecessor:%u.....\n",routingTable.predecessor);
	// dbg("Leyline","PredecessorAddr:%u.....\n",routingTable.predecessorAddr);
	// dbg("Leyline","Successor:%u.....\n",routingTable.successor);
	// dbg("Leyline","SuccessorAddr:%u.....\n",routingTable.successorAddr);
	// dbg("Leyline","intersectionPred:%u.....\n",routingTable.intersectionPred);
	// dbg("Leyline","IntersectionPredAddr:%u.....\n",routingTable.intersectionPredAddr);
	// dbg("Leyline","IntersectionSucc:%u.....\n",routingTable.intersectionSucc);
	// dbg("Leyline","IntersectionSuccAddr:%u.....\n",routingTable.intersectionSuccAddr);

}

void printShortcutTable(){

	uint16_t i;
	for (i = 0; i < neighborCount; i++){
		// dbg("Leyline","Shortcut MAC no %u:%u.....\n",i,shortcutTable[i].mac);
		// dbg("Leyline","Shortcut Address no %u:%u.....\n",i,shortcutTable[i].addr);		
	}

	// dbg("Leyline","I am node:%u.....\n",TOS_NODE_ID);
	// dbg("Leyline","My Address is:%u.....\n",myAddress);
	// dbg("Leyline","Predecessor:%u.....\n",routingTable.predecessor);
	// dbg("Leyline","PredecessorAddr:%u.....\n",routingTable.predecessorAddr);
	// dbg("Leyline","Successor:%u.....\n",routingTable.successor);
	// dbg("Leyline","SuccessorAddr:%u.....\n",routingTable.successorAddr);
	// dbg("Leyline","intersectionPred:%u.....\n",routingTable.intersectionPred);
	// dbg("Leyline","IntersectionPredAddr:%u.....\n",routingTable.intersectionPredAddr);
	// dbg("Leyline","IntersectionSucc:%u.....\n",routingTable.intersectionSucc);
	// dbg("Leyline","IntersectionSuccAddr:%u.....\n",routingTable.intersectionSuccAddr);

}

void sendAddrBroadcast(){

	AddrBroadcastMsg* btrpkt = (AddrBroadcastMsg*)(call Packet.getPayload(&addrBroadcastMsg, sizeof (AddrBroadcastMsg)));
	btrpkt->mac = TOS_NODE_ID;
	btrpkt->address = myAddress;
	// btrpkt->src = TOS_NODE_ID;
	// if(!addressBroadcasted){
		
	// }
	if (call AddrBroadcastSend.send(AM_BROADCAST_ADDR, &addrBroadcastMsg, sizeof(AddrBroadcastMsg)) == SUCCESS) {
			dbg("Leyline","Address Broadcast sent ..... \n");
			addressBroadcasted = TRUE;
			// printfflush();
    }




}

event message_t* AddrBroadcastReceive.receive(message_t* msg, void* payload, uint8_t len){

	uint16_t shortcut = 0;
	AddrBroadcastMsg* btrpkt = (AddrBroadcastMsg*)payload;  
	if (neighborCount < MAX_NEIGHBOR_ENTRIES){
		shortcut = getNeighbor(btrpkt->mac);	
		if (shortcut==0){
			// dbg("Leyline","Mac: %u, Address:%u\n",btrpkt->mac,btrpkt->address);
			markShortcut(btrpkt->mac,btrpkt->address);
			neighborCount = neighborCount + 1;			
		}	
	}
	if(!addressBroadcasted){
		sendAddrBroadcast();
	}

	return msg;
}

event void AppTimer.fired() {
	printShortcutTable();
	if(amCoreLeaf && !onIntersection){
		signal SplitControl.startDone(SUCCESS);
	}

}



}




