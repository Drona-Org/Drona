
  #ifndef P_MAVLINKENUMS_H_
    #define P_MAVLINKENUMS_H_
    #include "linker.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum adsb_altitude_type
    {
      adsb_altitude_type_adsb_altitude_type_pressure_qnh = 0,
      adsb_altitude_type_adsb_altitude_type_geometric = 1,
      _adsb_altitude_type_COUNT = 2
    };

    enum adsb_emitter_type
    {
      adsb_emitter_type_adsb_emitter_type_no_info = 0,
      adsb_emitter_type_adsb_emitter_type_light = 1,
      adsb_emitter_type_adsb_emitter_type_small = 2,
      adsb_emitter_type_adsb_emitter_type_large = 3,
      adsb_emitter_type_adsb_emitter_type_high_vortex_large = 4,
      adsb_emitter_type_adsb_emitter_type_heavy = 5,
      adsb_emitter_type_adsb_emitter_type_highly_manuv = 6,
      adsb_emitter_type_adsb_emitter_type_rotocraft = 7,
      adsb_emitter_type_adsb_emitter_type_unassigned = 8,
      adsb_emitter_type_adsb_emitter_type_glider = 9,
      adsb_emitter_type_adsb_emitter_type_lighter_air = 10,
      adsb_emitter_type_adsb_emitter_type_parachute = 11,
      adsb_emitter_type_adsb_emitter_type_ultra_light = 12,
      adsb_emitter_type_adsb_emitter_type_unassigned2 = 13,
      adsb_emitter_type_adsb_emitter_type_uav = 14,
      adsb_emitter_type_adsb_emitter_type_space = 15,
      adsb_emitter_type_adsb_emitter_type_unassgined3 = 16,
      adsb_emitter_type_adsb_emitter_type_emergency_surface = 17,
      adsb_emitter_type_adsb_emitter_type_service_surface = 18,
      adsb_emitter_type_adsb_emitter_type_point_obstacle = 19,
      _adsb_emitter_type_COUNT = 20
    };

    enum adsb_flags
    {
      adsb_flags_adsb_flags_none = 0,
      adsb_flags_adsb_flags_valid_coords = 1,
      adsb_flags_adsb_flags_valid_altitude = 2,
      adsb_flags_adsb_flags_valid_heading = 4,
      _adsb_flags_COUNT = 8,
      adsb_flags_adsb_flags_valid_velocity = 8,
      adsb_flags_adsb_flags_valid_callsign = 16,
      adsb_flags_adsb_flags_valid_squawk = 32,
      adsb_flags_adsb_flags_simulated = 64
    };

    enum estimator_status_flags
    {
      estimator_status_flags_estimator_status_flags_none = 0,
      estimator_status_flags_estimator_attitude = 1,
      estimator_status_flags_estimator_velocity_horiz = 2,
      estimator_status_flags_estimator_velocity_vert = 4,
      estimator_status_flags_estimator_pos_horiz_rel = 8,
      _estimator_status_flags_COUNT = 12,
      estimator_status_flags_estimator_pos_horiz_abs = 16,
      estimator_status_flags_estimator_pos_vert_abs = 32,
      estimator_status_flags_estimator_pos_vert_agl = 64,
      estimator_status_flags_estimator_const_pos_mode = 128,
      estimator_status_flags_estimator_pred_pos_horiz_rel = 256,
      estimator_status_flags_estimator_pred_pos_horiz_abs = 512,
      estimator_status_flags_estimator_gps_glitch = 1024
    };

    enum fence_action
    {
      fence_action_fence_action_none = 0,
      fence_action_fence_action_guided = 1,
      fence_action_fence_action_report = 2,
      fence_action_fence_action_guided_thr_pass = 3,
      fence_action_fence_action_rtl = 4,
      _fence_action_COUNT = 5
    };

    enum fence_breach
    {
      fence_breach_fence_breach_none = 0,
      fence_breach_fence_breach_minalt = 1,
      fence_breach_fence_breach_maxalt = 2,
      fence_breach_fence_breach_boundary = 3,
      _fence_breach_COUNT = 4
    };

    enum firmware_version_type
    {
      firmware_version_type_firmware_version_type_dev = 0,
      _firmware_version_type_COUNT = 5,
      firmware_version_type_firmware_version_type_alpha = 64,
      firmware_version_type_firmware_version_type_beta = 128,
      firmware_version_type_firmware_version_type_rc = 192,
      firmware_version_type_firmware_version_type_official = 255
    };

    enum gps_fix_type
    {
      gps_fix_type_gps_fix_type_no_gps = 0,
      gps_fix_type_gps_fix_type_no_fix = 1,
      gps_fix_type_gps_fix_type_2d_fix = 2,
      gps_fix_type_gps_fix_type_3d_fix = 3,
      gps_fix_type_gps_fix_type_dgps = 4,
      gps_fix_type_gps_fix_type_rtk_float = 5,
      gps_fix_type_gps_fix_type_rtk_fixed = 6,
      gps_fix_type_gps_fix_type_static = 7,
      _gps_fix_type_COUNT = 8
    };

    enum gps_input_ignore_flags
    {
      gps_input_ignore_flags_gps_input_ignore_flags_none = 0,
      gps_input_ignore_flags_gps_input_ignore_flag_alt = 1,
      gps_input_ignore_flags_gps_input_ignore_flag_hdop = 2,
      gps_input_ignore_flags_gps_input_ignore_flag_vdop = 4,
      gps_input_ignore_flags_gps_input_ignore_flag_vel_horiz = 8,
      _gps_input_ignore_flags_COUNT = 9,
      gps_input_ignore_flags_gps_input_ignore_flag_vel_vert = 16,
      gps_input_ignore_flags_gps_input_ignore_flag_speed_accuracy = 32,
      gps_input_ignore_flags_gps_input_ignore_flag_horizontal_accuracy = 64,
      gps_input_ignore_flags_gps_input_ignore_flag_vertical_accuracy = 128
    };

    enum mav_autopilot
    {
      mav_autopilot_mav_autopilot_generic = 0,
      mav_autopilot_mav_autopilot_reserved = 1,
      mav_autopilot_mav_autopilot_slugs = 2,
      mav_autopilot_mav_autopilot_ardupilotmega = 3,
      mav_autopilot_mav_autopilot_openpilot = 4,
      mav_autopilot_mav_autopilot_generic_waypoints_only = 5,
      mav_autopilot_mav_autopilot_generic_waypoints_and_simple_navigation_only = 6,
      mav_autopilot_mav_autopilot_generic_mission_full = 7,
      mav_autopilot_mav_autopilot_invalid = 8,
      mav_autopilot_mav_autopilot_ppz = 9,
      mav_autopilot_mav_autopilot_udb = 10,
      mav_autopilot_mav_autopilot_fp = 11,
      mav_autopilot_mav_autopilot_px4 = 12,
      mav_autopilot_mav_autopilot_smaccmpilot = 13,
      mav_autopilot_mav_autopilot_autoquad = 14,
      mav_autopilot_mav_autopilot_armazila = 15,
      mav_autopilot_mav_autopilot_aerob = 16,
      mav_autopilot_mav_autopilot_asluav = 17,
      _mav_autopilot_COUNT = 18
    };

    enum mav_battery_function
    {
      mav_battery_function_mav_battery_function_unknown = 0,
      mav_battery_function_mav_battery_function_all = 1,
      mav_battery_function_mav_battery_function_propulsion = 2,
      mav_battery_function_mav_battery_function_avionics = 3,
      mav_battery_function_mav_battery_type_payload = 4,
      _mav_battery_function_COUNT = 5
    };

    enum mav_battery_type
    {
      mav_battery_type_mav_battery_type_unknown = 0,
      mav_battery_type_mav_battery_type_lipo = 1,
      mav_battery_type_mav_battery_type_life = 2,
      mav_battery_type_mav_battery_type_lion = 3,
      mav_battery_type_mav_battery_type_nimh = 4,
      _mav_battery_type_COUNT = 5
    };

    enum mav_cmd
    {
      mav_cmd_mav_cmd_none = 0,
      mav_cmd_mav_cmd_nav_waypoint = 16,
      mav_cmd_mav_cmd_nav_loiter_unlim = 17,
      mav_cmd_mav_cmd_nav_loiter_turns = 18,
      mav_cmd_mav_cmd_nav_loiter_time = 19,
      mav_cmd_mav_cmd_nav_return_to_launch = 20,
      mav_cmd_mav_cmd_nav_land = 21,
      mav_cmd_mav_cmd_nav_takeoff = 22,
      mav_cmd_mav_cmd_nav_land_local = 23,
      mav_cmd_mav_cmd_nav_takeoff_local = 24,
      mav_cmd_mav_cmd_nav_follow = 25,
      mav_cmd_mav_cmd_nav_continue_and_change_alt = 30,
      mav_cmd_mav_cmd_nav_loiter_to_alt = 31,
      mav_cmd_mav_cmd_do_follow = 32,
      mav_cmd_mav_cmd_do_follow_reposition = 33,
      mav_cmd_mav_cmd_nav_roi = 80,
      mav_cmd_mav_cmd_nav_pathplanning = 81,
      mav_cmd_mav_cmd_nav_spline_waypoint = 82,
      mav_cmd_mav_cmd_nav_vtol_takeoff = 84,
      mav_cmd_mav_cmd_nav_vtol_land = 85,
      mav_cmd_mav_cmd_nav_guided_enable = 92,
      mav_cmd_mav_cmd_nav_delay = 93,
      mav_cmd_mav_cmd_nav_last = 95,
      _mav_cmd_COUNT = 112,
      mav_cmd_mav_cmd_condition_delay = 112,
      mav_cmd_mav_cmd_condition_change_alt = 113,
      mav_cmd_mav_cmd_condition_distance = 114,
      mav_cmd_mav_cmd_condition_yaw = 115,
      mav_cmd_mav_cmd_condition_last = 159,
      mav_cmd_mav_cmd_do_set_mode = 176,
      mav_cmd_mav_cmd_do_jump = 177,
      mav_cmd_mav_cmd_do_change_speed = 178,
      mav_cmd_mav_cmd_do_set_home = 179,
      mav_cmd_mav_cmd_do_set_parameter = 180,
      mav_cmd_mav_cmd_do_set_relay = 181,
      mav_cmd_mav_cmd_do_repeat_relay = 182,
      mav_cmd_mav_cmd_do_set_servo = 183,
      mav_cmd_mav_cmd_do_repeat_servo = 184,
      mav_cmd_mav_cmd_do_flighttermination = 185,
      mav_cmd_mav_cmd_do_change_altitude = 186,
      mav_cmd_mav_cmd_do_land_start = 189,
      mav_cmd_mav_cmd_do_rally_land = 190,
      mav_cmd_mav_cmd_do_go_around = 191,
      mav_cmd_mav_cmd_do_reposition = 192,
      mav_cmd_mav_cmd_do_pause_continue = 193,
      mav_cmd_mav_cmd_do_set_reverse = 194,
      mav_cmd_mav_cmd_do_control_video = 200,
      mav_cmd_mav_cmd_do_set_roi = 201,
      mav_cmd_mav_cmd_do_digicam_configure = 202,
      mav_cmd_mav_cmd_do_digicam_control = 203,
      mav_cmd_mav_cmd_do_mount_configure = 204,
      mav_cmd_mav_cmd_do_mount_control = 205,
      mav_cmd_mav_cmd_do_set_cam_trigg_dist = 206,
      mav_cmd_mav_cmd_do_fence_enable = 207,
      mav_cmd_mav_cmd_do_parachute = 208,
      mav_cmd_mav_cmd_do_motor_test = 209,
      mav_cmd_mav_cmd_do_inverted_flight = 210,
      mav_cmd_mav_cmd_nav_set_yaw_speed = 213,
      mav_cmd_mav_cmd_do_mount_control_quat = 220,
      mav_cmd_mav_cmd_do_guided_master = 221,
      mav_cmd_mav_cmd_do_guided_limits = 222,
      mav_cmd_mav_cmd_do_engine_control = 223,
      mav_cmd_mav_cmd_do_last = 240,
      mav_cmd_mav_cmd_preflight_calibration = 241,
      mav_cmd_mav_cmd_preflight_set_sensor_offsets = 242,
      mav_cmd_mav_cmd_preflight_uavcan = 243,
      mav_cmd_mav_cmd_preflight_storage = 245,
      mav_cmd_mav_cmd_preflight_reboot_shutdown = 246,
      mav_cmd_mav_cmd_override_goto = 252,
      mav_cmd_mav_cmd_mission_start = 300,
      mav_cmd_mav_cmd_component_arm_disarm = 400,
      mav_cmd_mav_cmd_get_home_position = 410,
      mav_cmd_mav_cmd_start_rx_pair = 500,
      mav_cmd_mav_cmd_get_message_interval = 510,
      mav_cmd_mav_cmd_set_message_interval = 511,
      mav_cmd_mav_cmd_request_autopilot_capabilities = 520,
      mav_cmd_mav_cmd_request_camera_information = 521,
      mav_cmd_mav_cmd_request_camera_settings = 522,
      mav_cmd_mav_cmd_set_camera_settings_1 = 523,
      mav_cmd_mav_cmd_set_camera_settings_2 = 524,
      mav_cmd_mav_cmd_request_storage_information = 525,
      mav_cmd_mav_cmd_storage_format = 526,
      mav_cmd_mav_cmd_request_camera_capture_status = 527,
      mav_cmd_mav_cmd_request_flight_information = 528,
      mav_cmd_mav_cmd_image_start_capture = 2000,
      mav_cmd_mav_cmd_image_stop_capture = 2001,
      mav_cmd_mav_cmd_do_trigger_control = 2003,
      mav_cmd_mav_cmd_video_start_capture = 2500,
      mav_cmd_mav_cmd_video_stop_capture = 2501,
      mav_cmd_mav_cmd_logging_start = 2510,
      mav_cmd_mav_cmd_logging_stop = 2511,
      mav_cmd_mav_cmd_airframe_configuration = 2520,
      mav_cmd_mav_cmd_panorama_create = 2800,
      mav_cmd_mav_cmd_do_vtol_transition = 3000,
      mav_cmd_mav_cmd_set_guided_submode_standard = 4000,
      mav_cmd_mav_cmd_set_guided_submode_circle = 4001,
      mav_cmd_mav_cmd_payload_prepare_deploy = 30001,
      mav_cmd_mav_cmd_payload_control_deploy = 30002,
      mav_cmd_mav_cmd_waypoint_user_1 = 31000,
      mav_cmd_mav_cmd_waypoint_user_2 = 31001,
      mav_cmd_mav_cmd_waypoint_user_3 = 31002,
      mav_cmd_mav_cmd_waypoint_user_4 = 31003,
      mav_cmd_mav_cmd_waypoint_user_5 = 31004,
      mav_cmd_mav_cmd_spatial_user_1 = 31005,
      mav_cmd_mav_cmd_spatial_user_2 = 31006,
      mav_cmd_mav_cmd_spatial_user_3 = 31007,
      mav_cmd_mav_cmd_spatial_user_4 = 31008,
      mav_cmd_mav_cmd_spatial_user_5 = 31009,
      mav_cmd_mav_cmd_user_1 = 31010,
      mav_cmd_mav_cmd_user_2 = 31011,
      mav_cmd_mav_cmd_user_3 = 31012,
      mav_cmd_mav_cmd_user_4 = 31013,
      mav_cmd_mav_cmd_user_5 = 31014
    };

    enum mav_cmd_ack
    {
      mav_cmd_ack_mav_cmd_ack_ok = 0,
      mav_cmd_ack_mav_cmd_ack_err_fail = 1,
      mav_cmd_ack_mav_cmd_ack_err_access_denied = 2,
      mav_cmd_ack_mav_cmd_ack_err_not_supported = 3,
      mav_cmd_ack_mav_cmd_ack_err_coordinate_frame_not_supported = 4,
      mav_cmd_ack_mav_cmd_ack_err_coordinates_out_of_range = 5,
      mav_cmd_ack_mav_cmd_ack_err_x_lat_out_of_range = 6,
      mav_cmd_ack_mav_cmd_ack_err_y_lon_out_of_range = 7,
      mav_cmd_ack_mav_cmd_ack_err_z_alt_out_of_range = 8,
      _mav_cmd_ack_COUNT = 9
    };

    enum mav_collision_action
    {
      mav_collision_action_mav_collision_action_none = 0,
      mav_collision_action_mav_collision_action_report = 1,
      mav_collision_action_mav_collision_action_ascend_or_descend = 2,
      mav_collision_action_mav_collision_action_move_horizontally = 3,
      mav_collision_action_mav_collision_action_move_perpendicular = 4,
      mav_collision_action_mav_collision_action_rtl = 5,
      mav_collision_action_mav_collision_action_hover = 6,
      _mav_collision_action_COUNT = 7
    };

    enum mav_collision_src
    {
      mav_collision_src_mav_collision_src_adsb = 0,
      mav_collision_src_mav_collision_src_mavlink_gps_global_int = 1,
      _mav_collision_src_COUNT = 2
    };

    enum mav_collision_threat_level
    {
      mav_collision_threat_level_mav_collision_threat_level_none = 0,
      mav_collision_threat_level_mav_collision_threat_level_low = 1,
      mav_collision_threat_level_mav_collision_threat_level_high = 2,
      _mav_collision_threat_level_COUNT = 3
    };

    enum mav_component
    {
      mav_component_mav_comp_id_all = 0,
      _mav_component_COUNT = 32,
      mav_component_mav_comp_id_camera = 100,
      mav_component_mav_comp_id_servo1 = 140,
      mav_component_mav_comp_id_servo2 = 141,
      mav_component_mav_comp_id_servo3 = 142,
      mav_component_mav_comp_id_servo4 = 143,
      mav_component_mav_comp_id_servo5 = 144,
      mav_component_mav_comp_id_servo6 = 145,
      mav_component_mav_comp_id_servo7 = 146,
      mav_component_mav_comp_id_servo8 = 147,
      mav_component_mav_comp_id_servo9 = 148,
      mav_component_mav_comp_id_servo10 = 149,
      mav_component_mav_comp_id_servo11 = 150,
      mav_component_mav_comp_id_servo12 = 151,
      mav_component_mav_comp_id_servo13 = 152,
      mav_component_mav_comp_id_servo14 = 153,
      mav_component_mav_comp_id_gimbal = 154,
      mav_component_mav_comp_id_log = 155,
      mav_component_mav_comp_id_adsb = 156,
      mav_component_mav_comp_id_osd = 157,
      mav_component_mav_comp_id_peripheral = 158,
      mav_component_mav_comp_id_qx1_gimbal = 159,
      mav_component_mav_comp_id_mapper = 180,
      mav_component_mav_comp_id_missionplanner = 190,
      mav_component_mav_comp_id_pathplanner = 195,
      mav_component_mav_comp_id_imu = 200,
      mav_component_mav_comp_id_imu_2 = 201,
      mav_component_mav_comp_id_imu_3 = 202,
      mav_component_mav_comp_id_gps = 220,
      mav_component_mav_comp_id_udp_bridge = 240,
      mav_component_mav_comp_id_uart_bridge = 241,
      mav_component_mav_comp_id_system_control = 250
    };

    enum mav_data_stream
    {
      mav_data_stream_mav_data_stream_all = 0,
      mav_data_stream_mav_data_stream_raw_sensors = 1,
      mav_data_stream_mav_data_stream_extended_status = 2,
      mav_data_stream_mav_data_stream_rc_channels = 3,
      mav_data_stream_mav_data_stream_raw_controller = 4,
      mav_data_stream_mav_data_stream_position = 6,
      _mav_data_stream_COUNT = 9,
      mav_data_stream_mav_data_stream_extra1 = 10,
      mav_data_stream_mav_data_stream_extra2 = 11,
      mav_data_stream_mav_data_stream_extra3 = 12
    };

    enum mav_distance_sensor
    {
      mav_distance_sensor_mav_distance_sensor_laser = 0,
      mav_distance_sensor_mav_distance_sensor_ultrasound = 1,
      mav_distance_sensor_mav_distance_sensor_infrared = 2,
      _mav_distance_sensor_COUNT = 3
    };

    enum mav_do_reposition_flags
    {
      mav_do_reposition_flags_mav_do_reposition_flags_none = 0,
      mav_do_reposition_flags_mav_do_reposition_flags_change_mode = 1,
      _mav_do_reposition_flags_COUNT = 2
    };

    enum mav_estimator_type
    {
      mav_estimator_type_mav_estimator_type_none = 0,
      mav_estimator_type_mav_estimator_type_naive = 1,
      mav_estimator_type_mav_estimator_type_vision = 2,
      mav_estimator_type_mav_estimator_type_vio = 3,
      mav_estimator_type_mav_estimator_type_gps = 4,
      mav_estimator_type_mav_estimator_type_gps_ins = 5,
      _mav_estimator_type_COUNT = 6
    };

    enum mav_frame
    {
      mav_frame_mav_frame_global = 0,
      mav_frame_mav_frame_local_ned = 1,
      mav_frame_mav_frame_mission = 2,
      mav_frame_mav_frame_global_relative_alt = 3,
      mav_frame_mav_frame_local_enu = 4,
      mav_frame_mav_frame_global_int = 5,
      mav_frame_mav_frame_global_relative_alt_int = 6,
      mav_frame_mav_frame_local_offset_ned = 7,
      mav_frame_mav_frame_body_ned = 8,
      mav_frame_mav_frame_body_offset_ned = 9,
      mav_frame_mav_frame_global_terrain_alt = 10,
      mav_frame_mav_frame_global_terrain_alt_int = 11,
      _mav_frame_COUNT = 12
    };

    enum mav_goto
    {
      mav_goto_mav_goto_do_hold = 0,
      mav_goto_mav_goto_do_continue = 1,
      mav_goto_mav_goto_hold_at_current_position = 2,
      mav_goto_mav_goto_hold_at_specified_position = 3,
      _mav_goto_COUNT = 4
    };

    enum mav_landed_state
    {
      mav_landed_state_mav_landed_state_undefined = 0,
      mav_landed_state_mav_landed_state_on_ground = 1,
      mav_landed_state_mav_landed_state_in_air = 2,
      _mav_landed_state_COUNT = 3
    };

    enum mav_mission_result
    {
      mav_mission_result_mav_mission_accepted = 0,
      mav_mission_result_mav_mission_error = 1,
      mav_mission_result_mav_mission_unsupported_frame = 2,
      mav_mission_result_mav_mission_unsupported = 3,
      mav_mission_result_mav_mission_no_space = 4,
      mav_mission_result_mav_mission_invalid = 5,
      mav_mission_result_mav_mission_invalid_param1 = 6,
      mav_mission_result_mav_mission_invalid_param2 = 7,
      mav_mission_result_mav_mission_invalid_param3 = 8,
      mav_mission_result_mav_mission_invalid_param4 = 9,
      mav_mission_result_mav_mission_invalid_param5_x = 10,
      mav_mission_result_mav_mission_invalid_param6_y = 11,
      mav_mission_result_mav_mission_invalid_param7 = 12,
      mav_mission_result_mav_mission_invalid_sequence = 13,
      mav_mission_result_mav_mission_denied = 14,
      _mav_mission_result_COUNT = 15
    };

    enum mav_mode
    {
      mav_mode_mav_mode_preflight = 0,
      _mav_mode_COUNT = 11,
      mav_mode_mav_mode_manual_disarmed = 64,
      mav_mode_mav_mode_test_disarmed = 66,
      mav_mode_mav_mode_stabilize_disarmed = 80,
      mav_mode_mav_mode_guided_disarmed = 88,
      mav_mode_mav_mode_auto_disarmed = 92,
      mav_mode_mav_mode_manual_armed = 192,
      mav_mode_mav_mode_test_armed = 194,
      mav_mode_mav_mode_stabilize_armed = 208,
      mav_mode_mav_mode_guided_armed = 216,
      mav_mode_mav_mode_auto_armed = 220
    };

    enum mav_mode_flag
    {
      mav_mode_flag_mav_mode_flag_none = 0,
      mav_mode_flag_mav_mode_flag_custom_mode_enabled = 1,
      mav_mode_flag_mav_mode_flag_test_enabled = 2,
      mav_mode_flag_mav_mode_flag_auto_enabled = 4,
      mav_mode_flag_mav_mode_flag_guided_enabled = 8,
      _mav_mode_flag_COUNT = 9,
      mav_mode_flag_mav_mode_flag_stabilize_enabled = 16,
      mav_mode_flag_mav_mode_flag_hil_enabled = 32,
      mav_mode_flag_mav_mode_flag_manual_input_enabled = 64,
      mav_mode_flag_mav_mode_flag_safety_armed = 128
    };

    enum mav_mode_flag_decode_position
    {
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_none = 0,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_custom_mode = 1,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_test = 2,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_auto = 4,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_guided = 8,
      _mav_mode_flag_decode_position_COUNT = 9,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_stabilize = 16,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_hil = 32,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_manual = 64,
      mav_mode_flag_decode_position_mav_mode_flag_decode_position_safety = 128
    };

    enum mav_mount_mode
    {
      mav_mount_mode_mav_mount_mode_retract = 0,
      mav_mount_mode_mav_mount_mode_neutral = 1,
      mav_mount_mode_mav_mount_mode_mavlink_targeting = 2,
      mav_mount_mode_mav_mount_mode_rc_targeting = 3,
      mav_mount_mode_mav_mount_mode_gps_point = 4,
      _mav_mount_mode_COUNT = 5
    };

    enum mav_param_type
    {
      mav_param_type_mav_param_type_none = 0,
      mav_param_type_mav_param_type_uint8 = 1,
      mav_param_type_mav_param_type_int8 = 2,
      mav_param_type_mav_param_type_uint16 = 3,
      mav_param_type_mav_param_type_int16 = 4,
      mav_param_type_mav_param_type_uint32 = 5,
      mav_param_type_mav_param_type_int32 = 6,
      mav_param_type_mav_param_type_uint64 = 7,
      mav_param_type_mav_param_type_int64 = 8,
      mav_param_type_mav_param_type_real32 = 9,
      mav_param_type_mav_param_type_real64 = 10,
      _mav_param_type_COUNT = 11
    };

    enum mav_power_status
    {
      mav_power_status_mav_power_status_none = 0,
      mav_power_status_mav_power_status_brick_valid = 1,
      mav_power_status_mav_power_status_servo_valid = 2,
      mav_power_status_mav_power_status_usb_connected = 4,
      _mav_power_status_COUNT = 7,
      mav_power_status_mav_power_status_periph_overcurrent = 8,
      mav_power_status_mav_power_status_periph_hipower_overcurrent = 16,
      mav_power_status_mav_power_status_changed = 32
    };

    enum mav_protocol_capability
    {
      mav_protocol_capability_mav_protocol_capability_none = 0,
      mav_protocol_capability_mav_protocol_capability_mission_float = 1,
      mav_protocol_capability_mav_protocol_capability_param_float = 2,
      mav_protocol_capability_mav_protocol_capability_mission_int = 4,
      mav_protocol_capability_mav_protocol_capability_command_int = 8,
      _mav_protocol_capability_COUNT = 15,
      mav_protocol_capability_mav_protocol_capability_param_union = 16,
      mav_protocol_capability_mav_protocol_capability_ftp = 32,
      mav_protocol_capability_mav_protocol_capability_set_attitude_target = 64,
      mav_protocol_capability_mav_protocol_capability_set_position_target_local_ned = 128,
      mav_protocol_capability_mav_protocol_capability_set_position_target_global_int = 256,
      mav_protocol_capability_mav_protocol_capability_terrain = 512,
      mav_protocol_capability_mav_protocol_capability_set_actuator_target = 1024,
      mav_protocol_capability_mav_protocol_capability_flight_termination = 2048,
      mav_protocol_capability_mav_protocol_capability_compass_calibration = 4096,
      mav_protocol_capability_mav_protocol_capability_mavlink2 = 8192
    };

    enum mav_result
    {
      mav_result_mav_result_accepted = 0,
      mav_result_mav_result_temporarily_rejected = 1,
      mav_result_mav_result_denied = 2,
      mav_result_mav_result_unsupported = 3,
      mav_result_mav_result_failed = 4,
      _mav_result_COUNT = 5
    };

    enum mav_roi
    {
      mav_roi_mav_roi_none = 0,
      mav_roi_mav_roi_wpnext = 1,
      mav_roi_mav_roi_wpindex = 2,
      mav_roi_mav_roi_location = 3,
      mav_roi_mav_roi_target = 4,
      _mav_roi_COUNT = 5
    };

    enum mav_sensor_orientation
    {
      mav_sensor_orientation_mav_sensor_rotation_none = 0,
      mav_sensor_orientation_mav_sensor_rotation_yaw_45 = 1,
      mav_sensor_orientation_mav_sensor_rotation_yaw_90 = 2,
      mav_sensor_orientation_mav_sensor_rotation_yaw_135 = 3,
      mav_sensor_orientation_mav_sensor_rotation_yaw_180 = 4,
      mav_sensor_orientation_mav_sensor_rotation_yaw_225 = 5,
      mav_sensor_orientation_mav_sensor_rotation_yaw_270 = 6,
      mav_sensor_orientation_mav_sensor_rotation_yaw_315 = 7,
      mav_sensor_orientation_mav_sensor_rotation_roll_180 = 8,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_45 = 9,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_90 = 10,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_135 = 11,
      mav_sensor_orientation_mav_sensor_rotation_pitch_180 = 12,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_225 = 13,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_270 = 14,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_yaw_315 = 15,
      mav_sensor_orientation_mav_sensor_rotation_roll_90 = 16,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_yaw_45 = 17,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_yaw_90 = 18,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_yaw_135 = 19,
      mav_sensor_orientation_mav_sensor_rotation_roll_270 = 20,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_yaw_45 = 21,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_yaw_90 = 22,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_yaw_135 = 23,
      mav_sensor_orientation_mav_sensor_rotation_pitch_90 = 24,
      mav_sensor_orientation_mav_sensor_rotation_pitch_270 = 25,
      mav_sensor_orientation_mav_sensor_rotation_pitch_180_yaw_90 = 26,
      mav_sensor_orientation_mav_sensor_rotation_pitch_180_yaw_270 = 27,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_pitch_90 = 28,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_pitch_90 = 29,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_pitch_90 = 30,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_pitch_180 = 31,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_pitch_180 = 32,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_pitch_270 = 33,
      mav_sensor_orientation_mav_sensor_rotation_roll_180_pitch_270 = 34,
      mav_sensor_orientation_mav_sensor_rotation_roll_270_pitch_270 = 35,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_pitch_180_yaw_90 = 36,
      mav_sensor_orientation_mav_sensor_rotation_roll_90_yaw_270 = 37,
      mav_sensor_orientation_mav_sensor_rotation_roll_315_pitch_315_yaw_315 = 38,
      _mav_sensor_orientation_COUNT = 39
    };

    enum mav_severity
    {
      mav_severity_mav_severity_emergency = 0,
      mav_severity_mav_severity_alert = 1,
      mav_severity_mav_severity_critical = 2,
      mav_severity_mav_severity_error = 3,
      mav_severity_mav_severity_warning = 4,
      mav_severity_mav_severity_notice = 5,
      mav_severity_mav_severity_info = 6,
      mav_severity_mav_severity_debug = 7,
      _mav_severity_COUNT = 8
    };

    enum mav_state
    {
      mav_state_mav_state_uninit = 0,
      mav_state_mav_state_boot = 1,
      mav_state_mav_state_calibrating = 2,
      mav_state_mav_state_standby = 3,
      mav_state_mav_state_active = 4,
      mav_state_mav_state_critical = 5,
      mav_state_mav_state_emergency = 6,
      mav_state_mav_state_poweroff = 7,
      _mav_state_COUNT = 8
    };

    enum mav_sys_status_sensor
    {
      mav_sys_status_sensor_mav_sys_status_sensor_none = 0,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_gyro = 1,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_accel = 2,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_mag = 4,
      mav_sys_status_sensor_mav_sys_status_sensor_absolute_pressure = 8,
      mav_sys_status_sensor_mav_sys_status_sensor_differential_pressure = 16,
      _mav_sys_status_sensor_COUNT = 26,
      mav_sys_status_sensor_mav_sys_status_sensor_gps = 32,
      mav_sys_status_sensor_mav_sys_status_sensor_optical_flow = 64,
      mav_sys_status_sensor_mav_sys_status_sensor_vision_position = 128,
      mav_sys_status_sensor_mav_sys_status_sensor_laser_position = 256,
      mav_sys_status_sensor_mav_sys_status_sensor_external_ground_truth = 512,
      mav_sys_status_sensor_mav_sys_status_sensor_angular_rate_control = 1024,
      mav_sys_status_sensor_mav_sys_status_sensor_attitude_stabilization = 2048,
      mav_sys_status_sensor_mav_sys_status_sensor_yaw_position = 4096,
      mav_sys_status_sensor_mav_sys_status_sensor_z_altitude_control = 8192,
      mav_sys_status_sensor_mav_sys_status_sensor_xy_position_control = 16384,
      mav_sys_status_sensor_mav_sys_status_sensor_motor_outputs = 32768,
      mav_sys_status_sensor_mav_sys_status_sensor_rc_receiver = 65536,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_gyro2 = 131072,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_accel2 = 262144,
      mav_sys_status_sensor_mav_sys_status_sensor_3d_mag2 = 524288,
      mav_sys_status_sensor_mav_sys_status_geofence = 1048576,
      mav_sys_status_sensor_mav_sys_status_ahrs = 2097152,
      mav_sys_status_sensor_mav_sys_status_terrain = 4194304,
      mav_sys_status_sensor_mav_sys_status_reverse_motor = 8388608,
      mav_sys_status_sensor_mav_sys_status_logging = 16777216
    };

    enum mav_type
    {
      mav_type_mav_type_generic = 0,
      mav_type_mav_type_fixed_wing = 1,
      mav_type_mav_type_quadrotor = 2,
      mav_type_mav_type_coaxial = 3,
      mav_type_mav_type_helicopter = 4,
      mav_type_mav_type_antenna_tracker = 5,
      mav_type_mav_type_gcs = 6,
      mav_type_mav_type_airship = 7,
      mav_type_mav_type_free_balloon = 8,
      mav_type_mav_type_rocket = 9,
      mav_type_mav_type_ground_rover = 10,
      mav_type_mav_type_surface_boat = 11,
      mav_type_mav_type_submarine = 12,
      mav_type_mav_type_hexarotor = 13,
      mav_type_mav_type_octorotor = 14,
      mav_type_mav_type_tricopter = 15,
      mav_type_mav_type_flapping_wing = 16,
      mav_type_mav_type_kite = 17,
      mav_type_mav_type_onboard_controller = 18,
      mav_type_mav_type_vtol_duorotor = 19,
      mav_type_mav_type_vtol_quadrotor = 20,
      mav_type_mav_type_vtol_tiltrotor = 21,
      mav_type_mav_type_vtol_reserved2 = 22,
      mav_type_mav_type_vtol_reserved3 = 23,
      mav_type_mav_type_vtol_reserved4 = 24,
      mav_type_mav_type_vtol_reserved5 = 25,
      mav_type_mav_type_gimbal = 26,
      mav_type_mav_type_adsb = 27,
      _mav_type_COUNT = 28
    };

    enum mav_vtol_state
    {
      mav_vtol_state_mav_vtol_state_undefined = 0,
      mav_vtol_state_mav_vtol_state_transition_to_fw = 1,
      mav_vtol_state_mav_vtol_state_transition_to_mc = 2,
      mav_vtol_state_mav_vtol_state_mc = 3,
      mav_vtol_state_mav_vtol_state_fw = 4,
      _mav_vtol_state_COUNT = 5
    };

    enum mavlink_data_stream_type
    {
      mavlink_data_stream_type_mavlink_data_stream_img_jpeg = 0,
      mavlink_data_stream_type_mavlink_data_stream_img_bmp = 1,
      mavlink_data_stream_type_mavlink_data_stream_img_raw8u = 2,
      mavlink_data_stream_type_mavlink_data_stream_img_raw32u = 3,
      mavlink_data_stream_type_mavlink_data_stream_img_pgm = 4,
      mavlink_data_stream_type_mavlink_data_stream_img_png = 5,
      _mavlink_data_stream_type_COUNT = 6
    };

    enum mavlink_messages
    {
      mavlink_messages_msg_heartbeat = 0,
      mavlink_messages_msg_sys_status = 1,
      mavlink_messages_msg_system_time = 2,
      mavlink_messages_msg_ping = 4,
      mavlink_messages_msg_change_operator_control = 5,
      mavlink_messages_msg_change_operator_control_ack = 6,
      mavlink_messages_msg_auth_key = 7,
      mavlink_messages_msg_set_mode = 11,
      mavlink_messages_msg_param_request_read = 20,
      mavlink_messages_msg_param_request_list = 21,
      mavlink_messages_msg_param_value = 22,
      mavlink_messages_msg_param_set = 23,
      mavlink_messages_msg_gps_raw_int = 24,
      mavlink_messages_msg_gps_status = 25,
      mavlink_messages_msg_scaled_imu = 26,
      mavlink_messages_msg_raw_imu = 27,
      mavlink_messages_msg_raw_pressure = 28,
      mavlink_messages_msg_scaled_pressure = 29,
      mavlink_messages_msg_attitude = 30,
      mavlink_messages_msg_attitude_quaternion = 31,
      mavlink_messages_msg_local_position_ned = 32,
      mavlink_messages_msg_global_position_int = 33,
      mavlink_messages_msg_rc_channels_scaled = 34,
      mavlink_messages_msg_rc_channels_raw = 35,
      mavlink_messages_msg_servo_output_raw = 36,
      mavlink_messages_msg_mission_request_partial_list = 37,
      mavlink_messages_msg_mission_write_partial_list = 38,
      mavlink_messages_msg_mission_item = 39,
      mavlink_messages_msg_mission_request = 40,
      mavlink_messages_msg_mission_set_current = 41,
      mavlink_messages_msg_mission_current = 42,
      mavlink_messages_msg_mission_request_list = 43,
      mavlink_messages_msg_mission_count = 44,
      mavlink_messages_msg_mission_clear_all = 45,
      mavlink_messages_msg_mission_item_reached = 46,
      mavlink_messages_msg_mission_ack = 47,
      mavlink_messages_msg_set_gps_global_origin = 48,
      mavlink_messages_msg_gps_global_origin = 49,
      mavlink_messages_msg_param_map_rc = 50,
      mavlink_messages_msg_mission_request_int = 51,
      mavlink_messages_msg_safety_set_allowed_area = 54,
      mavlink_messages_msg_safety_allowed_area = 55,
      mavlink_messages_msg_attitude_quaternion_cov = 61,
      mavlink_messages_msg_nav_controller_output = 62,
      mavlink_messages_msg_global_position_int_cov = 63,
      mavlink_messages_msg_local_position_ned_cov = 64,
      mavlink_messages_msg_rc_channels = 65,
      mavlink_messages_msg_request_data_stream = 66,
      mavlink_messages_msg_data_stream = 67,
      mavlink_messages_msg_manual_control = 69,
      mavlink_messages_msg_rc_channels_override = 70,
      mavlink_messages_msg_mission_item_int = 73,
      mavlink_messages_msg_vfr_hud = 74,
      mavlink_messages_msg_command_int = 75,
      mavlink_messages_msg_command_long = 76,
      mavlink_messages_msg_command_ack = 77,
      mavlink_messages_msg_manual_setpoint = 81,
      mavlink_messages_msg_set_attitude_target = 82,
      mavlink_messages_msg_attitude_target = 83,
      mavlink_messages_msg_set_position_target_local_ned = 84,
      mavlink_messages_msg_position_target_local_ned = 85,
      mavlink_messages_msg_set_position_target_global_int = 86,
      mavlink_messages_msg_position_target_global_int = 87,
      mavlink_messages_msg_local_position_ned_system_global_offset = 89,
      mavlink_messages_msg_hil_state = 90,
      mavlink_messages_msg_hil_controls = 91,
      mavlink_messages_msg_hil_rc_inputs_raw = 92,
      mavlink_messages_msg_hil_actuator_controls = 93,
      mavlink_messages_msg_optical_flow = 100,
      mavlink_messages_msg_global_vision_position_estimate = 101,
      mavlink_messages_msg_vision_position_estimate = 102,
      mavlink_messages_msg_vision_speed_estimate = 103,
      mavlink_messages_msg_vicon_position_estimate = 104,
      mavlink_messages_msg_highres_imu = 105,
      mavlink_messages_msg_optical_flow_rad = 106,
      mavlink_messages_msg_hil_sensor = 107,
      mavlink_messages_msg_sim_state = 108,
      mavlink_messages_msg_radio_status = 109,
      mavlink_messages_msg_file_transfer_protocol = 110,
      mavlink_messages_msg_timesync = 111,
      mavlink_messages_msg_camera_trigger = 112,
      mavlink_messages_msg_hil_gps = 113,
      mavlink_messages_msg_hil_optical_flow = 114,
      mavlink_messages_msg_hil_state_quaternion = 115,
      mavlink_messages_msg_scaled_imu2 = 116,
      mavlink_messages_msg_log_request_list = 117,
      mavlink_messages_msg_log_entry = 118,
      mavlink_messages_msg_log_request_data = 119,
      mavlink_messages_msg_log_data = 120,
      mavlink_messages_msg_log_erase = 121,
      mavlink_messages_msg_log_request_end = 122,
      mavlink_messages_msg_gps_inject_data = 123,
      mavlink_messages_msg_gps2_raw = 124,
      mavlink_messages_msg_power_status = 125,
      mavlink_messages_msg_serial_control = 126,
      mavlink_messages_msg_gps_rtk = 127,
      mavlink_messages_msg_gps2_rtk = 128,
      mavlink_messages_msg_scaled_imu3 = 129,
      mavlink_messages_msg_data_transmission_handshake = 130,
      mavlink_messages_msg_encapsulated_data = 131,
      mavlink_messages_msg_distance_sensor = 132,
      mavlink_messages_msg_terrain_request = 133,
      mavlink_messages_msg_terrain_data = 134,
      mavlink_messages_msg_terrain_check = 135,
      mavlink_messages_msg_terrain_report = 136,
      mavlink_messages_msg_scaled_pressure2 = 137,
      mavlink_messages_msg_att_pos_mocap = 138,
      mavlink_messages_msg_set_actuator_control_target = 139,
      mavlink_messages_msg_actuator_control_target = 140,
      mavlink_messages_msg_altitude = 141,
      mavlink_messages_msg_resource_request = 142,
      mavlink_messages_msg_scaled_pressure3 = 143,
      mavlink_messages_msg_follow_target = 144,
      mavlink_messages_msg_control_system_state = 146,
      mavlink_messages_msg_battery_status = 147,
      mavlink_messages_msg_autopilot_version = 148,
      _mavlink_messages_COUNT = 149,
      mavlink_messages_msg_landing_target = 149,
      mavlink_messages_msg_estimator_status = 230,
      mavlink_messages_msg_wind_cov = 231,
      mavlink_messages_msg_gps_input = 232,
      mavlink_messages_msg_gps_rtcm_data = 233,
      mavlink_messages_msg_high_latency = 234,
      mavlink_messages_msg_vibration = 241,
      mavlink_messages_msg_home_position = 242,
      mavlink_messages_msg_set_home_position = 243,
      mavlink_messages_msg_message_interval = 244,
      mavlink_messages_msg_extended_sys_state = 245,
      mavlink_messages_msg_adsb_vehicle = 246,
      mavlink_messages_msg_collision = 247,
      mavlink_messages_msg_v2_extension = 248,
      mavlink_messages_msg_memory_vect = 249,
      mavlink_messages_msg_debug_vect = 250,
      mavlink_messages_msg_named_value_float = 251,
      mavlink_messages_msg_named_value_int = 252,
      mavlink_messages_msg_statustext = 253,
      mavlink_messages_msg_debug = 254,
      mavlink_messages_msg_setup_signing = 256,
      mavlink_messages_msg_button_change = 257,
      mavlink_messages_msg_play_tune = 258,
      mavlink_messages_msg_camera_information = 259,
      mavlink_messages_msg_camera_settings = 260,
      mavlink_messages_msg_storage_information = 261,
      mavlink_messages_msg_camera_capture_status = 262,
      mavlink_messages_msg_camera_image_captured = 263,
      mavlink_messages_msg_flight_information = 264,
      mavlink_messages_msg_mount_orientation = 265,
      mavlink_messages_msg_logging_data = 266,
      mavlink_messages_msg_logging_data_acked = 267,
      mavlink_messages_msg_logging_ack = 268
    };

    enum motor_test_throttle_type
    {
      motor_test_throttle_type_motor_test_throttle_percent = 0,
      motor_test_throttle_type_motor_test_throttle_pwm = 1,
      motor_test_throttle_type_motor_test_throttle_pilot = 2,
      _motor_test_throttle_type_COUNT = 3
    };

    enum serial_control_dev
    {
      serial_control_dev_serial_control_dev_telem1 = 0,
      serial_control_dev_serial_control_dev_telem2 = 1,
      serial_control_dev_serial_control_dev_gps1 = 2,
      serial_control_dev_serial_control_dev_gps2 = 3,
      _serial_control_dev_COUNT = 5,
      serial_control_dev_serial_control_dev_shell = 10
    };

    enum serial_control_flag
    {
      serial_control_flag_serial_control_flag_none = 0,
      serial_control_flag_serial_control_flag_reply = 1,
      serial_control_flag_serial_control_flag_respond = 2,
      serial_control_flag_serial_control_flag_exclusive = 4,
      _serial_control_flag_COUNT = 6,
      serial_control_flag_serial_control_flag_blocking = 8,
      serial_control_flag_serial_control_flag_multi = 16
    };

    extern PRT_TYPE P_GEND_TYPE_adsb_altitude_type;
    extern PRT_TYPE P_GEND_TYPE_adsb_emitter_type;
    extern PRT_TYPE P_GEND_TYPE_adsb_flags;
    extern PRT_TYPE P_GEND_TYPE_estimator_status_flags;
    extern PRT_TYPE P_GEND_TYPE_fence_action;
    extern PRT_TYPE P_GEND_TYPE_fence_breach;
    extern PRT_TYPE P_GEND_TYPE_firmware_version_type;
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
    #ifdef __cplusplus
      }
    #endif
  #endif
  