module LeyLineM {
  uses {
    interface Boot;
    interface SplitControl;
    interface Timer<TMilli> as MilliTimer;
    interface AMSend;
    interface Receive;
    interface Leds;
  }
}

implementation {
	message_t pkt;
	message_t* p_pkt;

	uint16_t src  = 0x0007;
	uint16_t dest = 0x000A;

  	event void Boot.booted() {
    	call SplitControl.start();
  	}
  	

}


