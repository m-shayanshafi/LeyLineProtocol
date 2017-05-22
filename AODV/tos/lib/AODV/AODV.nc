/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/05/30
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */
 
includes AODV;

#define AM_AODV_RREQ          10
#define AM_AODV_RREP          11
#define AM_AODV_RERR          12
#define AM_AODV_MSG           13

configuration AODV {
  provides {
    interface SplitControl;
    interface AMSend[am_id_t id];
    interface Receive[uint8_t id];
  }
  uses {
    ;
  }
}

implementation {
  components AODV_M, RandomC, ActiveMessageC;
  
  SplitControl = AODV_M.SplitControl;
  AMSend = AODV_M.AMSend;
  Receive = AODV_M.Receive;
  
  AODV_M.Random -> RandomC;
  AODV_M.AMPacket -> ActiveMessageC;
  AODV_M.Packet -> ActiveMessageC;
  AODV_M.PacketAcknowledgements -> ActiveMessageC;
  AODV_M.AMControl -> ActiveMessageC.SplitControl;
  
  components new AMSenderC(AM_AODV_RREQ) as MHSendRREQ, 
             new AMSenderC(AM_AODV_RREP) as MHSendRREP, 
             new AMSenderC(AM_AODV_RERR) as MHSendRERR;
  AODV_M.SendRREQ -> MHSendRREQ;
  AODV_M.SendRREP -> MHSendRREP;
  AODV_M.SendRERR -> MHSendRERR;
  
  components new AMSenderC(AM_AODV_MSG) as MHSend;
  AODV_M.SubSend -> MHSend;
  
  components new AMReceiverC(AM_AODV_RREQ) as MHReceiveRREQ, 
             new AMReceiverC(AM_AODV_RREP) as MHReceiveRREP, 
             new AMReceiverC(AM_AODV_RERR) as MHReceiveRERR;
  AODV_M.ReceiveRREQ -> MHReceiveRREQ;
  AODV_M.ReceiveRREP -> MHReceiveRREP;
  AODV_M.ReceiveRERR -> MHReceiveRERR;
  
  components new AMReceiverC(AM_AODV_MSG) as MHReceive;
  AODV_M.SubReceive -> MHReceive;
  
  components new TimerMilliC() as AODV_Timer;
  AODV_M.AODVTimer -> AODV_Timer;
  
  components new TimerMilliC() as RREQ_Timer;
  AODV_M.RREQTimer -> RREQ_Timer;
  
}

