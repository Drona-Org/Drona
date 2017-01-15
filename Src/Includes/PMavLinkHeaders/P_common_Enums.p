// MAVLINK message ids
enum mavlink_messages {
    msg_heartbeat = 0,
    msg_sys_status = 1,
    msg_system_time = 2,
    msg_ping = 4,
    msg_change_operator_control = 5,
    msg_change_operator_control_ack = 6,
    msg_auth_key = 7,
    msg_set_mode = 11,
    msg_param_request_read = 20,
    msg_param_request_list = 21,
    msg_param_value = 22,
    msg_param_set = 23,
    msg_gps_raw_int = 24,
    msg_gps_status = 25,
    msg_scaled_imu = 26,
    msg_raw_imu = 27,
    msg_raw_pressure = 28,
    msg_scaled_pressure = 29,
    msg_attitude = 30,
    msg_attitude_quaternion = 31,
    msg_local_position_ned = 32,
    msg_global_position_int = 33,
    msg_rc_channels_scaled = 34,
    msg_rc_channels_raw = 35,
    msg_servo_output_raw = 36,
    msg_mission_request_partial_list = 37,
    msg_mission_write_partial_list = 38,
    msg_mission_item = 39,
    msg_mission_request = 40,
    msg_mission_set_current = 41,
    msg_mission_current = 42,
    msg_mission_request_list = 43,
    msg_mission_count = 44,
    msg_mission_clear_all = 45,
    msg_mission_item_reached = 46,
    msg_mission_ack = 47,
    msg_set_gps_global_origin = 48,
    msg_gps_global_origin = 49,
    msg_param_map_rc = 50,
    msg_mission_request_int = 51,
    msg_safety_set_allowed_area = 54,
    msg_safety_allowed_area = 55,
    msg_attitude_quaternion_cov = 61,
    msg_nav_controller_output = 62,
    msg_global_position_int_cov = 63,
    msg_local_position_ned_cov = 64,
    msg_rc_channels = 65,
    msg_request_data_stream = 66,
    msg_data_stream = 67,
    msg_manual_control = 69,
    msg_rc_channels_override = 70,
    msg_mission_item_int = 73,
    msg_vfr_hud = 74,
    msg_command_int = 75,
    msg_command_long = 76,
    msg_command_ack = 77,
    msg_manual_setpoint = 81,
    msg_set_attitude_target = 82,
    msg_attitude_target = 83,
    msg_set_position_target_local_ned = 84,
    msg_position_target_local_ned = 85,
    msg_set_position_target_global_int = 86,
    msg_position_target_global_int = 87,
    msg_local_position_ned_system_global_offset = 89,
    msg_hil_state = 90,
    msg_hil_controls = 91,
    msg_hil_rc_inputs_raw = 92,
    msg_hil_actuator_controls = 93,
    msg_optical_flow = 100,
    msg_global_vision_position_estimate = 101,
    msg_vision_position_estimate = 102,
    msg_vision_speed_estimate = 103,
    msg_vicon_position_estimate = 104,
    msg_highres_imu = 105,
    msg_optical_flow_rad = 106,
    msg_hil_sensor = 107,
    msg_sim_state = 108,
    msg_radio_status = 109,
    msg_file_transfer_protocol = 110,
    msg_timesync = 111,
    msg_camera_trigger = 112,
    msg_hil_gps = 113,
    msg_hil_optical_flow = 114,
    msg_hil_state_quaternion = 115,
    msg_scaled_imu2 = 116,
    msg_log_request_list = 117,
    msg_log_entry = 118,
    msg_log_request_data = 119,
    msg_log_data = 120,
    msg_log_erase = 121,
    msg_log_request_end = 122,
    msg_gps_inject_data = 123,
    msg_gps2_raw = 124,
    msg_power_status = 125,
    msg_serial_control = 126,
    msg_gps_rtk = 127,
    msg_gps2_rtk = 128,
    msg_scaled_imu3 = 129,
    msg_data_transmission_handshake = 130,
    msg_encapsulated_data = 131,
    msg_distance_sensor = 132,
    msg_terrain_request = 133,
    msg_terrain_data = 134,
    msg_terrain_check = 135,
    msg_terrain_report = 136,
    msg_scaled_pressure2 = 137,
    msg_att_pos_mocap = 138,
    msg_set_actuator_control_target = 139,
    msg_actuator_control_target = 140,
    msg_altitude = 141,
    msg_resource_request = 142,
    msg_scaled_pressure3 = 143,
    msg_follow_target = 144,
    msg_control_system_state = 146,
    msg_battery_status = 147,
    msg_autopilot_version = 148,
    msg_landing_target = 149,
    msg_estimator_status = 230,
    msg_wind_cov = 231,
    msg_gps_input = 232,
    msg_gps_rtcm_data = 233,
    msg_high_latency = 234,
    msg_vibration = 241,
    msg_home_position = 242,
    msg_set_home_position = 243,
    msg_message_interval = 244,
    msg_extended_sys_state = 245,
    msg_adsb_vehicle = 246,
    msg_collision = 247,
    msg_v2_extension = 248,
    msg_memory_vect = 249,
    msg_debug_vect = 250,
    msg_named_value_float = 251,
    msg_named_value_int = 252,
    msg_statustext = 253,
    msg_debug = 254,
    msg_setup_signing = 256,
    msg_button_change = 257,
    msg_play_tune = 258,
    msg_camera_information = 259,
    msg_camera_settings = 260,
    msg_storage_information = 261,
    msg_camera_capture_status = 262,
    msg_camera_image_captured = 263,
    msg_flight_information = 264,
    msg_mount_orientation = 265,
    msg_logging_data = 266,
    msg_logging_data_acked = 267,
    msg_logging_ack = 268
}

// Micro air vehicle / autopilot classes. This identifies the individual model.
enum mav_autopilot {
    mav_autopilot_generic = 0,
    mav_autopilot_reserved = 1,
    mav_autopilot_slugs = 2,
    mav_autopilot_ardupilotmega = 3,
    mav_autopilot_openpilot = 4,
    mav_autopilot_generic_waypoints_only = 5,
    mav_autopilot_generic_waypoints_and_simple_navigation_only = 6,
    mav_autopilot_generic_mission_full = 7,
    mav_autopilot_invalid = 8,
    mav_autopilot_ppz = 9,
    mav_autopilot_udb = 10,
    mav_autopilot_fp = 11,
    mav_autopilot_px4 = 12,
    mav_autopilot_smaccmpilot = 13,
    mav_autopilot_autoquad = 14,
    mav_autopilot_armazila = 15,
    mav_autopilot_aerob = 16,
    mav_autopilot_asluav = 17
}
// 
enum mav_type {
    mav_type_generic = 0,
    mav_type_fixed_wing = 1,
    mav_type_quadrotor = 2,
    mav_type_coaxial = 3,
    mav_type_helicopter = 4,
    mav_type_antenna_tracker = 5,
    mav_type_gcs = 6,
    mav_type_airship = 7,
    mav_type_free_balloon = 8,
    mav_type_rocket = 9,
    mav_type_ground_rover = 10,
    mav_type_surface_boat = 11,
    mav_type_submarine = 12,
    mav_type_hexarotor = 13,
    mav_type_octorotor = 14,
    mav_type_tricopter = 15,
    mav_type_flapping_wing = 16,
    mav_type_kite = 17,
    mav_type_onboard_controller = 18,
    mav_type_vtol_duorotor = 19,
    mav_type_vtol_quadrotor = 20,
    mav_type_vtol_tiltrotor = 21,
    mav_type_vtol_reserved2 = 22,
    mav_type_vtol_reserved3 = 23,
    mav_type_vtol_reserved4 = 24,
    mav_type_vtol_reserved5 = 25,
    mav_type_gimbal = 26,
    mav_type_adsb = 27
}
// These values define the type of firmware release.  These values indicate the first version or release of this type.  For example the first alpha release would be 64, the second would be 65.
enum firmware_version_type {
    firmware_version_type_dev = 0,
    firmware_version_type_alpha = 64,
    firmware_version_type_beta = 128,
    firmware_version_type_rc = 192,
    firmware_version_type_official = 255
}
// These flags encode the MAV mode.
enum mav_mode_flag {
    mav_mode_flag_none = 0,
    mav_mode_flag_safety_armed = 128,
    mav_mode_flag_manual_input_enabled = 64,
    mav_mode_flag_hil_enabled = 32,
    mav_mode_flag_stabilize_enabled = 16,
    mav_mode_flag_guided_enabled = 8,
    mav_mode_flag_auto_enabled = 4,
    mav_mode_flag_test_enabled = 2,
    mav_mode_flag_custom_mode_enabled = 1
}
// These values encode the bit positions of the decode position. These values can be used to read the value of a flag bit by combining the base_mode variable with AND with the flag position value. The result will be either 0 or 1, depending on if the flag is set or not.
enum mav_mode_flag_decode_position {
    mav_mode_flag_decode_position_none = 0,
    mav_mode_flag_decode_position_safety = 128,
    mav_mode_flag_decode_position_manual = 64,
    mav_mode_flag_decode_position_hil = 32,
    mav_mode_flag_decode_position_stabilize = 16,
    mav_mode_flag_decode_position_guided = 8,
    mav_mode_flag_decode_position_auto = 4,
    mav_mode_flag_decode_position_test = 2,
    mav_mode_flag_decode_position_custom_mode = 1
}
// Override command, pauses current mission execution and moves immediately to a position
enum mav_goto {
    mav_goto_do_hold = 0,
    mav_goto_do_continue = 1,
    mav_goto_hold_at_current_position = 2,
    mav_goto_hold_at_specified_position = 3
}
// These defines are predefined OR-combined mode flags. There is no need to use values from this enum, but it                simplifies the use of the mode flags. Note that manual input is enabled in all modes as a safety override.
enum mav_mode {
    mav_mode_preflight = 0,
    mav_mode_stabilize_disarmed = 80,
    mav_mode_stabilize_armed = 208,
    mav_mode_manual_disarmed = 64,
    mav_mode_manual_armed = 192,
    mav_mode_guided_disarmed = 88,
    mav_mode_guided_armed = 216,
    mav_mode_auto_disarmed = 92,
    mav_mode_auto_armed = 220,
    mav_mode_test_disarmed = 66,
    mav_mode_test_armed = 194
}
// 
enum mav_state {
    mav_state_uninit,
    mav_state_boot,
    mav_state_calibrating,
    mav_state_standby,
    mav_state_active,
    mav_state_critical,
    mav_state_emergency,
    mav_state_poweroff
}
// 
enum mav_component {
    mav_comp_id_all = 0,
    mav_comp_id_gps = 220,
    mav_comp_id_missionplanner = 190,
    mav_comp_id_pathplanner = 195,
    mav_comp_id_mapper = 180,
    mav_comp_id_camera = 100,
    mav_comp_id_imu = 200,
    mav_comp_id_imu_2 = 201,
    mav_comp_id_imu_3 = 202,
    mav_comp_id_udp_bridge = 240,
    mav_comp_id_uart_bridge = 241,
    mav_comp_id_system_control = 250,
    mav_comp_id_servo1 = 140,
    mav_comp_id_servo2 = 141,
    mav_comp_id_servo3 = 142,
    mav_comp_id_servo4 = 143,
    mav_comp_id_servo5 = 144,
    mav_comp_id_servo6 = 145,
    mav_comp_id_servo7 = 146,
    mav_comp_id_servo8 = 147,
    mav_comp_id_servo9 = 148,
    mav_comp_id_servo10 = 149,
    mav_comp_id_servo11 = 150,
    mav_comp_id_servo12 = 151,
    mav_comp_id_servo13 = 152,
    mav_comp_id_servo14 = 153,
    mav_comp_id_gimbal = 154,
    mav_comp_id_log = 155,
    mav_comp_id_adsb = 156,
    mav_comp_id_osd = 157,
    mav_comp_id_peripheral = 158,
    mav_comp_id_qx1_gimbal = 159
}
// These encode the sensors whose status is sent as part of the SYS_STATUS message.
enum mav_sys_status_sensor {
    mav_sys_status_sensor_none = 0,
    mav_sys_status_sensor_3d_gyro = 1,
    mav_sys_status_sensor_3d_accel = 2,
    mav_sys_status_sensor_3d_mag = 4,
    mav_sys_status_sensor_absolute_pressure = 8,
    mav_sys_status_sensor_differential_pressure = 16,
    mav_sys_status_sensor_gps = 32,
    mav_sys_status_sensor_optical_flow = 64,
    mav_sys_status_sensor_vision_position = 128,
    mav_sys_status_sensor_laser_position = 256,
    mav_sys_status_sensor_external_ground_truth = 512,
    mav_sys_status_sensor_angular_rate_control = 1024,
    mav_sys_status_sensor_attitude_stabilization = 2048,
    mav_sys_status_sensor_yaw_position = 4096,
    mav_sys_status_sensor_z_altitude_control = 8192,
    mav_sys_status_sensor_xy_position_control = 16384,
    mav_sys_status_sensor_motor_outputs = 32768,
    mav_sys_status_sensor_rc_receiver = 65536,
    mav_sys_status_sensor_3d_gyro2 = 131072,
    mav_sys_status_sensor_3d_accel2 = 262144,
    mav_sys_status_sensor_3d_mag2 = 524288,
    mav_sys_status_geofence = 1048576,
    mav_sys_status_ahrs = 2097152,
    mav_sys_status_terrain = 4194304,
    mav_sys_status_reverse_motor = 8388608,
    mav_sys_status_logging = 16777216
}
// 
enum mav_frame {
    mav_frame_global = 0,
    mav_frame_local_ned = 1,
    mav_frame_mission = 2,
    mav_frame_global_relative_alt = 3,
    mav_frame_local_enu = 4,
    mav_frame_global_int = 5,
    mav_frame_global_relative_alt_int = 6,
    mav_frame_local_offset_ned = 7,
    mav_frame_body_ned = 8,
    mav_frame_body_offset_ned = 9,
    mav_frame_global_terrain_alt = 10,
    mav_frame_global_terrain_alt_int = 11
}
// 
enum mavlink_data_stream_type {
    mavlink_data_stream_img_jpeg,
    mavlink_data_stream_img_bmp,
    mavlink_data_stream_img_raw8u,
    mavlink_data_stream_img_raw32u,
    mavlink_data_stream_img_pgm,
    mavlink_data_stream_img_png
}
// 
enum fence_action {
    fence_action_none = 0,
    fence_action_guided = 1,
    fence_action_report = 2,
    fence_action_guided_thr_pass = 3,
    fence_action_rtl = 4
}
// 
enum fence_breach {
    fence_breach_none = 0,
    fence_breach_minalt = 1,
    fence_breach_maxalt = 2,
    fence_breach_boundary = 3
}
// Enumeration of possible mount operation modes
enum mav_mount_mode {
    mav_mount_mode_retract = 0,
    mav_mount_mode_neutral = 1,
    mav_mount_mode_mavlink_targeting = 2,
    mav_mount_mode_rc_targeting = 3,
    mav_mount_mode_gps_point = 4
}
// Commands to be executed by the MAV. They can be executed on user request, or as part of a mission script. If the action is used in a mission, the parameter mapping to the waypoint/mission message is as follows: Param 1, Param 2, Param 3, Param 4, X: Param 5, Y:Param 6, Z:Param 7. This command list is similar what ARINC 424 is for commercial aircraft: A data format how to interpret waypoint/mission data.
enum mav_cmd {
    mav_cmd_none = 0,
    mav_cmd_nav_waypoint = 16,
    mav_cmd_nav_loiter_unlim = 17,
    mav_cmd_nav_loiter_turns = 18,
    mav_cmd_nav_loiter_time = 19,
    mav_cmd_nav_return_to_launch = 20,
    mav_cmd_nav_land = 21,
    mav_cmd_nav_takeoff = 22,
    mav_cmd_nav_land_local = 23,
    mav_cmd_nav_takeoff_local = 24,
    mav_cmd_nav_follow = 25,
    mav_cmd_nav_continue_and_change_alt = 30,
    mav_cmd_nav_loiter_to_alt = 31,
    mav_cmd_do_follow = 32,
    mav_cmd_do_follow_reposition = 33,
    mav_cmd_nav_roi = 80,
    mav_cmd_nav_pathplanning = 81,
    mav_cmd_nav_spline_waypoint = 82,
    mav_cmd_nav_vtol_takeoff = 84,
    mav_cmd_nav_vtol_land = 85,
    mav_cmd_nav_guided_enable = 92,
    mav_cmd_nav_delay = 93,
    mav_cmd_nav_last = 95,
    mav_cmd_condition_delay = 112,
    mav_cmd_condition_change_alt = 113,
    mav_cmd_condition_distance = 114,
    mav_cmd_condition_yaw = 115,
    mav_cmd_condition_last = 159,
    mav_cmd_do_set_mode = 176,
    mav_cmd_do_jump = 177,
    mav_cmd_do_change_speed = 178,
    mav_cmd_do_set_home = 179,
    mav_cmd_do_set_parameter = 180,
    mav_cmd_do_set_relay = 181,
    mav_cmd_do_repeat_relay = 182,
    mav_cmd_do_set_servo = 183,
    mav_cmd_do_repeat_servo = 184,
    mav_cmd_do_flighttermination = 185,
    mav_cmd_do_change_altitude = 186,
    mav_cmd_do_land_start = 189,
    mav_cmd_do_rally_land = 190,
    mav_cmd_do_go_around = 191,
    mav_cmd_do_reposition = 192,
    mav_cmd_do_pause_continue = 193,
    mav_cmd_do_set_reverse = 194,
    mav_cmd_do_control_video = 200,
    mav_cmd_do_set_roi = 201,
    mav_cmd_do_digicam_configure = 202,
    mav_cmd_do_digicam_control = 203,
    mav_cmd_do_mount_configure = 204,
    mav_cmd_do_mount_control = 205,
    mav_cmd_do_set_cam_trigg_dist = 206,
    mav_cmd_do_fence_enable = 207,
    mav_cmd_do_parachute = 208,
    mav_cmd_do_motor_test = 209,
    mav_cmd_do_inverted_flight = 210,
    mav_cmd_nav_set_yaw_speed = 213,
    mav_cmd_do_mount_control_quat = 220,
    mav_cmd_do_guided_master = 221,
    mav_cmd_do_guided_limits = 222,
    mav_cmd_do_engine_control = 223,
    mav_cmd_do_last = 240,
    mav_cmd_preflight_calibration = 241,
    mav_cmd_preflight_set_sensor_offsets = 242,
    mav_cmd_preflight_uavcan = 243,
    mav_cmd_preflight_storage = 245,
    mav_cmd_preflight_reboot_shutdown = 246,
    mav_cmd_override_goto = 252,
    mav_cmd_mission_start = 300,
    mav_cmd_component_arm_disarm = 400,
    mav_cmd_get_home_position = 410,
    mav_cmd_start_rx_pair = 500,
    mav_cmd_get_message_interval = 510,
    mav_cmd_set_message_interval = 511,
    mav_cmd_request_autopilot_capabilities = 520,
    mav_cmd_request_camera_information = 521,
    mav_cmd_request_camera_settings = 522,
    mav_cmd_set_camera_settings_1 = 523,
    mav_cmd_set_camera_settings_2 = 524,
    mav_cmd_request_storage_information = 525,
    mav_cmd_storage_format = 526,
    mav_cmd_request_camera_capture_status = 527,
    mav_cmd_request_flight_information = 528,
    mav_cmd_image_start_capture = 2000,
    mav_cmd_image_stop_capture = 2001,
    mav_cmd_do_trigger_control = 2003,
    mav_cmd_video_start_capture = 2500,
    mav_cmd_video_stop_capture = 2501,
    mav_cmd_logging_start = 2510,
    mav_cmd_logging_stop = 2511,
    mav_cmd_airframe_configuration = 2520,
    mav_cmd_panorama_create = 2800,
    mav_cmd_do_vtol_transition = 3000,
    mav_cmd_set_guided_submode_standard = 4000,
    mav_cmd_set_guided_submode_circle = 4001,
    mav_cmd_payload_prepare_deploy = 30001,
    mav_cmd_payload_control_deploy = 30002,
    mav_cmd_waypoint_user_1 = 31000,
    mav_cmd_waypoint_user_2 = 31001,
    mav_cmd_waypoint_user_3 = 31002,
    mav_cmd_waypoint_user_4 = 31003,
    mav_cmd_waypoint_user_5 = 31004,
    mav_cmd_spatial_user_1 = 31005,
    mav_cmd_spatial_user_2 = 31006,
    mav_cmd_spatial_user_3 = 31007,
    mav_cmd_spatial_user_4 = 31008,
    mav_cmd_spatial_user_5 = 31009,
    mav_cmd_user_1 = 31010,
    mav_cmd_user_2 = 31011,
    mav_cmd_user_3 = 31012,
    mav_cmd_user_4 = 31013,
    mav_cmd_user_5 = 31014
}
// THIS INTERFACE IS DEPRECATED AS OF JULY 2015. Please use MESSAGE_INTERVAL instead. A data stream is not a fixed set of messages, but rather a      recommendation to the autopilot software. Individual autopilots may or may not obey      the recommended messages.
enum mav_data_stream {
    mav_data_stream_all = 0,
    mav_data_stream_raw_sensors = 1,
    mav_data_stream_extended_status = 2,
    mav_data_stream_rc_channels = 3,
    mav_data_stream_raw_controller = 4,
    mav_data_stream_position = 6,
    mav_data_stream_extra1 = 10,
    mav_data_stream_extra2 = 11,
    mav_data_stream_extra3 = 12
}
//  The ROI (region of interest) for the vehicle. This can be                 be used by the vehicle for camera/vehicle attitude alignment (see                 MAV_CMD_NAV_ROI).
enum mav_roi {
    mav_roi_none = 0,
    mav_roi_wpnext = 1,
    mav_roi_wpindex = 2,
    mav_roi_location = 3,
    mav_roi_target = 4
}
// ACK / NACK / ERROR values as a result of MAV_CMDs and for mission item transmission.
enum mav_cmd_ack {
    mav_cmd_ack_ok,
    mav_cmd_ack_err_fail,
    mav_cmd_ack_err_access_denied,
    mav_cmd_ack_err_not_supported,
    mav_cmd_ack_err_coordinate_frame_not_supported,
    mav_cmd_ack_err_coordinates_out_of_range,
    mav_cmd_ack_err_x_lat_out_of_range,
    mav_cmd_ack_err_y_lon_out_of_range,
    mav_cmd_ack_err_z_alt_out_of_range
}
// Specifies the datatype of a MAVLink parameter.
enum mav_param_type {
    mav_param_type_none = 0,
    mav_param_type_uint8 = 1,
    mav_param_type_int8 = 2,
    mav_param_type_uint16 = 3,
    mav_param_type_int16 = 4,
    mav_param_type_uint32 = 5,
    mav_param_type_int32 = 6,
    mav_param_type_uint64 = 7,
    mav_param_type_int64 = 8,
    mav_param_type_real32 = 9,
    mav_param_type_real64 = 10
}
// result from a mavlink command
enum mav_result {
    mav_result_accepted = 0,
    mav_result_temporarily_rejected = 1,
    mav_result_denied = 2,
    mav_result_unsupported = 3,
    mav_result_failed = 4
}
// result in a mavlink mission ack
enum mav_mission_result {
    mav_mission_accepted = 0,
    mav_mission_error = 1,
    mav_mission_unsupported_frame = 2,
    mav_mission_unsupported = 3,
    mav_mission_no_space = 4,
    mav_mission_invalid = 5,
    mav_mission_invalid_param1 = 6,
    mav_mission_invalid_param2 = 7,
    mav_mission_invalid_param3 = 8,
    mav_mission_invalid_param4 = 9,
    mav_mission_invalid_param5_x = 10,
    mav_mission_invalid_param6_y = 11,
    mav_mission_invalid_param7 = 12,
    mav_mission_invalid_sequence = 13,
    mav_mission_denied = 14
}
// Indicates the severity level, generally used for status messages to indicate their relative urgency. Based on RFC-5424 using expanded definitions at: http://www.kiwisyslog.com/kb/info:-syslog-message-levels/.
enum mav_severity {
    mav_severity_emergency = 0,
    mav_severity_alert = 1,
    mav_severity_critical = 2,
    mav_severity_error = 3,
    mav_severity_warning = 4,
    mav_severity_notice = 5,
    mav_severity_info = 6,
    mav_severity_debug = 7
}
// Power supply status flags (bitmask)
enum mav_power_status {
    mav_power_status_none = 0,
    mav_power_status_brick_valid = 1,
    mav_power_status_servo_valid = 2,
    mav_power_status_usb_connected = 4,
    mav_power_status_periph_overcurrent = 8,
    mav_power_status_periph_hipower_overcurrent = 16,
    mav_power_status_changed = 32
}
// SERIAL_CONTROL device types
enum serial_control_dev {
    serial_control_dev_telem1 = 0,
    serial_control_dev_telem2 = 1,
    serial_control_dev_gps1 = 2,
    serial_control_dev_gps2 = 3,
    serial_control_dev_shell = 10
}
// SERIAL_CONTROL flags (bitmask)
enum serial_control_flag {
    serial_control_flag_none = 0,
    serial_control_flag_reply = 1,
    serial_control_flag_respond = 2,
    serial_control_flag_exclusive = 4,
    serial_control_flag_blocking = 8,
    serial_control_flag_multi = 16
}
// Enumeration of distance sensor types
enum mav_distance_sensor {
    mav_distance_sensor_laser = 0,
    mav_distance_sensor_ultrasound = 1,
    mav_distance_sensor_infrared = 2
}
// Enumeration of sensor orientation, according to its rotations
enum mav_sensor_orientation {
    mav_sensor_rotation_none = 0,
    mav_sensor_rotation_yaw_45 = 1,
    mav_sensor_rotation_yaw_90 = 2,
    mav_sensor_rotation_yaw_135 = 3,
    mav_sensor_rotation_yaw_180 = 4,
    mav_sensor_rotation_yaw_225 = 5,
    mav_sensor_rotation_yaw_270 = 6,
    mav_sensor_rotation_yaw_315 = 7,
    mav_sensor_rotation_roll_180 = 8,
    mav_sensor_rotation_roll_180_yaw_45 = 9,
    mav_sensor_rotation_roll_180_yaw_90 = 10,
    mav_sensor_rotation_roll_180_yaw_135 = 11,
    mav_sensor_rotation_pitch_180 = 12,
    mav_sensor_rotation_roll_180_yaw_225 = 13,
    mav_sensor_rotation_roll_180_yaw_270 = 14,
    mav_sensor_rotation_roll_180_yaw_315 = 15,
    mav_sensor_rotation_roll_90 = 16,
    mav_sensor_rotation_roll_90_yaw_45 = 17,
    mav_sensor_rotation_roll_90_yaw_90 = 18,
    mav_sensor_rotation_roll_90_yaw_135 = 19,
    mav_sensor_rotation_roll_270 = 20,
    mav_sensor_rotation_roll_270_yaw_45 = 21,
    mav_sensor_rotation_roll_270_yaw_90 = 22,
    mav_sensor_rotation_roll_270_yaw_135 = 23,
    mav_sensor_rotation_pitch_90 = 24,
    mav_sensor_rotation_pitch_270 = 25,
    mav_sensor_rotation_pitch_180_yaw_90 = 26,
    mav_sensor_rotation_pitch_180_yaw_270 = 27,
    mav_sensor_rotation_roll_90_pitch_90 = 28,
    mav_sensor_rotation_roll_180_pitch_90 = 29,
    mav_sensor_rotation_roll_270_pitch_90 = 30,
    mav_sensor_rotation_roll_90_pitch_180 = 31,
    mav_sensor_rotation_roll_270_pitch_180 = 32,
    mav_sensor_rotation_roll_90_pitch_270 = 33,
    mav_sensor_rotation_roll_180_pitch_270 = 34,
    mav_sensor_rotation_roll_270_pitch_270 = 35,
    mav_sensor_rotation_roll_90_pitch_180_yaw_90 = 36,
    mav_sensor_rotation_roll_90_yaw_270 = 37,
    mav_sensor_rotation_roll_315_pitch_315_yaw_315 = 38
}
// Bitmask of (optional) autopilot capabilities (64 bit). If a bit is set, the autopilot supports this capability.
enum mav_protocol_capability {
    mav_protocol_capability_none = 0,
    mav_protocol_capability_mission_float = 1,
    mav_protocol_capability_param_float = 2,
    mav_protocol_capability_mission_int = 4,
    mav_protocol_capability_command_int = 8,
    mav_protocol_capability_param_union = 16,
    mav_protocol_capability_ftp = 32,
    mav_protocol_capability_set_attitude_target = 64,
    mav_protocol_capability_set_position_target_local_ned = 128,
    mav_protocol_capability_set_position_target_global_int = 256,
    mav_protocol_capability_terrain = 512,
    mav_protocol_capability_set_actuator_target = 1024,
    mav_protocol_capability_flight_termination = 2048,
    mav_protocol_capability_compass_calibration = 4096,
    mav_protocol_capability_mavlink2 = 8192
}
// Enumeration of estimator types
enum mav_estimator_type {
    mav_estimator_type_none = 0,
    mav_estimator_type_naive = 1,
    mav_estimator_type_vision = 2,
    mav_estimator_type_vio = 3,
    mav_estimator_type_gps = 4,
    mav_estimator_type_gps_ins = 5
}
// Enumeration of battery types
enum mav_battery_type {
    mav_battery_type_unknown = 0,
    mav_battery_type_lipo = 1,
    mav_battery_type_life = 2,
    mav_battery_type_lion = 3,
    mav_battery_type_nimh = 4
}
// Enumeration of battery functions
enum mav_battery_function {
    mav_battery_function_unknown = 0,
    mav_battery_function_all = 1,
    mav_battery_function_propulsion = 2,
    mav_battery_function_avionics = 3,
    mav_battery_type_payload = 4
}
// Enumeration of VTOL states
enum mav_vtol_state {
    mav_vtol_state_undefined = 0,
    mav_vtol_state_transition_to_fw = 1,
    mav_vtol_state_transition_to_mc = 2,
    mav_vtol_state_mc = 3,
    mav_vtol_state_fw = 4
}
// Enumeration of landed detector states
enum mav_landed_state {
    mav_landed_state_undefined = 0,
    mav_landed_state_on_ground = 1,
    mav_landed_state_in_air = 2
}
// Enumeration of the ADSB altimeter types
enum adsb_altitude_type {
    adsb_altitude_type_pressure_qnh = 0,
    adsb_altitude_type_geometric = 1
}
// ADSB classification for the type of vehicle emitting the transponder signal
enum adsb_emitter_type {
    adsb_emitter_type_no_info = 0,
    adsb_emitter_type_light = 1,
    adsb_emitter_type_small = 2,
    adsb_emitter_type_large = 3,
    adsb_emitter_type_high_vortex_large = 4,
    adsb_emitter_type_heavy = 5,
    adsb_emitter_type_highly_manuv = 6,
    adsb_emitter_type_rotocraft = 7,
    adsb_emitter_type_unassigned = 8,
    adsb_emitter_type_glider = 9,
    adsb_emitter_type_lighter_air = 10,
    adsb_emitter_type_parachute = 11,
    adsb_emitter_type_ultra_light = 12,
    adsb_emitter_type_unassigned2 = 13,
    adsb_emitter_type_uav = 14,
    adsb_emitter_type_space = 15,
    adsb_emitter_type_unassgined3 = 16,
    adsb_emitter_type_emergency_surface = 17,
    adsb_emitter_type_service_surface = 18,
    adsb_emitter_type_point_obstacle = 19
}
// These flags indicate status such as data validity of each data source. Set = data valid
enum adsb_flags {
    adsb_flags_none = 0,
    adsb_flags_valid_coords = 1,
    adsb_flags_valid_altitude = 2,
    adsb_flags_valid_heading = 4,
    adsb_flags_valid_velocity = 8,
    adsb_flags_valid_callsign = 16,
    adsb_flags_valid_squawk = 32,
    adsb_flags_simulated = 64
}
// Bitmask of options for the MAV_CMD_DO_REPOSITION
enum mav_do_reposition_flags {
    mav_do_reposition_flags_none = 0,
    mav_do_reposition_flags_change_mode = 1
}
// Flags in EKF_STATUS message
enum estimator_status_flags {
    estimator_status_flags_none = 0,
    estimator_attitude = 1,
    estimator_velocity_horiz = 2,
    estimator_velocity_vert = 4,
    estimator_pos_horiz_rel = 8,
    estimator_pos_horiz_abs = 16,
    estimator_pos_vert_abs = 32,
    estimator_pos_vert_agl = 64,
    estimator_const_pos_mode = 128,
    estimator_pred_pos_horiz_rel = 256,
    estimator_pred_pos_horiz_abs = 512,
    estimator_gps_glitch = 1024
}
// 
enum motor_test_throttle_type {
    motor_test_throttle_percent = 0,
    motor_test_throttle_pwm = 1,
    motor_test_throttle_pilot = 2
}
// 
enum gps_input_ignore_flags {
    gps_input_ignore_flags_none = 0,
    gps_input_ignore_flag_alt = 1,
    gps_input_ignore_flag_hdop = 2,
    gps_input_ignore_flag_vdop = 4,
    gps_input_ignore_flag_vel_horiz = 8,
    gps_input_ignore_flag_vel_vert = 16,
    gps_input_ignore_flag_speed_accuracy = 32,
    gps_input_ignore_flag_horizontal_accuracy = 64,
    gps_input_ignore_flag_vertical_accuracy = 128
}
// Possible actions an aircraft can take to avoid a collision.
enum mav_collision_action {
    mav_collision_action_none = 0,
    mav_collision_action_report = 1,
    mav_collision_action_ascend_or_descend = 2,
    mav_collision_action_move_horizontally = 3,
    mav_collision_action_move_perpendicular = 4,
    mav_collision_action_rtl = 5,
    mav_collision_action_hover = 6
}
// Aircraft-rated danger from this threat.
enum mav_collision_threat_level {
    mav_collision_threat_level_none = 0,
    mav_collision_threat_level_low = 1,
    mav_collision_threat_level_high = 2
}
// Source of information about this collision.
enum mav_collision_src {
    mav_collision_src_adsb = 0,
    mav_collision_src_mavlink_gps_global_int = 1
}
// Type of GPS fix
enum gps_fix_type {
    gps_fix_type_no_gps = 0,
    gps_fix_type_no_fix = 1,
    gps_fix_type_2d_fix = 2,
    gps_fix_type_3d_fix = 3,
    gps_fix_type_dgps = 4,
    gps_fix_type_rtk_float = 5,
    gps_fix_type_rtk_fixed = 6,
    gps_fix_type_static = 7
}
