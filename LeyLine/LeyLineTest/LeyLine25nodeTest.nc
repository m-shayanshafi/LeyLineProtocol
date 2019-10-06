/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */
configuration LeyLine25nodeTest {
}

implementation {
  components MainC, LeyLine25nodeTestM, LeyLine, LedsC;
  	
  LeyLine25nodeTestM.Boot -> MainC.Boot;
  LeyLine25nodeTestM.SplitControl -> LeyLine.SplitControl;
  LeyLine25nodeTestM.AMSend -> LeyLine.AMSend[1];
  LeyLine25nodeTestM.Receive -> LeyLine.Receive[1];
  LeyLine25nodeTestM.Leds -> LedsC;
  
  components new TimerMilliC() as FirstTimer;
  components new TimerMilliC() as MilliTimer;
  LeyLine25nodeTestM.MilliTimer -> MilliTimer;
  LeyLine25nodeTestM.FirstTimer -> FirstTimer;
}

