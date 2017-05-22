/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */
configuration AODV25nodeTest {
}

implementation {
  components MainC, AODV25nodeTestM, AODV, LedsC;
  
	  AODV25nodeTestM.Boot -> MainC.Boot;
  AODV25nodeTestM.SplitControl -> AODV.SplitControl;
  AODV25nodeTestM.AMSend -> AODV.AMSend[1];
  AODV25nodeTestM.Receive -> AODV.Receive[1];
  AODV25nodeTestM.Leds -> LedsC;
  
  components new TimerMilliC();
  AODV25nodeTestM.MilliTimer -> TimerMilliC;
  AODV25nodeTestM.FirstTimer -> TimerMilliC;
}

