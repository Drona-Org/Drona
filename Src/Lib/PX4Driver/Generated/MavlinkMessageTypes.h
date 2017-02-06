
  #ifndef P_MAVLINKMESSAGETYPES_H_
    #define P_MAVLINKMESSAGETYPES_H_
    #include "linker.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FIELD_INDEX_mavlink_actuator_control_target_t
    {
      P_FIELD_INDEX_mavlink_actuator_control_target_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_actuator_control_target_t__controls = 1,
      P_FIELD_INDEX_mavlink_actuator_control_target_t__group_mlx = 2,
      _P_FIELD_INDEX_mavlink_actuator_control_target_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_adsb_vehicle_t
    {
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__icao_address = 0,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__lat = 1,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__lon = 2,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__altitude = 3,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__heading = 4,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__hor_velocity = 5,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__ver_velocity = 6,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__flags = 7,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__squawk = 8,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__altitude_type = 9,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__callsign = 10,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__emitter_type = 11,
      P_FIELD_INDEX_mavlink_adsb_vehicle_t__tslc = 12,
      _P_FIELD_INDEX_mavlink_adsb_vehicle_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_altitude_t
    {
      P_FIELD_INDEX_mavlink_altitude_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_altitude_t__altitude_monotonic = 1,
      P_FIELD_INDEX_mavlink_altitude_t__altitude_amsl = 2,
      P_FIELD_INDEX_mavlink_altitude_t__altitude_local = 3,
      P_FIELD_INDEX_mavlink_altitude_t__altitude_relative = 4,
      P_FIELD_INDEX_mavlink_altitude_t__altitude_terrain = 5,
      P_FIELD_INDEX_mavlink_altitude_t__bottom_clearance = 6,
      _P_FIELD_INDEX_mavlink_altitude_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_att_pos_mocap_t
    {
      P_FIELD_INDEX_mavlink_att_pos_mocap_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_att_pos_mocap_t__q = 1,
      P_FIELD_INDEX_mavlink_att_pos_mocap_t__x = 2,
      P_FIELD_INDEX_mavlink_att_pos_mocap_t__y = 3,
      P_FIELD_INDEX_mavlink_att_pos_mocap_t__z = 4,
      _P_FIELD_INDEX_mavlink_att_pos_mocap_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t
    {
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__q = 1,
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__rollspeed = 2,
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__pitchspeed = 3,
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__yawspeed = 4,
      P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t__covariance = 5,
      _P_FIELD_INDEX_mavlink_attitude_quaternion_cov_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_attitude_quaternion_t
    {
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__q1 = 1,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__q2 = 2,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__q3 = 3,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__q4 = 4,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__rollspeed = 5,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__pitchspeed = 6,
      P_FIELD_INDEX_mavlink_attitude_quaternion_t__yawspeed = 7,
      _P_FIELD_INDEX_mavlink_attitude_quaternion_t_COUNT = 8
    };

    enum P_FIELD_INDEX_mavlink_attitude_t
    {
      P_FIELD_INDEX_mavlink_attitude_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_attitude_t__roll = 1,
      P_FIELD_INDEX_mavlink_attitude_t__pitch = 2,
      P_FIELD_INDEX_mavlink_attitude_t__yaw = 3,
      P_FIELD_INDEX_mavlink_attitude_t__rollspeed = 4,
      P_FIELD_INDEX_mavlink_attitude_t__pitchspeed = 5,
      P_FIELD_INDEX_mavlink_attitude_t__yawspeed = 6,
      _P_FIELD_INDEX_mavlink_attitude_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_attitude_target_t
    {
      P_FIELD_INDEX_mavlink_attitude_target_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_attitude_target_t__q = 1,
      P_FIELD_INDEX_mavlink_attitude_target_t__body_roll_rate = 2,
      P_FIELD_INDEX_mavlink_attitude_target_t__body_pitch_rate = 3,
      P_FIELD_INDEX_mavlink_attitude_target_t__body_yaw_rate = 4,
      P_FIELD_INDEX_mavlink_attitude_target_t__thrust = 5,
      P_FIELD_INDEX_mavlink_attitude_target_t__type_mask = 6,
      _P_FIELD_INDEX_mavlink_attitude_target_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_auth_key_t
    {
      P_FIELD_INDEX_mavlink_auth_key_t__key = 0,
      _P_FIELD_INDEX_mavlink_auth_key_t_COUNT = 1
    };

    enum P_FIELD_INDEX_mavlink_autopilot_version_t
    {
      P_FIELD_INDEX_mavlink_autopilot_version_t__capabilities = 0,
      P_FIELD_INDEX_mavlink_autopilot_version_t__uid = 1,
      P_FIELD_INDEX_mavlink_autopilot_version_t__flight_sw_version = 2,
      P_FIELD_INDEX_mavlink_autopilot_version_t__middleware_sw_version = 3,
      P_FIELD_INDEX_mavlink_autopilot_version_t__os_sw_version = 4,
      P_FIELD_INDEX_mavlink_autopilot_version_t__board_version = 5,
      P_FIELD_INDEX_mavlink_autopilot_version_t__vendor_id = 6,
      P_FIELD_INDEX_mavlink_autopilot_version_t__product_id = 7,
      P_FIELD_INDEX_mavlink_autopilot_version_t__flight_custom_version = 8,
      P_FIELD_INDEX_mavlink_autopilot_version_t__middleware_custom_version = 9,
      P_FIELD_INDEX_mavlink_autopilot_version_t__os_custom_version = 10,
      _P_FIELD_INDEX_mavlink_autopilot_version_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_battery_status_t
    {
      P_FIELD_INDEX_mavlink_battery_status_t__current_consumed = 0,
      P_FIELD_INDEX_mavlink_battery_status_t__energy_consumed = 1,
      P_FIELD_INDEX_mavlink_battery_status_t__temperature = 2,
      P_FIELD_INDEX_mavlink_battery_status_t__voltages = 3,
      P_FIELD_INDEX_mavlink_battery_status_t__current_battery = 4,
      P_FIELD_INDEX_mavlink_battery_status_t__id = 5,
      P_FIELD_INDEX_mavlink_battery_status_t__battery_function = 6,
      P_FIELD_INDEX_mavlink_battery_status_t__type = 7,
      P_FIELD_INDEX_mavlink_battery_status_t__battery_remaining = 8,
      _P_FIELD_INDEX_mavlink_battery_status_t_COUNT = 9
    };

    enum P_FIELD_INDEX_mavlink_camera_trigger_t
    {
      P_FIELD_INDEX_mavlink_camera_trigger_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_camera_trigger_t__seq = 1,
      _P_FIELD_INDEX_mavlink_camera_trigger_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_change_operator_control_ack_t
    {
      P_FIELD_INDEX_mavlink_change_operator_control_ack_t__gcs_system_id = 0,
      P_FIELD_INDEX_mavlink_change_operator_control_ack_t__control_request = 1,
      P_FIELD_INDEX_mavlink_change_operator_control_ack_t__ack = 2,
      _P_FIELD_INDEX_mavlink_change_operator_control_ack_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_change_operator_control_t
    {
      P_FIELD_INDEX_mavlink_change_operator_control_t__target_system = 0,
      P_FIELD_INDEX_mavlink_change_operator_control_t__control_request = 1,
      P_FIELD_INDEX_mavlink_change_operator_control_t__version = 2,
      P_FIELD_INDEX_mavlink_change_operator_control_t__passkey = 3,
      _P_FIELD_INDEX_mavlink_change_operator_control_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_collision_t
    {
      P_FIELD_INDEX_mavlink_collision_t__id = 0,
      P_FIELD_INDEX_mavlink_collision_t__time_to_minimum_delta = 1,
      P_FIELD_INDEX_mavlink_collision_t__altitude_minimum_delta = 2,
      P_FIELD_INDEX_mavlink_collision_t__horizontal_minimum_delta = 3,
      P_FIELD_INDEX_mavlink_collision_t__src = 4,
      P_FIELD_INDEX_mavlink_collision_t__action = 5,
      P_FIELD_INDEX_mavlink_collision_t__threat_level = 6,
      _P_FIELD_INDEX_mavlink_collision_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_command_ack_t
    {
      P_FIELD_INDEX_mavlink_command_ack_t__command = 0,
      P_FIELD_INDEX_mavlink_command_ack_t__result = 1,
      _P_FIELD_INDEX_mavlink_command_ack_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_command_int_t
    {
      P_FIELD_INDEX_mavlink_command_int_t__param1 = 0,
      P_FIELD_INDEX_mavlink_command_int_t__param2 = 1,
      P_FIELD_INDEX_mavlink_command_int_t__param3 = 2,
      P_FIELD_INDEX_mavlink_command_int_t__param4 = 3,
      P_FIELD_INDEX_mavlink_command_int_t__x = 4,
      P_FIELD_INDEX_mavlink_command_int_t__y = 5,
      P_FIELD_INDEX_mavlink_command_int_t__z = 6,
      P_FIELD_INDEX_mavlink_command_int_t__command = 7,
      P_FIELD_INDEX_mavlink_command_int_t__target_system = 8,
      P_FIELD_INDEX_mavlink_command_int_t__target_component = 9,
      P_FIELD_INDEX_mavlink_command_int_t__frame = 10,
      P_FIELD_INDEX_mavlink_command_int_t__current = 11,
      P_FIELD_INDEX_mavlink_command_int_t__autocontinue = 12,
      _P_FIELD_INDEX_mavlink_command_int_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_command_long_t
    {
      P_FIELD_INDEX_mavlink_command_long_t__param1 = 0,
      P_FIELD_INDEX_mavlink_command_long_t__param2 = 1,
      P_FIELD_INDEX_mavlink_command_long_t__param3 = 2,
      P_FIELD_INDEX_mavlink_command_long_t__param4 = 3,
      P_FIELD_INDEX_mavlink_command_long_t__param5 = 4,
      P_FIELD_INDEX_mavlink_command_long_t__param6 = 5,
      P_FIELD_INDEX_mavlink_command_long_t__param7 = 6,
      P_FIELD_INDEX_mavlink_command_long_t__command = 7,
      P_FIELD_INDEX_mavlink_command_long_t__target_system = 8,
      P_FIELD_INDEX_mavlink_command_long_t__target_component = 9,
      P_FIELD_INDEX_mavlink_command_long_t__confirmation = 10,
      _P_FIELD_INDEX_mavlink_command_long_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_control_system_state_t
    {
      P_FIELD_INDEX_mavlink_control_system_state_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_control_system_state_t__x_acc = 1,
      P_FIELD_INDEX_mavlink_control_system_state_t__y_acc = 2,
      P_FIELD_INDEX_mavlink_control_system_state_t__z_acc = 3,
      P_FIELD_INDEX_mavlink_control_system_state_t__x_vel = 4,
      P_FIELD_INDEX_mavlink_control_system_state_t__y_vel = 5,
      P_FIELD_INDEX_mavlink_control_system_state_t__z_vel = 6,
      P_FIELD_INDEX_mavlink_control_system_state_t__x_pos = 7,
      P_FIELD_INDEX_mavlink_control_system_state_t__y_pos = 8,
      P_FIELD_INDEX_mavlink_control_system_state_t__z_pos = 9,
      P_FIELD_INDEX_mavlink_control_system_state_t__airspeed = 10,
      P_FIELD_INDEX_mavlink_control_system_state_t__vel_variance = 11,
      P_FIELD_INDEX_mavlink_control_system_state_t__pos_variance = 12,
      P_FIELD_INDEX_mavlink_control_system_state_t__q = 13,
      P_FIELD_INDEX_mavlink_control_system_state_t__roll_rate = 14,
      P_FIELD_INDEX_mavlink_control_system_state_t__pitch_rate = 15,
      P_FIELD_INDEX_mavlink_control_system_state_t__yaw_rate = 16,
      _P_FIELD_INDEX_mavlink_control_system_state_t_COUNT = 17
    };

    enum P_FIELD_INDEX_mavlink_data_stream_t
    {
      P_FIELD_INDEX_mavlink_data_stream_t__message_rate = 0,
      P_FIELD_INDEX_mavlink_data_stream_t__stream_id = 1,
      P_FIELD_INDEX_mavlink_data_stream_t__on_off = 2,
      _P_FIELD_INDEX_mavlink_data_stream_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_data_transmission_handshake_t
    {
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__size = 0,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__width = 1,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__height = 2,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__packets = 3,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__type = 4,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__payload = 5,
      P_FIELD_INDEX_mavlink_data_transmission_handshake_t__jpg_quality = 6,
      _P_FIELD_INDEX_mavlink_data_transmission_handshake_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_debug_t
    {
      P_FIELD_INDEX_mavlink_debug_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_debug_t__value = 1,
      P_FIELD_INDEX_mavlink_debug_t__ind = 2,
      _P_FIELD_INDEX_mavlink_debug_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_debug_vect_t
    {
      P_FIELD_INDEX_mavlink_debug_vect_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_debug_vect_t__x = 1,
      P_FIELD_INDEX_mavlink_debug_vect_t__y = 2,
      P_FIELD_INDEX_mavlink_debug_vect_t__z = 3,
      P_FIELD_INDEX_mavlink_debug_vect_t__name = 4,
      _P_FIELD_INDEX_mavlink_debug_vect_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_distance_sensor_t
    {
      P_FIELD_INDEX_mavlink_distance_sensor_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_distance_sensor_t__min_distance = 1,
      P_FIELD_INDEX_mavlink_distance_sensor_t__max_distance = 2,
      P_FIELD_INDEX_mavlink_distance_sensor_t__current_distance = 3,
      P_FIELD_INDEX_mavlink_distance_sensor_t__type = 4,
      P_FIELD_INDEX_mavlink_distance_sensor_t__id = 5,
      P_FIELD_INDEX_mavlink_distance_sensor_t__orientation = 6,
      P_FIELD_INDEX_mavlink_distance_sensor_t__covariance = 7,
      _P_FIELD_INDEX_mavlink_distance_sensor_t_COUNT = 8
    };

    enum P_FIELD_INDEX_mavlink_encapsulated_data_t
    {
      P_FIELD_INDEX_mavlink_encapsulated_data_t__seqnr = 0,
      P_FIELD_INDEX_mavlink_encapsulated_data_t__data = 1,
      _P_FIELD_INDEX_mavlink_encapsulated_data_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_estimator_status_t
    {
      P_FIELD_INDEX_mavlink_estimator_status_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_estimator_status_t__vel_ratio = 1,
      P_FIELD_INDEX_mavlink_estimator_status_t__pos_horiz_ratio = 2,
      P_FIELD_INDEX_mavlink_estimator_status_t__pos_vert_ratio = 3,
      P_FIELD_INDEX_mavlink_estimator_status_t__mag_ratio = 4,
      P_FIELD_INDEX_mavlink_estimator_status_t__hagl_ratio = 5,
      P_FIELD_INDEX_mavlink_estimator_status_t__tas_ratio = 6,
      P_FIELD_INDEX_mavlink_estimator_status_t__pos_horiz_accuracy = 7,
      P_FIELD_INDEX_mavlink_estimator_status_t__pos_vert_accuracy = 8,
      P_FIELD_INDEX_mavlink_estimator_status_t__flags = 9,
      _P_FIELD_INDEX_mavlink_estimator_status_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_extended_sys_state_t
    {
      P_FIELD_INDEX_mavlink_extended_sys_state_t__vtol_state = 0,
      P_FIELD_INDEX_mavlink_extended_sys_state_t__landed_state = 1,
      _P_FIELD_INDEX_mavlink_extended_sys_state_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_file_transfer_protocol_t
    {
      P_FIELD_INDEX_mavlink_file_transfer_protocol_t__target_network = 0,
      P_FIELD_INDEX_mavlink_file_transfer_protocol_t__target_system = 1,
      P_FIELD_INDEX_mavlink_file_transfer_protocol_t__target_component = 2,
      P_FIELD_INDEX_mavlink_file_transfer_protocol_t__payload = 3,
      _P_FIELD_INDEX_mavlink_file_transfer_protocol_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_follow_target_t
    {
      P_FIELD_INDEX_mavlink_follow_target_t__timestamp = 0,
      P_FIELD_INDEX_mavlink_follow_target_t__custom_state = 1,
      P_FIELD_INDEX_mavlink_follow_target_t__lat = 2,
      P_FIELD_INDEX_mavlink_follow_target_t__lon = 3,
      P_FIELD_INDEX_mavlink_follow_target_t__alt = 4,
      P_FIELD_INDEX_mavlink_follow_target_t__vel = 5,
      P_FIELD_INDEX_mavlink_follow_target_t__acc = 6,
      P_FIELD_INDEX_mavlink_follow_target_t__attitude_q = 7,
      P_FIELD_INDEX_mavlink_follow_target_t__rates = 8,
      P_FIELD_INDEX_mavlink_follow_target_t__position_cov = 9,
      P_FIELD_INDEX_mavlink_follow_target_t__est_capabilities = 10,
      _P_FIELD_INDEX_mavlink_follow_target_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_global_position_int_cov_t
    {
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__lat = 1,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__lon = 2,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__alt = 3,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__relative_alt = 4,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__vx = 5,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__vy = 6,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__vz = 7,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__covariance = 8,
      P_FIELD_INDEX_mavlink_global_position_int_cov_t__estimator_type = 9,
      _P_FIELD_INDEX_mavlink_global_position_int_cov_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_global_position_int_t
    {
      P_FIELD_INDEX_mavlink_global_position_int_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_global_position_int_t__lat = 1,
      P_FIELD_INDEX_mavlink_global_position_int_t__lon = 2,
      P_FIELD_INDEX_mavlink_global_position_int_t__alt = 3,
      P_FIELD_INDEX_mavlink_global_position_int_t__relative_alt = 4,
      P_FIELD_INDEX_mavlink_global_position_int_t__vx = 5,
      P_FIELD_INDEX_mavlink_global_position_int_t__vy = 6,
      P_FIELD_INDEX_mavlink_global_position_int_t__vz = 7,
      P_FIELD_INDEX_mavlink_global_position_int_t__hdg = 8,
      _P_FIELD_INDEX_mavlink_global_position_int_t_COUNT = 9
    };

    enum P_FIELD_INDEX_mavlink_global_vision_position_estimate_t
    {
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__usec = 0,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__x = 1,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__y = 2,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__z = 3,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__roll = 4,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__pitch = 5,
      P_FIELD_INDEX_mavlink_global_vision_position_estimate_t__yaw = 6,
      _P_FIELD_INDEX_mavlink_global_vision_position_estimate_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_gps2_raw_t
    {
      P_FIELD_INDEX_mavlink_gps2_raw_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_gps2_raw_t__lat = 1,
      P_FIELD_INDEX_mavlink_gps2_raw_t__lon = 2,
      P_FIELD_INDEX_mavlink_gps2_raw_t__alt = 3,
      P_FIELD_INDEX_mavlink_gps2_raw_t__dgps_age = 4,
      P_FIELD_INDEX_mavlink_gps2_raw_t__eph = 5,
      P_FIELD_INDEX_mavlink_gps2_raw_t__epv = 6,
      P_FIELD_INDEX_mavlink_gps2_raw_t__vel = 7,
      P_FIELD_INDEX_mavlink_gps2_raw_t__cog = 8,
      P_FIELD_INDEX_mavlink_gps2_raw_t__fix_type = 9,
      P_FIELD_INDEX_mavlink_gps2_raw_t__satellites_visible = 10,
      P_FIELD_INDEX_mavlink_gps2_raw_t__dgps_numch = 11,
      _P_FIELD_INDEX_mavlink_gps2_raw_t_COUNT = 12
    };

    enum P_FIELD_INDEX_mavlink_gps2_rtk_t
    {
      P_FIELD_INDEX_mavlink_gps2_rtk_t__time_last_baseline_ms = 0,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__tow = 1,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__baseline_a_mm = 2,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__baseline_b_mm = 3,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__baseline_c_mm = 4,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__accuracy = 5,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__iar_num_hypotheses = 6,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__wn = 7,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__rtk_receiver_id = 8,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__rtk_health = 9,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__rtk_rate = 10,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__nsats = 11,
      P_FIELD_INDEX_mavlink_gps2_rtk_t__baseline_coords_type = 12,
      _P_FIELD_INDEX_mavlink_gps2_rtk_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_gps_global_origin_t
    {
      P_FIELD_INDEX_mavlink_gps_global_origin_t__latitude = 0,
      P_FIELD_INDEX_mavlink_gps_global_origin_t__longitude = 1,
      P_FIELD_INDEX_mavlink_gps_global_origin_t__altitude = 2,
      _P_FIELD_INDEX_mavlink_gps_global_origin_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_gps_inject_data_t
    {
      P_FIELD_INDEX_mavlink_gps_inject_data_t__target_system = 0,
      P_FIELD_INDEX_mavlink_gps_inject_data_t__target_component = 1,
      P_FIELD_INDEX_mavlink_gps_inject_data_t__len = 2,
      P_FIELD_INDEX_mavlink_gps_inject_data_t__data = 3,
      _P_FIELD_INDEX_mavlink_gps_inject_data_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_gps_input_t
    {
      P_FIELD_INDEX_mavlink_gps_input_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_gps_input_t__time_week_ms = 1,
      P_FIELD_INDEX_mavlink_gps_input_t__lat = 2,
      P_FIELD_INDEX_mavlink_gps_input_t__lon = 3,
      P_FIELD_INDEX_mavlink_gps_input_t__alt = 4,
      P_FIELD_INDEX_mavlink_gps_input_t__hdop = 5,
      P_FIELD_INDEX_mavlink_gps_input_t__vdop = 6,
      P_FIELD_INDEX_mavlink_gps_input_t__vn = 7,
      P_FIELD_INDEX_mavlink_gps_input_t__ve = 8,
      P_FIELD_INDEX_mavlink_gps_input_t__vd = 9,
      P_FIELD_INDEX_mavlink_gps_input_t__speed_accuracy = 10,
      P_FIELD_INDEX_mavlink_gps_input_t__horiz_accuracy = 11,
      P_FIELD_INDEX_mavlink_gps_input_t__vert_accuracy = 12,
      P_FIELD_INDEX_mavlink_gps_input_t__ignore_flags = 13,
      P_FIELD_INDEX_mavlink_gps_input_t__time_week = 14,
      P_FIELD_INDEX_mavlink_gps_input_t__gps_id = 15,
      P_FIELD_INDEX_mavlink_gps_input_t__fix_type = 16,
      P_FIELD_INDEX_mavlink_gps_input_t__satellites_visible = 17,
      _P_FIELD_INDEX_mavlink_gps_input_t_COUNT = 18
    };

    enum P_FIELD_INDEX_mavlink_gps_raw_int_t
    {
      P_FIELD_INDEX_mavlink_gps_raw_int_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__lat = 1,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__lon = 2,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__alt = 3,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__eph = 4,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__epv = 5,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__vel = 6,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__cog = 7,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__fix_type = 8,
      P_FIELD_INDEX_mavlink_gps_raw_int_t__satellites_visible = 9,
      _P_FIELD_INDEX_mavlink_gps_raw_int_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_gps_rtcm_data_t
    {
      P_FIELD_INDEX_mavlink_gps_rtcm_data_t__flags = 0,
      P_FIELD_INDEX_mavlink_gps_rtcm_data_t__len = 1,
      P_FIELD_INDEX_mavlink_gps_rtcm_data_t__data = 2,
      _P_FIELD_INDEX_mavlink_gps_rtcm_data_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_gps_rtk_t
    {
      P_FIELD_INDEX_mavlink_gps_rtk_t__time_last_baseline_ms = 0,
      P_FIELD_INDEX_mavlink_gps_rtk_t__tow = 1,
      P_FIELD_INDEX_mavlink_gps_rtk_t__baseline_a_mm = 2,
      P_FIELD_INDEX_mavlink_gps_rtk_t__baseline_b_mm = 3,
      P_FIELD_INDEX_mavlink_gps_rtk_t__baseline_c_mm = 4,
      P_FIELD_INDEX_mavlink_gps_rtk_t__accuracy = 5,
      P_FIELD_INDEX_mavlink_gps_rtk_t__iar_num_hypotheses = 6,
      P_FIELD_INDEX_mavlink_gps_rtk_t__wn = 7,
      P_FIELD_INDEX_mavlink_gps_rtk_t__rtk_receiver_id = 8,
      P_FIELD_INDEX_mavlink_gps_rtk_t__rtk_health = 9,
      P_FIELD_INDEX_mavlink_gps_rtk_t__rtk_rate = 10,
      P_FIELD_INDEX_mavlink_gps_rtk_t__nsats = 11,
      P_FIELD_INDEX_mavlink_gps_rtk_t__baseline_coords_type = 12,
      _P_FIELD_INDEX_mavlink_gps_rtk_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_gps_status_t
    {
      P_FIELD_INDEX_mavlink_gps_status_t__satellites_visible = 0,
      P_FIELD_INDEX_mavlink_gps_status_t__satellite_prn = 1,
      P_FIELD_INDEX_mavlink_gps_status_t__satellite_used = 2,
      P_FIELD_INDEX_mavlink_gps_status_t__satellite_elevation = 3,
      P_FIELD_INDEX_mavlink_gps_status_t__satellite_azimuth = 4,
      P_FIELD_INDEX_mavlink_gps_status_t__satellite_snr = 5,
      _P_FIELD_INDEX_mavlink_gps_status_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_heartbeat_t
    {
      P_FIELD_INDEX_mavlink_heartbeat_t__custom_mode = 0,
      P_FIELD_INDEX_mavlink_heartbeat_t__type = 1,
      P_FIELD_INDEX_mavlink_heartbeat_t__autopilot = 2,
      P_FIELD_INDEX_mavlink_heartbeat_t__base_mode = 3,
      P_FIELD_INDEX_mavlink_heartbeat_t__system_status = 4,
      P_FIELD_INDEX_mavlink_heartbeat_t__mavlink_version = 5,
      _P_FIELD_INDEX_mavlink_heartbeat_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_high_latency_t
    {
      P_FIELD_INDEX_mavlink_high_latency_t__custom_mode = 0,
      P_FIELD_INDEX_mavlink_high_latency_t__latitude = 1,
      P_FIELD_INDEX_mavlink_high_latency_t__longitude = 2,
      P_FIELD_INDEX_mavlink_high_latency_t__roll = 3,
      P_FIELD_INDEX_mavlink_high_latency_t__pitch = 4,
      P_FIELD_INDEX_mavlink_high_latency_t__heading = 5,
      P_FIELD_INDEX_mavlink_high_latency_t__heading_sp = 6,
      P_FIELD_INDEX_mavlink_high_latency_t__altitude_amsl = 7,
      P_FIELD_INDEX_mavlink_high_latency_t__altitude_sp = 8,
      P_FIELD_INDEX_mavlink_high_latency_t__wp_distance = 9,
      P_FIELD_INDEX_mavlink_high_latency_t__base_mode = 10,
      P_FIELD_INDEX_mavlink_high_latency_t__landed_state = 11,
      P_FIELD_INDEX_mavlink_high_latency_t__throttle = 12,
      P_FIELD_INDEX_mavlink_high_latency_t__airspeed = 13,
      P_FIELD_INDEX_mavlink_high_latency_t__airspeed_sp = 14,
      P_FIELD_INDEX_mavlink_high_latency_t__groundspeed = 15,
      P_FIELD_INDEX_mavlink_high_latency_t__climb_rate = 16,
      P_FIELD_INDEX_mavlink_high_latency_t__gps_nsat = 17,
      P_FIELD_INDEX_mavlink_high_latency_t__gps_fix_type = 18,
      P_FIELD_INDEX_mavlink_high_latency_t__battery_remaining = 19,
      P_FIELD_INDEX_mavlink_high_latency_t__temperature = 20,
      P_FIELD_INDEX_mavlink_high_latency_t__temperature_air = 21,
      P_FIELD_INDEX_mavlink_high_latency_t__failsafe = 22,
      P_FIELD_INDEX_mavlink_high_latency_t__wp_num = 23,
      _P_FIELD_INDEX_mavlink_high_latency_t_COUNT = 24
    };

    enum P_FIELD_INDEX_mavlink_highres_imu_t
    {
      P_FIELD_INDEX_mavlink_highres_imu_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_highres_imu_t__xacc = 1,
      P_FIELD_INDEX_mavlink_highres_imu_t__yacc = 2,
      P_FIELD_INDEX_mavlink_highres_imu_t__zacc = 3,
      P_FIELD_INDEX_mavlink_highres_imu_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_highres_imu_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_highres_imu_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_highres_imu_t__xmag = 7,
      P_FIELD_INDEX_mavlink_highres_imu_t__ymag = 8,
      P_FIELD_INDEX_mavlink_highres_imu_t__zmag = 9,
      P_FIELD_INDEX_mavlink_highres_imu_t__abs_pressure = 10,
      P_FIELD_INDEX_mavlink_highres_imu_t__diff_pressure = 11,
      P_FIELD_INDEX_mavlink_highres_imu_t__pressure_alt = 12,
      P_FIELD_INDEX_mavlink_highres_imu_t__temperature = 13,
      P_FIELD_INDEX_mavlink_highres_imu_t__fields_updated = 14,
      _P_FIELD_INDEX_mavlink_highres_imu_t_COUNT = 15
    };

    enum P_FIELD_INDEX_mavlink_hil_actuator_controls_t
    {
      P_FIELD_INDEX_mavlink_hil_actuator_controls_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_actuator_controls_t__flags = 1,
      P_FIELD_INDEX_mavlink_hil_actuator_controls_t__controls = 2,
      P_FIELD_INDEX_mavlink_hil_actuator_controls_t__mode = 3,
      _P_FIELD_INDEX_mavlink_hil_actuator_controls_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_hil_controls_t
    {
      P_FIELD_INDEX_mavlink_hil_controls_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_controls_t__roll_ailerons = 1,
      P_FIELD_INDEX_mavlink_hil_controls_t__pitch_elevator = 2,
      P_FIELD_INDEX_mavlink_hil_controls_t__yaw_rudder = 3,
      P_FIELD_INDEX_mavlink_hil_controls_t__throttle = 4,
      P_FIELD_INDEX_mavlink_hil_controls_t__aux1 = 5,
      P_FIELD_INDEX_mavlink_hil_controls_t__aux2 = 6,
      P_FIELD_INDEX_mavlink_hil_controls_t__aux3 = 7,
      P_FIELD_INDEX_mavlink_hil_controls_t__aux4 = 8,
      P_FIELD_INDEX_mavlink_hil_controls_t__mode = 9,
      P_FIELD_INDEX_mavlink_hil_controls_t__nav_mode = 10,
      _P_FIELD_INDEX_mavlink_hil_controls_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_hil_gps_t
    {
      P_FIELD_INDEX_mavlink_hil_gps_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_gps_t__lat = 1,
      P_FIELD_INDEX_mavlink_hil_gps_t__lon = 2,
      P_FIELD_INDEX_mavlink_hil_gps_t__alt = 3,
      P_FIELD_INDEX_mavlink_hil_gps_t__eph = 4,
      P_FIELD_INDEX_mavlink_hil_gps_t__epv = 5,
      P_FIELD_INDEX_mavlink_hil_gps_t__vel = 6,
      P_FIELD_INDEX_mavlink_hil_gps_t__vn = 7,
      P_FIELD_INDEX_mavlink_hil_gps_t__ve = 8,
      P_FIELD_INDEX_mavlink_hil_gps_t__vd = 9,
      P_FIELD_INDEX_mavlink_hil_gps_t__cog = 10,
      P_FIELD_INDEX_mavlink_hil_gps_t__fix_type = 11,
      P_FIELD_INDEX_mavlink_hil_gps_t__satellites_visible = 12,
      _P_FIELD_INDEX_mavlink_hil_gps_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_hil_optical_flow_t
    {
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integration_time_us = 1,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integrated_x = 2,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integrated_y = 3,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integrated_xgyro = 4,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integrated_ygyro = 5,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__integrated_zgyro = 6,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__time_delta_distance_us = 7,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__distance = 8,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__temperature = 9,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__sensor_id = 10,
      P_FIELD_INDEX_mavlink_hil_optical_flow_t__quality = 11,
      _P_FIELD_INDEX_mavlink_hil_optical_flow_t_COUNT = 12
    };

    enum P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t
    {
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan1_raw = 1,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan2_raw = 2,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan3_raw = 3,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan4_raw = 4,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan5_raw = 5,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan6_raw = 6,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan7_raw = 7,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan8_raw = 8,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan9_raw = 9,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan10_raw = 10,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan11_raw = 11,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__chan12_raw = 12,
      P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t__rssi = 13,
      _P_FIELD_INDEX_mavlink_hil_rc_inputs_raw_t_COUNT = 14
    };

    enum P_FIELD_INDEX_mavlink_hil_sensor_t
    {
      P_FIELD_INDEX_mavlink_hil_sensor_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_sensor_t__xacc = 1,
      P_FIELD_INDEX_mavlink_hil_sensor_t__yacc = 2,
      P_FIELD_INDEX_mavlink_hil_sensor_t__zacc = 3,
      P_FIELD_INDEX_mavlink_hil_sensor_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_hil_sensor_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_hil_sensor_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_hil_sensor_t__xmag = 7,
      P_FIELD_INDEX_mavlink_hil_sensor_t__ymag = 8,
      P_FIELD_INDEX_mavlink_hil_sensor_t__zmag = 9,
      P_FIELD_INDEX_mavlink_hil_sensor_t__abs_pressure = 10,
      P_FIELD_INDEX_mavlink_hil_sensor_t__diff_pressure = 11,
      P_FIELD_INDEX_mavlink_hil_sensor_t__pressure_alt = 12,
      P_FIELD_INDEX_mavlink_hil_sensor_t__temperature = 13,
      P_FIELD_INDEX_mavlink_hil_sensor_t__fields_updated = 14,
      _P_FIELD_INDEX_mavlink_hil_sensor_t_COUNT = 15
    };

    enum P_FIELD_INDEX_mavlink_hil_state_quaternion_t
    {
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__attitude_quaternion = 1,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__rollspeed = 2,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__pitchspeed = 3,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__yawspeed = 4,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__lat = 5,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__lon = 6,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__alt = 7,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__vx = 8,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__vy = 9,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__vz = 10,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__ind_airspeed = 11,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__true_airspeed = 12,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__xacc = 13,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__yacc = 14,
      P_FIELD_INDEX_mavlink_hil_state_quaternion_t__zacc = 15,
      _P_FIELD_INDEX_mavlink_hil_state_quaternion_t_COUNT = 16
    };

    enum P_FIELD_INDEX_mavlink_hil_state_t
    {
      P_FIELD_INDEX_mavlink_hil_state_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_hil_state_t__roll = 1,
      P_FIELD_INDEX_mavlink_hil_state_t__pitch = 2,
      P_FIELD_INDEX_mavlink_hil_state_t__yaw = 3,
      P_FIELD_INDEX_mavlink_hil_state_t__rollspeed = 4,
      P_FIELD_INDEX_mavlink_hil_state_t__pitchspeed = 5,
      P_FIELD_INDEX_mavlink_hil_state_t__yawspeed = 6,
      P_FIELD_INDEX_mavlink_hil_state_t__lat = 7,
      P_FIELD_INDEX_mavlink_hil_state_t__lon = 8,
      P_FIELD_INDEX_mavlink_hil_state_t__alt = 9,
      P_FIELD_INDEX_mavlink_hil_state_t__vx = 10,
      P_FIELD_INDEX_mavlink_hil_state_t__vy = 11,
      P_FIELD_INDEX_mavlink_hil_state_t__vz = 12,
      P_FIELD_INDEX_mavlink_hil_state_t__xacc = 13,
      P_FIELD_INDEX_mavlink_hil_state_t__yacc = 14,
      P_FIELD_INDEX_mavlink_hil_state_t__zacc = 15,
      _P_FIELD_INDEX_mavlink_hil_state_t_COUNT = 16
    };

    enum P_FIELD_INDEX_mavlink_home_position_t
    {
      P_FIELD_INDEX_mavlink_home_position_t__latitude = 0,
      P_FIELD_INDEX_mavlink_home_position_t__longitude = 1,
      P_FIELD_INDEX_mavlink_home_position_t__altitude = 2,
      P_FIELD_INDEX_mavlink_home_position_t__x = 3,
      P_FIELD_INDEX_mavlink_home_position_t__y = 4,
      P_FIELD_INDEX_mavlink_home_position_t__z = 5,
      P_FIELD_INDEX_mavlink_home_position_t__q = 6,
      P_FIELD_INDEX_mavlink_home_position_t__approach_x = 7,
      P_FIELD_INDEX_mavlink_home_position_t__approach_y = 8,
      P_FIELD_INDEX_mavlink_home_position_t__approach_z = 9,
      _P_FIELD_INDEX_mavlink_home_position_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_landing_target_t
    {
      P_FIELD_INDEX_mavlink_landing_target_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_landing_target_t__angle_x = 1,
      P_FIELD_INDEX_mavlink_landing_target_t__angle_y = 2,
      P_FIELD_INDEX_mavlink_landing_target_t__distance = 3,
      P_FIELD_INDEX_mavlink_landing_target_t__size_x = 4,
      P_FIELD_INDEX_mavlink_landing_target_t__size_y = 5,
      P_FIELD_INDEX_mavlink_landing_target_t__target_num = 6,
      P_FIELD_INDEX_mavlink_landing_target_t__frame = 7,
      _P_FIELD_INDEX_mavlink_landing_target_t_COUNT = 8
    };

    enum P_FIELD_INDEX_mavlink_local_position_ned_cov_t
    {
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__x = 1,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__y = 2,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__z = 3,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__vx = 4,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__vy = 5,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__vz = 6,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__ax = 7,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__ay = 8,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__az = 9,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__covariance = 10,
      P_FIELD_INDEX_mavlink_local_position_ned_cov_t__estimator_type = 11,
      _P_FIELD_INDEX_mavlink_local_position_ned_cov_t_COUNT = 12
    };

    enum P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t
    {
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__x = 1,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__y = 2,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__z = 3,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__roll = 4,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__pitch = 5,
      P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t__yaw = 6,
      _P_FIELD_INDEX_mavlink_local_position_ned_system_global_offset_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_local_position_ned_t
    {
      P_FIELD_INDEX_mavlink_local_position_ned_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_local_position_ned_t__x = 1,
      P_FIELD_INDEX_mavlink_local_position_ned_t__y = 2,
      P_FIELD_INDEX_mavlink_local_position_ned_t__z = 3,
      P_FIELD_INDEX_mavlink_local_position_ned_t__vx = 4,
      P_FIELD_INDEX_mavlink_local_position_ned_t__vy = 5,
      P_FIELD_INDEX_mavlink_local_position_ned_t__vz = 6,
      _P_FIELD_INDEX_mavlink_local_position_ned_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_log_data_t
    {
      P_FIELD_INDEX_mavlink_log_data_t__ofs = 0,
      P_FIELD_INDEX_mavlink_log_data_t__id = 1,
      P_FIELD_INDEX_mavlink_log_data_t__count = 2,
      P_FIELD_INDEX_mavlink_log_data_t__data = 3,
      _P_FIELD_INDEX_mavlink_log_data_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_log_entry_t
    {
      P_FIELD_INDEX_mavlink_log_entry_t__time_utc = 0,
      P_FIELD_INDEX_mavlink_log_entry_t__size = 1,
      P_FIELD_INDEX_mavlink_log_entry_t__id = 2,
      P_FIELD_INDEX_mavlink_log_entry_t__num_logs = 3,
      P_FIELD_INDEX_mavlink_log_entry_t__last_log_num = 4,
      _P_FIELD_INDEX_mavlink_log_entry_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_log_erase_t
    {
      P_FIELD_INDEX_mavlink_log_erase_t__target_system = 0,
      P_FIELD_INDEX_mavlink_log_erase_t__target_component = 1,
      _P_FIELD_INDEX_mavlink_log_erase_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_log_request_data_t
    {
      P_FIELD_INDEX_mavlink_log_request_data_t__ofs = 0,
      P_FIELD_INDEX_mavlink_log_request_data_t__count = 1,
      P_FIELD_INDEX_mavlink_log_request_data_t__id = 2,
      P_FIELD_INDEX_mavlink_log_request_data_t__target_system = 3,
      P_FIELD_INDEX_mavlink_log_request_data_t__target_component = 4,
      _P_FIELD_INDEX_mavlink_log_request_data_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_log_request_end_t
    {
      P_FIELD_INDEX_mavlink_log_request_end_t__target_system = 0,
      P_FIELD_INDEX_mavlink_log_request_end_t__target_component = 1,
      _P_FIELD_INDEX_mavlink_log_request_end_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_log_request_list_t
    {
      P_FIELD_INDEX_mavlink_log_request_list_t__start = 0,
      P_FIELD_INDEX_mavlink_log_request_list_t__end = 1,
      P_FIELD_INDEX_mavlink_log_request_list_t__target_system = 2,
      P_FIELD_INDEX_mavlink_log_request_list_t__target_component = 3,
      _P_FIELD_INDEX_mavlink_log_request_list_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_manual_control_t
    {
      P_FIELD_INDEX_mavlink_manual_control_t__x = 0,
      P_FIELD_INDEX_mavlink_manual_control_t__y = 1,
      P_FIELD_INDEX_mavlink_manual_control_t__z = 2,
      P_FIELD_INDEX_mavlink_manual_control_t__r = 3,
      P_FIELD_INDEX_mavlink_manual_control_t__buttons = 4,
      P_FIELD_INDEX_mavlink_manual_control_t__target = 5,
      _P_FIELD_INDEX_mavlink_manual_control_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_manual_setpoint_t
    {
      P_FIELD_INDEX_mavlink_manual_setpoint_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__roll = 1,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__pitch = 2,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__yaw = 3,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__thrust = 4,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__mode_switch = 5,
      P_FIELD_INDEX_mavlink_manual_setpoint_t__manual_override_switch = 6,
      _P_FIELD_INDEX_mavlink_manual_setpoint_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_memory_vect_t
    {
      P_FIELD_INDEX_mavlink_memory_vect_t__address = 0,
      P_FIELD_INDEX_mavlink_memory_vect_t__ver = 1,
      P_FIELD_INDEX_mavlink_memory_vect_t__type = 2,
      P_FIELD_INDEX_mavlink_memory_vect_t__value = 3,
      _P_FIELD_INDEX_mavlink_memory_vect_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_message_interval_t
    {
      P_FIELD_INDEX_mavlink_message_interval_t__interval_us = 0,
      P_FIELD_INDEX_mavlink_message_interval_t__message_id = 1,
      _P_FIELD_INDEX_mavlink_message_interval_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_mission_ack_t
    {
      P_FIELD_INDEX_mavlink_mission_ack_t__target_system = 0,
      P_FIELD_INDEX_mavlink_mission_ack_t__target_component = 1,
      P_FIELD_INDEX_mavlink_mission_ack_t__type = 2,
      _P_FIELD_INDEX_mavlink_mission_ack_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_mission_clear_all_t
    {
      P_FIELD_INDEX_mavlink_mission_clear_all_t__target_system = 0,
      P_FIELD_INDEX_mavlink_mission_clear_all_t__target_component = 1,
      _P_FIELD_INDEX_mavlink_mission_clear_all_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_mission_count_t
    {
      P_FIELD_INDEX_mavlink_mission_count_t__count = 0,
      P_FIELD_INDEX_mavlink_mission_count_t__target_system = 1,
      P_FIELD_INDEX_mavlink_mission_count_t__target_component = 2,
      _P_FIELD_INDEX_mavlink_mission_count_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_mission_current_t
    {
      P_FIELD_INDEX_mavlink_mission_current_t__seq = 0,
      _P_FIELD_INDEX_mavlink_mission_current_t_COUNT = 1
    };

    enum P_FIELD_INDEX_mavlink_mission_item_int_t
    {
      P_FIELD_INDEX_mavlink_mission_item_int_t__param1 = 0,
      P_FIELD_INDEX_mavlink_mission_item_int_t__param2 = 1,
      P_FIELD_INDEX_mavlink_mission_item_int_t__param3 = 2,
      P_FIELD_INDEX_mavlink_mission_item_int_t__param4 = 3,
      P_FIELD_INDEX_mavlink_mission_item_int_t__x = 4,
      P_FIELD_INDEX_mavlink_mission_item_int_t__y = 5,
      P_FIELD_INDEX_mavlink_mission_item_int_t__z = 6,
      P_FIELD_INDEX_mavlink_mission_item_int_t__seq = 7,
      P_FIELD_INDEX_mavlink_mission_item_int_t__command = 8,
      P_FIELD_INDEX_mavlink_mission_item_int_t__target_system = 9,
      P_FIELD_INDEX_mavlink_mission_item_int_t__target_component = 10,
      P_FIELD_INDEX_mavlink_mission_item_int_t__frame = 11,
      P_FIELD_INDEX_mavlink_mission_item_int_t__current = 12,
      P_FIELD_INDEX_mavlink_mission_item_int_t__autocontinue = 13,
      _P_FIELD_INDEX_mavlink_mission_item_int_t_COUNT = 14
    };

    enum P_FIELD_INDEX_mavlink_mission_item_reached_t
    {
      P_FIELD_INDEX_mavlink_mission_item_reached_t__seq = 0,
      _P_FIELD_INDEX_mavlink_mission_item_reached_t_COUNT = 1
    };

    enum P_FIELD_INDEX_mavlink_mission_item_t
    {
      P_FIELD_INDEX_mavlink_mission_item_t__param1 = 0,
      P_FIELD_INDEX_mavlink_mission_item_t__param2 = 1,
      P_FIELD_INDEX_mavlink_mission_item_t__param3 = 2,
      P_FIELD_INDEX_mavlink_mission_item_t__param4 = 3,
      P_FIELD_INDEX_mavlink_mission_item_t__x = 4,
      P_FIELD_INDEX_mavlink_mission_item_t__y = 5,
      P_FIELD_INDEX_mavlink_mission_item_t__z = 6,
      P_FIELD_INDEX_mavlink_mission_item_t__seq = 7,
      P_FIELD_INDEX_mavlink_mission_item_t__command = 8,
      P_FIELD_INDEX_mavlink_mission_item_t__target_system = 9,
      P_FIELD_INDEX_mavlink_mission_item_t__target_component = 10,
      P_FIELD_INDEX_mavlink_mission_item_t__frame = 11,
      P_FIELD_INDEX_mavlink_mission_item_t__current = 12,
      P_FIELD_INDEX_mavlink_mission_item_t__autocontinue = 13,
      _P_FIELD_INDEX_mavlink_mission_item_t_COUNT = 14
    };

    enum P_FIELD_INDEX_mavlink_mission_request_int_t
    {
      P_FIELD_INDEX_mavlink_mission_request_int_t__seq = 0,
      P_FIELD_INDEX_mavlink_mission_request_int_t__target_system = 1,
      P_FIELD_INDEX_mavlink_mission_request_int_t__target_component = 2,
      _P_FIELD_INDEX_mavlink_mission_request_int_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_mission_request_list_t
    {
      P_FIELD_INDEX_mavlink_mission_request_list_t__target_system = 0,
      P_FIELD_INDEX_mavlink_mission_request_list_t__target_component = 1,
      _P_FIELD_INDEX_mavlink_mission_request_list_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_mission_request_partial_list_t
    {
      P_FIELD_INDEX_mavlink_mission_request_partial_list_t__start_index = 0,
      P_FIELD_INDEX_mavlink_mission_request_partial_list_t__end_index = 1,
      P_FIELD_INDEX_mavlink_mission_request_partial_list_t__target_system = 2,
      P_FIELD_INDEX_mavlink_mission_request_partial_list_t__target_component = 3,
      _P_FIELD_INDEX_mavlink_mission_request_partial_list_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_mission_request_t
    {
      P_FIELD_INDEX_mavlink_mission_request_t__seq = 0,
      P_FIELD_INDEX_mavlink_mission_request_t__target_system = 1,
      P_FIELD_INDEX_mavlink_mission_request_t__target_component = 2,
      _P_FIELD_INDEX_mavlink_mission_request_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_mission_set_current_t
    {
      P_FIELD_INDEX_mavlink_mission_set_current_t__seq = 0,
      P_FIELD_INDEX_mavlink_mission_set_current_t__target_system = 1,
      P_FIELD_INDEX_mavlink_mission_set_current_t__target_component = 2,
      _P_FIELD_INDEX_mavlink_mission_set_current_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_mission_write_partial_list_t
    {
      P_FIELD_INDEX_mavlink_mission_write_partial_list_t__start_index = 0,
      P_FIELD_INDEX_mavlink_mission_write_partial_list_t__end_index = 1,
      P_FIELD_INDEX_mavlink_mission_write_partial_list_t__target_system = 2,
      P_FIELD_INDEX_mavlink_mission_write_partial_list_t__target_component = 3,
      _P_FIELD_INDEX_mavlink_mission_write_partial_list_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_named_value_float_t
    {
      P_FIELD_INDEX_mavlink_named_value_float_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_named_value_float_t__value = 1,
      P_FIELD_INDEX_mavlink_named_value_float_t__name = 2,
      _P_FIELD_INDEX_mavlink_named_value_float_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_named_value_int_t
    {
      P_FIELD_INDEX_mavlink_named_value_int_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_named_value_int_t__value = 1,
      P_FIELD_INDEX_mavlink_named_value_int_t__name = 2,
      _P_FIELD_INDEX_mavlink_named_value_int_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_nav_controller_output_t
    {
      P_FIELD_INDEX_mavlink_nav_controller_output_t__nav_roll = 0,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__nav_pitch = 1,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__alt_error = 2,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__aspd_error = 3,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__xtrack_error = 4,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__nav_bearing = 5,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__target_bearing = 6,
      P_FIELD_INDEX_mavlink_nav_controller_output_t__wp_dist = 7,
      _P_FIELD_INDEX_mavlink_nav_controller_output_t_COUNT = 8
    };

    enum P_FIELD_INDEX_mavlink_optical_flow_rad_t
    {
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integration_time_us = 1,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integrated_x = 2,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integrated_y = 3,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integrated_xgyro = 4,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integrated_ygyro = 5,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__integrated_zgyro = 6,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__time_delta_distance_us = 7,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__distance = 8,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__temperature = 9,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__sensor_id = 10,
      P_FIELD_INDEX_mavlink_optical_flow_rad_t__quality = 11,
      _P_FIELD_INDEX_mavlink_optical_flow_rad_t_COUNT = 12
    };

    enum P_FIELD_INDEX_mavlink_optical_flow_t
    {
      P_FIELD_INDEX_mavlink_optical_flow_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_optical_flow_t__flow_comp_m_x = 1,
      P_FIELD_INDEX_mavlink_optical_flow_t__flow_comp_m_y = 2,
      P_FIELD_INDEX_mavlink_optical_flow_t__ground_distance = 3,
      P_FIELD_INDEX_mavlink_optical_flow_t__flow_x = 4,
      P_FIELD_INDEX_mavlink_optical_flow_t__flow_y = 5,
      P_FIELD_INDEX_mavlink_optical_flow_t__sensor_id = 6,
      P_FIELD_INDEX_mavlink_optical_flow_t__quality = 7,
      _P_FIELD_INDEX_mavlink_optical_flow_t_COUNT = 8
    };

    enum P_FIELD_INDEX_mavlink_param_map_rc_t
    {
      P_FIELD_INDEX_mavlink_param_map_rc_t__param_value0 = 0,
      P_FIELD_INDEX_mavlink_param_map_rc_t__scale = 1,
      P_FIELD_INDEX_mavlink_param_map_rc_t__param_value_min = 2,
      P_FIELD_INDEX_mavlink_param_map_rc_t__param_value_max = 3,
      P_FIELD_INDEX_mavlink_param_map_rc_t__param_index = 4,
      P_FIELD_INDEX_mavlink_param_map_rc_t__target_system = 5,
      P_FIELD_INDEX_mavlink_param_map_rc_t__target_component = 6,
      P_FIELD_INDEX_mavlink_param_map_rc_t__param_id = 7,
      P_FIELD_INDEX_mavlink_param_map_rc_t__parameter_rc_channel_index = 8,
      _P_FIELD_INDEX_mavlink_param_map_rc_t_COUNT = 9
    };

    enum P_FIELD_INDEX_mavlink_param_request_list_t
    {
      P_FIELD_INDEX_mavlink_param_request_list_t__target_system = 0,
      P_FIELD_INDEX_mavlink_param_request_list_t__target_component = 1,
      _P_FIELD_INDEX_mavlink_param_request_list_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_param_request_read_t
    {
      P_FIELD_INDEX_mavlink_param_request_read_t__param_index = 0,
      P_FIELD_INDEX_mavlink_param_request_read_t__target_system = 1,
      P_FIELD_INDEX_mavlink_param_request_read_t__target_component = 2,
      P_FIELD_INDEX_mavlink_param_request_read_t__param_id = 3,
      _P_FIELD_INDEX_mavlink_param_request_read_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_param_set_t
    {
      P_FIELD_INDEX_mavlink_param_set_t__param_value = 0,
      P_FIELD_INDEX_mavlink_param_set_t__target_system = 1,
      P_FIELD_INDEX_mavlink_param_set_t__target_component = 2,
      P_FIELD_INDEX_mavlink_param_set_t__param_id = 3,
      P_FIELD_INDEX_mavlink_param_set_t__param_type = 4,
      _P_FIELD_INDEX_mavlink_param_set_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_param_value_t
    {
      P_FIELD_INDEX_mavlink_param_value_t__param_value = 0,
      P_FIELD_INDEX_mavlink_param_value_t__param_count = 1,
      P_FIELD_INDEX_mavlink_param_value_t__param_index = 2,
      P_FIELD_INDEX_mavlink_param_value_t__param_id = 3,
      P_FIELD_INDEX_mavlink_param_value_t__param_type = 4,
      _P_FIELD_INDEX_mavlink_param_value_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_ping_t
    {
      P_FIELD_INDEX_mavlink_ping_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_ping_t__seq = 1,
      P_FIELD_INDEX_mavlink_ping_t__target_system = 2,
      P_FIELD_INDEX_mavlink_ping_t__target_component = 3,
      _P_FIELD_INDEX_mavlink_ping_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_position_target_global_int_t
    {
      P_FIELD_INDEX_mavlink_position_target_global_int_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__lat_int = 1,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__lon_int = 2,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__alt = 3,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__vx = 4,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__vy = 5,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__vz = 6,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__afx = 7,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__afy = 8,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__afz = 9,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__yaw = 10,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__yaw_rate = 11,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__type_mask = 12,
      P_FIELD_INDEX_mavlink_position_target_global_int_t__coordinate_frame = 13,
      _P_FIELD_INDEX_mavlink_position_target_global_int_t_COUNT = 14
    };

    enum P_FIELD_INDEX_mavlink_position_target_local_ned_t
    {
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__x = 1,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__y = 2,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__z = 3,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__vx = 4,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__vy = 5,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__vz = 6,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__afx = 7,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__afy = 8,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__afz = 9,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__yaw = 10,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__yaw_rate = 11,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__type_mask = 12,
      P_FIELD_INDEX_mavlink_position_target_local_ned_t__coordinate_frame = 13,
      _P_FIELD_INDEX_mavlink_position_target_local_ned_t_COUNT = 14
    };

    enum P_FIELD_INDEX_mavlink_power_status_t
    {
      P_FIELD_INDEX_mavlink_power_status_t__vcc = 0,
      P_FIELD_INDEX_mavlink_power_status_t__vservo = 1,
      P_FIELD_INDEX_mavlink_power_status_t__flags = 2,
      _P_FIELD_INDEX_mavlink_power_status_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_radio_status_t
    {
      P_FIELD_INDEX_mavlink_radio_status_t__rxerrors = 0,
      P_FIELD_INDEX_mavlink_radio_status_t__fixed = 1,
      P_FIELD_INDEX_mavlink_radio_status_t__rssi = 2,
      P_FIELD_INDEX_mavlink_radio_status_t__remrssi = 3,
      P_FIELD_INDEX_mavlink_radio_status_t__txbuf = 4,
      P_FIELD_INDEX_mavlink_radio_status_t__noise = 5,
      P_FIELD_INDEX_mavlink_radio_status_t__remnoise = 6,
      _P_FIELD_INDEX_mavlink_radio_status_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_raw_imu_t
    {
      P_FIELD_INDEX_mavlink_raw_imu_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_raw_imu_t__xacc = 1,
      P_FIELD_INDEX_mavlink_raw_imu_t__yacc = 2,
      P_FIELD_INDEX_mavlink_raw_imu_t__zacc = 3,
      P_FIELD_INDEX_mavlink_raw_imu_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_raw_imu_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_raw_imu_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_raw_imu_t__xmag = 7,
      P_FIELD_INDEX_mavlink_raw_imu_t__ymag = 8,
      P_FIELD_INDEX_mavlink_raw_imu_t__zmag = 9,
      _P_FIELD_INDEX_mavlink_raw_imu_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_raw_pressure_t
    {
      P_FIELD_INDEX_mavlink_raw_pressure_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_raw_pressure_t__press_abs = 1,
      P_FIELD_INDEX_mavlink_raw_pressure_t__press_diff1 = 2,
      P_FIELD_INDEX_mavlink_raw_pressure_t__press_diff2 = 3,
      P_FIELD_INDEX_mavlink_raw_pressure_t__temperature = 4,
      _P_FIELD_INDEX_mavlink_raw_pressure_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_rc_channels_override_t
    {
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan1_raw = 0,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan2_raw = 1,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan3_raw = 2,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan4_raw = 3,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan5_raw = 4,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan6_raw = 5,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan7_raw = 6,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__chan8_raw = 7,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__target_system = 8,
      P_FIELD_INDEX_mavlink_rc_channels_override_t__target_component = 9,
      _P_FIELD_INDEX_mavlink_rc_channels_override_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_rc_channels_raw_t
    {
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan1_raw = 1,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan2_raw = 2,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan3_raw = 3,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan4_raw = 4,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan5_raw = 5,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan6_raw = 6,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan7_raw = 7,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__chan8_raw = 8,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__port = 9,
      P_FIELD_INDEX_mavlink_rc_channels_raw_t__rssi = 10,
      _P_FIELD_INDEX_mavlink_rc_channels_raw_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_rc_channels_scaled_t
    {
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan1_scaled = 1,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan2_scaled = 2,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan3_scaled = 3,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan4_scaled = 4,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan5_scaled = 5,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan6_scaled = 6,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan7_scaled = 7,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__chan8_scaled = 8,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__port = 9,
      P_FIELD_INDEX_mavlink_rc_channels_scaled_t__rssi = 10,
      _P_FIELD_INDEX_mavlink_rc_channels_scaled_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_rc_channels_t
    {
      P_FIELD_INDEX_mavlink_rc_channels_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan1_raw = 1,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan2_raw = 2,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan3_raw = 3,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan4_raw = 4,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan5_raw = 5,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan6_raw = 6,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan7_raw = 7,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan8_raw = 8,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan9_raw = 9,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan10_raw = 10,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan11_raw = 11,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan12_raw = 12,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan13_raw = 13,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan14_raw = 14,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan15_raw = 15,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan16_raw = 16,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan17_raw = 17,
      P_FIELD_INDEX_mavlink_rc_channels_t__chan18_raw = 18,
      P_FIELD_INDEX_mavlink_rc_channels_t__chancount = 19,
      P_FIELD_INDEX_mavlink_rc_channels_t__rssi = 20,
      _P_FIELD_INDEX_mavlink_rc_channels_t_COUNT = 21
    };

    enum P_FIELD_INDEX_mavlink_request_data_stream_t
    {
      P_FIELD_INDEX_mavlink_request_data_stream_t__req_message_rate = 0,
      P_FIELD_INDEX_mavlink_request_data_stream_t__target_system = 1,
      P_FIELD_INDEX_mavlink_request_data_stream_t__target_component = 2,
      P_FIELD_INDEX_mavlink_request_data_stream_t__req_stream_id = 3,
      P_FIELD_INDEX_mavlink_request_data_stream_t__start_stop = 4,
      _P_FIELD_INDEX_mavlink_request_data_stream_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_resource_request_t
    {
      P_FIELD_INDEX_mavlink_resource_request_t__request_id = 0,
      P_FIELD_INDEX_mavlink_resource_request_t__uri_type = 1,
      P_FIELD_INDEX_mavlink_resource_request_t__uri = 2,
      P_FIELD_INDEX_mavlink_resource_request_t__transfer_type = 3,
      P_FIELD_INDEX_mavlink_resource_request_t__storage = 4,
      _P_FIELD_INDEX_mavlink_resource_request_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_safety_allowed_area_t
    {
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p1x = 0,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p1y = 1,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p1z = 2,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p2x = 3,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p2y = 4,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__p2z = 5,
      P_FIELD_INDEX_mavlink_safety_allowed_area_t__frame = 6,
      _P_FIELD_INDEX_mavlink_safety_allowed_area_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_safety_set_allowed_area_t
    {
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p1x = 0,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p1y = 1,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p1z = 2,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p2x = 3,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p2y = 4,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__p2z = 5,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__target_system = 6,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__target_component = 7,
      P_FIELD_INDEX_mavlink_safety_set_allowed_area_t__frame = 8,
      _P_FIELD_INDEX_mavlink_safety_set_allowed_area_t_COUNT = 9
    };

    enum P_FIELD_INDEX_mavlink_scaled_imu2_t
    {
      P_FIELD_INDEX_mavlink_scaled_imu2_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__xacc = 1,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__yacc = 2,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__zacc = 3,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__xmag = 7,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__ymag = 8,
      P_FIELD_INDEX_mavlink_scaled_imu2_t__zmag = 9,
      _P_FIELD_INDEX_mavlink_scaled_imu2_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_scaled_imu3_t
    {
      P_FIELD_INDEX_mavlink_scaled_imu3_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__xacc = 1,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__yacc = 2,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__zacc = 3,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__xmag = 7,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__ymag = 8,
      P_FIELD_INDEX_mavlink_scaled_imu3_t__zmag = 9,
      _P_FIELD_INDEX_mavlink_scaled_imu3_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_scaled_imu_t
    {
      P_FIELD_INDEX_mavlink_scaled_imu_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_imu_t__xacc = 1,
      P_FIELD_INDEX_mavlink_scaled_imu_t__yacc = 2,
      P_FIELD_INDEX_mavlink_scaled_imu_t__zacc = 3,
      P_FIELD_INDEX_mavlink_scaled_imu_t__xgyro = 4,
      P_FIELD_INDEX_mavlink_scaled_imu_t__ygyro = 5,
      P_FIELD_INDEX_mavlink_scaled_imu_t__zgyro = 6,
      P_FIELD_INDEX_mavlink_scaled_imu_t__xmag = 7,
      P_FIELD_INDEX_mavlink_scaled_imu_t__ymag = 8,
      P_FIELD_INDEX_mavlink_scaled_imu_t__zmag = 9,
      _P_FIELD_INDEX_mavlink_scaled_imu_t_COUNT = 10
    };

    enum P_FIELD_INDEX_mavlink_scaled_pressure2_t
    {
      P_FIELD_INDEX_mavlink_scaled_pressure2_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_pressure2_t__press_abs = 1,
      P_FIELD_INDEX_mavlink_scaled_pressure2_t__press_diff = 2,
      P_FIELD_INDEX_mavlink_scaled_pressure2_t__temperature = 3,
      _P_FIELD_INDEX_mavlink_scaled_pressure2_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_scaled_pressure3_t
    {
      P_FIELD_INDEX_mavlink_scaled_pressure3_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_pressure3_t__press_abs = 1,
      P_FIELD_INDEX_mavlink_scaled_pressure3_t__press_diff = 2,
      P_FIELD_INDEX_mavlink_scaled_pressure3_t__temperature = 3,
      _P_FIELD_INDEX_mavlink_scaled_pressure3_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_scaled_pressure_t
    {
      P_FIELD_INDEX_mavlink_scaled_pressure_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_scaled_pressure_t__press_abs = 1,
      P_FIELD_INDEX_mavlink_scaled_pressure_t__press_diff = 2,
      P_FIELD_INDEX_mavlink_scaled_pressure_t__temperature = 3,
      _P_FIELD_INDEX_mavlink_scaled_pressure_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_serial_control_t
    {
      P_FIELD_INDEX_mavlink_serial_control_t__baudrate = 0,
      P_FIELD_INDEX_mavlink_serial_control_t__timeout = 1,
      P_FIELD_INDEX_mavlink_serial_control_t__device = 2,
      P_FIELD_INDEX_mavlink_serial_control_t__flags = 3,
      P_FIELD_INDEX_mavlink_serial_control_t__count = 4,
      P_FIELD_INDEX_mavlink_serial_control_t__data = 5,
      _P_FIELD_INDEX_mavlink_serial_control_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_servo_output_raw_t
    {
      P_FIELD_INDEX_mavlink_servo_output_raw_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo1_raw = 1,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo2_raw = 2,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo3_raw = 3,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo4_raw = 4,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo5_raw = 5,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo6_raw = 6,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo7_raw = 7,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo8_raw = 8,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo9_raw = 9,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo10_raw = 10,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo11_raw = 11,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo12_raw = 12,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo13_raw = 13,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo14_raw = 14,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo15_raw = 15,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__servo16_raw = 16,
      P_FIELD_INDEX_mavlink_servo_output_raw_t__port = 17,
      _P_FIELD_INDEX_mavlink_servo_output_raw_t_COUNT = 18
    };

    enum P_FIELD_INDEX_mavlink_set_actuator_control_target_t
    {
      P_FIELD_INDEX_mavlink_set_actuator_control_target_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_set_actuator_control_target_t__controls = 1,
      P_FIELD_INDEX_mavlink_set_actuator_control_target_t__group_mlx = 2,
      P_FIELD_INDEX_mavlink_set_actuator_control_target_t__target_system = 3,
      P_FIELD_INDEX_mavlink_set_actuator_control_target_t__target_component = 4,
      _P_FIELD_INDEX_mavlink_set_actuator_control_target_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_set_attitude_target_t
    {
      P_FIELD_INDEX_mavlink_set_attitude_target_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__q = 1,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__body_roll_rate = 2,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__body_pitch_rate = 3,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__body_yaw_rate = 4,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__thrust = 5,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__target_system = 6,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__target_component = 7,
      P_FIELD_INDEX_mavlink_set_attitude_target_t__type_mask = 8,
      _P_FIELD_INDEX_mavlink_set_attitude_target_t_COUNT = 9
    };

    enum P_FIELD_INDEX_mavlink_set_gps_global_origin_t
    {
      P_FIELD_INDEX_mavlink_set_gps_global_origin_t__latitude = 0,
      P_FIELD_INDEX_mavlink_set_gps_global_origin_t__longitude = 1,
      P_FIELD_INDEX_mavlink_set_gps_global_origin_t__altitude = 2,
      P_FIELD_INDEX_mavlink_set_gps_global_origin_t__target_system = 3,
      _P_FIELD_INDEX_mavlink_set_gps_global_origin_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_set_home_position_t
    {
      P_FIELD_INDEX_mavlink_set_home_position_t__latitude = 0,
      P_FIELD_INDEX_mavlink_set_home_position_t__longitude = 1,
      P_FIELD_INDEX_mavlink_set_home_position_t__altitude = 2,
      P_FIELD_INDEX_mavlink_set_home_position_t__x = 3,
      P_FIELD_INDEX_mavlink_set_home_position_t__y = 4,
      P_FIELD_INDEX_mavlink_set_home_position_t__z = 5,
      P_FIELD_INDEX_mavlink_set_home_position_t__q = 6,
      P_FIELD_INDEX_mavlink_set_home_position_t__approach_x = 7,
      P_FIELD_INDEX_mavlink_set_home_position_t__approach_y = 8,
      P_FIELD_INDEX_mavlink_set_home_position_t__approach_z = 9,
      P_FIELD_INDEX_mavlink_set_home_position_t__target_system = 10,
      _P_FIELD_INDEX_mavlink_set_home_position_t_COUNT = 11
    };

    enum P_FIELD_INDEX_mavlink_set_mode_t
    {
      P_FIELD_INDEX_mavlink_set_mode_t__custom_mode = 0,
      P_FIELD_INDEX_mavlink_set_mode_t__target_system = 1,
      P_FIELD_INDEX_mavlink_set_mode_t__base_mode = 2,
      _P_FIELD_INDEX_mavlink_set_mode_t_COUNT = 3
    };

    enum P_FIELD_INDEX_mavlink_set_position_target_global_int_t
    {
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__lat_int = 1,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__lon_int = 2,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__alt = 3,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__vx = 4,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__vy = 5,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__vz = 6,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__afx = 7,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__afy = 8,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__afz = 9,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__yaw = 10,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__yaw_rate = 11,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__type_mask = 12,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__target_system = 13,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__target_component = 14,
      P_FIELD_INDEX_mavlink_set_position_target_global_int_t__coordinate_frame = 15,
      _P_FIELD_INDEX_mavlink_set_position_target_global_int_t_COUNT = 16
    };

    enum P_FIELD_INDEX_mavlink_set_position_target_local_ned_t
    {
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__time_boot_ms = 0,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__x = 1,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__y = 2,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__z = 3,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__vx = 4,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__vy = 5,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__vz = 6,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__afx = 7,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__afy = 8,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__afz = 9,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__yaw = 10,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__yaw_rate = 11,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__type_mask = 12,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__target_system = 13,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__target_component = 14,
      P_FIELD_INDEX_mavlink_set_position_target_local_ned_t__coordinate_frame = 15,
      _P_FIELD_INDEX_mavlink_set_position_target_local_ned_t_COUNT = 16
    };

    enum P_FIELD_INDEX_mavlink_sim_state_t
    {
      P_FIELD_INDEX_mavlink_sim_state_t__q1 = 0,
      P_FIELD_INDEX_mavlink_sim_state_t__q2 = 1,
      P_FIELD_INDEX_mavlink_sim_state_t__q3 = 2,
      P_FIELD_INDEX_mavlink_sim_state_t__q4 = 3,
      P_FIELD_INDEX_mavlink_sim_state_t__roll = 4,
      P_FIELD_INDEX_mavlink_sim_state_t__pitch = 5,
      P_FIELD_INDEX_mavlink_sim_state_t__yaw = 6,
      P_FIELD_INDEX_mavlink_sim_state_t__xacc = 7,
      P_FIELD_INDEX_mavlink_sim_state_t__yacc = 8,
      P_FIELD_INDEX_mavlink_sim_state_t__zacc = 9,
      P_FIELD_INDEX_mavlink_sim_state_t__xgyro = 10,
      P_FIELD_INDEX_mavlink_sim_state_t__ygyro = 11,
      P_FIELD_INDEX_mavlink_sim_state_t__zgyro = 12,
      P_FIELD_INDEX_mavlink_sim_state_t__lat = 13,
      P_FIELD_INDEX_mavlink_sim_state_t__lon = 14,
      P_FIELD_INDEX_mavlink_sim_state_t__alt = 15,
      P_FIELD_INDEX_mavlink_sim_state_t__std_dev_horz = 16,
      P_FIELD_INDEX_mavlink_sim_state_t__std_dev_vert = 17,
      P_FIELD_INDEX_mavlink_sim_state_t__vn = 18,
      P_FIELD_INDEX_mavlink_sim_state_t__ve = 19,
      P_FIELD_INDEX_mavlink_sim_state_t__vd = 20,
      _P_FIELD_INDEX_mavlink_sim_state_t_COUNT = 21
    };

    enum P_FIELD_INDEX_mavlink_statustext_t
    {
      P_FIELD_INDEX_mavlink_statustext_t__severity = 0,
      P_FIELD_INDEX_mavlink_statustext_t__text = 1,
      _P_FIELD_INDEX_mavlink_statustext_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_sys_status_t
    {
      P_FIELD_INDEX_mavlink_sys_status_t__onboard_control_sensors_present = 0,
      P_FIELD_INDEX_mavlink_sys_status_t__onboard_control_sensors_enabled = 1,
      P_FIELD_INDEX_mavlink_sys_status_t__onboard_control_sensors_health = 2,
      P_FIELD_INDEX_mavlink_sys_status_t__load = 3,
      P_FIELD_INDEX_mavlink_sys_status_t__voltage_battery = 4,
      P_FIELD_INDEX_mavlink_sys_status_t__current_battery = 5,
      P_FIELD_INDEX_mavlink_sys_status_t__drop_rate_comm = 6,
      P_FIELD_INDEX_mavlink_sys_status_t__errors_comm = 7,
      P_FIELD_INDEX_mavlink_sys_status_t__errors_count1 = 8,
      P_FIELD_INDEX_mavlink_sys_status_t__errors_count2 = 9,
      P_FIELD_INDEX_mavlink_sys_status_t__errors_count3 = 10,
      P_FIELD_INDEX_mavlink_sys_status_t__errors_count4 = 11,
      P_FIELD_INDEX_mavlink_sys_status_t__battery_remaining = 12,
      _P_FIELD_INDEX_mavlink_sys_status_t_COUNT = 13
    };

    enum P_FIELD_INDEX_mavlink_system_time_t
    {
      P_FIELD_INDEX_mavlink_system_time_t__time_unix_usec = 0,
      P_FIELD_INDEX_mavlink_system_time_t__time_boot_ms = 1,
      _P_FIELD_INDEX_mavlink_system_time_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_terrain_check_t
    {
      P_FIELD_INDEX_mavlink_terrain_check_t__lat = 0,
      P_FIELD_INDEX_mavlink_terrain_check_t__lon = 1,
      _P_FIELD_INDEX_mavlink_terrain_check_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_terrain_data_t
    {
      P_FIELD_INDEX_mavlink_terrain_data_t__lat = 0,
      P_FIELD_INDEX_mavlink_terrain_data_t__lon = 1,
      P_FIELD_INDEX_mavlink_terrain_data_t__grid_spacing = 2,
      P_FIELD_INDEX_mavlink_terrain_data_t__data = 3,
      P_FIELD_INDEX_mavlink_terrain_data_t__gridbit = 4,
      _P_FIELD_INDEX_mavlink_terrain_data_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_terrain_report_t
    {
      P_FIELD_INDEX_mavlink_terrain_report_t__lat = 0,
      P_FIELD_INDEX_mavlink_terrain_report_t__lon = 1,
      P_FIELD_INDEX_mavlink_terrain_report_t__terrain_height = 2,
      P_FIELD_INDEX_mavlink_terrain_report_t__current_height = 3,
      P_FIELD_INDEX_mavlink_terrain_report_t__spacing = 4,
      P_FIELD_INDEX_mavlink_terrain_report_t__pending = 5,
      P_FIELD_INDEX_mavlink_terrain_report_t__loaded = 6,
      _P_FIELD_INDEX_mavlink_terrain_report_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_terrain_request_t
    {
      P_FIELD_INDEX_mavlink_terrain_request_t__mask = 0,
      P_FIELD_INDEX_mavlink_terrain_request_t__lat = 1,
      P_FIELD_INDEX_mavlink_terrain_request_t__lon = 2,
      P_FIELD_INDEX_mavlink_terrain_request_t__grid_spacing = 3,
      _P_FIELD_INDEX_mavlink_terrain_request_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_timesync_t
    {
      P_FIELD_INDEX_mavlink_timesync_t__tc1 = 0,
      P_FIELD_INDEX_mavlink_timesync_t__ts1 = 1,
      _P_FIELD_INDEX_mavlink_timesync_t_COUNT = 2
    };

    enum P_FIELD_INDEX_mavlink_v2_extension_t
    {
      P_FIELD_INDEX_mavlink_v2_extension_t__message_type = 0,
      P_FIELD_INDEX_mavlink_v2_extension_t__target_network = 1,
      P_FIELD_INDEX_mavlink_v2_extension_t__target_system = 2,
      P_FIELD_INDEX_mavlink_v2_extension_t__target_component = 3,
      P_FIELD_INDEX_mavlink_v2_extension_t__payload = 4,
      _P_FIELD_INDEX_mavlink_v2_extension_t_COUNT = 5
    };

    enum P_FIELD_INDEX_mavlink_vfr_hud_t
    {
      P_FIELD_INDEX_mavlink_vfr_hud_t__airspeed = 0,
      P_FIELD_INDEX_mavlink_vfr_hud_t__groundspeed = 1,
      P_FIELD_INDEX_mavlink_vfr_hud_t__alt = 2,
      P_FIELD_INDEX_mavlink_vfr_hud_t__climb = 3,
      P_FIELD_INDEX_mavlink_vfr_hud_t__heading = 4,
      P_FIELD_INDEX_mavlink_vfr_hud_t__throttle = 5,
      _P_FIELD_INDEX_mavlink_vfr_hud_t_COUNT = 6
    };

    enum P_FIELD_INDEX_mavlink_vibration_t
    {
      P_FIELD_INDEX_mavlink_vibration_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_vibration_t__vibration_x = 1,
      P_FIELD_INDEX_mavlink_vibration_t__vibration_y = 2,
      P_FIELD_INDEX_mavlink_vibration_t__vibration_z = 3,
      P_FIELD_INDEX_mavlink_vibration_t__clipping_0 = 4,
      P_FIELD_INDEX_mavlink_vibration_t__clipping_1 = 5,
      P_FIELD_INDEX_mavlink_vibration_t__clipping_2 = 6,
      _P_FIELD_INDEX_mavlink_vibration_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_vicon_position_estimate_t
    {
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__usec = 0,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__x = 1,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__y = 2,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__z = 3,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__roll = 4,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__pitch = 5,
      P_FIELD_INDEX_mavlink_vicon_position_estimate_t__yaw = 6,
      _P_FIELD_INDEX_mavlink_vicon_position_estimate_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_vision_position_estimate_t
    {
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__usec = 0,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__x = 1,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__y = 2,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__z = 3,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__roll = 4,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__pitch = 5,
      P_FIELD_INDEX_mavlink_vision_position_estimate_t__yaw = 6,
      _P_FIELD_INDEX_mavlink_vision_position_estimate_t_COUNT = 7
    };

    enum P_FIELD_INDEX_mavlink_vision_speed_estimate_t
    {
      P_FIELD_INDEX_mavlink_vision_speed_estimate_t__usec = 0,
      P_FIELD_INDEX_mavlink_vision_speed_estimate_t__x = 1,
      P_FIELD_INDEX_mavlink_vision_speed_estimate_t__y = 2,
      P_FIELD_INDEX_mavlink_vision_speed_estimate_t__z = 3,
      _P_FIELD_INDEX_mavlink_vision_speed_estimate_t_COUNT = 4
    };

    enum P_FIELD_INDEX_mavlink_wind_cov_t
    {
      P_FIELD_INDEX_mavlink_wind_cov_t__time_usec = 0,
      P_FIELD_INDEX_mavlink_wind_cov_t__wind_x = 1,
      P_FIELD_INDEX_mavlink_wind_cov_t__wind_y = 2,
      P_FIELD_INDEX_mavlink_wind_cov_t__wind_z = 3,
      P_FIELD_INDEX_mavlink_wind_cov_t__var_horiz = 4,
      P_FIELD_INDEX_mavlink_wind_cov_t__var_vert = 5,
      P_FIELD_INDEX_mavlink_wind_cov_t__wind_alt = 6,
      P_FIELD_INDEX_mavlink_wind_cov_t__horiz_accuracy = 7,
      P_FIELD_INDEX_mavlink_wind_cov_t__vert_accuracy = 8,
      _P_FIELD_INDEX_mavlink_wind_cov_t_COUNT = 9
    };

    extern PRT_TYPE P_GEND_TYPE_float32;
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
    extern PRT_TYPE P_GEND_TYPE_mavlink_camera_trigger_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_collision_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_ack_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_int_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_command_long_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_control_system_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_stream_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_data_transmission_handshake_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_debug_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_debug_vect_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_distance_sensor_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_encapsulated_data_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_estimator_status_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_extended_sys_state_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_file_transfer_protocol_t;
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
    extern PRT_TYPE P_GEND_TYPE_mavlink_manual_control_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_manual_setpoint_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_memory_vect_t;
    extern PRT_TYPE P_GEND_TYPE_mavlink_message_interval_t;
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
    #ifdef __cplusplus
      }
    #endif
  #endif
  