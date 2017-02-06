
#pragma once
#include "mavlink.h"
#include "Float32.h"
#include "PrtValues.h"


static inline uint16_t p_mavlink_msg_heartbeat_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* heartbeat)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HEARTBEAT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 0)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 1)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 2)));
_mav_put_uint8_t(buf, 6, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 3)));
_mav_put_uint8_t(buf, 7, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 4)));
_mav_put_uint8_t(buf, 8, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(heartbeat, 5)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HEARTBEAT_LEN);
msg->msgid = MAVLINK_MSG_ID_HEARTBEAT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HEARTBEAT_MIN_LEN, MAVLINK_MSG_ID_HEARTBEAT_LEN, MAVLINK_MSG_ID_HEARTBEAT_CRC);

}          


static inline void p_mavlink_msg_heartbeat_decode(const mavlink_message_t* msg, PRT_VALUE** heartbeat)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*heartbeat == NULL)
{
*heartbeat = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_heartbeat_t);

PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 2), _MAV_RETURN_uint8_t(msg, 5));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 3), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 4), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 5), _MAV_RETURN_uint8_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 2), _MAV_RETURN_uint8_t(msg, 5));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 3), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 4), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*heartbeat, 5), _MAV_RETURN_uint8_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_sys_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* sys_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SYS_STATUS_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 1)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 2)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 3)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 4)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 5)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 6)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 7)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 8)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 9)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 10)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 11)));
_mav_put_int8_t(buf, 30, (int8_t)PrtPrimGetInt(PrtTupleGetNC(sys_status, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SYS_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_SYS_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SYS_STATUS_MIN_LEN, MAVLINK_MSG_ID_SYS_STATUS_LEN, MAVLINK_MSG_ID_SYS_STATUS_CRC);

}          


static inline void p_mavlink_msg_sys_status_decode(const mavlink_message_t* msg, PRT_VALUE** sys_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*sys_status == NULL)
{
*sys_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_sys_status_t);

PrtPrimSetInt(PrtTupleGetNC(*sys_status, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 2), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 5), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 7), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 8), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 10), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 11), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 12), _MAV_RETURN_int8_t(msg, 30));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*sys_status, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 2), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 5), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 7), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 8), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 10), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 11), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*sys_status, 12), _MAV_RETURN_int8_t(msg, 30));

}

}         


static inline uint16_t p_mavlink_msg_system_time_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* system_time)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SYSTEM_TIME_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(system_time, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(system_time, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SYSTEM_TIME_LEN);
msg->msgid = MAVLINK_MSG_ID_SYSTEM_TIME;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SYSTEM_TIME_MIN_LEN, MAVLINK_MSG_ID_SYSTEM_TIME_LEN, MAVLINK_MSG_ID_SYSTEM_TIME_CRC);

}          


static inline void p_mavlink_msg_system_time_decode(const mavlink_message_t* msg, PRT_VALUE** system_time)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*system_time == NULL)
{
*system_time = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_system_time_t);

PrtPrimSetInt(PrtTupleGetNC(*system_time, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*system_time, 1), _MAV_RETURN_uint32_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*system_time, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*system_time, 1), _MAV_RETURN_uint32_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_ping_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* ping)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PING_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(ping, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(ping, 1)));
_mav_put_uint8_t(buf, 12, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(ping, 2)));
_mav_put_uint8_t(buf, 13, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(ping, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PING_LEN);
msg->msgid = MAVLINK_MSG_ID_PING;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PING_MIN_LEN, MAVLINK_MSG_ID_PING_LEN, MAVLINK_MSG_ID_PING_CRC);

}          


static inline void p_mavlink_msg_ping_decode(const mavlink_message_t* msg, PRT_VALUE** ping)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*ping == NULL)
{
*ping = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_ping_t);

PrtPrimSetInt(PrtTupleGetNC(*ping, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*ping, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*ping, 2), _MAV_RETURN_uint8_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*ping, 3), _MAV_RETURN_uint8_t(msg, 13));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*ping, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*ping, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*ping, 2), _MAV_RETURN_uint8_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*ping, 3), _MAV_RETURN_uint8_t(msg, 13));

}

}         


static inline uint16_t p_mavlink_msg_change_operator_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* change_operator_control)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control, 1)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control, 2)));

count = 0;
seqVal = PrtTupleGetNC(change_operator_control, 3);
while(count < 25)
{
    _mav_put_char(buf, 3 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_LEN);
msg->msgid = MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_MIN_LEN, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_LEN, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_CRC);

}          


static inline void p_mavlink_msg_change_operator_control_decode(const mavlink_message_t* msg, PRT_VALUE** change_operator_control)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*change_operator_control == NULL)
{
*change_operator_control = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_change_operator_control_t);

PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*change_operator_control, 3);
while(count < 25)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 3 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*change_operator_control, 3);
while(count < 25)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 3 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_change_operator_control_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* change_operator_control_ack)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control_ack, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control_ack, 1)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(change_operator_control_ack, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK_LEN);
msg->msgid = MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK_MIN_LEN, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK_LEN, MAVLINK_MSG_ID_CHANGE_OPERATOR_CONTROL_ACK_CRC);

}          


static inline void p_mavlink_msg_change_operator_control_ack_decode(const mavlink_message_t* msg, PRT_VALUE** change_operator_control_ack)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*change_operator_control_ack == NULL)
{
*change_operator_control_ack = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_change_operator_control_ack_t);

PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 2), _MAV_RETURN_uint8_t(msg, 2));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*change_operator_control_ack, 2), _MAV_RETURN_uint8_t(msg, 2));

}

}         


static inline uint16_t p_mavlink_msg_auth_key_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* auth_key)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_AUTH_KEY_LEN];


count = 0;
seqVal = PrtTupleGetNC(auth_key, 0);
while(count < 32)
{
    _mav_put_char(buf, 0 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTH_KEY_LEN);
msg->msgid = MAVLINK_MSG_ID_AUTH_KEY;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTH_KEY_MIN_LEN, MAVLINK_MSG_ID_AUTH_KEY_LEN, MAVLINK_MSG_ID_AUTH_KEY_CRC);

}          


static inline void p_mavlink_msg_auth_key_decode(const mavlink_message_t* msg, PRT_VALUE** auth_key)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*auth_key == NULL)
{
*auth_key = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_auth_key_t);


count = 0;
seqVal = PrtTupleGetNC(*auth_key, 0);
while(count < 32)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 0 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{


count = 0;
seqVal = PrtTupleGetNC(*auth_key, 0);
while(count < 32)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 0 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_set_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_mode)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_MODE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(set_mode, 0)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_mode, 1)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_mode, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_MODE_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_MODE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_MODE_MIN_LEN, MAVLINK_MSG_ID_SET_MODE_LEN, MAVLINK_MSG_ID_SET_MODE_CRC);

}          


static inline void p_mavlink_msg_set_mode_decode(const mavlink_message_t* msg, PRT_VALUE** set_mode)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_mode == NULL)
{
*set_mode = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_mode_t);

PrtPrimSetInt(PrtTupleGetNC(*set_mode, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_mode, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_mode, 2), _MAV_RETURN_uint8_t(msg, 5));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_mode, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_mode, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_mode, 2), _MAV_RETURN_uint8_t(msg, 5));

}

}         


static inline uint16_t p_mavlink_msg_param_request_read_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* param_request_read)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PARAM_REQUEST_READ_LEN];

_mav_put_int16_t(buf, 0, (int16_t)PrtPrimGetInt(PrtTupleGetNC(param_request_read, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_request_read, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_request_read, 2)));

count = 0;
seqVal = PrtTupleGetNC(param_request_read, 3);
while(count < 16)
{
    _mav_put_char(buf, 4 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_REQUEST_READ_LEN);
msg->msgid = MAVLINK_MSG_ID_PARAM_REQUEST_READ;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_REQUEST_READ_MIN_LEN, MAVLINK_MSG_ID_PARAM_REQUEST_READ_LEN, MAVLINK_MSG_ID_PARAM_REQUEST_READ_CRC);

}          


static inline void p_mavlink_msg_param_request_read_decode(const mavlink_message_t* msg, PRT_VALUE** param_request_read)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*param_request_read == NULL)
{
*param_request_read = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_param_request_read_t);

PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 2), _MAV_RETURN_uint8_t(msg, 3));

count = 0;
seqVal = PrtTupleGetNC(*param_request_read, 3);
while(count < 16)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 4 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*param_request_read, 2), _MAV_RETURN_uint8_t(msg, 3));

count = 0;
seqVal = PrtTupleGetNC(*param_request_read, 3);
while(count < 16)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 4 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_param_request_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* param_request_list)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PARAM_REQUEST_LIST_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_request_list, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_request_list, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_REQUEST_LIST_LEN);
msg->msgid = MAVLINK_MSG_ID_PARAM_REQUEST_LIST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_REQUEST_LIST_MIN_LEN, MAVLINK_MSG_ID_PARAM_REQUEST_LIST_LEN, MAVLINK_MSG_ID_PARAM_REQUEST_LIST_CRC);

}          


static inline void p_mavlink_msg_param_request_list_decode(const mavlink_message_t* msg, PRT_VALUE** param_request_list)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*param_request_list == NULL)
{
*param_request_list = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_param_request_list_t);

PrtPrimSetInt(PrtTupleGetNC(*param_request_list, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_request_list, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*param_request_list, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_request_list, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_param_value_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* param_value)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PARAM_VALUE_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(param_value, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(param_value, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(param_value, 2)));

count = 0;
seqVal = PrtTupleGetNC(param_value, 3);
while(count < 16)
{
    _mav_put_char(buf, 8 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_value, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_VALUE_LEN);
msg->msgid = MAVLINK_MSG_ID_PARAM_VALUE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_VALUE_MIN_LEN, MAVLINK_MSG_ID_PARAM_VALUE_LEN, MAVLINK_MSG_ID_PARAM_VALUE_CRC);

}          


static inline void p_mavlink_msg_param_value_decode(const mavlink_message_t* msg, PRT_VALUE** param_value)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*param_value == NULL)
{
*param_value = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_param_value_t);

PrtSetFloat32(PrtTupleGetNC(*param_value, 0), _MAV_RETURN_float(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_value, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*param_value, 2), _MAV_RETURN_uint16_t(msg, 6));

count = 0;
seqVal = PrtTupleGetNC(*param_value, 3);
while(count < 16)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 8 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_value, 4), _MAV_RETURN_uint8_t(msg, 24));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*param_value, 0), _MAV_RETURN_float(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_value, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*param_value, 2), _MAV_RETURN_uint16_t(msg, 6));

count = 0;
seqVal = PrtTupleGetNC(*param_value, 3);
while(count < 16)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 8 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_value, 4), _MAV_RETURN_uint8_t(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_param_set_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* param_set)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PARAM_SET_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(param_set, 0)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_set, 1)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_set, 2)));

count = 0;
seqVal = PrtTupleGetNC(param_set, 3);
while(count < 16)
{
    _mav_put_char(buf, 6 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 22, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_set, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_SET_LEN);
msg->msgid = MAVLINK_MSG_ID_PARAM_SET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_SET_MIN_LEN, MAVLINK_MSG_ID_PARAM_SET_LEN, MAVLINK_MSG_ID_PARAM_SET_CRC);

}          


static inline void p_mavlink_msg_param_set_decode(const mavlink_message_t* msg, PRT_VALUE** param_set)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*param_set == NULL)
{
*param_set = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_param_set_t);

PrtSetFloat32(PrtTupleGetNC(*param_set, 0), _MAV_RETURN_float(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_set, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*param_set, 2), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*param_set, 3);
while(count < 16)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 6 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_set, 4), _MAV_RETURN_uint8_t(msg, 22));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*param_set, 0), _MAV_RETURN_float(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*param_set, 1), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*param_set, 2), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*param_set, 3);
while(count < 16)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 6 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_set, 4), _MAV_RETURN_uint8_t(msg, 22));

}

}         


static inline uint16_t p_mavlink_msg_gps_raw_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_raw_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_RAW_INT_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 0)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 3)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 4)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 5)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 6)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 7)));
_mav_put_uint8_t(buf, 28, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 8)));
_mav_put_uint8_t(buf, 29, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_raw_int, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_RAW_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_RAW_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_RAW_INT_MIN_LEN, MAVLINK_MSG_ID_GPS_RAW_INT_LEN, MAVLINK_MSG_ID_GPS_RAW_INT_CRC);

}          


static inline void p_mavlink_msg_gps_raw_int_decode(const mavlink_message_t* msg, PRT_VALUE** gps_raw_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_raw_int == NULL)
{
*gps_raw_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_raw_int_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 4), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 5), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 6), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 7), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 8), _MAV_RETURN_uint8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 9), _MAV_RETURN_uint8_t(msg, 29));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 4), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 5), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 6), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 7), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 8), _MAV_RETURN_uint8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps_raw_int, 9), _MAV_RETURN_uint8_t(msg, 29));

}

}         


static inline uint16_t p_mavlink_msg_gps_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_STATUS_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_status, 0)));

count = 0;
seqVal = PrtTupleGetNC(gps_status, 1);
while(count < 20)
{
    _mav_put_uint8_t(buf, 1 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(gps_status, 2);
while(count < 20)
{
    _mav_put_uint8_t(buf, 21 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(gps_status, 3);
while(count < 20)
{
    _mav_put_uint8_t(buf, 41 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(gps_status, 4);
while(count < 20)
{
    _mav_put_uint8_t(buf, 61 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(gps_status, 5);
while(count < 20)
{
    _mav_put_uint8_t(buf, 81 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_STATUS_MIN_LEN, MAVLINK_MSG_ID_GPS_STATUS_LEN, MAVLINK_MSG_ID_GPS_STATUS_CRC);

}          


static inline void p_mavlink_msg_gps_status_decode(const mavlink_message_t* msg, PRT_VALUE** gps_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_status == NULL)
{
*gps_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_status_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_status, 0), _MAV_RETURN_uint8_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 1);
while(count < 20)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 1 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 2);
while(count < 20)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 21 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 3);
while(count < 20)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 41 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 4);
while(count < 20)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 61 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 5);
while(count < 20)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 81 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_status, 0), _MAV_RETURN_uint8_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 1);
while(count < 20)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 1 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 2);
while(count < 20)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 21 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 3);
while(count < 20)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 41 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 4);
while(count < 20)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 61 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*gps_status, 5);
while(count < 20)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 81 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_scaled_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_imu)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_IMU_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 0)));
_mav_put_int16_t(buf, 4, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 1)));
_mav_put_int16_t(buf, 6, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 2)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 3)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 4)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 5)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 6)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 7)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 8)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_IMU_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_IMU;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_IMU_MIN_LEN, MAVLINK_MSG_ID_SCALED_IMU_LEN, MAVLINK_MSG_ID_SCALED_IMU_CRC);

}          


static inline void p_mavlink_msg_scaled_imu_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_imu)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_imu == NULL)
{
*scaled_imu = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_imu_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 9), _MAV_RETURN_int16_t(msg, 20));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu, 9), _MAV_RETURN_int16_t(msg, 20));

}

}         


static inline uint16_t p_mavlink_msg_raw_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* raw_imu)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RAW_IMU_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 0)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 1)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 3)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 4)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 5)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 6)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 7)));
_mav_put_int16_t(buf, 22, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 8)));
_mav_put_int16_t(buf, 24, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_imu, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RAW_IMU_LEN);
msg->msgid = MAVLINK_MSG_ID_RAW_IMU;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RAW_IMU_MIN_LEN, MAVLINK_MSG_ID_RAW_IMU_LEN, MAVLINK_MSG_ID_RAW_IMU_CRC);

}          


static inline void p_mavlink_msg_raw_imu_decode(const mavlink_message_t* msg, PRT_VALUE** raw_imu)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*raw_imu == NULL)
{
*raw_imu = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_raw_imu_t);

PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 1), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 2), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 4), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 5), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 6), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 7), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 8), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 9), _MAV_RETURN_int16_t(msg, 24));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 1), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 2), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 4), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 5), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 6), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 7), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 8), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*raw_imu, 9), _MAV_RETURN_int16_t(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_raw_pressure_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* raw_pressure)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RAW_PRESSURE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(raw_pressure, 0)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_pressure, 1)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_pressure, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_pressure, 3)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(raw_pressure, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RAW_PRESSURE_LEN);
msg->msgid = MAVLINK_MSG_ID_RAW_PRESSURE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RAW_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_RAW_PRESSURE_LEN, MAVLINK_MSG_ID_RAW_PRESSURE_CRC);

}          


static inline void p_mavlink_msg_raw_pressure_decode(const mavlink_message_t* msg, PRT_VALUE** raw_pressure)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*raw_pressure == NULL)
{
*raw_pressure = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_raw_pressure_t);

PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 1), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 2), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 4), _MAV_RETURN_int16_t(msg, 14));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 1), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 2), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*raw_pressure, 4), _MAV_RETURN_int16_t(msg, 14));

}

}         


static inline uint16_t p_mavlink_msg_scaled_pressure_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_pressure)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_PRESSURE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_PRESSURE_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_PRESSURE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_PRESSURE_MIN_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE_CRC);

}          


static inline void p_mavlink_msg_scaled_pressure_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_pressure)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_pressure == NULL)
{
*scaled_pressure = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_pressure_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure, 3), _MAV_RETURN_int16_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure, 3), _MAV_RETURN_int16_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* attitude)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ATTITUDE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(attitude, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(attitude, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_LEN);
msg->msgid = MAVLINK_MSG_ID_ATTITUDE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_LEN, MAVLINK_MSG_ID_ATTITUDE_CRC);

}          


static inline void p_mavlink_msg_attitude_decode(const mavlink_message_t* msg, PRT_VALUE** attitude)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*attitude == NULL)
{
*attitude = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_attitude_t);

PrtPrimSetInt(PrtTupleGetNC(*attitude, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*attitude, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*attitude, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*attitude, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*attitude, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*attitude, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude, 6), _MAV_RETURN_float(msg, 24));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*attitude, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*attitude, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*attitude, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*attitude, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*attitude, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*attitude, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude, 6), _MAV_RETURN_float(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_attitude_quaternion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* attitude_quaternion)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(attitude_quaternion, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN);
msg->msgid = MAVLINK_MSG_ID_ATTITUDE_QUATERNION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_CRC);

}          


static inline void p_mavlink_msg_attitude_quaternion_decode(const mavlink_message_t* msg, PRT_VALUE** attitude_quaternion)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*attitude_quaternion == NULL)
{
*attitude_quaternion = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_attitude_quaternion_t);

PrtPrimSetInt(PrtTupleGetNC(*attitude_quaternion, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 7), _MAV_RETURN_float(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*attitude_quaternion, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion, 7), _MAV_RETURN_float(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_local_position_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* local_position_ned)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(local_position_ned, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN);
msg->msgid = MAVLINK_MSG_ID_LOCAL_POSITION_NED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOCAL_POSITION_NED_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_CRC);

}          


static inline void p_mavlink_msg_local_position_ned_decode(const mavlink_message_t* msg, PRT_VALUE** local_position_ned)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*local_position_ned == NULL)
{
*local_position_ned = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_local_position_ned_t);

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 6), _MAV_RETURN_float(msg, 24));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned, 6), _MAV_RETURN_float(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_global_position_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* global_position_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 2)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 3)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 4)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 5)));
_mav_put_int16_t(buf, 22, (int16_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 6)));
_mav_put_int16_t(buf, 24, (int16_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 7)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_CRC);

}          


static inline void p_mavlink_msg_global_position_int_decode(const mavlink_message_t* msg, PRT_VALUE** global_position_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*global_position_int == NULL)
{
*global_position_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_global_position_int_t);

PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 5), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 6), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 7), _MAV_RETURN_int16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 8), _MAV_RETURN_uint16_t(msg, 26));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 5), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 6), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 7), _MAV_RETURN_int16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int, 8), _MAV_RETURN_uint16_t(msg, 26));

}

}         


static inline uint16_t p_mavlink_msg_rc_channels_scaled_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* rc_channels_scaled)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RC_CHANNELS_SCALED_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 0)));
_mav_put_int16_t(buf, 4, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 1)));
_mav_put_int16_t(buf, 6, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 2)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 3)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 4)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 5)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 6)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 7)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 8)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 9)));
_mav_put_uint8_t(buf, 21, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_scaled, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_CHANNELS_SCALED_LEN);
msg->msgid = MAVLINK_MSG_ID_RC_CHANNELS_SCALED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_CHANNELS_SCALED_MIN_LEN, MAVLINK_MSG_ID_RC_CHANNELS_SCALED_LEN, MAVLINK_MSG_ID_RC_CHANNELS_SCALED_CRC);

}          


static inline void p_mavlink_msg_rc_channels_scaled_decode(const mavlink_message_t* msg, PRT_VALUE** rc_channels_scaled)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*rc_channels_scaled == NULL)
{
*rc_channels_scaled = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_rc_channels_scaled_t);

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 9), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 10), _MAV_RETURN_uint8_t(msg, 21));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 9), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_scaled, 10), _MAV_RETURN_uint8_t(msg, 21));

}

}         


static inline uint16_t p_mavlink_msg_rc_channels_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* rc_channels_raw)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RC_CHANNELS_RAW_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 2)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 3)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 4)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 5)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 6)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 7)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 8)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 9)));
_mav_put_uint8_t(buf, 21, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_raw, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_CHANNELS_RAW_LEN);
msg->msgid = MAVLINK_MSG_ID_RC_CHANNELS_RAW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_CHANNELS_RAW_MIN_LEN, MAVLINK_MSG_ID_RC_CHANNELS_RAW_LEN, MAVLINK_MSG_ID_RC_CHANNELS_RAW_CRC);

}          


static inline void p_mavlink_msg_rc_channels_raw_decode(const mavlink_message_t* msg, PRT_VALUE** rc_channels_raw)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*rc_channels_raw == NULL)
{
*rc_channels_raw = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_rc_channels_raw_t);

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 9), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 10), _MAV_RETURN_uint8_t(msg, 21));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 9), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_raw, 10), _MAV_RETURN_uint8_t(msg, 21));

}

}         


static inline uint16_t p_mavlink_msg_servo_output_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* servo_output_raw)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SERVO_OUTPUT_RAW_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 2)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 3)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 4)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 5)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 6)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 7)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 8)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 9)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 10)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 11)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 12)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 13)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 14)));
_mav_put_uint16_t(buf, 32, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 15)));
_mav_put_uint16_t(buf, 34, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 16)));
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(servo_output_raw, 17)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SERVO_OUTPUT_RAW_LEN);
msg->msgid = MAVLINK_MSG_ID_SERVO_OUTPUT_RAW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SERVO_OUTPUT_RAW_MIN_LEN, MAVLINK_MSG_ID_SERVO_OUTPUT_RAW_LEN, MAVLINK_MSG_ID_SERVO_OUTPUT_RAW_CRC);

}          


static inline void p_mavlink_msg_servo_output_raw_decode(const mavlink_message_t* msg, PRT_VALUE** servo_output_raw)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*servo_output_raw == NULL)
{
*servo_output_raw = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_servo_output_raw_t);

PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 9), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 10), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 11), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 12), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 13), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 14), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 15), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 16), _MAV_RETURN_uint16_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 17), _MAV_RETURN_uint8_t(msg, 36));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 9), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 10), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 11), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 12), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 13), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 14), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 15), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 16), _MAV_RETURN_uint16_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*servo_output_raw, 17), _MAV_RETURN_uint8_t(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_mission_request_partial_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_request_partial_list)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST_LEN];

_mav_put_int16_t(buf, 0, (int16_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_partial_list, 0)));
_mav_put_int16_t(buf, 2, (int16_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_partial_list, 1)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_partial_list, 2)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_partial_list, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_PARTIAL_LIST_CRC);

}          


static inline void p_mavlink_msg_mission_request_partial_list_decode(const mavlink_message_t* msg, PRT_VALUE** mission_request_partial_list)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_request_partial_list == NULL)
{
*mission_request_partial_list = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_request_partial_list_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_partial_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}

}         


static inline uint16_t p_mavlink_msg_mission_write_partial_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_write_partial_list)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST_LEN];

_mav_put_int16_t(buf, 0, (int16_t)PrtPrimGetInt(PrtTupleGetNC(mission_write_partial_list, 0)));
_mav_put_int16_t(buf, 2, (int16_t)PrtPrimGetInt(PrtTupleGetNC(mission_write_partial_list, 1)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_write_partial_list, 2)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_write_partial_list, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST_MIN_LEN, MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST_LEN, MAVLINK_MSG_ID_MISSION_WRITE_PARTIAL_LIST_CRC);

}          


static inline void p_mavlink_msg_mission_write_partial_list_decode(const mavlink_message_t* msg, PRT_VALUE** mission_write_partial_list)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_write_partial_list == NULL)
{
*mission_write_partial_list = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_write_partial_list_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*mission_write_partial_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}

}         


static inline uint16_t p_mavlink_msg_mission_item_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_item)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_ITEM_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(mission_item, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 7)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 8)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 9)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 10)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 11)));
_mav_put_uint8_t(buf, 35, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 12)));
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item, 13)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_ITEM_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_ITEM;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_ITEM_MIN_LEN, MAVLINK_MSG_ID_MISSION_ITEM_LEN, MAVLINK_MSG_ID_MISSION_ITEM_CRC);

}          


static inline void p_mavlink_msg_mission_item_decode(const mavlink_message_t* msg, PRT_VALUE** mission_item)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_item == NULL)
{
*mission_item = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_item_t);

PrtSetFloat32(PrtTupleGetNC(*mission_item, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 12), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 13), _MAV_RETURN_uint8_t(msg, 36));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*mission_item, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*mission_item, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 12), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*mission_item, 13), _MAV_RETURN_uint8_t(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_mission_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_request)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_REQUEST_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_request, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_REQUEST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_CRC);

}          


static inline void p_mavlink_msg_mission_request_decode(const mavlink_message_t* msg, PRT_VALUE** mission_request)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_request == NULL)
{
*mission_request = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_request_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_request, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_request, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         


static inline uint16_t p_mavlink_msg_mission_set_current_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_set_current)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_SET_CURRENT_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_set_current, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_set_current, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_set_current, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_SET_CURRENT_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_SET_CURRENT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_SET_CURRENT_MIN_LEN, MAVLINK_MSG_ID_MISSION_SET_CURRENT_LEN, MAVLINK_MSG_ID_MISSION_SET_CURRENT_CRC);

}          


static inline void p_mavlink_msg_mission_set_current_decode(const mavlink_message_t* msg, PRT_VALUE** mission_set_current)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_set_current == NULL)
{
*mission_set_current = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_set_current_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_set_current, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         


static inline uint16_t p_mavlink_msg_mission_current_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_current)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_CURRENT_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_current, 0)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_CURRENT_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_CURRENT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_CURRENT_MIN_LEN, MAVLINK_MSG_ID_MISSION_CURRENT_LEN, MAVLINK_MSG_ID_MISSION_CURRENT_CRC);

}          


static inline void p_mavlink_msg_mission_current_decode(const mavlink_message_t* msg, PRT_VALUE** mission_current)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_current == NULL)
{
*mission_current = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_current_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_current, 0), _MAV_RETURN_uint16_t(msg, 0));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_current, 0), _MAV_RETURN_uint16_t(msg, 0));

}

}         


static inline uint16_t p_mavlink_msg_mission_request_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_request_list)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_REQUEST_LIST_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_list, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_list, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_LIST_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST_LIST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_REQUEST_LIST_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LIST_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_LIST_CRC);

}          


static inline void p_mavlink_msg_mission_request_list_decode(const mavlink_message_t* msg, PRT_VALUE** mission_request_list)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_request_list == NULL)
{
*mission_request_list = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_request_list_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_request_list, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_list, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_request_list, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_list, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_mission_count_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_count)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_COUNT_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_count, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_count, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_count, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_COUNT_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_COUNT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_COUNT_MIN_LEN, MAVLINK_MSG_ID_MISSION_COUNT_LEN, MAVLINK_MSG_ID_MISSION_COUNT_CRC);

}          


static inline void p_mavlink_msg_mission_count_decode(const mavlink_message_t* msg, PRT_VALUE** mission_count)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_count == NULL)
{
*mission_count = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_count_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_count, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_count, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_count, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_count, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_count, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_count, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         


static inline uint16_t p_mavlink_msg_mission_clear_all_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_clear_all)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_CLEAR_ALL_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_clear_all, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_clear_all, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_CLEAR_ALL_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_CLEAR_ALL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_CLEAR_ALL_MIN_LEN, MAVLINK_MSG_ID_MISSION_CLEAR_ALL_LEN, MAVLINK_MSG_ID_MISSION_CLEAR_ALL_CRC);

}          


static inline void p_mavlink_msg_mission_clear_all_decode(const mavlink_message_t* msg, PRT_VALUE** mission_clear_all)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_clear_all == NULL)
{
*mission_clear_all = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_clear_all_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_clear_all, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_clear_all, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_clear_all, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_clear_all, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_mission_item_reached_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_item_reached)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_ITEM_REACHED_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_reached, 0)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_ITEM_REACHED_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_ITEM_REACHED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_ITEM_REACHED_MIN_LEN, MAVLINK_MSG_ID_MISSION_ITEM_REACHED_LEN, MAVLINK_MSG_ID_MISSION_ITEM_REACHED_CRC);

}          


static inline void p_mavlink_msg_mission_item_reached_decode(const mavlink_message_t* msg, PRT_VALUE** mission_item_reached)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_item_reached == NULL)
{
*mission_item_reached = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_item_reached_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_item_reached, 0), _MAV_RETURN_uint16_t(msg, 0));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_item_reached, 0), _MAV_RETURN_uint16_t(msg, 0));

}

}         


static inline uint16_t p_mavlink_msg_mission_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_ack)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_ACK_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_ack, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_ack, 1)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_ack, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_ACK_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_ACK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_ACK_MIN_LEN, MAVLINK_MSG_ID_MISSION_ACK_LEN, MAVLINK_MSG_ID_MISSION_ACK_CRC);

}          


static inline void p_mavlink_msg_mission_ack_decode(const mavlink_message_t* msg, PRT_VALUE** mission_ack)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_ack == NULL)
{
*mission_ack = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_ack_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 2), _MAV_RETURN_uint8_t(msg, 2));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*mission_ack, 2), _MAV_RETURN_uint8_t(msg, 2));

}

}         


static inline uint16_t p_mavlink_msg_set_gps_global_origin_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_gps_global_origin)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_gps_global_origin, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_gps_global_origin, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_gps_global_origin, 2)));
_mav_put_uint8_t(buf, 12, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_gps_global_origin, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN_MIN_LEN, MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN_LEN, MAVLINK_MSG_ID_SET_GPS_GLOBAL_ORIGIN_CRC);

}          


static inline void p_mavlink_msg_set_gps_global_origin_decode(const mavlink_message_t* msg, PRT_VALUE** set_gps_global_origin)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_gps_global_origin == NULL)
{
*set_gps_global_origin = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_gps_global_origin_t);

PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 3), _MAV_RETURN_uint8_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*set_gps_global_origin, 3), _MAV_RETURN_uint8_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_gps_global_origin_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_global_origin)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_global_origin, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_global_origin, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_global_origin, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN_MIN_LEN, MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN_LEN, MAVLINK_MSG_ID_GPS_GLOBAL_ORIGIN_CRC);

}          


static inline void p_mavlink_msg_gps_global_origin_decode(const mavlink_message_t* msg, PRT_VALUE** gps_global_origin)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_global_origin == NULL)
{
*gps_global_origin = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_global_origin_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 2), _MAV_RETURN_int32_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps_global_origin, 2), _MAV_RETURN_int32_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_param_map_rc_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* param_map_rc)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PARAM_MAP_RC_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(param_map_rc, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(param_map_rc, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(param_map_rc, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(param_map_rc, 3)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(param_map_rc, 4)));
_mav_put_uint8_t(buf, 18, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_map_rc, 5)));
_mav_put_uint8_t(buf, 19, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_map_rc, 6)));

count = 0;
seqVal = PrtTupleGetNC(param_map_rc, 7);
while(count < 16)
{
    _mav_put_char(buf, 20 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(param_map_rc, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PARAM_MAP_RC_LEN);
msg->msgid = MAVLINK_MSG_ID_PARAM_MAP_RC;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PARAM_MAP_RC_MIN_LEN, MAVLINK_MSG_ID_PARAM_MAP_RC_LEN, MAVLINK_MSG_ID_PARAM_MAP_RC_CRC);

}          


static inline void p_mavlink_msg_param_map_rc_decode(const mavlink_message_t* msg, PRT_VALUE** param_map_rc)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*param_map_rc == NULL)
{
*param_map_rc = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_param_map_rc_t);

PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 4), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 5), _MAV_RETURN_uint8_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 6), _MAV_RETURN_uint8_t(msg, 19));

count = 0;
seqVal = PrtTupleGetNC(*param_map_rc, 7);
while(count < 16)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 20 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 8), _MAV_RETURN_uint8_t(msg, 36));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*param_map_rc, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 4), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 5), _MAV_RETURN_uint8_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 6), _MAV_RETURN_uint8_t(msg, 19));

count = 0;
seqVal = PrtTupleGetNC(*param_map_rc, 7);
while(count < 16)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 20 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*param_map_rc, 8), _MAV_RETURN_uint8_t(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_mission_request_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_request_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_REQUEST_INT_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_int, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_int, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_request_int, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_REQUEST_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_REQUEST_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_REQUEST_INT_MIN_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_INT_LEN, MAVLINK_MSG_ID_MISSION_REQUEST_INT_CRC);

}          


static inline void p_mavlink_msg_mission_request_int_decode(const mavlink_message_t* msg, PRT_VALUE** mission_request_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_request_int == NULL)
{
*mission_request_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_request_int_t);

PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*mission_request_int, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         


static inline uint16_t p_mavlink_msg_safety_set_allowed_area_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* safety_set_allowed_area)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(safety_set_allowed_area, 5)));
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(safety_set_allowed_area, 6)));
_mav_put_uint8_t(buf, 25, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(safety_set_allowed_area, 7)));
_mav_put_uint8_t(buf, 26, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(safety_set_allowed_area, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA_LEN);
msg->msgid = MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA_MIN_LEN, MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA_LEN, MAVLINK_MSG_ID_SAFETY_SET_ALLOWED_AREA_CRC);

}          


static inline void p_mavlink_msg_safety_set_allowed_area_decode(const mavlink_message_t* msg, PRT_VALUE** safety_set_allowed_area)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*safety_set_allowed_area == NULL)
{
*safety_set_allowed_area = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_safety_set_allowed_area_t);

PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 7), _MAV_RETURN_uint8_t(msg, 25));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 8), _MAV_RETURN_uint8_t(msg, 26));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*safety_set_allowed_area, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 7), _MAV_RETURN_uint8_t(msg, 25));
PrtPrimSetInt(PrtTupleGetNC(*safety_set_allowed_area, 8), _MAV_RETURN_uint8_t(msg, 26));

}

}         


static inline uint16_t p_mavlink_msg_safety_allowed_area_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* safety_allowed_area)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(safety_allowed_area, 5)));
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(safety_allowed_area, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA_LEN);
msg->msgid = MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA_MIN_LEN, MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA_LEN, MAVLINK_MSG_ID_SAFETY_ALLOWED_AREA_CRC);

}          


static inline void p_mavlink_msg_safety_allowed_area_decode(const mavlink_message_t* msg, PRT_VALUE** safety_allowed_area)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*safety_allowed_area == NULL)
{
*safety_allowed_area = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_safety_allowed_area_t);

PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*safety_allowed_area, 6), _MAV_RETURN_uint8_t(msg, 24));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*safety_allowed_area, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*safety_allowed_area, 6), _MAV_RETURN_uint8_t(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_attitude_quaternion_cov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* attitude_quaternion_cov)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(attitude_quaternion_cov, 0)));

count = 0;
seqVal = PrtTupleGetNC(attitude_quaternion_cov, 1);
while(count < 4)
{
    
_mav_put_float(buf, 8 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion_cov, 2)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion_cov, 3)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(attitude_quaternion_cov, 4)));

count = 0;
seqVal = PrtTupleGetNC(attitude_quaternion_cov, 5);
while(count < 9)
{
    
_mav_put_float(buf, 36 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV_LEN);
msg->msgid = MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV_LEN, MAVLINK_MSG_ID_ATTITUDE_QUATERNION_COV_CRC);

}          


static inline void p_mavlink_msg_attitude_quaternion_cov_decode(const mavlink_message_t* msg, PRT_VALUE** attitude_quaternion_cov)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*attitude_quaternion_cov == NULL)
{
*attitude_quaternion_cov = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_attitude_quaternion_cov_t);

PrtPrimSetInt(PrtTupleGetNC(*attitude_quaternion_cov, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*attitude_quaternion_cov, 1);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 8 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 4), _MAV_RETURN_float(msg, 32));

count = 0;
seqVal = PrtTupleGetNC(*attitude_quaternion_cov, 5);
while(count < 9)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 36 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*attitude_quaternion_cov, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*attitude_quaternion_cov, 1);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 8 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*attitude_quaternion_cov, 4), _MAV_RETURN_float(msg, 32));

count = 0;
seqVal = PrtTupleGetNC(*attitude_quaternion_cov, 5);
while(count < 9)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 36 + count * 4));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_nav_controller_output_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* nav_controller_output)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(nav_controller_output, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(nav_controller_output, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(nav_controller_output, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(nav_controller_output, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(nav_controller_output, 4)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(nav_controller_output, 5)));
_mav_put_int16_t(buf, 22, (int16_t)PrtPrimGetInt(PrtTupleGetNC(nav_controller_output, 6)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(nav_controller_output, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT_LEN);
msg->msgid = MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT_MIN_LEN, MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT_LEN, MAVLINK_MSG_ID_NAV_CONTROLLER_OUTPUT_CRC);

}          


static inline void p_mavlink_msg_nav_controller_output_decode(const mavlink_message_t* msg, PRT_VALUE** nav_controller_output)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*nav_controller_output == NULL)
{
*nav_controller_output = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_nav_controller_output_t);

PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 5), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 6), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 7), _MAV_RETURN_uint16_t(msg, 24));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*nav_controller_output, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 5), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 6), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*nav_controller_output, 7), _MAV_RETURN_uint16_t(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_global_position_int_cov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* global_position_int_cov)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 0)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 3)));
_mav_put_int32_t(buf, 20, (int32_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(global_position_int_cov, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(global_position_int_cov, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(global_position_int_cov, 7)));

count = 0;
seqVal = PrtTupleGetNC(global_position_int_cov, 8);
while(count < 36)
{
    
_mav_put_float(buf, 36 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 180, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(global_position_int_cov, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV_LEN);
msg->msgid = MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV_LEN, MAVLINK_MSG_ID_GLOBAL_POSITION_INT_COV_CRC);

}          


static inline void p_mavlink_msg_global_position_int_cov_decode(const mavlink_message_t* msg, PRT_VALUE** global_position_int_cov)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*global_position_int_cov == NULL)
{
*global_position_int_cov = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_global_position_int_cov_t);

PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 4), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 7), _MAV_RETURN_float(msg, 32));

count = 0;
seqVal = PrtTupleGetNC(*global_position_int_cov, 8);
while(count < 36)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 36 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 9), _MAV_RETURN_uint8_t(msg, 180));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 4), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*global_position_int_cov, 7), _MAV_RETURN_float(msg, 32));

count = 0;
seqVal = PrtTupleGetNC(*global_position_int_cov, 8);
while(count < 36)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 36 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*global_position_int_cov, 9), _MAV_RETURN_uint8_t(msg, 180));

}

}         


static inline uint16_t p_mavlink_msg_local_position_ned_cov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* local_position_ned_cov)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(local_position_ned_cov, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 8)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_cov, 9)));

count = 0;
seqVal = PrtTupleGetNC(local_position_ned_cov, 10);
while(count < 45)
{
    
_mav_put_float(buf, 44 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 224, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(local_position_ned_cov, 11)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV_LEN);
msg->msgid = MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_COV_CRC);

}          


static inline void p_mavlink_msg_local_position_ned_cov_decode(const mavlink_message_t* msg, PRT_VALUE** local_position_ned_cov)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*local_position_ned_cov == NULL)
{
*local_position_ned_cov = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_local_position_ned_cov_t);

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 9), _MAV_RETURN_float(msg, 40));

count = 0;
seqVal = PrtTupleGetNC(*local_position_ned_cov, 10);
while(count < 45)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 44 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_cov, 11), _MAV_RETURN_uint8_t(msg, 224));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_cov, 9), _MAV_RETURN_float(msg, 40));

count = 0;
seqVal = PrtTupleGetNC(*local_position_ned_cov, 10);
while(count < 45)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 44 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_cov, 11), _MAV_RETURN_uint8_t(msg, 224));

}

}         


static inline uint16_t p_mavlink_msg_rc_channels_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* rc_channels)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RC_CHANNELS_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 2)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 3)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 4)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 5)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 6)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 7)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 8)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 9)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 10)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 11)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 12)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 13)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 14)));
_mav_put_uint16_t(buf, 32, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 15)));
_mav_put_uint16_t(buf, 34, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 16)));
_mav_put_uint16_t(buf, 36, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 17)));
_mav_put_uint16_t(buf, 38, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 18)));
_mav_put_uint8_t(buf, 40, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 19)));
_mav_put_uint8_t(buf, 41, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels, 20)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_CHANNELS_LEN);
msg->msgid = MAVLINK_MSG_ID_RC_CHANNELS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RC_CHANNELS_CRC);

}          


static inline void p_mavlink_msg_rc_channels_decode(const mavlink_message_t* msg, PRT_VALUE** rc_channels)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*rc_channels == NULL)
{
*rc_channels = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_rc_channels_t);

PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 9), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 10), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 11), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 12), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 13), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 14), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 15), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 16), _MAV_RETURN_uint16_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 17), _MAV_RETURN_uint16_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 18), _MAV_RETURN_uint16_t(msg, 38));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 19), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 20), _MAV_RETURN_uint8_t(msg, 41));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 4), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 5), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 6), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 7), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 8), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 9), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 10), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 11), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 12), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 13), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 14), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 15), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 16), _MAV_RETURN_uint16_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 17), _MAV_RETURN_uint16_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 18), _MAV_RETURN_uint16_t(msg, 38));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 19), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels, 20), _MAV_RETURN_uint8_t(msg, 41));

}

}         


static inline uint16_t p_mavlink_msg_request_data_stream_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* request_data_stream)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_REQUEST_DATA_STREAM_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(request_data_stream, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(request_data_stream, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(request_data_stream, 2)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(request_data_stream, 3)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(request_data_stream, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_REQUEST_DATA_STREAM_LEN);
msg->msgid = MAVLINK_MSG_ID_REQUEST_DATA_STREAM;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_REQUEST_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_REQUEST_DATA_STREAM_LEN, MAVLINK_MSG_ID_REQUEST_DATA_STREAM_CRC);

}          


static inline void p_mavlink_msg_request_data_stream_decode(const mavlink_message_t* msg, PRT_VALUE** request_data_stream)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*request_data_stream == NULL)
{
*request_data_stream = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_request_data_stream_t);

PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 4), _MAV_RETURN_uint8_t(msg, 5));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*request_data_stream, 4), _MAV_RETURN_uint8_t(msg, 5));

}

}         


static inline uint16_t p_mavlink_msg_data_stream_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* data_stream)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_DATA_STREAM_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(data_stream, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(data_stream, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(data_stream, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DATA_STREAM_LEN);
msg->msgid = MAVLINK_MSG_ID_DATA_STREAM;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DATA_STREAM_MIN_LEN, MAVLINK_MSG_ID_DATA_STREAM_LEN, MAVLINK_MSG_ID_DATA_STREAM_CRC);

}          


static inline void p_mavlink_msg_data_stream_decode(const mavlink_message_t* msg, PRT_VALUE** data_stream)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*data_stream == NULL)
{
*data_stream = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_data_stream_t);

PrtPrimSetInt(PrtTupleGetNC(*data_stream, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*data_stream, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*data_stream, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*data_stream, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*data_stream, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*data_stream, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         


static inline uint16_t p_mavlink_msg_manual_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* manual_control)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MANUAL_CONTROL_LEN];

_mav_put_int16_t(buf, 0, (int16_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 0)));
_mav_put_int16_t(buf, 2, (int16_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 1)));
_mav_put_int16_t(buf, 4, (int16_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 2)));
_mav_put_int16_t(buf, 6, (int16_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 3)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 4)));
_mav_put_uint8_t(buf, 10, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(manual_control, 5)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_CONTROL_LEN);
msg->msgid = MAVLINK_MSG_ID_MANUAL_CONTROL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_LEN, MAVLINK_MSG_ID_MANUAL_CONTROL_CRC);

}          


static inline void p_mavlink_msg_manual_control_decode(const mavlink_message_t* msg, PRT_VALUE** manual_control)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*manual_control == NULL)
{
*manual_control = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_manual_control_t);

PrtPrimSetInt(PrtTupleGetNC(*manual_control, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 2), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 3), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 4), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 5), _MAV_RETURN_uint8_t(msg, 10));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*manual_control, 0), _MAV_RETURN_int16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 1), _MAV_RETURN_int16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 2), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 3), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 4), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*manual_control, 5), _MAV_RETURN_uint8_t(msg, 10));

}

}         


static inline uint16_t p_mavlink_msg_rc_channels_override_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* rc_channels_override)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 0)));
_mav_put_uint16_t(buf, 2, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 1)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 2)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 3)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 4)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 5)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 6)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 7)));
_mav_put_uint8_t(buf, 16, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 8)));
_mav_put_uint8_t(buf, 17, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(rc_channels_override, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE_LEN);
msg->msgid = MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE_MIN_LEN, MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE_LEN, MAVLINK_MSG_ID_RC_CHANNELS_OVERRIDE_CRC);

}          


static inline void p_mavlink_msg_rc_channels_override_decode(const mavlink_message_t* msg, PRT_VALUE** rc_channels_override)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*rc_channels_override == NULL)
{
*rc_channels_override = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_rc_channels_override_t);

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 2), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 3), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 4), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 5), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 6), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 7), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 8), _MAV_RETURN_uint8_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 9), _MAV_RETURN_uint8_t(msg, 17));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 2), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 3), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 4), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 5), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 6), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 7), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 8), _MAV_RETURN_uint8_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*rc_channels_override, 9), _MAV_RETURN_uint8_t(msg, 17));

}

}         


static inline uint16_t p_mavlink_msg_mission_item_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mission_item_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MISSION_ITEM_INT_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(mission_item_int, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(mission_item_int, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(mission_item_int, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(mission_item_int, 3)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 4)));
_mav_put_int32_t(buf, 20, (int32_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(mission_item_int, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 7)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 8)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 9)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 10)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 11)));
_mav_put_uint8_t(buf, 35, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 12)));
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(mission_item_int, 13)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MISSION_ITEM_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_MISSION_ITEM_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MISSION_ITEM_INT_MIN_LEN, MAVLINK_MSG_ID_MISSION_ITEM_INT_LEN, MAVLINK_MSG_ID_MISSION_ITEM_INT_CRC);

}          


static inline void p_mavlink_msg_mission_item_int_decode(const mavlink_message_t* msg, PRT_VALUE** mission_item_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mission_item_int == NULL)
{
*mission_item_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mission_item_int_t);

PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 5), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 12), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 13), _MAV_RETURN_uint8_t(msg, 36));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 5), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*mission_item_int, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 12), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*mission_item_int, 13), _MAV_RETURN_uint8_t(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_vfr_hud_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* vfr_hud)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_VFR_HUD_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(vfr_hud, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(vfr_hud, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(vfr_hud, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(vfr_hud, 3)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(vfr_hud, 4)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(vfr_hud, 5)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VFR_HUD_LEN);
msg->msgid = MAVLINK_MSG_ID_VFR_HUD;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VFR_HUD_MIN_LEN, MAVLINK_MSG_ID_VFR_HUD_LEN, MAVLINK_MSG_ID_VFR_HUD_CRC);

}          


static inline void p_mavlink_msg_vfr_hud_decode(const mavlink_message_t* msg, PRT_VALUE** vfr_hud)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*vfr_hud == NULL)
{
*vfr_hud = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_vfr_hud_t);

PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*vfr_hud, 4), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*vfr_hud, 5), _MAV_RETURN_uint16_t(msg, 18));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vfr_hud, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*vfr_hud, 4), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*vfr_hud, 5), _MAV_RETURN_uint16_t(msg, 18));

}

}         


static inline uint16_t p_mavlink_msg_command_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* command_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_COMMAND_INT_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(command_int, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(command_int, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(command_int, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(command_int, 3)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 4)));
_mav_put_int32_t(buf, 20, (int32_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(command_int, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 7)));
_mav_put_uint8_t(buf, 30, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 8)));
_mav_put_uint8_t(buf, 31, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 9)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 10)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 11)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_int, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_COMMAND_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_INT_MIN_LEN, MAVLINK_MSG_ID_COMMAND_INT_LEN, MAVLINK_MSG_ID_COMMAND_INT_CRC);

}          


static inline void p_mavlink_msg_command_int_decode(const mavlink_message_t* msg, PRT_VALUE** command_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*command_int == NULL)
{
*command_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_command_int_t);

PrtSetFloat32(PrtTupleGetNC(*command_int, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*command_int, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*command_int, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*command_int, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 5), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*command_int, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 12), _MAV_RETURN_uint8_t(msg, 34));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*command_int, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*command_int, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*command_int, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*command_int, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 5), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*command_int, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*command_int, 12), _MAV_RETURN_uint8_t(msg, 34));

}

}         


static inline uint16_t p_mavlink_msg_command_long_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* command_long)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_COMMAND_LONG_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(command_long, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(command_long, 7)));
_mav_put_uint8_t(buf, 30, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_long, 8)));
_mav_put_uint8_t(buf, 31, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_long, 9)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_long, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_LONG_LEN);
msg->msgid = MAVLINK_MSG_ID_COMMAND_LONG;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_LONG_MIN_LEN, MAVLINK_MSG_ID_COMMAND_LONG_LEN, MAVLINK_MSG_ID_COMMAND_LONG_CRC);

}          


static inline void p_mavlink_msg_command_long_decode(const mavlink_message_t* msg, PRT_VALUE** command_long)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*command_long == NULL)
{
*command_long = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_command_long_t);

PrtSetFloat32(PrtTupleGetNC(*command_long, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*command_long, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*command_long, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*command_long, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*command_long, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*command_long, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*command_long, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 10), _MAV_RETURN_uint8_t(msg, 32));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*command_long, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*command_long, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*command_long, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*command_long, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*command_long, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*command_long, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*command_long, 6), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*command_long, 10), _MAV_RETURN_uint8_t(msg, 32));

}

}         


static inline uint16_t p_mavlink_msg_command_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* command_ack)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_COMMAND_ACK_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(command_ack, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(command_ack, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COMMAND_ACK_LEN);
msg->msgid = MAVLINK_MSG_ID_COMMAND_ACK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COMMAND_ACK_MIN_LEN, MAVLINK_MSG_ID_COMMAND_ACK_LEN, MAVLINK_MSG_ID_COMMAND_ACK_CRC);

}          


static inline void p_mavlink_msg_command_ack_decode(const mavlink_message_t* msg, PRT_VALUE** command_ack)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*command_ack == NULL)
{
*command_ack = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_command_ack_t);

PrtPrimSetInt(PrtTupleGetNC(*command_ack, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*command_ack, 1), _MAV_RETURN_uint8_t(msg, 2));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*command_ack, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*command_ack, 1), _MAV_RETURN_uint8_t(msg, 2));

}

}         


static inline uint16_t p_mavlink_msg_manual_setpoint_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* manual_setpoint)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MANUAL_SETPOINT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(manual_setpoint, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(manual_setpoint, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(manual_setpoint, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(manual_setpoint, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(manual_setpoint, 4)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(manual_setpoint, 5)));
_mav_put_uint8_t(buf, 21, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(manual_setpoint, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MANUAL_SETPOINT_LEN);
msg->msgid = MAVLINK_MSG_ID_MANUAL_SETPOINT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MANUAL_SETPOINT_MIN_LEN, MAVLINK_MSG_ID_MANUAL_SETPOINT_LEN, MAVLINK_MSG_ID_MANUAL_SETPOINT_CRC);

}          


static inline void p_mavlink_msg_manual_setpoint_decode(const mavlink_message_t* msg, PRT_VALUE** manual_setpoint)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*manual_setpoint == NULL)
{
*manual_setpoint = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_manual_setpoint_t);

PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 5), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 6), _MAV_RETURN_uint8_t(msg, 21));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*manual_setpoint, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 5), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*manual_setpoint, 6), _MAV_RETURN_uint8_t(msg, 21));

}

}         


static inline uint16_t p_mavlink_msg_set_attitude_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_attitude_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_ATTITUDE_TARGET_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(set_attitude_target, 0)));

count = 0;
seqVal = PrtTupleGetNC(set_attitude_target, 1);
while(count < 4)
{
    
_mav_put_float(buf, 4 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(set_attitude_target, 2)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(set_attitude_target, 3)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(set_attitude_target, 4)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(set_attitude_target, 5)));
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_attitude_target, 6)));
_mav_put_uint8_t(buf, 37, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_attitude_target, 7)));
_mav_put_uint8_t(buf, 38, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_attitude_target, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ATTITUDE_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_ATTITUDE_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ATTITUDE_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_TARGET_CRC);

}          


static inline void p_mavlink_msg_set_attitude_target_decode(const mavlink_message_t* msg, PRT_VALUE** set_attitude_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_attitude_target == NULL)
{
*set_attitude_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_attitude_target_t);

PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 0), _MAV_RETURN_uint32_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*set_attitude_target, 1);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 4 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 2), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 3), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 4), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 5), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 6), _MAV_RETURN_uint8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 7), _MAV_RETURN_uint8_t(msg, 37));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 8), _MAV_RETURN_uint8_t(msg, 38));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 0), _MAV_RETURN_uint32_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*set_attitude_target, 1);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 4 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 2), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 3), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 4), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_attitude_target, 5), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 6), _MAV_RETURN_uint8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 7), _MAV_RETURN_uint8_t(msg, 37));
PrtPrimSetInt(PrtTupleGetNC(*set_attitude_target, 8), _MAV_RETURN_uint8_t(msg, 38));

}

}         


static inline uint16_t p_mavlink_msg_attitude_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* attitude_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ATTITUDE_TARGET_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(attitude_target, 0)));

count = 0;
seqVal = PrtTupleGetNC(attitude_target, 1);
while(count < 4)
{
    
_mav_put_float(buf, 4 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(attitude_target, 2)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(attitude_target, 3)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(attitude_target, 4)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(attitude_target, 5)));
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(attitude_target, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATTITUDE_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_ATTITUDE_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATTITUDE_TARGET_MIN_LEN, MAVLINK_MSG_ID_ATTITUDE_TARGET_LEN, MAVLINK_MSG_ID_ATTITUDE_TARGET_CRC);

}          


static inline void p_mavlink_msg_attitude_target_decode(const mavlink_message_t* msg, PRT_VALUE** attitude_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*attitude_target == NULL)
{
*attitude_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_attitude_target_t);

PrtPrimSetInt(PrtTupleGetNC(*attitude_target, 0), _MAV_RETURN_uint32_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*attitude_target, 1);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 4 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 2), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 3), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 4), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 5), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*attitude_target, 6), _MAV_RETURN_uint8_t(msg, 36));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*attitude_target, 0), _MAV_RETURN_uint32_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*attitude_target, 1);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 4 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 2), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 3), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 4), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*attitude_target, 5), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*attitude_target, 6), _MAV_RETURN_uint8_t(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_set_position_target_local_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_position_target_local_ned)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_local_ned, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 7)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 8)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 9)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 10)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_local_ned, 11)));
_mav_put_uint16_t(buf, 48, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_local_ned, 12)));
_mav_put_uint8_t(buf, 50, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_local_ned, 13)));
_mav_put_uint8_t(buf, 51, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_local_ned, 14)));
_mav_put_uint8_t(buf, 52, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_local_ned, 15)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED_MIN_LEN, MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED_LEN, MAVLINK_MSG_ID_SET_POSITION_TARGET_LOCAL_NED_CRC);

}          


static inline void p_mavlink_msg_set_position_target_local_ned_decode(const mavlink_message_t* msg, PRT_VALUE** set_position_target_local_ned)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_position_target_local_ned == NULL)
{
*set_position_target_local_ned = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_position_target_local_ned_t);

PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 13), _MAV_RETURN_uint8_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 14), _MAV_RETURN_uint8_t(msg, 51));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 15), _MAV_RETURN_uint8_t(msg, 52));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_local_ned, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 13), _MAV_RETURN_uint8_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 14), _MAV_RETURN_uint8_t(msg, 51));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_local_ned, 15), _MAV_RETURN_uint8_t(msg, 52));

}

}         


static inline uint16_t p_mavlink_msg_position_target_local_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* position_target_local_ned)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(position_target_local_ned, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 7)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 8)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 9)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 10)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(position_target_local_ned, 11)));
_mav_put_uint16_t(buf, 48, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(position_target_local_ned, 12)));
_mav_put_uint8_t(buf, 50, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(position_target_local_ned, 13)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED_LEN);
msg->msgid = MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED_MIN_LEN, MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED_LEN, MAVLINK_MSG_ID_POSITION_TARGET_LOCAL_NED_CRC);

}          


static inline void p_mavlink_msg_position_target_local_ned_decode(const mavlink_message_t* msg, PRT_VALUE** position_target_local_ned)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*position_target_local_ned == NULL)
{
*position_target_local_ned = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_position_target_local_ned_t);

PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 13), _MAV_RETURN_uint8_t(msg, 50));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*position_target_local_ned, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*position_target_local_ned, 13), _MAV_RETURN_uint8_t(msg, 50));

}

}         


static inline uint16_t p_mavlink_msg_set_position_target_global_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_position_target_global_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 7)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 8)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 9)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 10)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(set_position_target_global_int, 11)));
_mav_put_uint16_t(buf, 48, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 12)));
_mav_put_uint8_t(buf, 50, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 13)));
_mav_put_uint8_t(buf, 51, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 14)));
_mav_put_uint8_t(buf, 52, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_position_target_global_int, 15)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT_MIN_LEN, MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT_LEN, MAVLINK_MSG_ID_SET_POSITION_TARGET_GLOBAL_INT_CRC);

}          


static inline void p_mavlink_msg_set_position_target_global_int_decode(const mavlink_message_t* msg, PRT_VALUE** set_position_target_global_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_position_target_global_int == NULL)
{
*set_position_target_global_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_position_target_global_int_t);

PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 13), _MAV_RETURN_uint8_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 14), _MAV_RETURN_uint8_t(msg, 51));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 15), _MAV_RETURN_uint8_t(msg, 52));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_position_target_global_int, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 13), _MAV_RETURN_uint8_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 14), _MAV_RETURN_uint8_t(msg, 51));
PrtPrimSetInt(PrtTupleGetNC(*set_position_target_global_int, 15), _MAV_RETURN_uint8_t(msg, 52));

}

}         


static inline uint16_t p_mavlink_msg_position_target_global_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* position_target_global_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(position_target_global_int, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(position_target_global_int, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(position_target_global_int, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 7)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 8)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 9)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 10)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(position_target_global_int, 11)));
_mav_put_uint16_t(buf, 48, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(position_target_global_int, 12)));
_mav_put_uint8_t(buf, 50, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(position_target_global_int, 13)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT_MIN_LEN, MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT_LEN, MAVLINK_MSG_ID_POSITION_TARGET_GLOBAL_INT_CRC);

}          


static inline void p_mavlink_msg_position_target_global_int_decode(const mavlink_message_t* msg, PRT_VALUE** position_target_global_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*position_target_global_int == NULL)
{
*position_target_global_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_position_target_global_int_t);

PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 13), _MAV_RETURN_uint8_t(msg, 50));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*position_target_global_int, 11), _MAV_RETURN_float(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 12), _MAV_RETURN_uint16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*position_target_global_int, 13), _MAV_RETURN_uint8_t(msg, 50));

}

}         


static inline uint16_t p_mavlink_msg_local_position_ned_system_global_offset_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* local_position_ned_system_global_offset)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(local_position_ned_system_global_offset, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(local_position_ned_system_global_offset, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_LEN);
msg->msgid = MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_MIN_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_LEN, MAVLINK_MSG_ID_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET_CRC);

}          


static inline void p_mavlink_msg_local_position_ned_system_global_offset_decode(const mavlink_message_t* msg, PRT_VALUE** local_position_ned_system_global_offset)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*local_position_ned_system_global_offset == NULL)
{
*local_position_ned_system_global_offset = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_local_position_ned_system_global_offset_t);

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_system_global_offset, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 6), _MAV_RETURN_float(msg, 24));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*local_position_ned_system_global_offset, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*local_position_ned_system_global_offset, 6), _MAV_RETURN_float(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_hil_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_state)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_STATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(hil_state, 6)));
_mav_put_int32_t(buf, 32, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 7)));
_mav_put_int32_t(buf, 36, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 8)));
_mav_put_int32_t(buf, 40, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 9)));
_mav_put_int16_t(buf, 44, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 10)));
_mav_put_int16_t(buf, 46, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 11)));
_mav_put_int16_t(buf, 48, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 12)));
_mav_put_int16_t(buf, 50, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 13)));
_mav_put_int16_t(buf, 52, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 14)));
_mav_put_int16_t(buf, 54, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state, 15)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_STATE_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_STATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_STATE_MIN_LEN, MAVLINK_MSG_ID_HIL_STATE_LEN, MAVLINK_MSG_ID_HIL_STATE_CRC);

}          


static inline void p_mavlink_msg_hil_state_decode(const mavlink_message_t* msg, PRT_VALUE** hil_state)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_state == NULL)
{
*hil_state = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_state_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_state, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 7), _MAV_RETURN_int32_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 8), _MAV_RETURN_int32_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 9), _MAV_RETURN_int32_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 10), _MAV_RETURN_int16_t(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 11), _MAV_RETURN_int16_t(msg, 46));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 12), _MAV_RETURN_int16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 13), _MAV_RETURN_int16_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 14), _MAV_RETURN_int16_t(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 15), _MAV_RETURN_int16_t(msg, 54));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_state, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_state, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 7), _MAV_RETURN_int32_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 8), _MAV_RETURN_int32_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 9), _MAV_RETURN_int32_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 10), _MAV_RETURN_int16_t(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 11), _MAV_RETURN_int16_t(msg, 46));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 12), _MAV_RETURN_int16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 13), _MAV_RETURN_int16_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 14), _MAV_RETURN_int16_t(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*hil_state, 15), _MAV_RETURN_int16_t(msg, 54));

}

}         


static inline uint16_t p_mavlink_msg_hil_controls_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_controls)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_CONTROLS_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_controls, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(hil_controls, 8)));
_mav_put_uint8_t(buf, 40, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_controls, 9)));
_mav_put_uint8_t(buf, 41, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_controls, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_CONTROLS_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_CONTROLS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_CONTROLS_MIN_LEN, MAVLINK_MSG_ID_HIL_CONTROLS_LEN, MAVLINK_MSG_ID_HIL_CONTROLS_CRC);

}          


static inline void p_mavlink_msg_hil_controls_decode(const mavlink_message_t* msg, PRT_VALUE** hil_controls)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_controls == NULL)
{
*hil_controls = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_controls_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 9), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 10), _MAV_RETURN_uint8_t(msg, 41));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_controls, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 9), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_controls, 10), _MAV_RETURN_uint8_t(msg, 41));

}

}         


static inline uint16_t p_mavlink_msg_hil_rc_inputs_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_rc_inputs_raw)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 0)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 1)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 2)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 3)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 4)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 5)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 6)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 7)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 8)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 9)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 10)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 11)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 12)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_rc_inputs_raw, 13)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW_MIN_LEN, MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW_LEN, MAVLINK_MSG_ID_HIL_RC_INPUTS_RAW_CRC);

}          


static inline void p_mavlink_msg_hil_rc_inputs_raw_decode(const mavlink_message_t* msg, PRT_VALUE** hil_rc_inputs_raw)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_rc_inputs_raw == NULL)
{
*hil_rc_inputs_raw = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_rc_inputs_raw_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 1), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 2), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 7), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 8), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 10), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 11), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 12), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 13), _MAV_RETURN_uint8_t(msg, 32));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 1), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 2), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 7), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 8), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 10), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 11), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 12), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*hil_rc_inputs_raw, 13), _MAV_RETURN_uint8_t(msg, 32));

}

}         


static inline uint16_t p_mavlink_msg_hil_actuator_controls_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_actuator_controls)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_actuator_controls, 0)));
_mav_put_uint64_t(buf, 8, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_actuator_controls, 1)));

count = 0;
seqVal = PrtTupleGetNC(hil_actuator_controls, 2);
while(count < 16)
{
    
_mav_put_float(buf, 16 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 80, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_actuator_controls, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS_MIN_LEN, MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS_LEN, MAVLINK_MSG_ID_HIL_ACTUATOR_CONTROLS_CRC);

}          


static inline void p_mavlink_msg_hil_actuator_controls_decode(const mavlink_message_t* msg, PRT_VALUE** hil_actuator_controls)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_actuator_controls == NULL)
{
*hil_actuator_controls = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_actuator_controls_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 1), _MAV_RETURN_uint64_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*hil_actuator_controls, 2);
while(count < 16)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 16 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 3), _MAV_RETURN_uint8_t(msg, 80));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 1), _MAV_RETURN_uint64_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*hil_actuator_controls, 2);
while(count < 16)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 16 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*hil_actuator_controls, 3), _MAV_RETURN_uint8_t(msg, 80));

}

}         


static inline uint16_t p_mavlink_msg_optical_flow_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* optical_flow)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_OPTICAL_FLOW_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow, 3)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow, 4)));
_mav_put_int16_t(buf, 22, (int16_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow, 5)));
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow, 6)));
_mav_put_uint8_t(buf, 25, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPTICAL_FLOW_LEN);
msg->msgid = MAVLINK_MSG_ID_OPTICAL_FLOW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPTICAL_FLOW_MIN_LEN, MAVLINK_MSG_ID_OPTICAL_FLOW_LEN, MAVLINK_MSG_ID_OPTICAL_FLOW_CRC);

}          


static inline void p_mavlink_msg_optical_flow_decode(const mavlink_message_t* msg, PRT_VALUE** optical_flow)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*optical_flow == NULL)
{
*optical_flow = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_optical_flow_t);

PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 3), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 4), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 5), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 7), _MAV_RETURN_uint8_t(msg, 25));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*optical_flow, 3), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 4), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 5), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow, 7), _MAV_RETURN_uint8_t(msg, 25));

}

}         


static inline uint16_t p_mavlink_msg_global_vision_position_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* global_vision_position_estimate)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(global_vision_position_estimate, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(global_vision_position_estimate, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE_LEN);
msg->msgid = MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_GLOBAL_VISION_POSITION_ESTIMATE_CRC);

}          


static inline void p_mavlink_msg_global_vision_position_estimate_decode(const mavlink_message_t* msg, PRT_VALUE** global_vision_position_estimate)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*global_vision_position_estimate == NULL)
{
*global_vision_position_estimate = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_global_vision_position_estimate_t);

PrtPrimSetInt(PrtTupleGetNC(*global_vision_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*global_vision_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*global_vision_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_vision_position_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* vision_position_estimate)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(vision_position_estimate, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(vision_position_estimate, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE_LEN);
msg->msgid = MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE_CRC);

}          


static inline void p_mavlink_msg_vision_position_estimate_decode(const mavlink_message_t* msg, PRT_VALUE** vision_position_estimate)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*vision_position_estimate == NULL)
{
*vision_position_estimate = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_vision_position_estimate_t);

PrtPrimSetInt(PrtTupleGetNC(*vision_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*vision_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*vision_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_vision_speed_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* vision_speed_estimate)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(vision_speed_estimate, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(vision_speed_estimate, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(vision_speed_estimate, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(vision_speed_estimate, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE_LEN);
msg->msgid = MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE_LEN, MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE_CRC);

}          


static inline void p_mavlink_msg_vision_speed_estimate_decode(const mavlink_message_t* msg, PRT_VALUE** vision_speed_estimate)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*vision_speed_estimate == NULL)
{
*vision_speed_estimate = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_vision_speed_estimate_t);

PrtPrimSetInt(PrtTupleGetNC(*vision_speed_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 3), _MAV_RETURN_float(msg, 16));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*vision_speed_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vision_speed_estimate, 3), _MAV_RETURN_float(msg, 16));

}

}         


static inline uint16_t p_mavlink_msg_vicon_position_estimate_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* vicon_position_estimate)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(vicon_position_estimate, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(vicon_position_estimate, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE_LEN);
msg->msgid = MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE_MIN_LEN, MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE_LEN, MAVLINK_MSG_ID_VICON_POSITION_ESTIMATE_CRC);

}          


static inline void p_mavlink_msg_vicon_position_estimate_decode(const mavlink_message_t* msg, PRT_VALUE** vicon_position_estimate)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*vicon_position_estimate == NULL)
{
*vicon_position_estimate = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_vicon_position_estimate_t);

PrtPrimSetInt(PrtTupleGetNC(*vicon_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*vicon_position_estimate, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*vicon_position_estimate, 6), _MAV_RETURN_float(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_highres_imu_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* highres_imu)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIGHRES_IMU_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(highres_imu, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 8)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 9)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 10)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 11)));
_mav_put_float(buf, 52, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 12)));
_mav_put_float(buf, 56, (float)PrtGetFloat32(PrtTupleGetNC(highres_imu, 13)));
_mav_put_uint16_t(buf, 60, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(highres_imu, 14)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIGHRES_IMU_LEN);
msg->msgid = MAVLINK_MSG_ID_HIGHRES_IMU;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIGHRES_IMU_MIN_LEN, MAVLINK_MSG_ID_HIGHRES_IMU_LEN, MAVLINK_MSG_ID_HIGHRES_IMU_CRC);

}          


static inline void p_mavlink_msg_highres_imu_decode(const mavlink_message_t* msg, PRT_VALUE** highres_imu)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*highres_imu == NULL)
{
*highres_imu = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_highres_imu_t);

PrtPrimSetInt(PrtTupleGetNC(*highres_imu, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 12), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 13), _MAV_RETURN_float(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*highres_imu, 14), _MAV_RETURN_uint16_t(msg, 60));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*highres_imu, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 12), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*highres_imu, 13), _MAV_RETURN_float(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*highres_imu, 14), _MAV_RETURN_uint16_t(msg, 60));

}

}         


static inline uint16_t p_mavlink_msg_optical_flow_rad_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* optical_flow_rad)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 6)));
_mav_put_uint32_t(buf, 32, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(optical_flow_rad, 8)));
_mav_put_int16_t(buf, 40, (int16_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 9)));
_mav_put_uint8_t(buf, 42, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 10)));
_mav_put_uint8_t(buf, 43, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(optical_flow_rad, 11)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_LEN);
msg->msgid = MAVLINK_MSG_ID_OPTICAL_FLOW_RAD;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_OPTICAL_FLOW_RAD_CRC);

}          


static inline void p_mavlink_msg_optical_flow_rad_decode(const mavlink_message_t* msg, PRT_VALUE** optical_flow_rad)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*optical_flow_rad == NULL)
{
*optical_flow_rad = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_optical_flow_rad_t);

PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 7), _MAV_RETURN_uint32_t(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 9), _MAV_RETURN_int16_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 10), _MAV_RETURN_uint8_t(msg, 42));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 11), _MAV_RETURN_uint8_t(msg, 43));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 7), _MAV_RETURN_uint32_t(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*optical_flow_rad, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 9), _MAV_RETURN_int16_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 10), _MAV_RETURN_uint8_t(msg, 42));
PrtPrimSetInt(PrtTupleGetNC(*optical_flow_rad, 11), _MAV_RETURN_uint8_t(msg, 43));

}

}         


static inline uint16_t p_mavlink_msg_hil_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_sensor)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_SENSOR_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_sensor, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 8)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 9)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 10)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 11)));
_mav_put_float(buf, 52, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 12)));
_mav_put_float(buf, 56, (float)PrtGetFloat32(PrtTupleGetNC(hil_sensor, 13)));
_mav_put_uint32_t(buf, 60, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(hil_sensor, 14)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_SENSOR_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_SENSOR;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_SENSOR_MIN_LEN, MAVLINK_MSG_ID_HIL_SENSOR_LEN, MAVLINK_MSG_ID_HIL_SENSOR_CRC);

}          


static inline void p_mavlink_msg_hil_sensor_decode(const mavlink_message_t* msg, PRT_VALUE** hil_sensor)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_sensor == NULL)
{
*hil_sensor = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_sensor_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_sensor, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 12), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 13), _MAV_RETURN_float(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*hil_sensor, 14), _MAV_RETURN_uint32_t(msg, 60));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_sensor, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 12), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*hil_sensor, 13), _MAV_RETURN_float(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*hil_sensor, 14), _MAV_RETURN_uint32_t(msg, 60));

}

}         


static inline uint16_t p_mavlink_msg_sim_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* sim_state)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SIM_STATE_LEN];

_mav_put_float(buf, 0, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 5)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 6)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 7)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 8)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 9)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 10)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 11)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 12)));
_mav_put_float(buf, 52, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 13)));
_mav_put_float(buf, 56, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 14)));
_mav_put_float(buf, 60, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 15)));
_mav_put_float(buf, 64, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 16)));
_mav_put_float(buf, 68, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 17)));
_mav_put_float(buf, 72, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 18)));
_mav_put_float(buf, 76, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 19)));
_mav_put_float(buf, 80, (float)PrtGetFloat32(PrtTupleGetNC(sim_state, 20)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SIM_STATE_LEN);
msg->msgid = MAVLINK_MSG_ID_SIM_STATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SIM_STATE_MIN_LEN, MAVLINK_MSG_ID_SIM_STATE_LEN, MAVLINK_MSG_ID_SIM_STATE_CRC);

}          


static inline void p_mavlink_msg_sim_state_decode(const mavlink_message_t* msg, PRT_VALUE** sim_state)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*sim_state == NULL)
{
*sim_state = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_sim_state_t);

PrtSetFloat32(PrtTupleGetNC(*sim_state, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 11), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 12), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 13), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 14), _MAV_RETURN_float(msg, 56));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 15), _MAV_RETURN_float(msg, 60));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 16), _MAV_RETURN_float(msg, 64));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 17), _MAV_RETURN_float(msg, 68));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 18), _MAV_RETURN_float(msg, 72));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 19), _MAV_RETURN_float(msg, 76));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 20), _MAV_RETURN_float(msg, 80));

}
else
{

PrtSetFloat32(PrtTupleGetNC(*sim_state, 0), _MAV_RETURN_float(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 5), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 6), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 7), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 8), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 9), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 10), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 11), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 12), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 13), _MAV_RETURN_float(msg, 52));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 14), _MAV_RETURN_float(msg, 56));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 15), _MAV_RETURN_float(msg, 60));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 16), _MAV_RETURN_float(msg, 64));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 17), _MAV_RETURN_float(msg, 68));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 18), _MAV_RETURN_float(msg, 72));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 19), _MAV_RETURN_float(msg, 76));
PrtSetFloat32(PrtTupleGetNC(*sim_state, 20), _MAV_RETURN_float(msg, 80));

}

}         


static inline uint16_t p_mavlink_msg_radio_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* radio_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RADIO_STATUS_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 0)));
_mav_put_uint16_t(buf, 2, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 1)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 2)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 3)));
_mav_put_uint8_t(buf, 6, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 4)));
_mav_put_uint8_t(buf, 7, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 5)));
_mav_put_uint8_t(buf, 8, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(radio_status, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RADIO_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_RADIO_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RADIO_STATUS_MIN_LEN, MAVLINK_MSG_ID_RADIO_STATUS_LEN, MAVLINK_MSG_ID_RADIO_STATUS_CRC);

}          


static inline void p_mavlink_msg_radio_status_decode(const mavlink_message_t* msg, PRT_VALUE** radio_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*radio_status == NULL)
{
*radio_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_radio_status_t);

PrtPrimSetInt(PrtTupleGetNC(*radio_status, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 3), _MAV_RETURN_uint8_t(msg, 5));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 4), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 5), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 6), _MAV_RETURN_uint8_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*radio_status, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 3), _MAV_RETURN_uint8_t(msg, 5));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 4), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 5), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*radio_status, 6), _MAV_RETURN_uint8_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_file_transfer_protocol_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* file_transfer_protocol)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(file_transfer_protocol, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(file_transfer_protocol, 1)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(file_transfer_protocol, 2)));

count = 0;
seqVal = PrtTupleGetNC(file_transfer_protocol, 3);
while(count < 251)
{
    _mav_put_uint8_t(buf, 3 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL_LEN);
msg->msgid = MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL_MIN_LEN, MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL_LEN, MAVLINK_MSG_ID_FILE_TRANSFER_PROTOCOL_CRC);

}          


static inline void p_mavlink_msg_file_transfer_protocol_decode(const mavlink_message_t* msg, PRT_VALUE** file_transfer_protocol)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*file_transfer_protocol == NULL)
{
*file_transfer_protocol = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_file_transfer_protocol_t);

PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*file_transfer_protocol, 3);
while(count < 251)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 3 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*file_transfer_protocol, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*file_transfer_protocol, 3);
while(count < 251)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 3 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_timesync_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* timesync)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_TIMESYNC_LEN];

_mav_put_int64_t(buf, 0, (int64_t)PrtPrimGetInt(PrtTupleGetNC(timesync, 0)));
_mav_put_int64_t(buf, 8, (int64_t)PrtPrimGetInt(PrtTupleGetNC(timesync, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TIMESYNC_LEN);
msg->msgid = MAVLINK_MSG_ID_TIMESYNC;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TIMESYNC_MIN_LEN, MAVLINK_MSG_ID_TIMESYNC_LEN, MAVLINK_MSG_ID_TIMESYNC_CRC);

}          


static inline void p_mavlink_msg_timesync_decode(const mavlink_message_t* msg, PRT_VALUE** timesync)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*timesync == NULL)
{
*timesync = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_timesync_t);

PrtPrimSetInt(PrtTupleGetNC(*timesync, 0), _MAV_RETURN_int64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*timesync, 1), _MAV_RETURN_int64_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*timesync, 0), _MAV_RETURN_int64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*timesync, 1), _MAV_RETURN_int64_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_camera_trigger_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* camera_trigger)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(camera_trigger, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(camera_trigger, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN);
msg->msgid = MAVLINK_MSG_ID_CAMERA_TRIGGER;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_TRIGGER_MIN_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_LEN, MAVLINK_MSG_ID_CAMERA_TRIGGER_CRC);

}          


static inline void p_mavlink_msg_camera_trigger_decode(const mavlink_message_t* msg, PRT_VALUE** camera_trigger)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*camera_trigger == NULL)
{
*camera_trigger = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_camera_trigger_t);

PrtPrimSetInt(PrtTupleGetNC(*camera_trigger, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*camera_trigger, 1), _MAV_RETURN_uint32_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*camera_trigger, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*camera_trigger, 1), _MAV_RETURN_uint32_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_hil_gps_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_gps)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_GPS_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 0)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 3)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 4)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 5)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 6)));
_mav_put_int16_t(buf, 26, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 7)));
_mav_put_int16_t(buf, 28, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 8)));
_mav_put_int16_t(buf, 30, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 9)));
_mav_put_uint16_t(buf, 32, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 10)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 11)));
_mav_put_uint8_t(buf, 35, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_gps, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_GPS_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_GPS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_GPS_MIN_LEN, MAVLINK_MSG_ID_HIL_GPS_LEN, MAVLINK_MSG_ID_HIL_GPS_CRC);

}          


static inline void p_mavlink_msg_hil_gps_decode(const mavlink_message_t* msg, PRT_VALUE** hil_gps)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_gps == NULL)
{
*hil_gps = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_gps_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 4), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 5), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 6), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 7), _MAV_RETURN_int16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 8), _MAV_RETURN_int16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 9), _MAV_RETURN_int16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 10), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 12), _MAV_RETURN_uint8_t(msg, 35));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 4), _MAV_RETURN_uint16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 5), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 6), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 7), _MAV_RETURN_int16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 8), _MAV_RETURN_int16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 9), _MAV_RETURN_int16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 10), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 11), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*hil_gps, 12), _MAV_RETURN_uint8_t(msg, 35));

}

}         


static inline uint16_t p_mavlink_msg_hil_optical_flow_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_optical_flow)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_OPTICAL_FLOW_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 6)));
_mav_put_uint32_t(buf, 32, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(hil_optical_flow, 8)));
_mav_put_int16_t(buf, 40, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 9)));
_mav_put_uint8_t(buf, 42, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 10)));
_mav_put_uint8_t(buf, 43, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(hil_optical_flow, 11)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_OPTICAL_FLOW_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_OPTICAL_FLOW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_OPTICAL_FLOW_MIN_LEN, MAVLINK_MSG_ID_HIL_OPTICAL_FLOW_LEN, MAVLINK_MSG_ID_HIL_OPTICAL_FLOW_CRC);

}          


static inline void p_mavlink_msg_hil_optical_flow_decode(const mavlink_message_t* msg, PRT_VALUE** hil_optical_flow)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_optical_flow == NULL)
{
*hil_optical_flow = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_optical_flow_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 7), _MAV_RETURN_uint32_t(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 9), _MAV_RETURN_int16_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 10), _MAV_RETURN_uint8_t(msg, 42));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 11), _MAV_RETURN_uint8_t(msg, 43));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 6), _MAV_RETURN_float(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 7), _MAV_RETURN_uint32_t(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*hil_optical_flow, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 9), _MAV_RETURN_int16_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 10), _MAV_RETURN_uint8_t(msg, 42));
PrtPrimSetInt(PrtTupleGetNC(*hil_optical_flow, 11), _MAV_RETURN_uint8_t(msg, 43));

}

}         


static inline uint16_t p_mavlink_msg_hil_state_quaternion_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* hil_state_quaternion)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIL_STATE_QUATERNION_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 0)));

count = 0;
seqVal = PrtTupleGetNC(hil_state_quaternion, 1);
while(count < 4)
{
    
_mav_put_float(buf, 8 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(hil_state_quaternion, 2)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(hil_state_quaternion, 3)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(hil_state_quaternion, 4)));
_mav_put_int32_t(buf, 36, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 5)));
_mav_put_int32_t(buf, 40, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 6)));
_mav_put_int32_t(buf, 44, (int32_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 7)));
_mav_put_int16_t(buf, 48, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 8)));
_mav_put_int16_t(buf, 50, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 9)));
_mav_put_int16_t(buf, 52, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 10)));
_mav_put_uint16_t(buf, 54, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 11)));
_mav_put_uint16_t(buf, 56, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 12)));
_mav_put_int16_t(buf, 58, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 13)));
_mav_put_int16_t(buf, 60, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 14)));
_mav_put_int16_t(buf, 62, (int16_t)PrtPrimGetInt(PrtTupleGetNC(hil_state_quaternion, 15)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIL_STATE_QUATERNION_LEN);
msg->msgid = MAVLINK_MSG_ID_HIL_STATE_QUATERNION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIL_STATE_QUATERNION_MIN_LEN, MAVLINK_MSG_ID_HIL_STATE_QUATERNION_LEN, MAVLINK_MSG_ID_HIL_STATE_QUATERNION_CRC);

}          


static inline void p_mavlink_msg_hil_state_quaternion_decode(const mavlink_message_t* msg, PRT_VALUE** hil_state_quaternion)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*hil_state_quaternion == NULL)
{
*hil_state_quaternion = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_hil_state_quaternion_t);

PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*hil_state_quaternion, 1);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 8 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 4), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 5), _MAV_RETURN_int32_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 6), _MAV_RETURN_int32_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 7), _MAV_RETURN_int32_t(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 8), _MAV_RETURN_int16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 9), _MAV_RETURN_int16_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 10), _MAV_RETURN_int16_t(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 11), _MAV_RETURN_uint16_t(msg, 54));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 12), _MAV_RETURN_uint16_t(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 13), _MAV_RETURN_int16_t(msg, 58));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 14), _MAV_RETURN_int16_t(msg, 60));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 15), _MAV_RETURN_int16_t(msg, 62));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*hil_state_quaternion, 1);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 8 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*hil_state_quaternion, 4), _MAV_RETURN_float(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 5), _MAV_RETURN_int32_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 6), _MAV_RETURN_int32_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 7), _MAV_RETURN_int32_t(msg, 44));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 8), _MAV_RETURN_int16_t(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 9), _MAV_RETURN_int16_t(msg, 50));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 10), _MAV_RETURN_int16_t(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 11), _MAV_RETURN_uint16_t(msg, 54));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 12), _MAV_RETURN_uint16_t(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 13), _MAV_RETURN_int16_t(msg, 58));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 14), _MAV_RETURN_int16_t(msg, 60));
PrtPrimSetInt(PrtTupleGetNC(*hil_state_quaternion, 15), _MAV_RETURN_int16_t(msg, 62));

}

}         


static inline uint16_t p_mavlink_msg_scaled_imu2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_imu2)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_IMU2_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 0)));
_mav_put_int16_t(buf, 4, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 1)));
_mav_put_int16_t(buf, 6, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 2)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 3)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 4)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 5)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 6)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 7)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 8)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu2, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_IMU2_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_IMU2;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_IMU2_MIN_LEN, MAVLINK_MSG_ID_SCALED_IMU2_LEN, MAVLINK_MSG_ID_SCALED_IMU2_CRC);

}          


static inline void p_mavlink_msg_scaled_imu2_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_imu2)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_imu2 == NULL)
{
*scaled_imu2 = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_imu2_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 9), _MAV_RETURN_int16_t(msg, 20));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu2, 9), _MAV_RETURN_int16_t(msg, 20));

}

}         


static inline uint16_t p_mavlink_msg_log_request_list_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_request_list)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_REQUEST_LIST_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_request_list, 0)));
_mav_put_uint16_t(buf, 2, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_request_list, 1)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_list, 2)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_list, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_REQUEST_LIST_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_REQUEST_LIST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_REQUEST_LIST_MIN_LEN, MAVLINK_MSG_ID_LOG_REQUEST_LIST_LEN, MAVLINK_MSG_ID_LOG_REQUEST_LIST_CRC);

}          


static inline void p_mavlink_msg_log_request_list_decode(const mavlink_message_t* msg, PRT_VALUE** log_request_list)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_request_list == NULL)
{
*log_request_list = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_request_list_t);

PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 2), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_request_list, 3), _MAV_RETURN_uint8_t(msg, 5));

}

}         


static inline uint16_t p_mavlink_msg_log_entry_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_entry)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_ENTRY_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(log_entry, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(log_entry, 1)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_entry, 2)));
_mav_put_uint16_t(buf, 10, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_entry, 3)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_entry, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_ENTRY_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_ENTRY;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_ENTRY_MIN_LEN, MAVLINK_MSG_ID_LOG_ENTRY_LEN, MAVLINK_MSG_ID_LOG_ENTRY_CRC);

}          


static inline void p_mavlink_msg_log_entry_decode(const mavlink_message_t* msg, PRT_VALUE** log_entry)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_entry == NULL)
{
*log_entry = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_entry_t);

PrtPrimSetInt(PrtTupleGetNC(*log_entry, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 2), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 3), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 4), _MAV_RETURN_uint16_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_entry, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 2), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 3), _MAV_RETURN_uint16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*log_entry, 4), _MAV_RETURN_uint16_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_log_request_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_request_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_REQUEST_DATA_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(log_request_data, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(log_request_data, 1)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_request_data, 2)));
_mav_put_uint8_t(buf, 10, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_data, 3)));
_mav_put_uint8_t(buf, 11, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_data, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_REQUEST_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_REQUEST_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_REQUEST_DATA_MIN_LEN, MAVLINK_MSG_ID_LOG_REQUEST_DATA_LEN, MAVLINK_MSG_ID_LOG_REQUEST_DATA_CRC);

}          


static inline void p_mavlink_msg_log_request_data_decode(const mavlink_message_t* msg, PRT_VALUE** log_request_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_request_data == NULL)
{
*log_request_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_request_data_t);

PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 2), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 3), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 4), _MAV_RETURN_uint8_t(msg, 11));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 2), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 3), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*log_request_data, 4), _MAV_RETURN_uint8_t(msg, 11));

}

}         


static inline uint16_t p_mavlink_msg_log_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_DATA_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(log_data, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(log_data, 1)));
_mav_put_uint8_t(buf, 6, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_data, 2)));

count = 0;
seqVal = PrtTupleGetNC(log_data, 3);
while(count < 90)
{
    _mav_put_uint8_t(buf, 7 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_DATA_MIN_LEN, MAVLINK_MSG_ID_LOG_DATA_LEN, MAVLINK_MSG_ID_LOG_DATA_CRC);

}          


static inline void p_mavlink_msg_log_data_decode(const mavlink_message_t* msg, PRT_VALUE** log_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_data == NULL)
{
*log_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_data_t);

PrtPrimSetInt(PrtTupleGetNC(*log_data, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_data, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_data, 2), _MAV_RETURN_uint8_t(msg, 6));

count = 0;
seqVal = PrtTupleGetNC(*log_data, 3);
while(count < 90)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 7 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_data, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_data, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*log_data, 2), _MAV_RETURN_uint8_t(msg, 6));

count = 0;
seqVal = PrtTupleGetNC(*log_data, 3);
while(count < 90)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 7 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_log_erase_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_erase)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_ERASE_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_erase, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_erase, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_ERASE_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_ERASE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_ERASE_MIN_LEN, MAVLINK_MSG_ID_LOG_ERASE_LEN, MAVLINK_MSG_ID_LOG_ERASE_CRC);

}          


static inline void p_mavlink_msg_log_erase_decode(const mavlink_message_t* msg, PRT_VALUE** log_erase)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_erase == NULL)
{
*log_erase = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_erase_t);

PrtPrimSetInt(PrtTupleGetNC(*log_erase, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_erase, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_erase, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_erase, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_log_request_end_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* log_request_end)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOG_REQUEST_END_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_end, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(log_request_end, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOG_REQUEST_END_LEN);
msg->msgid = MAVLINK_MSG_ID_LOG_REQUEST_END;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOG_REQUEST_END_MIN_LEN, MAVLINK_MSG_ID_LOG_REQUEST_END_LEN, MAVLINK_MSG_ID_LOG_REQUEST_END_CRC);

}          


static inline void p_mavlink_msg_log_request_end_decode(const mavlink_message_t* msg, PRT_VALUE** log_request_end)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*log_request_end == NULL)
{
*log_request_end = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_log_request_end_t);

PrtPrimSetInt(PrtTupleGetNC(*log_request_end, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_end, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*log_request_end, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*log_request_end, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_gps_inject_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_inject_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_inject_data, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_inject_data, 1)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_inject_data, 2)));

count = 0;
seqVal = PrtTupleGetNC(gps_inject_data, 3);
while(count < 110)
{
    _mav_put_uint8_t(buf, 3 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_INJECT_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_INJECT_DATA_MIN_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_LEN, MAVLINK_MSG_ID_GPS_INJECT_DATA_CRC);

}          


static inline void p_mavlink_msg_gps_inject_data_decode(const mavlink_message_t* msg, PRT_VALUE** gps_inject_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_inject_data == NULL)
{
*gps_inject_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_inject_data_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*gps_inject_data, 3);
while(count < 110)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 3 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 1), _MAV_RETURN_uint8_t(msg, 1));
PrtPrimSetInt(PrtTupleGetNC(*gps_inject_data, 2), _MAV_RETURN_uint8_t(msg, 2));

count = 0;
seqVal = PrtTupleGetNC(*gps_inject_data, 3);
while(count < 110)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 3 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_gps2_raw_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps2_raw)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS2_RAW_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 0)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 3)));
_mav_put_uint32_t(buf, 20, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 4)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 5)));
_mav_put_uint16_t(buf, 26, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 7)));
_mav_put_uint16_t(buf, 30, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 8)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 9)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 10)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_raw, 11)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS2_RAW_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS2_RAW;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS2_RAW_MIN_LEN, MAVLINK_MSG_ID_GPS2_RAW_LEN, MAVLINK_MSG_ID_GPS2_RAW_CRC);

}          


static inline void p_mavlink_msg_gps2_raw_decode(const mavlink_message_t* msg, PRT_VALUE** gps2_raw)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps2_raw == NULL)
{
*gps2_raw = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps2_raw_t);

PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 4), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 5), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 6), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 11), _MAV_RETURN_uint8_t(msg, 34));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 4), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 5), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 6), _MAV_RETURN_uint16_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 8), _MAV_RETURN_uint16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 9), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 10), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps2_raw, 11), _MAV_RETURN_uint8_t(msg, 34));

}

}         


static inline uint16_t p_mavlink_msg_power_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* power_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_POWER_STATUS_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(power_status, 0)));
_mav_put_uint16_t(buf, 2, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(power_status, 1)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(power_status, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POWER_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_POWER_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POWER_STATUS_MIN_LEN, MAVLINK_MSG_ID_POWER_STATUS_LEN, MAVLINK_MSG_ID_POWER_STATUS_CRC);

}          


static inline void p_mavlink_msg_power_status_decode(const mavlink_message_t* msg, PRT_VALUE** power_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*power_status == NULL)
{
*power_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_power_status_t);

PrtPrimSetInt(PrtTupleGetNC(*power_status, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*power_status, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*power_status, 2), _MAV_RETURN_uint16_t(msg, 4));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*power_status, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*power_status, 1), _MAV_RETURN_uint16_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*power_status, 2), _MAV_RETURN_uint16_t(msg, 4));

}

}         


static inline uint16_t p_mavlink_msg_serial_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* serial_control)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SERIAL_CONTROL_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(serial_control, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(serial_control, 1)));
_mav_put_uint8_t(buf, 6, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(serial_control, 2)));
_mav_put_uint8_t(buf, 7, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(serial_control, 3)));
_mav_put_uint8_t(buf, 8, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(serial_control, 4)));

count = 0;
seqVal = PrtTupleGetNC(serial_control, 5);
while(count < 70)
{
    _mav_put_uint8_t(buf, 9 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SERIAL_CONTROL_LEN);
msg->msgid = MAVLINK_MSG_ID_SERIAL_CONTROL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SERIAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_SERIAL_CONTROL_LEN, MAVLINK_MSG_ID_SERIAL_CONTROL_CRC);

}          


static inline void p_mavlink_msg_serial_control_decode(const mavlink_message_t* msg, PRT_VALUE** serial_control)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*serial_control == NULL)
{
*serial_control = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_serial_control_t);

PrtPrimSetInt(PrtTupleGetNC(*serial_control, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 2), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 3), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 4), _MAV_RETURN_uint8_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*serial_control, 5);
while(count < 70)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 9 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*serial_control, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 2), _MAV_RETURN_uint8_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 3), _MAV_RETURN_uint8_t(msg, 7));
PrtPrimSetInt(PrtTupleGetNC(*serial_control, 4), _MAV_RETURN_uint8_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*serial_control, 5);
while(count < 70)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 9 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_gps_rtk_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_rtk)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_RTK_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 2)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 3)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 4)));
_mav_put_uint32_t(buf, 20, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 5)));
_mav_put_int32_t(buf, 24, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 7)));
_mav_put_uint8_t(buf, 30, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 8)));
_mav_put_uint8_t(buf, 31, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 9)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 10)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 11)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtk, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_RTK_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_RTK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_RTK_MIN_LEN, MAVLINK_MSG_ID_GPS_RTK_LEN, MAVLINK_MSG_ID_GPS_RTK_CRC);

}          


static inline void p_mavlink_msg_gps_rtk_decode(const mavlink_message_t* msg, PRT_VALUE** gps_rtk)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_rtk == NULL)
{
*gps_rtk = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_rtk_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 5), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 6), _MAV_RETURN_int32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 12), _MAV_RETURN_uint8_t(msg, 34));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 5), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 6), _MAV_RETURN_int32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtk, 12), _MAV_RETURN_uint8_t(msg, 34));

}

}         


static inline uint16_t p_mavlink_msg_gps2_rtk_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps2_rtk)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS2_RTK_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 2)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 3)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 4)));
_mav_put_uint32_t(buf, 20, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 5)));
_mav_put_int32_t(buf, 24, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 6)));
_mav_put_uint16_t(buf, 28, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 7)));
_mav_put_uint8_t(buf, 30, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 8)));
_mav_put_uint8_t(buf, 31, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 9)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 10)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 11)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps2_rtk, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS2_RTK_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS2_RTK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS2_RTK_MIN_LEN, MAVLINK_MSG_ID_GPS2_RTK_LEN, MAVLINK_MSG_ID_GPS2_RTK_CRC);

}          


static inline void p_mavlink_msg_gps2_rtk_decode(const mavlink_message_t* msg, PRT_VALUE** gps2_rtk)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps2_rtk == NULL)
{
*gps2_rtk = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps2_rtk_t);

PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 5), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 6), _MAV_RETURN_int32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 12), _MAV_RETURN_uint8_t(msg, 34));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 4), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 5), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 6), _MAV_RETURN_int32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 7), _MAV_RETURN_uint16_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 8), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 9), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 10), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 11), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*gps2_rtk, 12), _MAV_RETURN_uint8_t(msg, 34));

}

}         


static inline uint16_t p_mavlink_msg_scaled_imu3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_imu3)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_IMU3_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 0)));
_mav_put_int16_t(buf, 4, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 1)));
_mav_put_int16_t(buf, 6, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 2)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 3)));
_mav_put_int16_t(buf, 10, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 4)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 5)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 6)));
_mav_put_int16_t(buf, 16, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 7)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 8)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_imu3, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_IMU3_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_IMU3;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_IMU3_MIN_LEN, MAVLINK_MSG_ID_SCALED_IMU3_LEN, MAVLINK_MSG_ID_SCALED_IMU3_CRC);

}          


static inline void p_mavlink_msg_scaled_imu3_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_imu3)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_imu3 == NULL)
{
*scaled_imu3 = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_imu3_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 9), _MAV_RETURN_int16_t(msg, 20));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 1), _MAV_RETURN_int16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 2), _MAV_RETURN_int16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 3), _MAV_RETURN_int16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 4), _MAV_RETURN_int16_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 5), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 6), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 7), _MAV_RETURN_int16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 8), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*scaled_imu3, 9), _MAV_RETURN_int16_t(msg, 20));

}

}         


static inline uint16_t p_mavlink_msg_data_transmission_handshake_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* data_transmission_handshake)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 2)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 3)));
_mav_put_uint8_t(buf, 10, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 4)));
_mav_put_uint8_t(buf, 11, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 5)));
_mav_put_uint8_t(buf, 12, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(data_transmission_handshake, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE_LEN);
msg->msgid = MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE_MIN_LEN, MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE_LEN, MAVLINK_MSG_ID_DATA_TRANSMISSION_HANDSHAKE_CRC);

}          


static inline void p_mavlink_msg_data_transmission_handshake_decode(const mavlink_message_t* msg, PRT_VALUE** data_transmission_handshake)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*data_transmission_handshake == NULL)
{
*data_transmission_handshake = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_data_transmission_handshake_t);

PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 4), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 5), _MAV_RETURN_uint8_t(msg, 11));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 6), _MAV_RETURN_uint8_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 4), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 5), _MAV_RETURN_uint8_t(msg, 11));
PrtPrimSetInt(PrtTupleGetNC(*data_transmission_handshake, 6), _MAV_RETURN_uint8_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_encapsulated_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* encapsulated_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(encapsulated_data, 0)));

count = 0;
seqVal = PrtTupleGetNC(encapsulated_data, 1);
while(count < 253)
{
    _mav_put_uint8_t(buf, 2 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_ENCAPSULATED_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ENCAPSULATED_DATA_MIN_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_LEN, MAVLINK_MSG_ID_ENCAPSULATED_DATA_CRC);

}          


static inline void p_mavlink_msg_encapsulated_data_decode(const mavlink_message_t* msg, PRT_VALUE** encapsulated_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*encapsulated_data == NULL)
{
*encapsulated_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_encapsulated_data_t);

PrtPrimSetInt(PrtTupleGetNC(*encapsulated_data, 0), _MAV_RETURN_uint16_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*encapsulated_data, 1);
while(count < 253)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 2 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*encapsulated_data, 0), _MAV_RETURN_uint16_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*encapsulated_data, 1);
while(count < 253)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 2 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_distance_sensor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* distance_sensor)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 1)));
_mav_put_uint16_t(buf, 6, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 2)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 3)));
_mav_put_uint8_t(buf, 10, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 4)));
_mav_put_uint8_t(buf, 11, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 5)));
_mav_put_uint8_t(buf, 12, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 6)));
_mav_put_uint8_t(buf, 13, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(distance_sensor, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_LEN);
msg->msgid = MAVLINK_MSG_ID_DISTANCE_SENSOR;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DISTANCE_SENSOR_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_CRC);

}          


static inline void p_mavlink_msg_distance_sensor_decode(const mavlink_message_t* msg, PRT_VALUE** distance_sensor)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*distance_sensor == NULL)
{
*distance_sensor = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_distance_sensor_t);

PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 4), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 5), _MAV_RETURN_uint8_t(msg, 11));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 6), _MAV_RETURN_uint8_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 7), _MAV_RETURN_uint8_t(msg, 13));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 1), _MAV_RETURN_uint16_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 2), _MAV_RETURN_uint16_t(msg, 6));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 3), _MAV_RETURN_uint16_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 4), _MAV_RETURN_uint8_t(msg, 10));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 5), _MAV_RETURN_uint8_t(msg, 11));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 6), _MAV_RETURN_uint8_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*distance_sensor, 7), _MAV_RETURN_uint8_t(msg, 13));

}

}         


static inline uint16_t p_mavlink_msg_terrain_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* terrain_request)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_TERRAIN_REQUEST_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(terrain_request, 0)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_request, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_request, 2)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(terrain_request, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_REQUEST_LEN);
msg->msgid = MAVLINK_MSG_ID_TERRAIN_REQUEST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TERRAIN_REQUEST_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_REQUEST_LEN, MAVLINK_MSG_ID_TERRAIN_REQUEST_CRC);

}          


static inline void p_mavlink_msg_terrain_request_decode(const mavlink_message_t* msg, PRT_VALUE** terrain_request)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*terrain_request == NULL)
{
*terrain_request = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_terrain_request_t);

PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 3), _MAV_RETURN_uint16_t(msg, 16));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 1), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*terrain_request, 3), _MAV_RETURN_uint16_t(msg, 16));

}

}         


static inline uint16_t p_mavlink_msg_terrain_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* terrain_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_TERRAIN_DATA_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_data, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_data, 1)));
_mav_put_uint16_t(buf, 8, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(terrain_data, 2)));

count = 0;
seqVal = PrtTupleGetNC(terrain_data, 3);
while(count < 16)
{
    _mav_put_int16_t(buf, 10 + count * 2, (int16_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 42, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(terrain_data, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_TERRAIN_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TERRAIN_DATA_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_DATA_LEN, MAVLINK_MSG_ID_TERRAIN_DATA_CRC);

}          


static inline void p_mavlink_msg_terrain_data_decode(const mavlink_message_t* msg, PRT_VALUE** terrain_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*terrain_data == NULL)
{
*terrain_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_terrain_data_t);

PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 2), _MAV_RETURN_uint16_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*terrain_data, 3);
while(count < 16)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_int16_t(msg, 10 + count * 2));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 4), _MAV_RETURN_uint8_t(msg, 42));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 2), _MAV_RETURN_uint16_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*terrain_data, 3);
while(count < 16)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_int16_t(msg, 10 + count * 2));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*terrain_data, 4), _MAV_RETURN_uint8_t(msg, 42));

}

}         


static inline uint16_t p_mavlink_msg_terrain_check_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* terrain_check)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_TERRAIN_CHECK_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_check, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_check, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_CHECK_LEN);
msg->msgid = MAVLINK_MSG_ID_TERRAIN_CHECK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TERRAIN_CHECK_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_CHECK_LEN, MAVLINK_MSG_ID_TERRAIN_CHECK_CRC);

}          


static inline void p_mavlink_msg_terrain_check_decode(const mavlink_message_t* msg, PRT_VALUE** terrain_check)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*terrain_check == NULL)
{
*terrain_check = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_terrain_check_t);

PrtPrimSetInt(PrtTupleGetNC(*terrain_check, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_check, 1), _MAV_RETURN_int32_t(msg, 4));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*terrain_check, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_check, 1), _MAV_RETURN_int32_t(msg, 4));

}

}         


static inline uint16_t p_mavlink_msg_terrain_report_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* terrain_report)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_TERRAIN_REPORT_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_report, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(terrain_report, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(terrain_report, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(terrain_report, 3)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(terrain_report, 4)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(terrain_report, 5)));
_mav_put_uint16_t(buf, 20, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(terrain_report, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TERRAIN_REPORT_LEN);
msg->msgid = MAVLINK_MSG_ID_TERRAIN_REPORT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TERRAIN_REPORT_MIN_LEN, MAVLINK_MSG_ID_TERRAIN_REPORT_LEN, MAVLINK_MSG_ID_TERRAIN_REPORT_CRC);

}          


static inline void p_mavlink_msg_terrain_report_decode(const mavlink_message_t* msg, PRT_VALUE** terrain_report)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*terrain_report == NULL)
{
*terrain_report = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_terrain_report_t);

PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 1), _MAV_RETURN_int32_t(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*terrain_report, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*terrain_report, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 6), _MAV_RETURN_uint16_t(msg, 20));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 1), _MAV_RETURN_int32_t(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*terrain_report, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*terrain_report, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*terrain_report, 6), _MAV_RETURN_uint16_t(msg, 20));

}

}         


static inline uint16_t p_mavlink_msg_scaled_pressure2_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_pressure2)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_PRESSURE2_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure2, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure2, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure2, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure2, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_PRESSURE2_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_PRESSURE2;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_PRESSURE2_MIN_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE2_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE2_CRC);

}          


static inline void p_mavlink_msg_scaled_pressure2_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_pressure2)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_pressure2 == NULL)
{
*scaled_pressure2 = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_pressure2_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure2, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure2, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure2, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure2, 3), _MAV_RETURN_int16_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure2, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure2, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure2, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure2, 3), _MAV_RETURN_int16_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_att_pos_mocap_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* att_pos_mocap)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ATT_POS_MOCAP_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(att_pos_mocap, 0)));

count = 0;
seqVal = PrtTupleGetNC(att_pos_mocap, 1);
while(count < 4)
{
    
_mav_put_float(buf, 8 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(att_pos_mocap, 2)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(att_pos_mocap, 3)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(att_pos_mocap, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ATT_POS_MOCAP_LEN);
msg->msgid = MAVLINK_MSG_ID_ATT_POS_MOCAP;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ATT_POS_MOCAP_MIN_LEN, MAVLINK_MSG_ID_ATT_POS_MOCAP_LEN, MAVLINK_MSG_ID_ATT_POS_MOCAP_CRC);

}          


static inline void p_mavlink_msg_att_pos_mocap_decode(const mavlink_message_t* msg, PRT_VALUE** att_pos_mocap)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*att_pos_mocap == NULL)
{
*att_pos_mocap = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_att_pos_mocap_t);

PrtPrimSetInt(PrtTupleGetNC(*att_pos_mocap, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*att_pos_mocap, 1);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 8 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 4), _MAV_RETURN_float(msg, 32));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*att_pos_mocap, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*att_pos_mocap, 1);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 8 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 2), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 3), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*att_pos_mocap, 4), _MAV_RETURN_float(msg, 32));

}

}         


static inline uint16_t p_mavlink_msg_set_actuator_control_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_actuator_control_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(set_actuator_control_target, 0)));

count = 0;
seqVal = PrtTupleGetNC(set_actuator_control_target, 1);
while(count < 8)
{
    
_mav_put_float(buf, 8 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 40, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_actuator_control_target, 2)));
_mav_put_uint8_t(buf, 41, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_actuator_control_target, 3)));
_mav_put_uint8_t(buf, 42, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_actuator_control_target, 4)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET_LEN, MAVLINK_MSG_ID_SET_ACTUATOR_CONTROL_TARGET_CRC);

}          


static inline void p_mavlink_msg_set_actuator_control_target_decode(const mavlink_message_t* msg, PRT_VALUE** set_actuator_control_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_actuator_control_target == NULL)
{
*set_actuator_control_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_actuator_control_target_t);

PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*set_actuator_control_target, 1);
while(count < 8)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 8 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 2), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 3), _MAV_RETURN_uint8_t(msg, 41));
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 4), _MAV_RETURN_uint8_t(msg, 42));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*set_actuator_control_target, 1);
while(count < 8)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 8 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 2), _MAV_RETURN_uint8_t(msg, 40));
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 3), _MAV_RETURN_uint8_t(msg, 41));
PrtPrimSetInt(PrtTupleGetNC(*set_actuator_control_target, 4), _MAV_RETURN_uint8_t(msg, 42));

}

}         


static inline uint16_t p_mavlink_msg_actuator_control_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* actuator_control_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(actuator_control_target, 0)));

count = 0;
seqVal = PrtTupleGetNC(actuator_control_target, 1);
while(count < 8)
{
    
_mav_put_float(buf, 8 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 40, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(actuator_control_target, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET_MIN_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET_LEN, MAVLINK_MSG_ID_ACTUATOR_CONTROL_TARGET_CRC);

}          


static inline void p_mavlink_msg_actuator_control_target_decode(const mavlink_message_t* msg, PRT_VALUE** actuator_control_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*actuator_control_target == NULL)
{
*actuator_control_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_actuator_control_target_t);

PrtPrimSetInt(PrtTupleGetNC(*actuator_control_target, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*actuator_control_target, 1);
while(count < 8)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 8 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*actuator_control_target, 2), _MAV_RETURN_uint8_t(msg, 40));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*actuator_control_target, 0), _MAV_RETURN_uint64_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*actuator_control_target, 1);
while(count < 8)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 8 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*actuator_control_target, 2), _MAV_RETURN_uint8_t(msg, 40));

}

}         


static inline uint16_t p_mavlink_msg_altitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* altitude)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ALTITUDE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(altitude, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(altitude, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ALTITUDE_LEN);
msg->msgid = MAVLINK_MSG_ID_ALTITUDE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ALTITUDE_MIN_LEN, MAVLINK_MSG_ID_ALTITUDE_LEN, MAVLINK_MSG_ID_ALTITUDE_CRC);

}          


static inline void p_mavlink_msg_altitude_decode(const mavlink_message_t* msg, PRT_VALUE** altitude)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*altitude == NULL)
{
*altitude = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_altitude_t);

PrtPrimSetInt(PrtTupleGetNC(*altitude, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*altitude, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*altitude, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*altitude, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*altitude, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*altitude, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*altitude, 6), _MAV_RETURN_float(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*altitude, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*altitude, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*altitude, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*altitude, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*altitude, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*altitude, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*altitude, 6), _MAV_RETURN_float(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_resource_request_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* resource_request)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_RESOURCE_REQUEST_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(resource_request, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(resource_request, 1)));

count = 0;
seqVal = PrtTupleGetNC(resource_request, 2);
while(count < 120)
{
    _mav_put_uint8_t(buf, 2 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 122, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(resource_request, 3)));

count = 0;
seqVal = PrtTupleGetNC(resource_request, 4);
while(count < 120)
{
    _mav_put_uint8_t(buf, 123 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RESOURCE_REQUEST_LEN);
msg->msgid = MAVLINK_MSG_ID_RESOURCE_REQUEST;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RESOURCE_REQUEST_MIN_LEN, MAVLINK_MSG_ID_RESOURCE_REQUEST_LEN, MAVLINK_MSG_ID_RESOURCE_REQUEST_CRC);

}          


static inline void p_mavlink_msg_resource_request_decode(const mavlink_message_t* msg, PRT_VALUE** resource_request)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*resource_request == NULL)
{
*resource_request = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_resource_request_t);

PrtPrimSetInt(PrtTupleGetNC(*resource_request, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*resource_request, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*resource_request, 2);
while(count < 120)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 2 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*resource_request, 3), _MAV_RETURN_uint8_t(msg, 122));

count = 0;
seqVal = PrtTupleGetNC(*resource_request, 4);
while(count < 120)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 123 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*resource_request, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*resource_request, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*resource_request, 2);
while(count < 120)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 2 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*resource_request, 3), _MAV_RETURN_uint8_t(msg, 122));

count = 0;
seqVal = PrtTupleGetNC(*resource_request, 4);
while(count < 120)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 123 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_scaled_pressure3_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* scaled_pressure3)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SCALED_PRESSURE3_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure3, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure3, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(scaled_pressure3, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(scaled_pressure3, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SCALED_PRESSURE3_LEN);
msg->msgid = MAVLINK_MSG_ID_SCALED_PRESSURE3;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SCALED_PRESSURE3_MIN_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE3_LEN, MAVLINK_MSG_ID_SCALED_PRESSURE3_CRC);

}          


static inline void p_mavlink_msg_scaled_pressure3_decode(const mavlink_message_t* msg, PRT_VALUE** scaled_pressure3)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*scaled_pressure3 == NULL)
{
*scaled_pressure3 = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_scaled_pressure3_t);

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure3, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure3, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure3, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure3, 3), _MAV_RETURN_int16_t(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure3, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure3, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*scaled_pressure3, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*scaled_pressure3, 3), _MAV_RETURN_int16_t(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_follow_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* follow_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_FOLLOW_TARGET_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(follow_target, 0)));
_mav_put_uint64_t(buf, 8, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(follow_target, 1)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(follow_target, 2)));
_mav_put_int32_t(buf, 20, (int32_t)PrtPrimGetInt(PrtTupleGetNC(follow_target, 3)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(follow_target, 4)));

count = 0;
seqVal = PrtTupleGetNC(follow_target, 5);
while(count < 3)
{
    
_mav_put_float(buf, 28 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(follow_target, 6);
while(count < 3)
{
    
_mav_put_float(buf, 40 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(follow_target, 7);
while(count < 4)
{
    
_mav_put_float(buf, 52 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(follow_target, 8);
while(count < 3)
{
    
_mav_put_float(buf, 68 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(follow_target, 9);
while(count < 3)
{
    
_mav_put_float(buf, 80 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 92, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(follow_target, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FOLLOW_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_FOLLOW_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FOLLOW_TARGET_MIN_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_LEN, MAVLINK_MSG_ID_FOLLOW_TARGET_CRC);

}          


static inline void p_mavlink_msg_follow_target_decode(const mavlink_message_t* msg, PRT_VALUE** follow_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*follow_target == NULL)
{
*follow_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_follow_target_t);

PrtPrimSetInt(PrtTupleGetNC(*follow_target, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 2), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 3), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*follow_target, 4), _MAV_RETURN_float(msg, 24));

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 5);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 28 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 6);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 40 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 7);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 52 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 8);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 68 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 9);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 80 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 10), _MAV_RETURN_uint8_t(msg, 92));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*follow_target, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 2), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 3), _MAV_RETURN_int32_t(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*follow_target, 4), _MAV_RETURN_float(msg, 24));

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 5);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 28 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 6);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 40 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 7);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 52 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 8);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 68 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*follow_target, 9);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 80 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*follow_target, 10), _MAV_RETURN_uint8_t(msg, 92));

}

}         


static inline uint16_t p_mavlink_msg_control_system_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* control_system_state)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(control_system_state, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 8)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 9)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 10)));

count = 0;
seqVal = PrtTupleGetNC(control_system_state, 11);
while(count < 3)
{
    
_mav_put_float(buf, 48 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(control_system_state, 12);
while(count < 3)
{
    
_mav_put_float(buf, 60 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(control_system_state, 13);
while(count < 4)
{
    
_mav_put_float(buf, 72 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 88, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 14)));
_mav_put_float(buf, 92, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 15)));
_mav_put_float(buf, 96, (float)PrtGetFloat32(PrtTupleGetNC(control_system_state, 16)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN);
msg->msgid = MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_MIN_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_LEN, MAVLINK_MSG_ID_CONTROL_SYSTEM_STATE_CRC);

}          


static inline void p_mavlink_msg_control_system_state_decode(const mavlink_message_t* msg, PRT_VALUE** control_system_state)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*control_system_state == NULL)
{
*control_system_state = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_control_system_state_t);

PrtPrimSetInt(PrtTupleGetNC(*control_system_state, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 10), _MAV_RETURN_float(msg, 44));

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 11);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 48 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 12);
while(count < 3)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 60 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 13);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 72 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 14), _MAV_RETURN_float(msg, 88));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 15), _MAV_RETURN_float(msg, 92));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 16), _MAV_RETURN_float(msg, 96));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*control_system_state, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 10), _MAV_RETURN_float(msg, 44));

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 11);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 48 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 12);
while(count < 3)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 60 + count * 4));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*control_system_state, 13);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 72 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 14), _MAV_RETURN_float(msg, 88));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 15), _MAV_RETURN_float(msg, 92));
PrtSetFloat32(PrtTupleGetNC(*control_system_state, 16), _MAV_RETURN_float(msg, 96));

}

}         


static inline uint16_t p_mavlink_msg_battery_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* battery_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_BATTERY_STATUS_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 1)));
_mav_put_int16_t(buf, 8, (int16_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 2)));

count = 0;
seqVal = PrtTupleGetNC(battery_status, 3);
while(count < 10)
{
    _mav_put_uint16_t(buf, 10 + count * 2, (uint16_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_int16_t(buf, 30, (int16_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 4)));
_mav_put_uint8_t(buf, 32, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 5)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 6)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 7)));
_mav_put_int8_t(buf, 35, (int8_t)PrtPrimGetInt(PrtTupleGetNC(battery_status, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BATTERY_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_BATTERY_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BATTERY_STATUS_MIN_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_LEN, MAVLINK_MSG_ID_BATTERY_STATUS_CRC);

}          


static inline void p_mavlink_msg_battery_status_decode(const mavlink_message_t* msg, PRT_VALUE** battery_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*battery_status == NULL)
{
*battery_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_battery_status_t);

PrtPrimSetInt(PrtTupleGetNC(*battery_status, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 2), _MAV_RETURN_int16_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*battery_status, 3);
while(count < 10)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint16_t(msg, 10 + count * 2));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 4), _MAV_RETURN_int16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 5), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 6), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 7), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 8), _MAV_RETURN_int8_t(msg, 35));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*battery_status, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 2), _MAV_RETURN_int16_t(msg, 8));

count = 0;
seqVal = PrtTupleGetNC(*battery_status, 3);
while(count < 10)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint16_t(msg, 10 + count * 2));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 4), _MAV_RETURN_int16_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 5), _MAV_RETURN_uint8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 6), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 7), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*battery_status, 8), _MAV_RETURN_int8_t(msg, 35));

}

}         


static inline uint16_t p_mavlink_msg_autopilot_version_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* autopilot_version)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 0)));
_mav_put_uint64_t(buf, 8, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 1)));
_mav_put_uint32_t(buf, 16, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 2)));
_mav_put_uint32_t(buf, 20, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 3)));
_mav_put_uint32_t(buf, 24, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 4)));
_mav_put_uint32_t(buf, 28, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 5)));
_mav_put_uint16_t(buf, 32, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 6)));
_mav_put_uint16_t(buf, 34, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(autopilot_version, 7)));

count = 0;
seqVal = PrtTupleGetNC(autopilot_version, 8);
while(count < 8)
{
    _mav_put_uint8_t(buf, 36 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(autopilot_version, 9);
while(count < 8)
{
    _mav_put_uint8_t(buf, 44 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(autopilot_version, 10);
while(count < 8)
{
    _mav_put_uint8_t(buf, 52 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN);
msg->msgid = MAVLINK_MSG_ID_AUTOPILOT_VERSION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AUTOPILOT_VERSION_MIN_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_LEN, MAVLINK_MSG_ID_AUTOPILOT_VERSION_CRC);

}          


static inline void p_mavlink_msg_autopilot_version_decode(const mavlink_message_t* msg, PRT_VALUE** autopilot_version)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*autopilot_version == NULL)
{
*autopilot_version = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_autopilot_version_t);

PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 2), _MAV_RETURN_uint32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 3), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 4), _MAV_RETURN_uint32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 5), _MAV_RETURN_uint32_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 6), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 7), _MAV_RETURN_uint16_t(msg, 34));

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 8);
while(count < 8)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 36 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 9);
while(count < 8)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 44 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 10);
while(count < 8)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 52 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 2), _MAV_RETURN_uint32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 3), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 4), _MAV_RETURN_uint32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 5), _MAV_RETURN_uint32_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 6), _MAV_RETURN_uint16_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*autopilot_version, 7), _MAV_RETURN_uint16_t(msg, 34));

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 8);
while(count < 8)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 36 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 9);
while(count < 8)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 44 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*autopilot_version, 10);
while(count < 8)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 52 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_landing_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* landing_target)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LANDING_TARGET_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(landing_target, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(landing_target, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(landing_target, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(landing_target, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(landing_target, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(landing_target, 5)));
_mav_put_uint8_t(buf, 28, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(landing_target, 6)));
_mav_put_uint8_t(buf, 29, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(landing_target, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LANDING_TARGET_LEN);
msg->msgid = MAVLINK_MSG_ID_LANDING_TARGET;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LANDING_TARGET_MIN_LEN, MAVLINK_MSG_ID_LANDING_TARGET_LEN, MAVLINK_MSG_ID_LANDING_TARGET_CRC);

}          


static inline void p_mavlink_msg_landing_target_decode(const mavlink_message_t* msg, PRT_VALUE** landing_target)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*landing_target == NULL)
{
*landing_target = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_landing_target_t);

PrtPrimSetInt(PrtTupleGetNC(*landing_target, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 5), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*landing_target, 6), _MAV_RETURN_uint8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*landing_target, 7), _MAV_RETURN_uint8_t(msg, 29));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*landing_target, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*landing_target, 5), _MAV_RETURN_float(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*landing_target, 6), _MAV_RETURN_uint8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*landing_target, 7), _MAV_RETURN_uint8_t(msg, 29));

}

}         


static inline uint16_t p_mavlink_msg_estimator_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* estimator_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(estimator_status, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(estimator_status, 8)));
_mav_put_uint16_t(buf, 40, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(estimator_status, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESTIMATOR_STATUS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_LEN, MAVLINK_MSG_ID_ESTIMATOR_STATUS_CRC);

}          


static inline void p_mavlink_msg_estimator_status_decode(const mavlink_message_t* msg, PRT_VALUE** estimator_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*estimator_status == NULL)
{
*estimator_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_estimator_status_t);

PrtPrimSetInt(PrtTupleGetNC(*estimator_status, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*estimator_status, 9), _MAV_RETURN_uint16_t(msg, 40));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*estimator_status, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*estimator_status, 8), _MAV_RETURN_float(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*estimator_status, 9), _MAV_RETURN_uint16_t(msg, 40));

}

}         


static inline uint16_t p_mavlink_msg_wind_cov_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* wind_cov)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_WIND_COV_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(wind_cov, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(wind_cov, 8)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WIND_COV_LEN);
msg->msgid = MAVLINK_MSG_ID_WIND_COV;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WIND_COV_MIN_LEN, MAVLINK_MSG_ID_WIND_COV_LEN, MAVLINK_MSG_ID_WIND_COV_CRC);

}          


static inline void p_mavlink_msg_wind_cov_decode(const mavlink_message_t* msg, PRT_VALUE** wind_cov)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*wind_cov == NULL)
{
*wind_cov = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_wind_cov_t);

PrtPrimSetInt(PrtTupleGetNC(*wind_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 8), _MAV_RETURN_float(msg, 36));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*wind_cov, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 3), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*wind_cov, 8), _MAV_RETURN_float(msg, 36));

}

}         


static inline uint16_t p_mavlink_msg_gps_input_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_input)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_INPUT_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 3)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 4)));
_mav_put_float(buf, 24, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 5)));
_mav_put_float(buf, 28, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 6)));
_mav_put_float(buf, 32, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 7)));
_mav_put_float(buf, 36, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 8)));
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 9)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 10)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 11)));
_mav_put_float(buf, 52, (float)PrtGetFloat32(PrtTupleGetNC(gps_input, 12)));
_mav_put_uint16_t(buf, 56, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 13)));
_mav_put_uint16_t(buf, 58, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 14)));
_mav_put_uint8_t(buf, 60, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 15)));
_mav_put_uint8_t(buf, 61, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 16)));
_mav_put_uint8_t(buf, 62, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_input, 17)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_INPUT_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_INPUT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_INPUT_MIN_LEN, MAVLINK_MSG_ID_GPS_INPUT_LEN, MAVLINK_MSG_ID_GPS_INPUT_CRC);

}          


static inline void p_mavlink_msg_gps_input_decode(const mavlink_message_t* msg, PRT_VALUE** gps_input)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_input == NULL)
{
*gps_input = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_input_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_input, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 3), _MAV_RETURN_int32_t(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 12), _MAV_RETURN_float(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 13), _MAV_RETURN_uint16_t(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 14), _MAV_RETURN_uint16_t(msg, 58));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 15), _MAV_RETURN_uint8_t(msg, 60));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 16), _MAV_RETURN_uint8_t(msg, 61));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 17), _MAV_RETURN_uint8_t(msg, 62));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_input, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 3), _MAV_RETURN_int32_t(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 4), _MAV_RETURN_float(msg, 20));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 5), _MAV_RETURN_float(msg, 24));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 6), _MAV_RETURN_float(msg, 28));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 7), _MAV_RETURN_float(msg, 32));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 8), _MAV_RETURN_float(msg, 36));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 9), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 10), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 11), _MAV_RETURN_float(msg, 48));
PrtSetFloat32(PrtTupleGetNC(*gps_input, 12), _MAV_RETURN_float(msg, 52));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 13), _MAV_RETURN_uint16_t(msg, 56));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 14), _MAV_RETURN_uint16_t(msg, 58));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 15), _MAV_RETURN_uint8_t(msg, 60));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 16), _MAV_RETURN_uint8_t(msg, 61));
PrtPrimSetInt(PrtTupleGetNC(*gps_input, 17), _MAV_RETURN_uint8_t(msg, 62));

}

}         


static inline uint16_t p_mavlink_msg_gps_rtcm_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* gps_rtcm_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_GPS_RTCM_DATA_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtcm_data, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(gps_rtcm_data, 1)));

count = 0;
seqVal = PrtTupleGetNC(gps_rtcm_data, 2);
while(count < 180)
{
    _mav_put_uint8_t(buf, 2 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GPS_RTCM_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_GPS_RTCM_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GPS_RTCM_DATA_MIN_LEN, MAVLINK_MSG_ID_GPS_RTCM_DATA_LEN, MAVLINK_MSG_ID_GPS_RTCM_DATA_CRC);

}          


static inline void p_mavlink_msg_gps_rtcm_data_decode(const mavlink_message_t* msg, PRT_VALUE** gps_rtcm_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*gps_rtcm_data == NULL)
{
*gps_rtcm_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_gps_rtcm_data_t);

PrtPrimSetInt(PrtTupleGetNC(*gps_rtcm_data, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtcm_data, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*gps_rtcm_data, 2);
while(count < 180)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 2 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*gps_rtcm_data, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*gps_rtcm_data, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*gps_rtcm_data, 2);
while(count < 180)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 2 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_high_latency_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* high_latency)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HIGH_LATENCY_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 2)));
_mav_put_int16_t(buf, 12, (int16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 3)));
_mav_put_int16_t(buf, 14, (int16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 4)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 5)));
_mav_put_int16_t(buf, 18, (int16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 6)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 7)));
_mav_put_int16_t(buf, 22, (int16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 8)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 9)));
_mav_put_uint8_t(buf, 26, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 10)));
_mav_put_uint8_t(buf, 27, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 11)));
_mav_put_int8_t(buf, 28, (int8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 12)));
_mav_put_uint8_t(buf, 29, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 13)));
_mav_put_uint8_t(buf, 30, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 14)));
_mav_put_uint8_t(buf, 31, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 15)));
_mav_put_int8_t(buf, 32, (int8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 16)));
_mav_put_uint8_t(buf, 33, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 17)));
_mav_put_uint8_t(buf, 34, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 18)));
_mav_put_uint8_t(buf, 35, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 19)));
_mav_put_int8_t(buf, 36, (int8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 20)));
_mav_put_int8_t(buf, 37, (int8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 21)));
_mav_put_uint8_t(buf, 38, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 22)));
_mav_put_uint8_t(buf, 39, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(high_latency, 23)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HIGH_LATENCY_LEN);
msg->msgid = MAVLINK_MSG_ID_HIGH_LATENCY;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HIGH_LATENCY_MIN_LEN, MAVLINK_MSG_ID_HIGH_LATENCY_LEN, MAVLINK_MSG_ID_HIGH_LATENCY_CRC);

}          


static inline void p_mavlink_msg_high_latency_decode(const mavlink_message_t* msg, PRT_VALUE** high_latency)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*high_latency == NULL)
{
*high_latency = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_high_latency_t);

PrtPrimSetInt(PrtTupleGetNC(*high_latency, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 4), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 6), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 7), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 8), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 10), _MAV_RETURN_uint8_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 11), _MAV_RETURN_uint8_t(msg, 27));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 12), _MAV_RETURN_int8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 13), _MAV_RETURN_uint8_t(msg, 29));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 14), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 15), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 16), _MAV_RETURN_int8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 17), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 18), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 19), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 20), _MAV_RETURN_int8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 21), _MAV_RETURN_int8_t(msg, 37));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 22), _MAV_RETURN_uint8_t(msg, 38));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 23), _MAV_RETURN_uint8_t(msg, 39));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*high_latency, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 3), _MAV_RETURN_int16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 4), _MAV_RETURN_int16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 6), _MAV_RETURN_int16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 7), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 8), _MAV_RETURN_int16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 9), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 10), _MAV_RETURN_uint8_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 11), _MAV_RETURN_uint8_t(msg, 27));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 12), _MAV_RETURN_int8_t(msg, 28));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 13), _MAV_RETURN_uint8_t(msg, 29));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 14), _MAV_RETURN_uint8_t(msg, 30));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 15), _MAV_RETURN_uint8_t(msg, 31));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 16), _MAV_RETURN_int8_t(msg, 32));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 17), _MAV_RETURN_uint8_t(msg, 33));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 18), _MAV_RETURN_uint8_t(msg, 34));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 19), _MAV_RETURN_uint8_t(msg, 35));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 20), _MAV_RETURN_int8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 21), _MAV_RETURN_int8_t(msg, 37));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 22), _MAV_RETURN_uint8_t(msg, 38));
PrtPrimSetInt(PrtTupleGetNC(*high_latency, 23), _MAV_RETURN_uint8_t(msg, 39));

}

}         


static inline uint16_t p_mavlink_msg_vibration_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* vibration)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_VIBRATION_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(vibration, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(vibration, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(vibration, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(vibration, 3)));
_mav_put_uint32_t(buf, 20, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(vibration, 4)));
_mav_put_uint32_t(buf, 24, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(vibration, 5)));
_mav_put_uint32_t(buf, 28, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(vibration, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VIBRATION_LEN);
msg->msgid = MAVLINK_MSG_ID_VIBRATION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VIBRATION_MIN_LEN, MAVLINK_MSG_ID_VIBRATION_LEN, MAVLINK_MSG_ID_VIBRATION_CRC);

}          


static inline void p_mavlink_msg_vibration_decode(const mavlink_message_t* msg, PRT_VALUE** vibration)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*vibration == NULL)
{
*vibration = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_vibration_t);

PrtPrimSetInt(PrtTupleGetNC(*vibration, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vibration, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vibration, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vibration, 3), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 4), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 5), _MAV_RETURN_uint32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 6), _MAV_RETURN_uint32_t(msg, 28));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*vibration, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*vibration, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*vibration, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*vibration, 3), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 4), _MAV_RETURN_uint32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 5), _MAV_RETURN_uint32_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*vibration, 6), _MAV_RETURN_uint32_t(msg, 28));

}

}         


static inline uint16_t p_mavlink_msg_home_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* home_position)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_HOME_POSITION_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(home_position, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(home_position, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(home_position, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 5)));

count = 0;
seqVal = PrtTupleGetNC(home_position, 6);
while(count < 4)
{
    
_mav_put_float(buf, 24 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 7)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 8)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(home_position, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_HOME_POSITION_LEN);
msg->msgid = MAVLINK_MSG_ID_HOME_POSITION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_HOME_POSITION_LEN, MAVLINK_MSG_ID_HOME_POSITION_CRC);

}          


static inline void p_mavlink_msg_home_position_decode(const mavlink_message_t* msg, PRT_VALUE** home_position)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*home_position == NULL)
{
*home_position = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_home_position_t);

PrtPrimSetInt(PrtTupleGetNC(*home_position, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*home_position, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*home_position, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*home_position, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*home_position, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*home_position, 5), _MAV_RETURN_float(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*home_position, 6);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 24 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*home_position, 7), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*home_position, 8), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*home_position, 9), _MAV_RETURN_float(msg, 48));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*home_position, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*home_position, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*home_position, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*home_position, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*home_position, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*home_position, 5), _MAV_RETURN_float(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*home_position, 6);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 24 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*home_position, 7), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*home_position, 8), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*home_position, 9), _MAV_RETURN_float(msg, 48));

}

}         


static inline uint16_t p_mavlink_msg_set_home_position_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* set_home_position)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_SET_HOME_POSITION_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_home_position, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_home_position, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(set_home_position, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 5)));

count = 0;
seqVal = PrtTupleGetNC(set_home_position, 6);
while(count < 4)
{
    
_mav_put_float(buf, 24 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_float(buf, 40, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 7)));
_mav_put_float(buf, 44, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 8)));
_mav_put_float(buf, 48, (float)PrtGetFloat32(PrtTupleGetNC(set_home_position, 9)));
_mav_put_uint8_t(buf, 52, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(set_home_position, 10)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_HOME_POSITION_LEN);
msg->msgid = MAVLINK_MSG_ID_SET_HOME_POSITION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_HOME_POSITION_MIN_LEN, MAVLINK_MSG_ID_SET_HOME_POSITION_LEN, MAVLINK_MSG_ID_SET_HOME_POSITION_CRC);

}          


static inline void p_mavlink_msg_set_home_position_decode(const mavlink_message_t* msg, PRT_VALUE** set_home_position)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*set_home_position == NULL)
{
*set_home_position = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_set_home_position_t);

PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 5), _MAV_RETURN_float(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*set_home_position, 6);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 24 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 7), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 8), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 9), _MAV_RETURN_float(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 10), _MAV_RETURN_uint8_t(msg, 52));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 2), _MAV_RETURN_int32_t(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 5), _MAV_RETURN_float(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*set_home_position, 6);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 24 + count * 4));

    count++;
}  
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 7), _MAV_RETURN_float(msg, 40));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 8), _MAV_RETURN_float(msg, 44));
PrtSetFloat32(PrtTupleGetNC(*set_home_position, 9), _MAV_RETURN_float(msg, 48));
PrtPrimSetInt(PrtTupleGetNC(*set_home_position, 10), _MAV_RETURN_uint8_t(msg, 52));

}

}         


static inline uint16_t p_mavlink_msg_message_interval_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* message_interval)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MESSAGE_INTERVAL_LEN];

_mav_put_int32_t(buf, 0, (int32_t)PrtPrimGetInt(PrtTupleGetNC(message_interval, 0)));
_mav_put_uint16_t(buf, 4, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(message_interval, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MESSAGE_INTERVAL_LEN);
msg->msgid = MAVLINK_MSG_ID_MESSAGE_INTERVAL;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MESSAGE_INTERVAL_MIN_LEN, MAVLINK_MSG_ID_MESSAGE_INTERVAL_LEN, MAVLINK_MSG_ID_MESSAGE_INTERVAL_CRC);

}          


static inline void p_mavlink_msg_message_interval_decode(const mavlink_message_t* msg, PRT_VALUE** message_interval)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*message_interval == NULL)
{
*message_interval = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_message_interval_t);

PrtPrimSetInt(PrtTupleGetNC(*message_interval, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*message_interval, 1), _MAV_RETURN_uint16_t(msg, 4));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*message_interval, 0), _MAV_RETURN_int32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*message_interval, 1), _MAV_RETURN_uint16_t(msg, 4));

}

}         


static inline uint16_t p_mavlink_msg_extended_sys_state_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* extended_sys_state)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_EXTENDED_SYS_STATE_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(extended_sys_state, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(extended_sys_state, 1)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXTENDED_SYS_STATE_LEN);
msg->msgid = MAVLINK_MSG_ID_EXTENDED_SYS_STATE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXTENDED_SYS_STATE_MIN_LEN, MAVLINK_MSG_ID_EXTENDED_SYS_STATE_LEN, MAVLINK_MSG_ID_EXTENDED_SYS_STATE_CRC);

}          


static inline void p_mavlink_msg_extended_sys_state_decode(const mavlink_message_t* msg, PRT_VALUE** extended_sys_state)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*extended_sys_state == NULL)
{
*extended_sys_state = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_extended_sys_state_t);

PrtPrimSetInt(PrtTupleGetNC(*extended_sys_state, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*extended_sys_state, 1), _MAV_RETURN_uint8_t(msg, 1));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*extended_sys_state, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*extended_sys_state, 1), _MAV_RETURN_uint8_t(msg, 1));

}

}         


static inline uint16_t p_mavlink_msg_adsb_vehicle_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* adsb_vehicle)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_ADSB_VEHICLE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 1)));
_mav_put_int32_t(buf, 8, (int32_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 2)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 3)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 4)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 5)));
_mav_put_int16_t(buf, 20, (int16_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 6)));
_mav_put_uint16_t(buf, 22, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 7)));
_mav_put_uint16_t(buf, 24, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 8)));
_mav_put_uint8_t(buf, 26, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 9)));

count = 0;
seqVal = PrtTupleGetNC(adsb_vehicle, 10);
while(count < 9)
{
    _mav_put_char(buf, 27 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 36, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 11)));
_mav_put_uint8_t(buf, 37, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(adsb_vehicle, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ADSB_VEHICLE_LEN);
msg->msgid = MAVLINK_MSG_ID_ADSB_VEHICLE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ADSB_VEHICLE_MIN_LEN, MAVLINK_MSG_ID_ADSB_VEHICLE_LEN, MAVLINK_MSG_ID_ADSB_VEHICLE_CRC);

}          


static inline void p_mavlink_msg_adsb_vehicle_decode(const mavlink_message_t* msg, PRT_VALUE** adsb_vehicle)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*adsb_vehicle == NULL)
{
*adsb_vehicle = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_adsb_vehicle_t);

PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 6), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 7), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 8), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 9), _MAV_RETURN_uint8_t(msg, 26));

count = 0;
seqVal = PrtTupleGetNC(*adsb_vehicle, 10);
while(count < 9)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 27 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 11), _MAV_RETURN_uint8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 12), _MAV_RETURN_uint8_t(msg, 37));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 1), _MAV_RETURN_int32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 2), _MAV_RETURN_int32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 3), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 6), _MAV_RETURN_int16_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 7), _MAV_RETURN_uint16_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 8), _MAV_RETURN_uint16_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 9), _MAV_RETURN_uint8_t(msg, 26));

count = 0;
seqVal = PrtTupleGetNC(*adsb_vehicle, 10);
while(count < 9)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 27 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 11), _MAV_RETURN_uint8_t(msg, 36));
PrtPrimSetInt(PrtTupleGetNC(*adsb_vehicle, 12), _MAV_RETURN_uint8_t(msg, 37));

}

}         


static inline uint16_t p_mavlink_msg_collision_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* collision)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_COLLISION_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(collision, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(collision, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(collision, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(collision, 3)));
_mav_put_uint8_t(buf, 16, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(collision, 4)));
_mav_put_uint8_t(buf, 17, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(collision, 5)));
_mav_put_uint8_t(buf, 18, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(collision, 6)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_COLLISION_LEN);
msg->msgid = MAVLINK_MSG_ID_COLLISION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_COLLISION_MIN_LEN, MAVLINK_MSG_ID_COLLISION_LEN, MAVLINK_MSG_ID_COLLISION_CRC);

}          


static inline void p_mavlink_msg_collision_decode(const mavlink_message_t* msg, PRT_VALUE** collision)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*collision == NULL)
{
*collision = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_collision_t);

PrtPrimSetInt(PrtTupleGetNC(*collision, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*collision, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*collision, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*collision, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*collision, 4), _MAV_RETURN_uint8_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*collision, 5), _MAV_RETURN_uint8_t(msg, 17));
PrtPrimSetInt(PrtTupleGetNC(*collision, 6), _MAV_RETURN_uint8_t(msg, 18));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*collision, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*collision, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*collision, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*collision, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*collision, 4), _MAV_RETURN_uint8_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*collision, 5), _MAV_RETURN_uint8_t(msg, 17));
PrtPrimSetInt(PrtTupleGetNC(*collision, 6), _MAV_RETURN_uint8_t(msg, 18));

}

}         


static inline uint16_t p_mavlink_msg_v2_extension_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* v2_extension)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_V2_EXTENSION_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(v2_extension, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(v2_extension, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(v2_extension, 2)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(v2_extension, 3)));

count = 0;
seqVal = PrtTupleGetNC(v2_extension, 4);
while(count < 249)
{
    _mav_put_uint8_t(buf, 5 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_V2_EXTENSION_LEN);
msg->msgid = MAVLINK_MSG_ID_V2_EXTENSION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_V2_EXTENSION_MIN_LEN, MAVLINK_MSG_ID_V2_EXTENSION_LEN, MAVLINK_MSG_ID_V2_EXTENSION_CRC);

}          


static inline void p_mavlink_msg_v2_extension_decode(const mavlink_message_t* msg, PRT_VALUE** v2_extension)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*v2_extension == NULL)
{
*v2_extension = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_v2_extension_t);

PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 3), _MAV_RETURN_uint8_t(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*v2_extension, 4);
while(count < 249)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 5 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*v2_extension, 3), _MAV_RETURN_uint8_t(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*v2_extension, 4);
while(count < 249)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 5 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_memory_vect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* memory_vect)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MEMORY_VECT_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(memory_vect, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(memory_vect, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(memory_vect, 2)));

count = 0;
seqVal = PrtTupleGetNC(memory_vect, 3);
while(count < 32)
{
    _mav_put_int8_t(buf, 4 + count * 1, (int8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MEMORY_VECT_LEN);
msg->msgid = MAVLINK_MSG_ID_MEMORY_VECT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MEMORY_VECT_MIN_LEN, MAVLINK_MSG_ID_MEMORY_VECT_LEN, MAVLINK_MSG_ID_MEMORY_VECT_CRC);

}          


static inline void p_mavlink_msg_memory_vect_decode(const mavlink_message_t* msg, PRT_VALUE** memory_vect)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*memory_vect == NULL)
{
*memory_vect = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_memory_vect_t);

PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 2), _MAV_RETURN_uint8_t(msg, 3));

count = 0;
seqVal = PrtTupleGetNC(*memory_vect, 3);
while(count < 32)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_int8_t(msg, 4 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*memory_vect, 2), _MAV_RETURN_uint8_t(msg, 3));

count = 0;
seqVal = PrtTupleGetNC(*memory_vect, 3);
while(count < 32)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_int8_t(msg, 4 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_debug_vect_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* debug_vect)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_DEBUG_VECT_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(debug_vect, 0)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(debug_vect, 1)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(debug_vect, 2)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(debug_vect, 3)));

count = 0;
seqVal = PrtTupleGetNC(debug_vect, 4);
while(count < 10)
{
    _mav_put_char(buf, 20 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DEBUG_VECT_LEN);
msg->msgid = MAVLINK_MSG_ID_DEBUG_VECT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DEBUG_VECT_MIN_LEN, MAVLINK_MSG_ID_DEBUG_VECT_LEN, MAVLINK_MSG_ID_DEBUG_VECT_CRC);

}          


static inline void p_mavlink_msg_debug_vect_decode(const mavlink_message_t* msg, PRT_VALUE** debug_vect)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*debug_vect == NULL)
{
*debug_vect = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_debug_vect_t);

PrtPrimSetInt(PrtTupleGetNC(*debug_vect, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 3), _MAV_RETURN_float(msg, 16));

count = 0;
seqVal = PrtTupleGetNC(*debug_vect, 4);
while(count < 10)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 20 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*debug_vect, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 1), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 2), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*debug_vect, 3), _MAV_RETURN_float(msg, 16));

count = 0;
seqVal = PrtTupleGetNC(*debug_vect, 4);
while(count < 10)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 20 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_named_value_float_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* named_value_float)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_NAMED_VALUE_FLOAT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(named_value_float, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(named_value_float, 1)));

count = 0;
seqVal = PrtTupleGetNC(named_value_float, 2);
while(count < 10)
{
    _mav_put_char(buf, 8 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAMED_VALUE_FLOAT_LEN);
msg->msgid = MAVLINK_MSG_ID_NAMED_VALUE_FLOAT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NAMED_VALUE_FLOAT_MIN_LEN, MAVLINK_MSG_ID_NAMED_VALUE_FLOAT_LEN, MAVLINK_MSG_ID_NAMED_VALUE_FLOAT_CRC);

}          


static inline void p_mavlink_msg_named_value_float_decode(const mavlink_message_t* msg, PRT_VALUE** named_value_float)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*named_value_float == NULL)
{
*named_value_float = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_named_value_float_t);

PrtPrimSetInt(PrtTupleGetNC(*named_value_float, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*named_value_float, 1), _MAV_RETURN_float(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*named_value_float, 2);
while(count < 10)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 8 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*named_value_float, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*named_value_float, 1), _MAV_RETURN_float(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*named_value_float, 2);
while(count < 10)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 8 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_named_value_int_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* named_value_int)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_NAMED_VALUE_INT_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(named_value_int, 0)));
_mav_put_int32_t(buf, 4, (int32_t)PrtPrimGetInt(PrtTupleGetNC(named_value_int, 1)));

count = 0;
seqVal = PrtTupleGetNC(named_value_int, 2);
while(count < 10)
{
    _mav_put_char(buf, 8 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NAMED_VALUE_INT_LEN);
msg->msgid = MAVLINK_MSG_ID_NAMED_VALUE_INT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NAMED_VALUE_INT_MIN_LEN, MAVLINK_MSG_ID_NAMED_VALUE_INT_LEN, MAVLINK_MSG_ID_NAMED_VALUE_INT_CRC);

}          


static inline void p_mavlink_msg_named_value_int_decode(const mavlink_message_t* msg, PRT_VALUE** named_value_int)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*named_value_int == NULL)
{
*named_value_int = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_named_value_int_t);

PrtPrimSetInt(PrtTupleGetNC(*named_value_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*named_value_int, 1), _MAV_RETURN_int32_t(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*named_value_int, 2);
while(count < 10)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 8 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*named_value_int, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*named_value_int, 1), _MAV_RETURN_int32_t(msg, 4));

count = 0;
seqVal = PrtTupleGetNC(*named_value_int, 2);
while(count < 10)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 8 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_statustext_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* statustext)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_STATUSTEXT_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(statustext, 0)));

count = 0;
seqVal = PrtTupleGetNC(statustext, 1);
while(count < 50)
{
    _mav_put_char(buf, 1 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_STATUSTEXT_LEN);
msg->msgid = MAVLINK_MSG_ID_STATUSTEXT;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_STATUSTEXT_MIN_LEN, MAVLINK_MSG_ID_STATUSTEXT_LEN, MAVLINK_MSG_ID_STATUSTEXT_CRC);

}          


static inline void p_mavlink_msg_statustext_decode(const mavlink_message_t* msg, PRT_VALUE** statustext)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*statustext == NULL)
{
*statustext = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_statustext_t);

PrtPrimSetInt(PrtTupleGetNC(*statustext, 0), _MAV_RETURN_uint8_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*statustext, 1);
while(count < 50)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 1 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*statustext, 0), _MAV_RETURN_uint8_t(msg, 0));

count = 0;
seqVal = PrtTupleGetNC(*statustext, 1);
while(count < 50)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 1 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_debug_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* debug)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_DEBUG_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(debug, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(debug, 1)));
_mav_put_uint8_t(buf, 8, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(debug, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DEBUG_LEN);
msg->msgid = MAVLINK_MSG_ID_DEBUG;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DEBUG_MIN_LEN, MAVLINK_MSG_ID_DEBUG_LEN, MAVLINK_MSG_ID_DEBUG_CRC);

}          


static inline void p_mavlink_msg_debug_decode(const mavlink_message_t* msg, PRT_VALUE** debug)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*debug == NULL)
{
*debug = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_debug_t);

PrtPrimSetInt(PrtTupleGetNC(*debug, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*debug, 1), _MAV_RETURN_float(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*debug, 2), _MAV_RETURN_uint8_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*debug, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*debug, 1), _MAV_RETURN_float(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*debug, 2), _MAV_RETURN_uint8_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_button_change_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* button_change)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_BUTTON_CHANGE_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(button_change, 0)));
_mav_put_uint32_t(buf, 4, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(button_change, 1)));
_mav_put_uint8_t(buf, 8, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(button_change, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BUTTON_CHANGE_LEN);
msg->msgid = MAVLINK_MSG_ID_BUTTON_CHANGE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BUTTON_CHANGE_MIN_LEN, MAVLINK_MSG_ID_BUTTON_CHANGE_LEN, MAVLINK_MSG_ID_BUTTON_CHANGE_CRC);

}          


static inline void p_mavlink_msg_button_change_decode(const mavlink_message_t* msg, PRT_VALUE** button_change)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*button_change == NULL)
{
*button_change = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_button_change_t);

PrtPrimSetInt(PrtTupleGetNC(*button_change, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*button_change, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*button_change, 2), _MAV_RETURN_uint8_t(msg, 8));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*button_change, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*button_change, 1), _MAV_RETURN_uint32_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*button_change, 2), _MAV_RETURN_uint8_t(msg, 8));

}

}         


static inline uint16_t p_mavlink_msg_play_tune_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* play_tune)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_PLAY_TUNE_LEN];

_mav_put_uint8_t(buf, 0, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(play_tune, 0)));
_mav_put_uint8_t(buf, 1, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(play_tune, 1)));

count = 0;
seqVal = PrtTupleGetNC(play_tune, 2);
while(count < 30)
{
    _mav_put_char(buf, 2 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_PLAY_TUNE_LEN);
msg->msgid = MAVLINK_MSG_ID_PLAY_TUNE;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_PLAY_TUNE_MIN_LEN, MAVLINK_MSG_ID_PLAY_TUNE_LEN, MAVLINK_MSG_ID_PLAY_TUNE_CRC);

}          


static inline void p_mavlink_msg_play_tune_decode(const mavlink_message_t* msg, PRT_VALUE** play_tune)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*play_tune == NULL)
{
*play_tune = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_play_tune_t);

PrtPrimSetInt(PrtTupleGetNC(*play_tune, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*play_tune, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*play_tune, 2);
while(count < 30)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 2 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*play_tune, 0), _MAV_RETURN_uint8_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*play_tune, 1), _MAV_RETURN_uint8_t(msg, 1));

count = 0;
seqVal = PrtTupleGetNC(*play_tune, 2);
while(count < 30)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 2 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_camera_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* camera_information)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CAMERA_INFORMATION_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(camera_information, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(camera_information, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(camera_information, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(camera_information, 3)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_information, 4)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_information, 5)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_information, 6)));

count = 0;
seqVal = PrtTupleGetNC(camera_information, 7);
while(count < 32)
{
    _mav_put_uint8_t(buf, 21 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(camera_information, 8);
while(count < 32)
{
    _mav_put_uint8_t(buf, 53 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 85, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_information, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_INFORMATION_LEN);
msg->msgid = MAVLINK_MSG_ID_CAMERA_INFORMATION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_CAMERA_INFORMATION_LEN, MAVLINK_MSG_ID_CAMERA_INFORMATION_CRC);

}          


static inline void p_mavlink_msg_camera_information_decode(const mavlink_message_t* msg, PRT_VALUE** camera_information)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*camera_information == NULL)
{
*camera_information = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_camera_information_t);

PrtPrimSetInt(PrtTupleGetNC(*camera_information, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 6), _MAV_RETURN_uint8_t(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*camera_information, 7);
while(count < 32)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 21 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*camera_information, 8);
while(count < 32)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 53 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 9), _MAV_RETURN_uint8_t(msg, 85));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*camera_information, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*camera_information, 3), _MAV_RETURN_float(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 4), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 5), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 6), _MAV_RETURN_uint8_t(msg, 20));

count = 0;
seqVal = PrtTupleGetNC(*camera_information, 7);
while(count < 32)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 21 + count * 1));

    count++;
}  

count = 0;
seqVal = PrtTupleGetNC(*camera_information, 8);
while(count < 32)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 53 + count * 1));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*camera_information, 9), _MAV_RETURN_uint8_t(msg, 85));

}

}         


static inline uint16_t p_mavlink_msg_camera_settings_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* camera_settings)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CAMERA_SETTINGS_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(camera_settings, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(camera_settings, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(camera_settings, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(camera_settings, 4)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 5)));
_mav_put_uint8_t(buf, 21, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 6)));
_mav_put_uint8_t(buf, 22, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 7)));
_mav_put_uint8_t(buf, 23, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 8)));
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 9)));
_mav_put_uint8_t(buf, 25, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 10)));
_mav_put_uint8_t(buf, 26, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 11)));
_mav_put_uint8_t(buf, 27, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_settings, 12)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_SETTINGS_LEN);
msg->msgid = MAVLINK_MSG_ID_CAMERA_SETTINGS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_SETTINGS_MIN_LEN, MAVLINK_MSG_ID_CAMERA_SETTINGS_LEN, MAVLINK_MSG_ID_CAMERA_SETTINGS_CRC);

}          


static inline void p_mavlink_msg_camera_settings_decode(const mavlink_message_t* msg, PRT_VALUE** camera_settings)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*camera_settings == NULL)
{
*camera_settings = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_camera_settings_t);

PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 5), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 6), _MAV_RETURN_uint8_t(msg, 21));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 7), _MAV_RETURN_uint8_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 8), _MAV_RETURN_uint8_t(msg, 23));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 9), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 10), _MAV_RETURN_uint8_t(msg, 25));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 11), _MAV_RETURN_uint8_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 12), _MAV_RETURN_uint8_t(msg, 27));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*camera_settings, 4), _MAV_RETURN_float(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 5), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 6), _MAV_RETURN_uint8_t(msg, 21));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 7), _MAV_RETURN_uint8_t(msg, 22));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 8), _MAV_RETURN_uint8_t(msg, 23));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 9), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 10), _MAV_RETURN_uint8_t(msg, 25));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 11), _MAV_RETURN_uint8_t(msg, 26));
PrtPrimSetInt(PrtTupleGetNC(*camera_settings, 12), _MAV_RETURN_uint8_t(msg, 27));

}

}         


static inline uint16_t p_mavlink_msg_storage_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* storage_information)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_STORAGE_INFORMATION_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(storage_information, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(storage_information, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(storage_information, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(storage_information, 3)));
_mav_put_float(buf, 16, (float)PrtGetFloat32(PrtTupleGetNC(storage_information, 4)));
_mav_put_float(buf, 20, (float)PrtGetFloat32(PrtTupleGetNC(storage_information, 5)));
_mav_put_uint8_t(buf, 24, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(storage_information, 6)));
_mav_put_uint8_t(buf, 25, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(storage_information, 7)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_STORAGE_INFORMATION_LEN);
msg->msgid = MAVLINK_MSG_ID_STORAGE_INFORMATION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_STORAGE_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_STORAGE_INFORMATION_LEN, MAVLINK_MSG_ID_STORAGE_INFORMATION_CRC);

}          


static inline void p_mavlink_msg_storage_information_decode(const mavlink_message_t* msg, PRT_VALUE** storage_information)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*storage_information == NULL)
{
*storage_information = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_storage_information_t);

PrtPrimSetInt(PrtTupleGetNC(*storage_information, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*storage_information, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*storage_information, 7), _MAV_RETURN_uint8_t(msg, 25));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*storage_information, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 3), _MAV_RETURN_float(msg, 12));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 4), _MAV_RETURN_float(msg, 16));
PrtSetFloat32(PrtTupleGetNC(*storage_information, 5), _MAV_RETURN_float(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*storage_information, 6), _MAV_RETURN_uint8_t(msg, 24));
PrtPrimSetInt(PrtTupleGetNC(*storage_information, 7), _MAV_RETURN_uint8_t(msg, 25));

}

}         


static inline uint16_t p_mavlink_msg_camera_capture_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* camera_capture_status)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(camera_capture_status, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(camera_capture_status, 2)));
_mav_put_uint16_t(buf, 12, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 3)));
_mav_put_uint16_t(buf, 14, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 4)));
_mav_put_uint16_t(buf, 16, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 5)));
_mav_put_uint16_t(buf, 18, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 6)));
_mav_put_uint8_t(buf, 20, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 7)));
_mav_put_uint8_t(buf, 21, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 8)));
_mav_put_uint8_t(buf, 22, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_capture_status, 9)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS_LEN);
msg->msgid = MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS_MIN_LEN, MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS_LEN, MAVLINK_MSG_ID_CAMERA_CAPTURE_STATUS_CRC);

}          


static inline void p_mavlink_msg_camera_capture_status_decode(const mavlink_message_t* msg, PRT_VALUE** camera_capture_status)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*camera_capture_status == NULL)
{
*camera_capture_status = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_camera_capture_status_t);

PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_capture_status, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_capture_status, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 7), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 8), _MAV_RETURN_uint8_t(msg, 21));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 9), _MAV_RETURN_uint8_t(msg, 22));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*camera_capture_status, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*camera_capture_status, 2), _MAV_RETURN_float(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 3), _MAV_RETURN_uint16_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 4), _MAV_RETURN_uint16_t(msg, 14));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 5), _MAV_RETURN_uint16_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 6), _MAV_RETURN_uint16_t(msg, 18));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 7), _MAV_RETURN_uint8_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 8), _MAV_RETURN_uint8_t(msg, 21));
PrtPrimSetInt(PrtTupleGetNC(*camera_capture_status, 9), _MAV_RETURN_uint8_t(msg, 22));

}

}         


static inline uint16_t p_mavlink_msg_camera_image_captured_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* camera_image_captured)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 0)));
_mav_put_uint32_t(buf, 8, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 1)));
_mav_put_int32_t(buf, 12, (int32_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 2)));
_mav_put_int32_t(buf, 16, (int32_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 3)));
_mav_put_int32_t(buf, 20, (int32_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 4)));
_mav_put_int32_t(buf, 24, (int32_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 5)));

count = 0;
seqVal = PrtTupleGetNC(camera_image_captured, 6);
while(count < 4)
{
    
_mav_put_float(buf, 28 + count * 4, (float)PrtGetFloat32(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  
_mav_put_uint8_t(buf, 44, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(camera_image_captured, 7)));

count = 0;
seqVal = PrtTupleGetNC(camera_image_captured, 8);
while(count < 210)
{
    _mav_put_char(buf, 45 + count * 1, (char)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED_LEN);
msg->msgid = MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED_MIN_LEN, MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED_LEN, MAVLINK_MSG_ID_CAMERA_IMAGE_CAPTURED_CRC);

}          


static inline void p_mavlink_msg_camera_image_captured_decode(const mavlink_message_t* msg, PRT_VALUE** camera_image_captured)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*camera_image_captured == NULL)
{
*camera_image_captured = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_camera_image_captured_t);

PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 4), _MAV_RETURN_int32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 5), _MAV_RETURN_int32_t(msg, 24));

count = 0;
seqVal = PrtTupleGetNC(*camera_image_captured, 6);
while(count < 4)
{
    

tmpVal = PrtMkDefaultValue(&P_GEND_TYPE_float32);
PrtSetFloat32(tmpVal, _MAV_RETURN_float(msg, 28 + count * 4));

PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 7), _MAV_RETURN_uint8_t(msg, 44));

count = 0;
seqVal = PrtTupleGetNC(*camera_image_captured, 8);
while(count < 210)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_char(msg, 45 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 1), _MAV_RETURN_uint32_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 2), _MAV_RETURN_int32_t(msg, 12));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 3), _MAV_RETURN_int32_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 4), _MAV_RETURN_int32_t(msg, 20));
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 5), _MAV_RETURN_int32_t(msg, 24));

count = 0;
seqVal = PrtTupleGetNC(*camera_image_captured, 6);
while(count < 4)
{
    
PrtSetFloat32(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_float(msg, 28 + count * 4));

    count++;
}  
PrtPrimSetInt(PrtTupleGetNC(*camera_image_captured, 7), _MAV_RETURN_uint8_t(msg, 44));

count = 0;
seqVal = PrtTupleGetNC(*camera_image_captured, 8);
while(count < 210)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_char(msg, 45 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_flight_information_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* flight_information)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_FLIGHT_INFORMATION_LEN];

_mav_put_uint64_t(buf, 0, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(flight_information, 0)));
_mav_put_uint64_t(buf, 8, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(flight_information, 1)));
_mav_put_uint64_t(buf, 16, (uint64_t)PrtPrimGetInt(PrtTupleGetNC(flight_information, 2)));
_mav_put_uint32_t(buf, 24, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(flight_information, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_FLIGHT_INFORMATION_LEN);
msg->msgid = MAVLINK_MSG_ID_FLIGHT_INFORMATION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_FLIGHT_INFORMATION_MIN_LEN, MAVLINK_MSG_ID_FLIGHT_INFORMATION_LEN, MAVLINK_MSG_ID_FLIGHT_INFORMATION_CRC);

}          


static inline void p_mavlink_msg_flight_information_decode(const mavlink_message_t* msg, PRT_VALUE** flight_information)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*flight_information == NULL)
{
*flight_information = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_flight_information_t);

PrtPrimSetInt(PrtTupleGetNC(*flight_information, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 2), _MAV_RETURN_uint64_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 3), _MAV_RETURN_uint32_t(msg, 24));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*flight_information, 0), _MAV_RETURN_uint64_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 1), _MAV_RETURN_uint64_t(msg, 8));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 2), _MAV_RETURN_uint64_t(msg, 16));
PrtPrimSetInt(PrtTupleGetNC(*flight_information, 3), _MAV_RETURN_uint32_t(msg, 24));

}

}         


static inline uint16_t p_mavlink_msg_mount_orientation_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* mount_orientation)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN];

_mav_put_uint32_t(buf, 0, (uint32_t)PrtPrimGetInt(PrtTupleGetNC(mount_orientation, 0)));
_mav_put_float(buf, 4, (float)PrtGetFloat32(PrtTupleGetNC(mount_orientation, 1)));
_mav_put_float(buf, 8, (float)PrtGetFloat32(PrtTupleGetNC(mount_orientation, 2)));
_mav_put_float(buf, 12, (float)PrtGetFloat32(PrtTupleGetNC(mount_orientation, 3)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN);
msg->msgid = MAVLINK_MSG_ID_MOUNT_ORIENTATION;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MOUNT_ORIENTATION_MIN_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_LEN, MAVLINK_MSG_ID_MOUNT_ORIENTATION_CRC);

}          


static inline void p_mavlink_msg_mount_orientation_decode(const mavlink_message_t* msg, PRT_VALUE** mount_orientation)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*mount_orientation == NULL)
{
*mount_orientation = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_mount_orientation_t);

PrtPrimSetInt(PrtTupleGetNC(*mount_orientation, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 3), _MAV_RETURN_float(msg, 12));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*mount_orientation, 0), _MAV_RETURN_uint32_t(msg, 0));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 1), _MAV_RETURN_float(msg, 4));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 2), _MAV_RETURN_float(msg, 8));
PrtSetFloat32(PrtTupleGetNC(*mount_orientation, 3), _MAV_RETURN_float(msg, 12));

}

}         


static inline uint16_t p_mavlink_msg_logging_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* logging_data)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOGGING_DATA_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(logging_data, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data, 2)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data, 3)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data, 4)));

count = 0;
seqVal = PrtTupleGetNC(logging_data, 5);
while(count < 249)
{
    _mav_put_uint8_t(buf, 6 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOGGING_DATA_LEN);
msg->msgid = MAVLINK_MSG_ID_LOGGING_DATA;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOGGING_DATA_MIN_LEN, MAVLINK_MSG_ID_LOGGING_DATA_LEN, MAVLINK_MSG_ID_LOGGING_DATA_CRC);

}          


static inline void p_mavlink_msg_logging_data_decode(const mavlink_message_t* msg, PRT_VALUE** logging_data)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*logging_data == NULL)
{
*logging_data = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_logging_data_t);

PrtPrimSetInt(PrtTupleGetNC(*logging_data, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 4), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*logging_data, 5);
while(count < 249)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 6 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*logging_data, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*logging_data, 4), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*logging_data, 5);
while(count < 249)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 6 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_logging_data_acked_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* logging_data_acked)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOGGING_DATA_ACKED_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(logging_data_acked, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data_acked, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data_acked, 2)));
_mav_put_uint8_t(buf, 4, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data_acked, 3)));
_mav_put_uint8_t(buf, 5, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_data_acked, 4)));

count = 0;
seqVal = PrtTupleGetNC(logging_data_acked, 5);
while(count < 249)
{
    _mav_put_uint8_t(buf, 6 + count * 1, (uint8_t)PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));

    count++;
}  

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOGGING_DATA_ACKED_LEN);
msg->msgid = MAVLINK_MSG_ID_LOGGING_DATA_ACKED;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOGGING_DATA_ACKED_MIN_LEN, MAVLINK_MSG_ID_LOGGING_DATA_ACKED_LEN, MAVLINK_MSG_ID_LOGGING_DATA_ACKED_CRC);

}          


static inline void p_mavlink_msg_logging_data_acked_decode(const mavlink_message_t* msg, PRT_VALUE** logging_data_acked)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*logging_data_acked == NULL)
{
*logging_data_acked = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_logging_data_acked_t);

PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 4), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*logging_data_acked, 5);
while(count < 249)
{
    
tmpVal = PrtMkIntValue(_MAV_RETURN_uint8_t(msg, 6 + count * 1));
PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);

    count++;
}  

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 2), _MAV_RETURN_uint8_t(msg, 3));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 3), _MAV_RETURN_uint8_t(msg, 4));
PrtPrimSetInt(PrtTupleGetNC(*logging_data_acked, 4), _MAV_RETURN_uint8_t(msg, 5));

count = 0;
seqVal = PrtTupleGetNC(*logging_data_acked, 5);
while(count < 249)
{
    
PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_uint8_t(msg, 6 + count * 1));

    count++;
}  

}

}         


static inline uint16_t p_mavlink_msg_logging_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* logging_ack)
{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_LOGGING_ACK_LEN];

_mav_put_uint16_t(buf, 0, (uint16_t)PrtPrimGetInt(PrtTupleGetNC(logging_ack, 0)));
_mav_put_uint8_t(buf, 2, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_ack, 1)));
_mav_put_uint8_t(buf, 3, (uint8_t)PrtPrimGetInt(PrtTupleGetNC(logging_ack, 2)));

memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_LOGGING_ACK_LEN);
msg->msgid = MAVLINK_MSG_ID_LOGGING_ACK;
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_LOGGING_ACK_MIN_LEN, MAVLINK_MSG_ID_LOGGING_ACK_LEN, MAVLINK_MSG_ID_LOGGING_ACK_CRC);

}          


static inline void p_mavlink_msg_logging_ack_decode(const mavlink_message_t* msg, PRT_VALUE** logging_ack)
{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*logging_ack == NULL)
{
*logging_ack = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_logging_ack_t);

PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 2), _MAV_RETURN_uint8_t(msg, 3));

}
else
{

PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 0), _MAV_RETURN_uint16_t(msg, 0));
PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 1), _MAV_RETURN_uint8_t(msg, 2));
PrtPrimSetInt(PrtTupleGetNC(*logging_ack, 2), _MAV_RETURN_uint8_t(msg, 3));

}

}         

