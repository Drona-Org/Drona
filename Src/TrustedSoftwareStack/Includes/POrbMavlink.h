#ifndef  _PORB_MAVLINK_HELPERS_H_
#define  _PORB_MAVLINK_HELPERS_H_

#include "PFloat32.h"
#include "Port.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include "Port.h"
#define MAVLINK_PACKED

/*
POrb Mavlink Class
*/
class POrbMavlink {
public:
	//initialize the port we use for the mavlink connection
	static bool Initialize(Port* portToUse);
	static DWORD DispatchMavlinkMessages(LPVOID arg);
	static void POrbSendToMaster(PRT_INT32 topic, PRT_INT32 px4_event, PRT_VALUE* px4_payload);
	static bool WaitForHeartbeat();
	static void SendHeartbeat();
	static void SendCommand(int cmdid, bool confirm, float a1, float a2, float a3, float a4, float a5, float a6, float a7);

	// internal use only
	static Port* port;
	static PRT_MACHINEINST* POrbMasterMachine;
	static int heartbeats;
	static bool ready;
};

#endif
