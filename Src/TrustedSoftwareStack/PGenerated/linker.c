
  #include "linker.h"
  PRT_UINT32 P_EVENT_Command = 2;
  PRT_UINT32 P_EVENT_CommandFailed = 3;
  PRT_UINT32 P_EVENT_CommandSucceeded = 4;
  PRT_UINT32 P_EVENT_POrbPublish = 5;
  PRT_UINT32 P_EVENT_POrbSubscribe = 6;
  PRT_UINT32 P_EVENT_SetGeofenceRadius = 7;
  PRT_UINT32 P_EVENT_SetTargetAltitude = 8;
  PRT_UINT32 P_EVENT_altitude_reached = 9;
  PRT_UINT32 P_EVENT_attitude = 10;
  PRT_UINT32 P_EVENT_battery_critical = 11;
  PRT_UINT32 P_EVENT_battery_recharged = 12;
  PRT_UINT32 P_EVENT_battery_status = 13;
  PRT_UINT32 P_EVENT_command_ack = 14;
  PRT_UINT32 P_EVENT_eCancelFailure = 15;
  PRT_UINT32 P_EVENT_eCancelSuccess = 16;
  PRT_UINT32 P_EVENT_eCancelTimer = 17;
  PRT_UINT32 P_EVENT_eStartTimer = 18;
  PRT_UINT32 P_EVENT_eTimeOut = 19;
  PRT_UINT32 P_EVENT_extended_sys_state = 20;
  PRT_UINT32 P_EVENT_geofence_reached = 21;
  PRT_UINT32 P_EVENT_global_position = 22;
  PRT_UINT32 P_EVENT_gps_health_update = 23;
  PRT_UINT32 P_EVENT_gps_raw_int = 24;
  PRT_UINT32 P_EVENT_gps_status = 25;
  PRT_UINT32 P_EVENT_heartbeat = 26;
  PRT_UINT32 P_EVENT_heartbeat_status_changed = 27;
  PRT_UINT32 P_EVENT_local_position = 28;
  PRT_UINT32 P_EVENT_mission_arm = 29;
  PRT_UINT32 P_EVENT_mission_disarm = 30;
  PRT_UINT32 P_EVENT_mission_finished = 31;
  PRT_UINT32 P_EVENT_mission_goto = 32;
  PRT_UINT32 P_EVENT_mission_land = 33;
  PRT_UINT32 P_EVENT_mission_loitering = 34;
  PRT_UINT32 P_EVENT_mission_takeoff = 35;
  PRT_UINT32 P_EVENT_vehicle_armed = 36;
  PRT_UINT32 P_EVENT_vehicle_crashed = 37;
  PRT_UINT32 P_EVENT_vehicle_disarmed = 38;
  PRT_UINT32 P_EVENT_vehicle_landed = 39;
  PRT_UINT32 P_EVENT_vehicle_loitering = 40;
  PRT_UINT32 P_EVENT_vehicle_ready = 41;
  PRT_UINT32 P_FUN_CancelTimer = 6;
  PRT_UINT32 P_FUN_CancelTimer_ANON0 = 2;
  PRT_UINT32 P_FUN_CancelTimer_ANON1 = 4;
  PRT_UINT32 P_FUN_CreateTimer = 8;
  PRT_UINT32 P_FUN_Publish = 10;
  PRT_UINT32 P_FUN_StartTimer = 12;
  PRT_UINT32 P_FUN_Subscribe = 14;
  PRT_UINT32 P_IORM_BootMaster = 0;
  PRT_UINT32 P_IORM_GeofenceMonitorMachine = 1;
  PRT_UINT32 P_IORM_HeartbeatMonitorMachine = 2;
  PRT_UINT32 P_IORM_ITimer = 3;
  PRT_UINT32 P_IORM_POrbMachine = 4;
  PRT_UINT32 P_IORM_Timer = 5;
  PRT_UINT32 P_MACHINE_BootMaster = 0;
  PRT_UINT32 P_MACHINE_GeofenceMonitorMachine = 1;
  PRT_UINT32 P_MACHINE_HeartbeatMonitorMachine = 2;
  PRT_UINT32 P_MACHINE_POrbMachine = 3;
  PRT_UINT32 P_MACHINE_Timer = 4;
  PRT_UINT32 P_RENAME_BootMaster = 0;
  PRT_UINT32 P_RENAME_GeofenceMonitorMachine = 1;
  PRT_UINT32 P_RENAME_HeartbeatMonitorMachine = 2;
  PRT_UINT32 P_RENAME_POrbMachine = 3;
  PRT_UINT32 P_RENAME_Timer = 4;
  PRT_UINT32 _P_EVENTS_COUNT = 44;
  PRT_UINT32 _P_EVENT_HALT = 1;
  PRT_UINT32 _P_EVENT_NULL = 0;
  PRT_UINT32 _P_FOREIGN_TYPES_COUNT = 0;
  PRT_UINT32 _P_FUNS_COUNT = 8;
  PRT_UINT32 _P_FUN_PUSH_OR_IGN = 0;
  PRT_UINT32 _P_IORM_COUNT = 6;
  PRT_UINT32 _P_MACHINES_COUNT = 5;
  PRT_UINT32 _P_RENAME_COUNT = 5;
  PRT_VALUE P_GEND_VALUE_EVENT_Command = 
  {
    PRT_VALUE_KIND_EVENT,
    2U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_CommandFailed = 
  {
    PRT_VALUE_KIND_EVENT,
    3U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_CommandSucceeded = 
  {
    PRT_VALUE_KIND_EVENT,
    4U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_HALT = 
  {
    PRT_VALUE_KIND_EVENT,
    1U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_NULL = 
  {
    PRT_VALUE_KIND_NULL,
    0U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_POrbPublish = 
  {
    PRT_VALUE_KIND_EVENT,
    5U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_POrbSubscribe = 
  {
    PRT_VALUE_KIND_EVENT,
    6U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_SetGeofenceRadius = 
  {
    PRT_VALUE_KIND_EVENT,
    7U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_SetTargetAltitude = 
  {
    PRT_VALUE_KIND_EVENT,
    8U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_altitude_reached = 
  {
    PRT_VALUE_KIND_EVENT,
    9U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_attitude = 
  {
    PRT_VALUE_KIND_EVENT,
    10U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_battery_critical = 
  {
    PRT_VALUE_KIND_EVENT,
    11U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_battery_recharged = 
  {
    PRT_VALUE_KIND_EVENT,
    12U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_battery_status = 
  {
    PRT_VALUE_KIND_EVENT,
    13U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_command_ack = 
  {
    PRT_VALUE_KIND_EVENT,
    14U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_eCancelFailure = 
  {
    PRT_VALUE_KIND_EVENT,
    15U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_eCancelSuccess = 
  {
    PRT_VALUE_KIND_EVENT,
    16U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_eCancelTimer = 
  {
    PRT_VALUE_KIND_EVENT,
    17U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_eStartTimer = 
  {
    PRT_VALUE_KIND_EVENT,
    18U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_eTimeOut = 
  {
    PRT_VALUE_KIND_EVENT,
    19U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_extended_sys_state = 
  {
    PRT_VALUE_KIND_EVENT,
    20U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_geofence_reached = 
  {
    PRT_VALUE_KIND_EVENT,
    21U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_global_position = 
  {
    PRT_VALUE_KIND_EVENT,
    22U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_gps_health_update = 
  {
    PRT_VALUE_KIND_EVENT,
    23U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_gps_raw_int = 
  {
    PRT_VALUE_KIND_EVENT,
    24U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_gps_status = 
  {
    PRT_VALUE_KIND_EVENT,
    25U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_heartbeat = 
  {
    PRT_VALUE_KIND_EVENT,
    26U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_heartbeat_status_changed = 
  {
    PRT_VALUE_KIND_EVENT,
    27U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_local_position = 
  {
    PRT_VALUE_KIND_EVENT,
    28U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_arm = 
  {
    PRT_VALUE_KIND_EVENT,
    29U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_disarm = 
  {
    PRT_VALUE_KIND_EVENT,
    30U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_finished = 
  {
    PRT_VALUE_KIND_EVENT,
    31U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_goto = 
  {
    PRT_VALUE_KIND_EVENT,
    32U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_land = 
  {
    PRT_VALUE_KIND_EVENT,
    33U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_loitering = 
  {
    PRT_VALUE_KIND_EVENT,
    34U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_mission_takeoff = 
  {
    PRT_VALUE_KIND_EVENT,
    35U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_armed = 
  {
    PRT_VALUE_KIND_EVENT,
    36U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_crashed = 
  {
    PRT_VALUE_KIND_EVENT,
    37U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_disarmed = 
  {
    PRT_VALUE_KIND_EVENT,
    38U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_landed = 
  {
    PRT_VALUE_KIND_EVENT,
    39U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_loitering = 
  {
    PRT_VALUE_KIND_EVENT,
    40U
  };
  PRT_VALUE P_GEND_VALUE_EVENT_vehicle_ready = 
  {
    PRT_VALUE_KIND_EVENT,
    41U
  };
  PRT_UINT32 P_GEND_EVENTSET_0[] = 
  {
    0x0U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_1[] = 
  {
    0x4004U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_10[] = 
  {
    0x60000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_11[] = 
  {
    0x20001U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_12[] = 
  {
    0x40000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_13[] = 
  {
    0x4080000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_14[] = 
  {
    0x3400000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_15[] = 
  {
    0x4000000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_16[] = 
  {
    0x10000000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_2[] = 
  {
    0x0F8E01818U,
    0x0FU
  };
  PRT_UINT32 P_GEND_EVENTSET_3[] = 
  {
    0x60U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_4[] = 
  {
    0x080U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_5[] = 
  {
    0x10000080U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_6[] = 
  {
    0x10100100U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_7[] = 
  {
    0x2000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_8[] = 
  {
    0x18000U,
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_9[] = 
  {
    0x098000U,
    0x0U
  };
  PRT_EVENTSETDECL P_GEND_EVENTSETS[] = 
  {
    
    {
        P_GEND_EVENTSET_0
    },
    
    {
        P_GEND_EVENTSET_1
    },
    
    {
        P_GEND_EVENTSET_2
    },
    
    {
        P_GEND_EVENTSET_3
    },
    
    {
        P_GEND_EVENTSET_4
    },
    
    {
        P_GEND_EVENTSET_5
    },
    
    {
        P_GEND_EVENTSET_6
    },
    
    {
        P_GEND_EVENTSET_7
    },
    
    {
        P_GEND_EVENTSET_8
    },
    
    {
        P_GEND_EVENTSET_9
    },
    
    {
        P_GEND_EVENTSET_10
    },
    
    {
        P_GEND_EVENTSET_11
    },
    
    {
        P_GEND_EVENTSET_12
    },
    
    {
        P_GEND_EVENTSET_13
    },
    
    {
        P_GEND_EVENTSET_14
    },
    
    {
        P_GEND_EVENTSET_15
    },
    
    {
        P_GEND_EVENTSET_16
    }
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET = 
  {
    P_GEND_EVENTSET_0
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_POrbSubscribe_POrbPublish = 
  {
    P_GEND_EVENTSET_3
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_SetGeofenceRadius = 
  {
    P_GEND_EVENTSET_4
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_eCancelSuccess_eCancelFailure = 
  {
    P_GEND_EVENTSET_8
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_eStartTimer = 
  {
    P_GEND_EVENTSET_12
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_eStartTimer_eCancelTimer = 
  {
    P_GEND_EVENTSET_10
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_heartbeat_eTimeOut = 
  {
    P_GEND_EVENTSET_13
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_local_position = 
  {
    P_GEND_EVENTSET_16
  };
  PRT_EVENTSETDECL P_GEND_EVENTSET_null_eCancelTimer = 
  {
    P_GEND_EVENTSET_11
  };
  PRT_EVENTSETDECL __AnonEventSet_AltitudeMonitorInterface = 
  {
    P_GEND_EVENTSET_6
  };
  PRT_EVENTSETDECL __AnonEventSet_BatteryMonitorInterface = 
  {
    P_GEND_EVENTSET_7
  };
  PRT_EVENTSETDECL __AnonEventSet_CommanderInterface = 
  {
    P_GEND_EVENTSET_1
  };
  PRT_EVENTSETDECL __AnonEventSet_FlightControllerInterface = 
  {
    P_GEND_EVENTSET_2
  };
  PRT_EVENTSETDECL __AnonEventSet_GPSHealthMonitorInterface = 
  {
    P_GEND_EVENTSET_14
  };
  PRT_EVENTSETDECL __AnonEventSet_GeofenceMonitorInterface = 
  {
    P_GEND_EVENTSET_5
  };
  PRT_EVENTSETDECL __AnonEventSet_HeartbeatMonitorInterface = 
  {
    P_GEND_EVENTSET_15
  };
  PRT_EVENTSETDECL __AnonEventSet_ITimer = 
  {
    P_GEND_EVENTSET_10
  };
  PRT_EVENTSETDECL __AnonEventSet_ITimerClient = 
  {
    P_GEND_EVENTSET_9
  };
  PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT = 
  {
    0U,
    NULL,
    NULL,
    1U,
    0U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_UINT32 P_GEND_LINKMAP_BootMaster[] = 
  {
    0U,
    1U,
    2U,
    -1L,
    3U,
    4U
  };
  PRT_UINT32 P_GEND_LINKMAP_GeofenceMonitorMachine[] = 
  {
    0U,
    1U,
    2U,
    -1L,
    3U,
    4U
  };
  PRT_UINT32 P_GEND_LINKMAP_HeartbeatMonitorMachine[] = 
  {
    0U,
    1U,
    2U,
    4U,
    3U,
    4U
  };
  PRT_UINT32 P_GEND_LINKMAP_POrbMachine[] = 
  {
    0U,
    1U,
    2U,
    -1L,
    3U,
    4U
  };
  PRT_UINT32 P_GEND_LINKMAP_Timer[] = 
  {
    0U,
    1U,
    2U,
    -1L,
    3U,
    4U
  };
  PRT_UINT32 P_GEND_RENAMEMAP[] = 
  {
    0U,
    1U,
    2U,
    3U,
    4U
  };
  PRT_EVENTDECL *P_GEND_EVENTS[] = 
  {
    &_P_EVENT_NULL_STRUCT,
    &_P_EVENT_HALT_STRUCT,
    &P_EVENT_Command_STRUCT,
    &P_EVENT_CommandFailed_STRUCT,
    &P_EVENT_CommandSucceeded_STRUCT,
    &P_EVENT_POrbPublish_STRUCT,
    &P_EVENT_POrbSubscribe_STRUCT,
    &P_EVENT_SetGeofenceRadius_STRUCT,
    &P_EVENT_SetTargetAltitude_STRUCT,
    &P_EVENT_altitude_reached_STRUCT,
    &P_EVENT_attitude_STRUCT,
    &P_EVENT_battery_critical_STRUCT,
    &P_EVENT_battery_recharged_STRUCT,
    &P_EVENT_battery_status_STRUCT,
    &P_EVENT_command_ack_STRUCT,
    &P_EVENT_eCancelFailure_STRUCT,
    &P_EVENT_eCancelSuccess_STRUCT,
    &P_EVENT_eCancelTimer_STRUCT,
    &P_EVENT_eStartTimer_STRUCT,
    &P_EVENT_eTimeOut_STRUCT,
    &P_EVENT_extended_sys_state_STRUCT,
    &P_EVENT_geofence_reached_STRUCT,
    &P_EVENT_global_position_STRUCT,
    &P_EVENT_gps_health_update_STRUCT,
    &P_EVENT_gps_raw_int_STRUCT,
    &P_EVENT_gps_status_STRUCT,
    &P_EVENT_heartbeat_STRUCT,
    &P_EVENT_heartbeat_status_changed_STRUCT,
    &P_EVENT_local_position_STRUCT,
    &P_EVENT_mission_arm_STRUCT,
    &P_EVENT_mission_disarm_STRUCT,
    &P_EVENT_mission_finished_STRUCT,
    &P_EVENT_mission_goto_STRUCT,
    &P_EVENT_mission_land_STRUCT,
    &P_EVENT_mission_loitering_STRUCT,
    &P_EVENT_mission_takeoff_STRUCT,
    &P_EVENT_vehicle_armed_STRUCT,
    &P_EVENT_vehicle_crashed_STRUCT,
    &P_EVENT_vehicle_disarmed_STRUCT,
    &P_EVENT_vehicle_landed_STRUCT,
    &P_EVENT_vehicle_loitering_STRUCT,
    &P_EVENT_vehicle_ready_STRUCT
  };
  PRT_FUNDECL *P_GEND_FUNS[] = 
  {
    &P_FUN_IGNORE_PUSH_STRUCT,
    &P_FUN_CancelTimer_ANON0_STRUCT,
    &P_FUN_CancelTimer_ANON1_STRUCT,
    &P_FUN_CancelTimer_STRUCT,
    &P_FUN_CreateTimer_STRUCT,
    &P_FUN_Publish_STRUCT,
    &P_FUN_StartTimer_STRUCT,
    &P_FUN_Subscribe_STRUCT
  };
  PRT_MACHINEDECL *P_GEND_MACHINES[] = 
  {
    &P_MACHINE_BootMaster_STRUCT,
    &P_MACHINE_GeofenceMonitorMachine_STRUCT,
    &P_MACHINE_HeartbeatMonitorMachine_STRUCT,
    &P_MACHINE_POrbMachine_STRUCT,
    &P_MACHINE_Timer_STRUCT
  };
  PRT_UINT32 *P_GEND_LINKMAP[] = 
  {
    P_GEND_LINKMAP_BootMaster,
    P_GEND_LINKMAP_GeofenceMonitorMachine,
    P_GEND_LINKMAP_HeartbeatMonitorMachine,
    P_GEND_LINKMAP_POrbMachine,
    P_GEND_LINKMAP_Timer
  };
  PRT_PROGRAMDECL P_GEND_PROGRAM = 
  {
    42U,
    17U,
    5U,
    8U,
    0U,
    P_GEND_EVENTS,
    P_GEND_EVENTSETS,
    P_GEND_MACHINES,
    P_GEND_FUNS,
    NULL,
    P_GEND_LINKMAP,
    P_GEND_RENAMEMAP,
    0U,
    NULL
  };
  