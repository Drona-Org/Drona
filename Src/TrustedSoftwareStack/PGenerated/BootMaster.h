
  #ifndef P_BOOTMASTER_H_
    #define P_BOOTMASTER_H_
    #include "POrb.h"
    #include "PX4API.h"
    #include "Monitors.h"
    #include "Timer.h"
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FUNS_BootMaster
    {
      P_FUN_BootMaster_ANON0 = 1,
      P_FUN_BootMaster_ANON1 = 3,
      _P_FUNS_BootMaster_COUNT = 3,
      P_FUN_BootMaster_ANON2 = 5
    };

    enum P_STATES_BootMaster
    {
      P_STATE_BootMaster_Init = 0,
      _P_STATES_BootMaster_COUNT = 1
    };

    enum P_VARS_BootMaster
    {
      _P_VARS_BootMaster_COUNT = 0
    };

    extern PRT_EVENTDECL P_EVENT_CommandFailed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_CommandSucceeded_STRUCT;
    extern PRT_EVENTDECL P_EVENT_Command_STRUCT;
    extern PRT_EVENTDECL P_EVENT_POrbPublish_STRUCT;
    extern PRT_EVENTDECL P_EVENT_POrbSubscribe_STRUCT;
    extern PRT_EVENTDECL P_EVENT_SetGeofenceRadius_STRUCT;
    extern PRT_EVENTDECL P_EVENT_SetTargetAltitude_STRUCT;
    extern PRT_EVENTDECL P_EVENT_altitude_reached_STRUCT;
    extern PRT_EVENTDECL P_EVENT_attitude_STRUCT;
    extern PRT_EVENTDECL P_EVENT_battery_critical_STRUCT;
    extern PRT_EVENTDECL P_EVENT_battery_recharged_STRUCT;
    extern PRT_EVENTDECL P_EVENT_battery_status_STRUCT;
    extern PRT_EVENTDECL P_EVENT_command_ack_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eCancelFailure_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eCancelSuccess_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eCancelTimer_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eStartTimer_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eTimeOut_STRUCT;
    extern PRT_EVENTDECL P_EVENT_extended_sys_state_STRUCT;
    extern PRT_EVENTDECL P_EVENT_geofence_reached_STRUCT;
    extern PRT_EVENTDECL P_EVENT_global_position_STRUCT;
    extern PRT_EVENTDECL P_EVENT_gps_health_update_STRUCT;
    extern PRT_EVENTDECL P_EVENT_gps_raw_int_STRUCT;
    extern PRT_EVENTDECL P_EVENT_gps_status_STRUCT;
    extern PRT_EVENTDECL P_EVENT_heartbeat_STRUCT;
    extern PRT_EVENTDECL P_EVENT_heartbeat_status_changed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_local_position_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_arm_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_disarm_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_finished_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_goto_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_land_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_loitering_STRUCT;
    extern PRT_EVENTDECL P_EVENT_mission_takeoff_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_armed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_crashed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_disarmed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_landed_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_loitering_STRUCT;
    extern PRT_EVENTDECL P_EVENT_vehicle_ready_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_HALT_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_NULL_STRUCT;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON0_STRUCT;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON1_STRUCT;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON2_STRUCT;
    extern PRT_FUNDECL P_FUN_CancelTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_CreateTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT;
    extern PRT_FUNDECL P_FUN_Publish_STRUCT;
    extern PRT_FUNDECL P_FUN_StartTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_Subscribe_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_BootMaster_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_GeofenceMonitorMachine_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_HeartbeatMonitorMachine_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_POrbMachine_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_Timer_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE P_GEND_TYPE_AltitudeMonitorInterface;
    extern PRT_TYPE P_GEND_TYPE_BatteryMonitorInterface;
    extern PRT_TYPE P_GEND_TYPE_CommandType;
    extern PRT_TYPE P_GEND_TYPE_CommanderInterface;
    extern PRT_TYPE P_GEND_TYPE_FlightControllerInterface;
    extern PRT_TYPE P_GEND_TYPE_GPSHealthMonitorInterface;
    extern PRT_TYPE P_GEND_TYPE_GPSHealthType;
    extern PRT_TYPE P_GEND_TYPE_GeofenceMonitorInterface;
    extern PRT_TYPE P_GEND_TYPE_GlobalPositionType;
    extern PRT_TYPE P_GEND_TYPE_HeartbeatMonitorInterface;
    extern PRT_TYPE P_GEND_TYPE_HeartbeatStatusType;
    extern PRT_TYPE P_GEND_TYPE_HelperMachinesType;
    extern PRT_TYPE P_GEND_TYPE_ITimer;
    extern PRT_TYPE P_GEND_TYPE_ITimerClient;
    extern PRT_TYPE P_GEND_TYPE_LocalPositionType;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_PX4_CUSTOM_MAIN_MODE;
    extern PRT_TYPE P_GEND_TYPE_PX4_CUSTOM_SUB_MODE_AUTO;
    extern PRT_TYPE P_GEND_TYPE_TargetAltitudeInfoType;
    extern PRT_TYPE P_GEND_TYPE_TargetLocationType;
    extern PRT_TYPE P_GEND_TYPE_TimerPtr;
    extern PRT_TYPE P_GEND_TYPE_Topics;
    extern PRT_TYPE P_GEND_TYPE_VEHICLE_MODE_FLAG;
    extern PRT_TYPE P_GEND_TYPE_VehicleStateType;
    extern PRT_TYPE P_GEND_TYPE_adsb_altitude_type;
    extern PRT_TYPE P_GEND_TYPE_adsb_emitter_type;
    extern PRT_TYPE P_GEND_TYPE_adsb_flags;
    extern PRT_TYPE P_GEND_TYPE_estimator_status_flags;
    extern PRT_TYPE P_GEND_TYPE_fence_action;
    extern PRT_TYPE P_GEND_TYPE_fence_breach;
    extern PRT_TYPE P_GEND_TYPE_firmware_version_type;
    extern PRT_TYPE P_GEND_TYPE_global_position_t;
    extern PRT_TYPE P_GEND_TYPE_gps_fix_type;
    extern PRT_TYPE P_GEND_TYPE_gps_input_ignore_flags;
    extern PRT_TYPE P_GEND_TYPE_mav_autopilot;
    extern PRT_TYPE P_GEND_TYPE_mav_battery_function;
    extern PRT_TYPE P_GEND_TYPE_mav_battery_type;
    extern PRT_TYPE P_GEND_TYPE_mav_cmd;
    extern PRT_TYPE P_GEND_TYPE_mav_cmd_ack;
    extern PRT_TYPE P_GEND_TYPE_mav_collision_action;
    extern PRT_TYPE P_GEND_TYPE_mav_collision_src;
    extern PRT_TYPE P_GEND_TYPE_mav_collision_threat_level;
    extern PRT_TYPE P_GEND_TYPE_mav_component;
    extern PRT_TYPE P_GEND_TYPE_mav_data_stream;
    extern PRT_TYPE P_GEND_TYPE_mav_distance_sensor;
    extern PRT_TYPE P_GEND_TYPE_mav_do_reposition_flags;
    extern PRT_TYPE P_GEND_TYPE_mav_estimator_type;
    extern PRT_TYPE P_GEND_TYPE_mav_frame;
    extern PRT_TYPE P_GEND_TYPE_mav_goto;
    extern PRT_TYPE P_GEND_TYPE_mav_landed_state;
    extern PRT_TYPE P_GEND_TYPE_mav_mission_result;
    extern PRT_TYPE P_GEND_TYPE_mav_mode;
    extern PRT_TYPE P_GEND_TYPE_mav_mode_flag;
    extern PRT_TYPE P_GEND_TYPE_mav_mode_flag_decode_position;
    extern PRT_TYPE P_GEND_TYPE_mav_mount_mode;
    extern PRT_TYPE P_GEND_TYPE_mav_param_type;
    extern PRT_TYPE P_GEND_TYPE_mav_power_status;
    extern PRT_TYPE P_GEND_TYPE_mav_protocol_capability;
    extern PRT_TYPE P_GEND_TYPE_mav_result;
    extern PRT_TYPE P_GEND_TYPE_mav_roi;
    extern PRT_TYPE P_GEND_TYPE_mav_sensor_orientation;
    extern PRT_TYPE P_GEND_TYPE_mav_severity;
    extern PRT_TYPE P_GEND_TYPE_mav_state;
    extern PRT_TYPE P_GEND_TYPE_mav_sys_status_sensor;
    extern PRT_TYPE P_GEND_TYPE_mav_type;
    extern PRT_TYPE P_GEND_TYPE_mav_vtol_state;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_stream_type;
    extern PRT_TYPE P_GEND_TYPE_mavlink_messages;
    extern PRT_TYPE P_GEND_TYPE_motor_test_throttle_type;
    extern PRT_TYPE P_GEND_TYPE_serial_control_dev;
    extern PRT_TYPE P_GEND_TYPE_serial_control_flag;
    extern PRT_UINT32 P_EVENT_Command;
    extern PRT_UINT32 P_EVENT_CommandFailed;
    extern PRT_UINT32 P_EVENT_CommandSucceeded;
    extern PRT_UINT32 P_EVENT_POrbPublish;
    extern PRT_UINT32 P_EVENT_POrbSubscribe;
    extern PRT_UINT32 P_EVENT_SetGeofenceRadius;
    extern PRT_UINT32 P_EVENT_SetTargetAltitude;
    extern PRT_UINT32 P_EVENT_altitude_reached;
    extern PRT_UINT32 P_EVENT_attitude;
    extern PRT_UINT32 P_EVENT_battery_critical;
    extern PRT_UINT32 P_EVENT_battery_recharged;
    extern PRT_UINT32 P_EVENT_battery_status;
    extern PRT_UINT32 P_EVENT_command_ack;
    extern PRT_UINT32 P_EVENT_eCancelFailure;
    extern PRT_UINT32 P_EVENT_eCancelSuccess;
    extern PRT_UINT32 P_EVENT_eCancelTimer;
    extern PRT_UINT32 P_EVENT_eStartTimer;
    extern PRT_UINT32 P_EVENT_eTimeOut;
    extern PRT_UINT32 P_EVENT_extended_sys_state;
    extern PRT_UINT32 P_EVENT_geofence_reached;
    extern PRT_UINT32 P_EVENT_global_position;
    extern PRT_UINT32 P_EVENT_gps_health_update;
    extern PRT_UINT32 P_EVENT_gps_raw_int;
    extern PRT_UINT32 P_EVENT_gps_status;
    extern PRT_UINT32 P_EVENT_heartbeat;
    extern PRT_UINT32 P_EVENT_heartbeat_status_changed;
    extern PRT_UINT32 P_EVENT_local_position;
    extern PRT_UINT32 P_EVENT_mission_arm;
    extern PRT_UINT32 P_EVENT_mission_disarm;
    extern PRT_UINT32 P_EVENT_mission_finished;
    extern PRT_UINT32 P_EVENT_mission_goto;
    extern PRT_UINT32 P_EVENT_mission_land;
    extern PRT_UINT32 P_EVENT_mission_loitering;
    extern PRT_UINT32 P_EVENT_mission_takeoff;
    extern PRT_UINT32 P_EVENT_vehicle_armed;
    extern PRT_UINT32 P_EVENT_vehicle_crashed;
    extern PRT_UINT32 P_EVENT_vehicle_disarmed;
    extern PRT_UINT32 P_EVENT_vehicle_landed;
    extern PRT_UINT32 P_EVENT_vehicle_loitering;
    extern PRT_UINT32 P_EVENT_vehicle_ready;
    extern PRT_UINT32 P_FUN_CancelTimer;
    extern PRT_UINT32 P_FUN_CreateTimer;
    extern PRT_UINT32 P_FUN_Publish;
    extern PRT_UINT32 P_FUN_StartTimer;
    extern PRT_UINT32 P_FUN_Subscribe;
    extern PRT_UINT32 P_IORM_AltitudeMonitorInterface;
    extern PRT_UINT32 P_IORM_BatteryMonitorInterface;
    extern PRT_UINT32 P_IORM_BootMaster;
    extern PRT_UINT32 P_IORM_CommanderInterface;
    extern PRT_UINT32 P_IORM_FlightControllerInterface;
    extern PRT_UINT32 P_IORM_GPSHealthMonitorInterface;
    extern PRT_UINT32 P_IORM_GeofenceMonitorInterface;
    extern PRT_UINT32 P_IORM_GeofenceMonitorMachine;
    extern PRT_UINT32 P_IORM_HeartbeatMonitorInterface;
    extern PRT_UINT32 P_IORM_HeartbeatMonitorMachine;
    extern PRT_UINT32 P_IORM_ITimer;
    extern PRT_UINT32 P_IORM_ITimerClient;
    extern PRT_UINT32 P_IORM_POrbMachine;
    extern PRT_UINT32 P_IORM_Timer;
    extern PRT_UINT32 P_MACHINE_BootMaster;
    extern PRT_UINT32 P_MACHINE_GeofenceMonitorMachine;
    extern PRT_UINT32 P_MACHINE_HeartbeatMonitorMachine;
    extern PRT_UINT32 P_MACHINE_POrbMachine;
    extern PRT_UINT32 P_MACHINE_Timer;
    extern PRT_UINT32 _P_EVENT_HALT;
    extern PRT_UINT32 _P_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_Command;
    extern PRT_VALUE P_GEND_VALUE_EVENT_CommandFailed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_CommandSucceeded;
    extern PRT_VALUE P_GEND_VALUE_EVENT_HALT;
    extern PRT_VALUE P_GEND_VALUE_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbPublish;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbSubscribe;
    extern PRT_VALUE P_GEND_VALUE_EVENT_SetGeofenceRadius;
    extern PRT_VALUE P_GEND_VALUE_EVENT_SetTargetAltitude;
    extern PRT_VALUE P_GEND_VALUE_EVENT_altitude_reached;
    extern PRT_VALUE P_GEND_VALUE_EVENT_attitude;
    extern PRT_VALUE P_GEND_VALUE_EVENT_battery_critical;
    extern PRT_VALUE P_GEND_VALUE_EVENT_battery_recharged;
    extern PRT_VALUE P_GEND_VALUE_EVENT_battery_status;
    extern PRT_VALUE P_GEND_VALUE_EVENT_command_ack;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelFailure;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelSuccess;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelTimer;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eStartTimer;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eTimeOut;
    extern PRT_VALUE P_GEND_VALUE_EVENT_extended_sys_state;
    extern PRT_VALUE P_GEND_VALUE_EVENT_geofence_reached;
    extern PRT_VALUE P_GEND_VALUE_EVENT_global_position;
    extern PRT_VALUE P_GEND_VALUE_EVENT_gps_health_update;
    extern PRT_VALUE P_GEND_VALUE_EVENT_gps_raw_int;
    extern PRT_VALUE P_GEND_VALUE_EVENT_gps_status;
    extern PRT_VALUE P_GEND_VALUE_EVENT_heartbeat;
    extern PRT_VALUE P_GEND_VALUE_EVENT_heartbeat_status_changed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_local_position;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_arm;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_disarm;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_finished;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_goto;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_land;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_loitering;
    extern PRT_VALUE P_GEND_VALUE_EVENT_mission_takeoff;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_armed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_crashed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_disarmed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_landed;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_loitering;
    extern PRT_VALUE P_GEND_VALUE_EVENT_vehicle_ready;
    #ifdef __cplusplus
      }
    #endif
  #endif
  