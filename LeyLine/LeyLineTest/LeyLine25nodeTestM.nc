/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */
 
module LeyLine25nodeTestM {
  uses {
    interface Boot;
    interface SplitControl;
    interface Timer<TMilli> as MilliTimer;
    interface Timer<TMilli> as FirstTimer;
    interface AMSend;
    interface Receive;
    interface Leds;
  }
}

implementation {
  
  message_t pkt;
  message_t* p_pkt;
  
  uint16_t src  = 0;
  uint16_t dest = 0;
uint16_t numberNodes = 100;
  uint16_t addressSpace = 100;
  uint16_t skipby = 0;
  uint16_t myAddress = 0;
  uint16_t noTimes = 1;
  uint16_t maxTimes = 1;


  event void Boot.booted() {
    call SplitControl.start();
    // dbg("AODV", "%s\t APPS: startDone %d.\n");
      skipby = addressSpace/numberNodes;
      myAddress = numberNodes * skipby;
    

  }
  
  
  event void SplitControl.startDone(error_t err) {
    // if (TOS_NODE_ID == src) {
    

      dbg("APPS", "%s\t APPS: startDone %d.\n", sim_time_string(), err);
      p_pkt = &pkt;
      // src = TOS_NODE_ID;


      dbg("APPS", "%s\t APPS: startDone %d.\n", sim_time_string(), err);
      src = TOS_NODE_ID;
      if( TOS_NODE_ID == src){
        // post AMSend.send(dest, p_pkt, 5);        
        dbg("msgCount", "%u\n",src);                
      	call FirstTimer.startPeriodic(1000);
      }else{
        call SplitControl.stop();
      } 
    // }
    //try signalling SplitControl.startDone()  and then moving forward after receiving the last message leyline     
    // } else {  
    //   dbg("APPS", "no success...\n");
    //   // call SplitControl.stop();
    //   // call SplitControl.start();
    // }
  }
  
  event void SplitControl.stopDone(error_t err) {
    // do nothing
  }
  
  event void FirstTimer.fired() {
    dbg("APPS", "Timer fired...\n");
    dbg("APPS", "dest:%u,skipBy:%u,myAddress:%u...\n",dest,skipby,myAddress);    
    if (dest + skipby < myAddress){      
      dest = dest + skipby;  
      if(dest == myAddress){
        dest = dest+skipby;
      }
      dbg("APPS","Dest is now....%u\n", dest);    
      call AMSend.send(dest, p_pkt, 5);     
      dbg("APPS","AMSend called....%u\n", dest);
    }else{
      if(noTimes < maxTimes){
        dest = 0;
        noTimes = noTimes + 1;
      }else{
        call FirstTimer.stop();
      }
    }
      // call FirstTimer.stop();       

  		// call MilliTimer.startPeriodic(2048);
      // call FirstTimer.stop();
  
  }
  
  event void MilliTimer.fired() {
    // dbg("APPS", "%s\t APPS: MilliTimer.fired()\n", sim_time_string());


    
    // dest = dest + skipby;            
    // call AMSend.send(10, p_pkt, sizeof(p_pkt));
    

   //  call Leds.led0Toggle();
    

  // if (dest < numberNodes){    	
  //   	dest = dest + 1;
  //   	if(dest == src){
  //   		dest = dest+1;
  //   	}
  //   	dbg("APPS","Dest is now....%u\n", dest);  	
  //   	call AMSend.send(10, p_pkt, 5);    	
  //     dbg("APPS","AMSend called....%u\n", dest);
  //   }else{
  //     if(noTimes < maxTimes){
  //       dest = 0;
  //       noTimes = noTimes + 1;
  //     }else{
  //       call MilliTimer.stop();
  //     }
  //   }
   
  }
  
  
  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    // dbg("APPS", "%s\t APPS: sendDone!!\n", sim_time_string());

  }
  
  
  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
    // dbg("APPS", "%s\t APPS: receive!!\n", sim_time_string());
    return bufPtr;
  }
}
