
  #ifndef P_PX4API_H_
    #define P_PX4API_H_
    #include "POrb.h"
    #include "PMavlinkMessages.h"
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum PX4_CUSTOM_MAIN_MODE
    {
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_NONE = 0,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_MANUAL = 1,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_ALTCTL = 2,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_POSCTL = 3,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_AUTO = 4,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_ACRO = 5,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_OFFBOARD = 6,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_STABILIZED = 7,
      PX4_CUSTOM_MAIN_MODE_PX4_CUSTOM_MAIN_MODE_RATTITUDE = 8,
      _PX4_CUSTOM_MAIN_MODE_COUNT = 9
    };

    enum PX4_CUSTOM_SUB_MODE_AUTO
    {
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_NONE = 0,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_READY = 1,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF = 2,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_LOITER = 3,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_MISSION = 4,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_RTL = 5,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_LAND = 6,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_RTGS = 7,
      PX4_CUSTOM_SUB_MODE_AUTO_PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET = 8,
      _PX4_CUSTOM_SUB_MODE_AUTO_COUNT = 9
    };

    enum P_FIELD_INDEX_CommandType
    {
      P_FIELD_INDEX_CommandType_caller = 0,
      P_FIELD_INDEX_CommandType_confirm = 1,
      P_FIELD_INDEX_CommandType_cmd = 2,
      P_FIELD_INDEX_CommandType_a1 = 3,
      P_FIELD_INDEX_CommandType_a2 = 4,
      P_FIELD_INDEX_CommandType_a3 = 5,
      P_FIELD_INDEX_CommandType_a4 = 6,
      P_FIELD_INDEX_CommandType_a5 = 7,
      P_FIELD_INDEX_CommandType_a6 = 8,
      P_FIELD_INDEX_CommandType_a7 = 9,
      _P_FIELD_INDEX_CommandType_COUNT = 10
    };

    enum P_FIELD_INDEX_GPSHealthType
    {
      P_FIELD_INDEX_GPSHealthType_locked = 0,
      P_FIELD_INDEX_GPSHealthType_satellites = 1,
      P_FIELD_INDEX_GPSHealthType_fix_type = 2,
      P_FIELD_INDEX_GPSHealthType_precision = 3,
      _P_FIELD_INDEX_GPSHealthType_COUNT = 4
    };

    enum P_FIELD_INDEX_GlobalPositionType
    {
      P_FIELD_INDEX_GlobalPositionType_timestamp = 0,
      P_FIELD_INDEX_GlobalPositionType_lat = 1,
      P_FIELD_INDEX_GlobalPositionType_lon = 2,
      P_FIELD_INDEX_GlobalPositionType_alt = 3,
      _P_FIELD_INDEX_GlobalPositionType_COUNT = 4
    };

    enum P_FIELD_INDEX_HeartbeatStatusType
    {
      P_FIELD_INDEX_HeartbeatStatusType_isAlive = 0,
      P_FIELD_INDEX_HeartbeatStatusType_lastHeartbeat = 1,
      _P_FIELD_INDEX_HeartbeatStatusType_COUNT = 2
    };

    enum P_FIELD_INDEX_HelperMachinesType
    {
      P_FIELD_INDEX_HelperMachinesType_orb = 0,
      _P_FIELD_INDEX_HelperMachinesType_COUNT = 1
    };

    enum P_FIELD_INDEX_LocalPositionType
    {
      P_FIELD_INDEX_LocalPositionType_x = 0,
      P_FIELD_INDEX_LocalPositionType_y = 1,
      P_FIELD_INDEX_LocalPositionType_z = 2,
      _P_FIELD_INDEX_LocalPositionType_COUNT = 3
    };

    enum P_FIELD_INDEX_TargetAltitudeInfoType
    {
      P_FIELD_INDEX_TargetAltitudeInfoType_target = 0,
      P_FIELD_INDEX_TargetAltitudeInfoType_delta = 1,
      _P_FIELD_INDEX_TargetAltitudeInfoType_COUNT = 2
    };

    enum P_FIELD_INDEX_TargetLocationType
    {
      P_FIELD_INDEX_TargetLocationType_speed = 0,
      P_FIELD_INDEX_TargetLocationType_x = 1,
      P_FIELD_INDEX_TargetLocationType_y = 2,
      P_FIELD_INDEX_TargetLocationType_z = 3,
      P_FIELD_INDEX_TargetLocationType_yaw = 4,
      _P_FIELD_INDEX_TargetLocationType_COUNT = 5
    };

    enum P_FIELD_INDEX_VehicleStateType
    {
      P_FIELD_INDEX_VehicleStateType_local_pos = 0,
      P_FIELD_INDEX_VehicleStateType_global_pos = 1,
      P_FIELD_INDEX_VehicleStateType_home_pos = 2,
      P_FIELD_INDEX_VehicleStateType_gps_locked = 3,
      P_FIELD_INDEX_VehicleStateType_battery_remaining = 4,
      P_FIELD_INDEX_VehicleStateType_px4_alive = 5,
      P_FIELD_INDEX_VehicleStateType_isHomeSet = 6,
      P_FIELD_INDEX_VehicleStateType_hasGlobalPosition = 7,
      P_FIELD_INDEX_VehicleStateType_isReady = 8,
      P_FIELD_INDEX_VehicleStateType_isLocalSet = 9,
      P_FIELD_INDEX_VehicleStateType_flying = 10,
      P_FIELD_INDEX_VehicleStateType_armed = 11,
      _P_FIELD_INDEX_VehicleStateType_COUNT = 12
    };

    enum P_FIELD_INDEX_global_position_t
    {
      P_FIELD_INDEX_global_position_t_lat = 0,
      P_FIELD_INDEX_global_position_t_lon = 1,
      P_FIELD_INDEX_global_position_t_alt = 2,
      P_FIELD_INDEX_global_position_t_yaw = 3,
      _P_FIELD_INDEX_global_position_t_COUNT = 4
    };

    enum VEHICLE_MODE_FLAG
    {
      VEHICLE_MODE_FLAG_VEHICLE_MODE_FLAG_NONE = 0,
      VEHICLE_MODE_FLAG_VEHICLE_MODE_FLAG_CUSTOM_MODE_ENABLED = 1,
      _VEHICLE_MODE_FLAG_COUNT = 2
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
    extern PRT_EVENTSETDECL __AnonEventSet_AltitudeMonitorInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_BatteryMonitorInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_CommanderInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_FlightControllerInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_GPSHealthMonitorInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_GeofenceMonitorInterface;
    extern PRT_EVENTSETDECL __AnonEventSet_HeartbeatMonitorInterface;
    extern PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT;
    extern PRT_FUNDECL P_FUN_Publish_STRUCT;
    extern PRT_FUNDECL P_FUN_Subscribe_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_POrbMachine_STRUCT;
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
    extern PRT_TYPE P_GEND_TYPE_LocalPositionType;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_PX4_CUSTOM_MAIN_MODE;
    extern PRT_TYPE P_GEND_TYPE_PX4_CUSTOM_SUB_MODE_AUTO;
    extern PRT_TYPE P_GEND_TYPE_TargetAltitudeInfoType;
    extern PRT_TYPE P_GEND_TYPE_TargetLocationType;
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
    extern PRT_TYPE P_GEND_TYPE_mavlink_actuator_control_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_adsb_vehicle_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_altitude_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_att_pos_mocap_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_attitude_quaternion_cov_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_attitude_quaternion_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_attitude_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_attitude_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_auth_key_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_autopilot_version_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_battery_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_button_change_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_capture_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_image_captured_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_information_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_settings_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_trigger_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_collision_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_long_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_control_system_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_stream_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_stream_type;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_transmission_handshake_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_debug_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_debug_vect_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_distance_sensor_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_encapsulated_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_estimator_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_extended_sys_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_file_transfer_protocol_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_flight_information_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_follow_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_global_position_int_cov_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_global_position_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_global_vision_position_estimate_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps2_raw_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps2_rtk_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_global_origin_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_inject_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_input_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_raw_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_rtcm_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_rtk_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_gps_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_heartbeat_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_high_latency_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_highres_imu_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_actuator_controls_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_controls_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_gps_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_optical_flow_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_rc_inputs_raw_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_sensor_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_state_quaternion_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_hil_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_home_position_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_landing_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_cov_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_system_global_offset_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_entry_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_erase_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_request_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_request_end_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_log_request_list_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_logging_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_logging_data_acked_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_logging_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_manual_control_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_manual_setpoint_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_memory_vect_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_message_interval_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_messages;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_clear_all_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_count_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_current_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_item_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_item_reached_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_item_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_request_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_request_list_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_request_partial_list_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_request_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_set_current_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mission_write_partial_list_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_mount_orientation_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_named_value_float_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_named_value_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_nav_controller_output_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_optical_flow_rad_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_optical_flow_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_param_map_rc_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_param_request_list_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_param_request_read_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_param_set_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_param_value_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_ping_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_play_tune_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_position_target_global_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_position_target_local_ned_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_power_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_radio_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_raw_imu_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_raw_pressure_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_override_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_raw_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_scaled_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_request_data_stream_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_resource_request_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_safety_allowed_area_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_safety_set_allowed_area_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu2_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu3_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure2_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure3_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_serial_control_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_servo_output_raw_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_actuator_control_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_attitude_target_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_gps_global_origin_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_home_position_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_mode_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_position_target_global_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_set_position_target_local_ned_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_sim_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_statustext_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_storage_information_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_sys_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_system_time_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_terrain_check_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_terrain_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_terrain_report_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_terrain_request_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_timesync_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_v2_extension_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_vfr_hud_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_vibration_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_vicon_position_estimate_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_vision_position_estimate_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_vision_speed_estimate_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_wind_cov_t;
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
    extern PRT_UINT32 P_FUN_Publish;
    extern PRT_UINT32 P_FUN_Subscribe;
    extern PRT_UINT32 P_IORM_AltitudeMonitorInterface;
    extern PRT_UINT32 P_IORM_BatteryMonitorInterface;
    extern PRT_UINT32 P_IORM_CommanderInterface;
    extern PRT_UINT32 P_IORM_FlightControllerInterface;
    extern PRT_UINT32 P_IORM_GPSHealthMonitorInterface;
    extern PRT_UINT32 P_IORM_GeofenceMonitorInterface;
    extern PRT_UINT32 P_IORM_HeartbeatMonitorInterface;
    extern PRT_UINT32 P_IORM_POrbMachine;
    extern PRT_UINT32 P_MACHINE_POrbMachine;
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
  