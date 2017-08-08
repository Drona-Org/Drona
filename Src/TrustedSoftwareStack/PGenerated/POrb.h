
  #ifndef P_PORB_H_
    #define P_PORB_H_
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FIELD_INDEX_POrbPubMsgType
    {
      P_FIELD_INDEX_POrbPubMsgType_topic = 0,
      P_FIELD_INDEX_POrbPubMsgType_ev = 1,
      P_FIELD_INDEX_POrbPubMsgType_payload = 2,
      _P_FIELD_INDEX_POrbPubMsgType_COUNT = 3
    };

    enum P_FIELD_INDEX_POrbSubMsgType
    {
      P_FIELD_INDEX_POrbSubMsgType_topic = 0,
      P_FIELD_INDEX_POrbSubMsgType_sub = 1,
      _P_FIELD_INDEX_POrbSubMsgType_COUNT = 2
    };

    enum P_FUNS_POrbMachine
    {
      P_FUN_POrbMachine_ANON0 = 1,
      P_FUN_POrbMachine_ANON1 = 3,
      P_FUN_POrbMachine_ANON2 = 5,
      P_FUN_POrbMachine_ANON3 = 7,
      P_FUN_POrbMachine_ANON4 = 9,
      P_FUN_POrbMachine_ANON5 = 11,
      _P_FUNS_POrbMachine_COUNT = 11,
      P_FUN_POrbMachine_ANON6 = 13,
      P_FUN_POrbMachine_ANON7 = 15,
      P_FUN_POrbMachine_Broadcast = 17,
      P_FUN_POrbMachine_InitializeDisPatchListener = 19,
      P_FUN_POrbMachine_IsSubscribed = 21
    };

    enum P_STATES_POrbMachine
    {
      P_STATE_POrbMachine_Init = 0,
      P_STATE_POrbMachine_ReadMessagesAndPublish = 1,
      _P_STATES_POrbMachine_COUNT = 2
    };

    enum P_VARS_POrbMachine
    {
      P_VAR_POrbMachine_topicSubscribers = 0,
      _P_VARS_POrbMachine_COUNT = 1
    };

    enum Topics
    {
      Topics_heartbeat_topic = 0,
      Topics_attitude_topic = 1,
      Topics_global_position_topic = 2,
      Topics_local_position_topic = 3,
      Topics_battery_status_topic = 4,
      Topics_gps_raw_int_topic = 5,
      Topics_gps_status_topic = 6,
      Topics_command_ack_topic = 7,
      Topics_extended_sys_state_topic = 8,
      Topics_px4status_topic = 9,
      Topics_altitude_reached_topic = 10,
      Topics_geofence_reached_topic = 11,
      Topics_heartbeat_status_topic = 12,
      Topics_battery_critical_topic = 13,
      Topics_gps_health_topic = 14,
      Topics_vehicle_ready_topic = 15,
      Topics_vehicle_armed_topic = 16,
      Topics_vehicle_disarmed_topic = 17,
      Topics_vehicle_landed_topic = 18,
      Topics_vehicle_loitering_topic = 19,
      Topics_vehicle_crashed_topic = 20,
      _Topics_COUNT = 21
    };

    PRT_VALUE *P_FUN_POrbMachine_InitializeDisPatchListener_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE **payload);

    extern PRT_EVENTDECL P_EVENT_POrbPublish_STRUCT;
    extern PRT_EVENTDECL P_EVENT_POrbSubscribe_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_HALT_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_NULL_STRUCT;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_POrbSubscribe_POrbPublish;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_null;
    extern PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON0_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON1_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON2_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON3_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON4_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON5_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON6_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_ANON7_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_Broadcast_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_InitializeDisPatchListener_STRUCT;
    extern PRT_FUNDECL P_FUN_POrbMachine_IsSubscribed_STRUCT;
    extern PRT_FUNDECL P_FUN_Publish_STRUCT;
    extern PRT_FUNDECL P_FUN_Subscribe_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_POrbMachine_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_Topics;
    extern PRT_UINT32 P_EVENT_POrbPublish;
    extern PRT_UINT32 P_EVENT_POrbSubscribe;
    extern PRT_UINT32 P_FUN_Publish;
    extern PRT_UINT32 P_FUN_Subscribe;
    extern PRT_UINT32 P_IORM_POrbMachine;
    extern PRT_UINT32 P_MACHINE_POrbMachine;
    extern PRT_UINT32 _P_EVENT_HALT;
    extern PRT_UINT32 _P_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_HALT;
    extern PRT_VALUE P_GEND_VALUE_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbPublish;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbSubscribe;
    #ifdef __cplusplus
      }
    #endif
  #endif
  