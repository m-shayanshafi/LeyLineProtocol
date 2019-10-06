#ifndef LEYLINE_H
#define LEYLINE_H

enum {
  
  AM_HELLOMSG = 10,
  AM_JOINREQ = 11,
  AM_LEYLINEBUILD = 12,
  AM_RTBROADCAST = 13,
  AM_BACKPROPMSG = 14,
  AM_CHANGESUCC = 15,
  AM_INCORPNODE = 16,
  AM_INCORPACK = 17,
  AM_AUTHSIN = 18,
  AM_SIN = 19,
  AM_INTLINEBUILT = 20,
  AM_ASSIGNADDR = 21,
  AM_ADDRCOMPLETE = 22,
  AM_LEYLINEACK = 23,
  AM_INCORPREQ = 24,
  AM_LEYLINEMSG = 25,
  AM_ADDRBROADCAST = 26,
  TIMER_PERIOD_MILLI = 1500,
  MAX_NEIGHBOR_ENTRIES = 0
};

typedef nx_struct LeyLineHelloMsg{
  nx_uint16_t   nodeid;
} LeyLineHelloMsg;

typedef nx_struct leyline_msg_hdr{
  nx_am_addr_t  dest;
  nx_am_addr_t  src;
  // nx_uint8_t    app;
  // nx_uint8_t    data[1];
} leyline_msg_hdr;

typedef nx_struct AddrBroadcastMsg{
  nx_am_addr_t  mac;
  nx_am_addr_t  address;
  // nx_uint8_t    app;
  // nx_uint8_t    data[1];
} AddrBroadcastMsg;

typedef nx_struct LeyLineJoinReqMsg{
  nx_uint16_t   nodeid;
} LeyLineJoinReqMsg;

typedef nx_struct LeyLineBuildMsg{
  nx_uint16_t predecessor;
  nx_uint16_t  successor;
  nx_uint16_t  onCore;
  nx_uint16_t  nodeCount;
} LeyLineBuildMsg;

typedef nx_struct LeyLineBuildAck{
  nx_uint8_t participating;
} LeyLineBuildAck;


typedef struct {
   nx_uint16_t nodeid;
 	 nx_uint16_t onLeyLine;   
 } NeighborTable;

typedef struct {
     am_addr_t predecessor;
 	   am_addr_t successor;	
     am_addr_t intersectionPred;
     am_addr_t intersectionSucc;
     nx_uint16_t predecessorAddr;
     nx_uint16_t successorAddr; 
     nx_uint16_t intersectionPredAddr;
     nx_uint16_t intersectionSuccAddr;
 } LeyLineRoutingTable;

 typedef struct {
     nx_uint16_t mac;
     nx_uint16_t addr; 
 } LeyLineShortcutTable;

typedef nx_struct BackPropagationMsg{
	// nx_uint16_t neighbors[10];	
	// nx_uint16_t count;
  nx_uint16_t  nodeCount;
} BackPropagationMsg;

typedef nx_struct RTBroadcast{
  nx_uint16_t nodeid;
  nx_uint16_t predecessor;
  nx_uint16_t successor; 
} RTBroadcast;

typedef nx_struct IncorpReq{
  nx_uint16_t nodeid;
  nx_uint16_t predecessor;
  nx_uint16_t successor; 
} IncorpReq;

typedef nx_struct IncorporateNodeMsg{
	nx_uint16_t predecessor;
	nx_uint16_t successor;
} IncorporateNodeMsg;

typedef nx_struct ChangeSuccessorMsg{
	nx_uint16_t successor;
  nx_uint16_t predecessor;
  nx_uint16_t nodeCount;
}ChangeSuccessorMsg;

typedef nx_struct IncorpAckMsg {	
  
  nx_uint16_t nodeid;
  nx_uint16_t predecessor;
  nx_uint16_t successor;

}IncorpAckMsg;

typedef nx_struct AuthSINMsg {
  nx_uint16_t nodeCount;
}AuthSINMsg;


typedef nx_struct SINMsg {
  nx_uint16_t intersection;
  nx_uint16_t nodeCount;
}SINMsg;

typedef nx_struct IntLineBuiltMsg {
  nx_uint8_t built;
}IntLineBuiltMsg;

typedef nx_struct AssignAddressMsg {
  nx_uint8_t previousAddr;
  nx_uint8_t skipBy;
  nx_uint16_t src;
}AssignAddressMsg;

typedef nx_struct IntAddressCompleteMsg {
  nx_uint8_t previousAddr;
  nx_uint16_t src;
}IntAddressCompleteMsg;


// #define MAX_NEIGHBOR_ENTRIES 10
#define LEYLINE_MSG_HEADER_LEN   sizeof(leyline_msg_hdr)

#endif

