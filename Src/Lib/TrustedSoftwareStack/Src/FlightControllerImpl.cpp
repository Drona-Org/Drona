#include "POrbMavlink.h"
#include "Float32.h"
#include <malloc.h>
#include "PrtUser.h"
#include "PrtWinUserConfig.h"
#include "geo.h"
#include "Commands.h"
#include "PX4.h"

extern "C"
{
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
	

	///Convert local position to global position, notice that the lat/lon is multiplied by 1E7 and alt is multiplied by 1000.
	/*
	      <message id="33" name="GLOBAL_POSITION_INT">
               <description>The filtered global position (e.g. fused GPS and accelerometers). The position is in GPS-frame (right-handed, Z-up). It
               is designed as scaled integer message since the resolution of float is not sufficient.</description>
               <field type="uint32_t" name="time_boot_ms">Timestamp (milliseconds since system boot)</field>
               <field type="int32_t" name="lat">Latitude, expressed as degrees * 1E7</field>
               <field type="int32_t" name="lon">Longitude, expressed as degrees * 1E7</field>
               <field type="int32_t" name="alt">Altitude in meters, expressed as * 1000 (millimeters), AMSL (not WGS84 - note that virtually all GPS modules provide the AMSL as well)</field>
               <field type="int32_t" name="relative_alt">Altitude above ground in meters, expressed as * 1000 (millimeters)</field>
               <field type="int16_t" name="vx">Ground X Speed (Latitude, positive north), expressed as m/s * 100</field>
               <field type="int16_t" name="vy">Ground Y Speed (Longitude, positive east), expressed as m/s * 100</field>
               <field type="int16_t" name="vz">Ground Z Speed (Altitude, positive down), expressed as m/s * 100</field>
               <field type="uint16_t" name="hdg">Vehicle heading (yaw angle) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX</field>
          </message>
	
	// dead code?
	PRT_VALUE *P_FUN_LocalToGlobalInt_IMPL(PRT_MACHINEINST *context)
	{
		PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
		PRT_FUNSTACK_INFO p_tmp_frame;
		PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);

		PRT_VALUE* localPos = p_tmp_frame.locals[0];

		float x = PrtGetFloat32(PrtTupleGetNC(localPos, 1));
		float y = PrtGetFloat32(PrtTupleGetNC(localPos, 2));
		float z = -PrtGetFloat32(PrtTupleGetNC(localPos, 3));
		double lat = 0;
		double lon = 0;
		float alt = 0;
		globallocalconverter_toglobal(x, y, z, &lat, &lon, &alt);

		PRT_VALUE* globalPos = PrtMkDefaultValue(P_GEND_TYPE_mavlink_global_position_int_t);
		PrtTupleSet(globalPos, 1, PrtMkIntValue(((PRT_INT32)(lat * 1E7))));
		PrtTupleSet(globalPos, 2, PrtMkIntValue(((PRT_INT32)(lon * 1E7))));
		PrtTupleSet(globalPos, 3, PrtMkIntValue(((PRT_INT32)(alt * 1E3))));
		
		PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
		return globalPos;
	}*/

	///Convert local position to global position
	PRT_VALUE *P_FUN_LocalToGlobal_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *localPos)
	{
		float x = PrtGetFloat32(PrtTupleGetNC(localPos, 1));
		float y = PrtGetFloat32(PrtTupleGetNC(localPos, 2));
		float z = -PrtGetFloat32(PrtTupleGetNC(localPos, 3));
		double lat = 0;
		double lon = 0;
		float alt = 0;
		globallocalconverter_toglobal(x, y, z, &lat, &lon, &alt);

		printf("LocalToGlobal x=%f,y=%f,z=%f becomes lat=%f, lon=%f, alt=%f\n", x, y, z, (float)lat, (float)lon, alt);

		PRT_VALUE* globalPos = PrtMkDefaultValue(&P_GEND_TYPE_global_position_t);
		PrtTupleSet(globalPos, 0, PrtMkFloat32Value((float)lat));
		PrtTupleSet(globalPos, 1, PrtMkFloat32Value((float)lon));
		PrtTupleSet(globalPos, 2, PrtMkFloat32Value(alt));

		// todo: figure out the heading that points the drone in the direction we are going...
		//PrtTupleSet(globalPos, 3, PrtMkFloat32Value(heading));

		return globalPos;
	}

}