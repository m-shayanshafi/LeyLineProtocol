#define NEW_PRINTF_SEMANTICS
#include <Timer.h>
#include "printf.h"
#include "LeyLine.h"

// includes LeyLine;

configuration LeyLine {

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

  components LeyLine_M;
  components MainC;
  components LedsC;
  components LeyLine_M as App;
  components new TimerMilliC() as HelloMsgTimer;
  components ActiveMessageC;
  components new AMSenderC(AM_HELLOMSG) as HelloSend;
  components new AMReceiverC(AM_HELLOMSG) as HelloReceive;
  components new AMSenderC(  AM_JOINREQ) as JoinReqSend;
  components new AMReceiverC(AM_JOINREQ) as JoinReqReceive;
  components new AMSenderC(  AM_RTBROADCAST) as RTBroadcastSend;
  components new AMReceiverC(AM_RTBROADCAST) as RTBroadcastReceive;
  components new AMSenderC(AM_INCORPREQ) as IncorpReqSend;
  components new AMReceiverC(AM_INCORPREQ) as IncorpReqReceive;  
  components new AMSenderC(AM_LEYLINEBUILD) as LeyLineBuildSend;
  components new AMReceiverC(AM_LEYLINEBUILD) as LeyLineBuildReceive;
  components new AMSenderC(AM_LEYLINEACK) as LeyLineAckSend;
  components new AMReceiverC(AM_LEYLINEACK) as LeyLineAckReceive;
  components new AMSenderC(AM_BACKPROPMSG) as BackPropagationSend;
  components new AMReceiverC(AM_BACKPROPMSG) as BackPropagationReceive;
  components new AMSenderC(AM_CHANGESUCC) as ChangeSuccessorSend;
  components new AMReceiverC(AM_CHANGESUCC) as ChangeSuccessorReceive;
  components new AMSenderC(AM_INCORPNODE) as IncorpNodeSend;
  components new AMReceiverC(AM_INCORPNODE) as IncorpNodeReceive;
  components new AMSenderC(AM_INCORPACK) as IncorpAckSend;
  components new AMReceiverC(AM_INCORPACK) as IncorpAckReceive;
  components new AMSenderC(AM_AUTHSIN) as AuthSINSend;
  components new AMReceiverC(AM_AUTHSIN) as AuthSINReceive;
  components new AMSenderC(AM_SIN) as SINSend;
  components new AMReceiverC(AM_SIN) as SINReceive;
  components new AMSenderC(AM_INTLINEBUILT) as IntLineBuiltMsgSend;
  components new AMReceiverC(AM_INTLINEBUILT) as IntLineBuiltMsgReceive;
  components new AMSenderC(AM_ASSIGNADDR) as AssignAddressMsgSend;
  components new AMReceiverC(AM_ASSIGNADDR) as AssignAddressMsgReceive;
  components new AMSenderC(AM_ADDRCOMPLETE) as IntAddressCompleteSend;
  components new AMReceiverC(AM_ADDRCOMPLETE) as IntAddressCompleteReceive;
  components new AMSenderC(AM_LEYLINEMSG) as SubSend;
  components new AMReceiverC(AM_LEYLINEMSG) as SubReceive;
  components new AMSenderC(AM_ADDRBROADCAST) as AddrBroadcastSend;
  components new AMReceiverC(AM_ADDRBROADCAST) as AddrBroadcastReceive;

   
  // components SerialActiveMessageC;
  // components new SerialAMReceiverC(AM_BLINKTORADIO);
  // components SerialPrintfC;
  // components SerialStartC;
  SplitControl = LeyLine_M.SplitControl;
  AMSend = LeyLine_M.AMSend;
  Receive = LeyLine_M.Receive;

  // App.Boot -> MainC;
  // App.Leds -> LedsC;
  App.HelloMsgTimer -> HelloMsgTimer;
  App.Packet -> HelloSend;
  App.AMPacket -> HelloSend;
  App.AMControl -> ActiveMessageC;
  
  App.HelloSend -> HelloSend;
  App.HelloReceive -> HelloReceive;

  App.JoinReqSend -> JoinReqSend;
  App.JoinReqReceive -> JoinReqReceive;  

  App.RTBroadcastSend -> RTBroadcastSend;
  App.RTBroadcastReceive -> RTBroadcastReceive; 

  App.IncorpReqSend -> IncorpReqSend;
  App.IncorpReqReceive -> IncorpReqReceive; 

  App.IncorpAckSend -> IncorpAckSend;
  App.IncorpAckReceive -> IncorpAckReceive; 

  App.LeyLineBuildSend -> LeyLineBuildSend;
  App.LeyLineBuildReceive -> LeyLineBuildReceive;

  App.LeyLineAckSend -> LeyLineAckSend;
  App.LeyLineAckReceive -> LeyLineAckReceive;

  App.BackPropagationSend -> BackPropagationSend;
  App.BackPropagationReceive -> BackPropagationReceive;

  App.ChangeSuccessorSend -> ChangeSuccessorSend;
  App.ChangeSuccessorReceive -> ChangeSuccessorReceive;

  App.IncorpNodeSend -> IncorpNodeSend;
  App.IncorpNodeReceive -> IncorpNodeReceive;

  App.IncorpAckSend -> IncorpAckSend;
  App.IncorpAckReceive -> IncorpAckReceive;

  App.AuthSINSend -> AuthSINSend;
  App.AuthSINReceive -> AuthSINReceive;

  App.SINSend -> SINSend;
  App.SINReceive -> SINReceive;

  App.IntLineBuiltMsgSend -> IntLineBuiltMsgSend;
  App.IntLineBuiltMsgReceive -> IntLineBuiltMsgReceive;

  App.AssignAddressMsgSend -> AssignAddressMsgSend;
  App.AssignAddressMsgReceive -> AssignAddressMsgReceive;

  App.IntAssignAddressCompleteSend -> IntAddressCompleteSend;
  App.IntAssignAddressCompleteReceive -> IntAddressCompleteReceive;  

  App.SubSend -> SubSend;
  App.SubReceive -> SubReceive;

  App.AddrBroadcastSend -> AddrBroadcastSend;
  App.AddrBroadcastReceive -> AddrBroadcastReceive;

  components new TimerMilliC() as LeyLineBuildTimer;
  components new TimerMilliC() as BackPropTimer;
  components new TimerMilliC() as LeyLineAckTimer;
  components new TimerMilliC() as AppTimer;
  App.LeyLineBuildTimer -> LeyLineBuildTimer;
  App.BackPropTimer -> BackPropTimer;
  App.LeyLineAckTimer -> LeyLineAckTimer;
  App.AppTimer -> AppTimer;




  // App.SerialPacket -> SerialActiveMessageC;
  // App.SerialReceive -> SerialAMReceiverC;

}
