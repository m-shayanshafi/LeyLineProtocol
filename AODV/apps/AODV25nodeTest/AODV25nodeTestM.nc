/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */
 
module AODV25nodeTestM {
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
  
uint16_t src =250;
  uint16_t dest = 0x0000;
uint16_t numberNodes = 500;
  uint16_t noTimes = 1;
  uint16_t maxTimes = 2;

  event void Boot.booted() {
    call SplitControl.start();
  }
  
  
  event void SplitControl.startDone(error_t err) {
    if (err == SUCCESS) {
      // dbg("APPS", "%s\t APPS: startDone %d.\n", sim_time_string(), err);
      p_pkt = &pkt;
      // src = TOS_NODE_ID;
      if( TOS_NODE_ID == src)
      	call FirstTimer.startOneShot(25600);
        
    } else {
      call SplitControl.start();
    }
  }
  
  event void SplitControl.stopDone(error_t err) {
    // do nothing
  }
  
  event void FirstTimer.fired() {

  		call MilliTimer.startPeriodic(1024);
  
  }
  
  event void MilliTimer.fired() {
    // dbg("APPS", "%s\t APPS: MilliTimer.fired()\n", sim_time_string());
    call Leds.led0Toggle();
    

  	if (dest < numberNodes){    	
    	dest = dest + 1;
    	if(dest == src){
    		dest = dest+1;
    	}
    	dbg("APPS","Dest is now....%u\n", dest);  	
    	call AMSend.send(dest, p_pkt, 5);    	
    }else{
      if(noTimes < maxTimes){
        dest = 0;
        noTimes = noTimes + 1;
      }else{
        call MilliTimer.stop();
      }
    }
   
  }
  
  
  event void AMSend.sendDone(message_t* bufPtr, error_t error) {
    dbg("APPS", "%s\t APPS: sendDone!!\n", sim_time_string());

  }
  
  
  event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
    dbg("APPS", "%s\t APPS: receive!!\n", sim_time_string());
    return bufPtr;
  }
}
