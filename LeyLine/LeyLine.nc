configuration LeyLine {

}

implementation {
	components MainC, LeyLineM, LedsC;
	
	LeyLineM.Boot -> MainC.Boot;
	LeyLineM.AMSend -> AODV.AMSend[1];
  	LeyLineM.Receive -> AODV.Receive[1];
  	LeyLineM.Leds -> LedsC;

	  components new TimerMilliC();
	  LeyLineM.MilliTimer -> TimerMilliC;

	

	
}
