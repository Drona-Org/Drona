
// Note these must be defined before including "mavlink.h" for the first time.
void mavlink_start_send(int channel, int length);
void mavlink_end_send(int channel, int length);
#define MAVLINK_START_UART_SEND(chan, length) mavlink_start_send(chan, length)
#define MAVLINK_END_UART_SEND(chan, length) mavlink_end_send(chan, length);

#include "POrb.h"
#include "POrbTopics.h"
#include "POrbMavlink.h"
#include "PFloat32.h"
#include "UdpSocketPort.h"
#include "Commands.h"
#include "mavlink.h"
#include "mavlink_helpers.h"
#include "P_common_MessageTypeFunctions.h"
#include "PTrace.h"

/*
Set up the mavlink macros and globals
*/

#define DEFAULT_BUFLEN 512
static mavlink_system_t mavlink_system;

static const uint8_t mavlink_message_crcs[256] = MAVLINK_MESSAGE_CRCS;
static const uint8_t mavlink_message_lengths[256] = MAVLINK_MESSAGE_LENGTHS;


/*
Set up the mavlink communication using buffering
*/
char datagram[255];
int datagrampos = 0;

void mavlink_start_send(int channel, int length)
{
	datagrampos = 0;
}

void mavlink_end_send(int channel, int length)
{
	POrbMavlink::port->Write((BYTE*)datagram, length);
}

static inline void _mavlink_send_uart(mavlink_channel_t chan, const char *buf, uint16_t len)
{
	if (len + datagrampos > 255)
	{
		printf("### Message is too big\n");
		exit(1);
	}
	::memcpy(datagram + datagrampos, buf, len);
	datagrampos += len;
}

VOID POrbMavlink::POrbSendToMaster(PRT_INT32 topic, PRT_INT32 px4_event, PRT_VALUE* px4_payload)
{
	//EventTrace(PProgram, 0, "Publishing topic: %d with event %d\n", topic, px4_event);
	if (POrbMasterMachine != NULL)
	{
		static PRT_VALUE* eventName = PrtMkEventValue(P_EVENT_POrbPublish);
		PRT_VALUE* ev_val = PrtMkEventValue(px4_event);
		PRT_VALUE* topic_val = PrtMkIntValue(topic);
		PRT_VALUE* pay_val = PrtMkDefaultValue(&P_GEND_TYPE_POrbPubMsgType);
		PrtTupleSetEx(pay_val, 0, topic_val, PRT_FALSE);
		PrtTupleSetEx(pay_val, 1, ev_val, PRT_FALSE);
		PrtTupleSetEx(pay_val, 2, px4_payload, PRT_TRUE);

		PRT_MACHINESTATE state;
		state.machineId = 50;
		state.machineName = "PX4";
		state.stateId = 1;
		state.stateName = "Send";
		PrtSend(&state, POrbMasterMachine, eventName, 1, PRT_FUN_PARAM_MOVE, &pay_val);

		// this allows timers to fire on this thread, otherwise the mavlink channel keeps us so busy
		// there is no time for the timers.
		SleepEx(1, TRUE);
	}
}

void POrbMavlink::SendCommand(int cmdid, bool confirm, float a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
	mavlink_msg_command_long_send(MAVLINK_COMM_0, /*system_id*/ 1, /*component_id*/ 1, cmdid, /* confirmation */ confirm ? 1 : 0,
		/* params */ a1, a2, a3, a4, a5, a6, a7);

	if (cmdid == MAV_CMD_SET_MESSAGE_INTERVAL || cmdid == MAV_CMD_GET_MESSAGE_INTERVAL || cmdid == MAV_CMD_GET_HOME_POSITION ||
		cmdid == MAV_CMD_REQUEST_AUTOPILOT_CAPABILITIES || cmdid == MAV_CMD_PREFLIGHT_REBOOT_SHUTDOWN)
	{
		if (confirm) {
			EventTrace(PProgram, 0, "Confirmation request on command %d, but this command does not generate an ACK\n", cmdid);
		}
	}

}


Port* POrbMavlink::port = NULL;
int POrbMavlink::heartbeats = 0;
bool POrbMavlink::ready = false;
PRT_MACHINEINST* POrbMavlink::POrbMasterMachine = NULL;

/*
Functions for POrbMavlink
*/
bool POrbMavlink::Initialize(Port* portToUse)
{
	POrbMavlink::port = portToUse;

	//initialize the ids
	mavlink_system.sysid = 255;
	mavlink_system.compid = 1;

	//create the read mavlink messages thread
	//TODO: Do some error handling here
	DWORD readThreadId;
	HANDLE readThread = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)DispatchMavlinkMessages, NULL, 0, &readThreadId);

	if (!WaitForHeartbeat()) {
		printf("POrbMavlink::Initialize is not getting a heartbeat from the drone\n");
		return false;
	}

	return true;
}

bool POrbMavlink::WaitForHeartbeat()
{
	printf("POrbMavlink::Initialize looking for drone heartbeat...");
	int retries = 10;
	while (retries-- > 0)
	{
		printf(".");
		if (heartbeats > 0)
		{
			printf("\n");
			return true;
		}		
		SleepEx(1000, true);
	}
	printf("\n");
	return false;
}

void POrbMavlink::SendHeartbeat()
{
	mavlink_msg_heartbeat_send(MAVLINK_COMM_0,
		MAV_TYPE_GCS,            // MAV_TYPE
		MAV_AUTOPILOT_INVALID,   // MAV_AUTOPILOT
		MAV_MODE_MANUAL_ARMED,   // MAV_MODE
		0,                       // custom mode
		MAV_STATE_ACTIVE);       // MAV_STATE

}


DWORD POrbMavlink::DispatchMavlinkMessages(LPVOID arg)
{
	HRESULT readSuccess = 0;
	//Declare all variables for optimization
	PRT_VALUE* pMessage_heartbeat = NULL;
	PRT_VALUE* pMessage_global_position = NULL;
	PRT_VALUE* pMessage_gps_raw = NULL;
	PRT_VALUE* pMessage_gps_status = NULL;
	PRT_VALUE* pMessage_attitute = NULL;
	PRT_VALUE* pMessage_battery_status = NULL;
	PRT_VALUE* pMessage_local_position_ned = NULL;
	PRT_VALUE* pMessage_command_ack = NULL;
	PRT_VALUE* pMessage_extended_sys_state = NULL;
	while (readSuccess == 0)
	{
		int read = 0;
		BYTE dataread = 0;
		mavlink_message_t msg;
		mavlink_status_t status;
		int channel = 0;

		//read a byte
		readSuccess = port->Read(&dataread, 1, &read);

		if (readSuccess == 0 && read == 1)
		{
			if (mavlink_frame_char(channel, dataread, &msg, &status) != MAVLINK_FRAMING_INCOMPLETE) 
			{
				if (!POrbMavlink::ready)
				{
					if ((BYTE)msg.msgid == MAVLINK_MSG_ID_HEARTBEAT)
					{
						heartbeats++;
					}
					continue;
				}

				// todo: do we want to format all mavlink messages for our log?
				//EventTrace(Mavlink, msg.msgid, "\n");
				switch ((BYTE)msg.msgid)
				{
					case MAVLINK_MSG_ID_HEARTBEAT:
						p_mavlink_msg_heartbeat_decode(&msg, &pMessage_heartbeat);
						POrbSendToMaster(Topics_heartbeat_topic, P_EVENT_heartbeat, pMessage_heartbeat);
						heartbeats++;
						break;
					case MAVLINK_MSG_ID_ATTITUDE:
						p_mavlink_msg_attitude_decode(&msg, &pMessage_attitute);
						POrbSendToMaster(Topics_attitude_topic, P_EVENT_attitude, pMessage_attitute);
						break;
					case MAVLINK_MSG_ID_ATTITUDE_TARGET:
						mavlink_attitude_target_t target;
						mavlink_msg_attitude_target_decode(&msg, &target);
						EventTrace(PProgram, 0, "MAVLINK_MSG_ID_ATTITUDE_TARGET: q=[%f,%f,%f,%f], body_pitch_rate=%f, body_roll_rate=%f, body_yaw_rate=%f\n", target.q[0], target.q[1], target.q[2], target.q[3],
							target.body_pitch_rate, target.body_roll_rate, target.body_yaw_rate);
						break;
					case MAVLINK_MSG_ID_GLOBAL_POSITION_INT:			
						mavlink_global_position_int_t global;
						mavlink_msg_global_position_int_decode(&msg, &global);
						EventTrace(PProgram, 0, "MAVLINK_MSG_ID_GLOBAL_POSITION_INT: lat=%f, lon=%f, alt=%f\n", (float)global.lat / 1E7, (float)global.lon / 1E7, (float)global.alt / 1E3);
						p_mavlink_msg_global_position_int_decode(&msg, &pMessage_global_position);
						POrbSendToMaster(Topics_global_position_topic, P_EVENT_global_position, pMessage_global_position);
						break;
					case MAVLINK_MSG_ID_GPS_RAW_INT:
						mavlink_gps_raw_int_t peek;
						mavlink_msg_gps_raw_int_decode(&msg, &peek);
						//printf("MAVLINK_MSG_ID_GPS_RAW_INT: satellites=%d, fix_type=%d, eph=%d\n", peek.satellites_visible, peek.fix_type, peek.eph);
						p_mavlink_msg_gps_raw_int_decode(&msg, &pMessage_gps_raw);
						POrbSendToMaster(Topics_gps_raw_int_topic, P_EVENT_gps_raw_int, pMessage_gps_raw);
						break;
					case MAVLINK_MSG_ID_GPS_STATUS:
						mavlink_gps_status_t gpsstatus;
						mavlink_msg_gps_status_decode(&msg, &gpsstatus);
						//printf("MAVLINK_MSG_ID_GPS_STATUS: satellites=%d\n", gpsstatus.satellites_visible);
						p_mavlink_msg_gps_status_decode(&msg, &pMessage_gps_status);
						POrbSendToMaster(Topics_gps_status_topic, P_EVENT_gps_status, pMessage_gps_status);
						break;
					case MAVLINK_MSG_ID_BATTERY_STATUS:					
						mavlink_battery_status_t batt;
						mavlink_msg_battery_status_decode(&msg, &batt);
						EventTrace(PProgram, 0, "MAVLINK_MSG_ID_BATTERY_STATUS: battery_remaining=%d\n", batt.battery_remaining);
						p_mavlink_msg_battery_status_decode(&msg, &pMessage_battery_status);
						POrbSendToMaster(Topics_battery_status_topic, P_EVENT_battery_status, pMessage_battery_status);
						break;
					case MAVLINK_MSG_ID_LOCAL_POSITION_NED:
						mavlink_local_position_ned_t local_pos;
						mavlink_msg_local_position_ned_decode(&msg, &local_pos);
						EventTrace(PProgram, 0, "MAVLINK_MSG_ID_LOCAL_POSITION_NED: x=%f, y=%f, z=%f\n", local_pos.x, local_pos.y, local_pos.z);
						p_mavlink_msg_local_position_ned_decode(&msg, &pMessage_local_position_ned);
						{
							// reverse the z units so positive numbers go upwards.
							PRT_VALUE* zAxis = PrtTupleGetNC(pMessage_local_position_ned, 3);
							float zValue = PrtGetFloat32(zAxis);
							PrtSetFloat32(zAxis, -zValue);
						}
						POrbSendToMaster(Topics_local_position_topic, P_EVENT_local_position, pMessage_local_position_ned);
						break;
					case MAVLINK_MSG_ID_COMMAND_ACK:
						mavlink_command_ack_t ack;
						mavlink_msg_command_ack_decode(&msg, &ack);
						EventTrace(PProgram, 0, "Received command ack %d for command %d\n", ack.result, ack.command);
						p_mavlink_msg_command_ack_decode(&msg, &pMessage_command_ack);
						POrbSendToMaster(Topics_command_ack_topic, P_EVENT_command_ack, pMessage_command_ack);
						break;
					case MAVLINK_MSG_ID_EXTENDED_SYS_STATE:
						mavlink_extended_sys_state_t ext;
						mavlink_msg_extended_sys_state_decode(&msg, &ext);
						p_mavlink_msg_extended_sys_state_decode(&msg, &pMessage_extended_sys_state);
						POrbSendToMaster(Topics_extended_sys_state_topic, P_EVENT_extended_sys_state, pMessage_extended_sys_state);
						break;
					case MAVLINK_MSG_ID_STATUSTEXT:
						mavlink_statustext_t stext;
						mavlink_msg_statustext_decode(&msg, &stext);
						printf("MAVLINK_MSG_ID_STATUSTEXT: severity=%d, text=%s\n", (int)stext.severity, &stext.text[0]);
						break;
					}

			}
		}
	}

	//free all the prt values
	if (pMessage_heartbeat != nullptr) PrtFreeValue(pMessage_heartbeat);
	if (pMessage_global_position != nullptr) PrtFreeValue(pMessage_global_position);
	if (pMessage_attitute != nullptr) PrtFreeValue(pMessage_attitute);
	if (pMessage_battery_status != nullptr) PrtFreeValue(pMessage_battery_status);
	if (pMessage_local_position_ned != nullptr) PrtFreeValue(pMessage_local_position_ned);
	if (pMessage_command_ack != nullptr) PrtFreeValue(pMessage_command_ack);
	if (pMessage_gps_status != nullptr)  PrtFreeValue(pMessage_gps_status);
	if (pMessage_gps_raw != nullptr) PrtFreeValue(pMessage_gps_raw);
	if (pMessage_extended_sys_state != nullptr) PrtFreeValue(pMessage_extended_sys_state);
	return 0;
}