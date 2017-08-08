#include <malloc.h>
#include <linker.h>
#include "BootMaster.h"
#include "PrtUser.h"
#include "PrtLinuxUserConfig.h"
#include "PMavlinkMessages.h"
#include "P_common_MessageTypeFunctions.h"

extern "C"
{
    /*
	PRT_VALUE *P_FUN_SendHeartbeat_FOREIGN(PRT_MACHINEINST *context)
	{
		POrbMavlink::SendHeartbeat();
		return NULL;
	}

	PRT_VALUE *P_FUN_SendSetHomeCommand_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *commander, PRT_VALUE *pos, PRT_VALUE *caller)
	{
		float timestamp = (float)PrtPrimGetInt(PrtTupleGetNC(pos, 0));
		float lat = (float)(PrtPrimGetInt(PrtTupleGetNC(pos, 1)) / 1E7);
		float lon = (float)(PrtPrimGetInt(PrtTupleGetNC(pos, 2)) / 1E7);
		float alt = (float)(PrtPrimGetInt(PrtTupleGetNC(pos, 3)) / 1E3);
		
		globallocalconverter_init(lat, lon, alt, (uint64_t)timestamp);

		printf("Setting home position to lat=%f, lon=%f, alt=%f\n", lat, lon, alt);

		// tell the drone.
		const int MAV_CMD_DO_SET_HOME = 179;
		POrbMavlink::SendCommand(MAV_CMD_DO_SET_HOME, false, 0, 0, 0, 0, lat, lon, alt);

		return NULL;
	}

	PRT_VALUE *P_FUN_FlightControllerMachine_FlightControllerReady_FOREIGN(PRT_MACHINEINST *context)
	{
		POrbMavlink::ready = true;
		return NULL;
	}
    */

}
