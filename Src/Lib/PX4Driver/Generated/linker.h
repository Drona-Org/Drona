
  #ifndef P_LINKER_H
    #define P_LINKER_H
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_EVENTS
    {
      _P_EVENT_NULL = 0,
      _P_EVENT_HALT = 1,
      _P_EVENTS_COUNT = 2
    };

    enum P_EVENTSET
    {
      _P_EVENTSETS_COUNT = 0
    };

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

    enum P_FORGN_TYPES
    {
      P_FORGN_TYPE_float32 = 0,
      _P_FORGN_TYPES_COUNT = 1
    };

    enum P_FUNS
    {
      _P_FUN_PUSH_OR_IGN = 0,
      P_FUN_AbsFloat32 = 2,
      P_FUN_AddFloat32 = 4,
      P_FUN_DivFloat32 = 6,
      P_FUN_IntToFloat32 = 8,
      P_FUN_IsEqFloat32 = 10,
      P_FUN_IsFiniteFloat32 = 12,
      P_FUN_IsGeFloat32 = 14,
      P_FUN_IsGtFloat32 = 16,
      P_FUN_IsInftyFloat32 = 18,
      P_FUN_IsLeFloat32 = 20,
      P_FUN_IsLtFloat32 = 22,
      _P_FUNS_COUNT = 22,
      P_FUN_IsNEqFloat32 = 24,
      P_FUN_IsNaNFloat32 = 26,
      P_FUN_IsNearFloat32 = 28,
      P_FUN_IsNegInftyFloat32 = 30,
      P_FUN_IsPosInftyFloat32 = 32,
      P_FUN_MulFloat32 = 34,
      P_FUN_NaNFloat32 = 36,
      P_FUN_NegFloat32 = 38,
      P_FUN_ScientificToFloat32 = 40,
      P_FUN_SubFloat32 = 42
    };

    enum P_IORM
    {
      _P_IORM_COUNT = 0
    };

    enum P_MACHINES
    {
      _P_MACHINES_COUNT = 0
    };

    enum P_RENAME
    {
      _P_RENAME_COUNT = 0
    };

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

    void PRT_FORGN_FREE_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_BOOLEAN PRT_FORGN_ISEQUAL_float32_IMPL(PRT_UINT64 frgnVal1, PRT_UINT64 frgnVal2);

    PRT_STRING PRT_FORGN_TOSTRING_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_UINT32 PRT_FORGN_GETHASHCODE_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_UINT64 PRT_FORGN_MKDEF_float32_IMPL(void);

    PRT_UINT64 PRT_FORGN_CLONE_float32_IMPL(PRT_UINT64 frgnVal);

    extern PRT_FUNDECL P_FUN_AbsFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_AddFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_DivFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IntToFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsEqFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsFiniteFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsGeFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsGtFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsLeFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsLtFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNEqFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNaNFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNearFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNegInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsPosInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_MulFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_NaNFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_NegFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_ScientificToFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_SubFloat32_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE *P_GEND_TYPE_float32;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_actuator_control_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_adsb_vehicle_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_altitude_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_att_pos_mocap_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_attitude_quaternion_cov_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_attitude_quaternion_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_attitude_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_attitude_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_auth_key_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_autopilot_version_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_battery_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_camera_trigger_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_change_operator_control_ack_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_change_operator_control_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_collision_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_command_ack_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_command_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_command_long_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_control_system_state_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_data_stream_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_data_transmission_handshake_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_debug_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_debug_vect_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_distance_sensor_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_encapsulated_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_estimator_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_extended_sys_state_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_file_transfer_protocol_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_follow_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_global_position_int_cov_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_global_position_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_global_vision_position_estimate_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps2_raw_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps2_rtk_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_global_origin_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_inject_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_input_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_raw_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_rtcm_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_rtk_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_gps_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_heartbeat_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_high_latency_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_highres_imu_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_actuator_controls_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_controls_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_gps_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_optical_flow_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_rc_inputs_raw_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_sensor_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_state_quaternion_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_hil_state_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_home_position_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_landing_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_local_position_ned_cov_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_local_position_ned_system_global_offset_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_local_position_ned_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_entry_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_erase_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_request_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_request_end_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_log_request_list_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_manual_control_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_manual_setpoint_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_memory_vect_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_message_interval_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_ack_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_clear_all_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_count_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_current_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_item_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_item_reached_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_item_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_request_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_request_list_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_request_partial_list_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_request_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_set_current_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_mission_write_partial_list_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_named_value_float_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_named_value_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_nav_controller_output_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_optical_flow_rad_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_optical_flow_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_param_map_rc_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_param_request_list_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_param_request_read_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_param_set_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_param_value_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_ping_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_position_target_global_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_position_target_local_ned_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_power_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_radio_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_raw_imu_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_raw_pressure_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_rc_channels_override_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_rc_channels_raw_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_rc_channels_scaled_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_rc_channels_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_request_data_stream_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_resource_request_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_safety_allowed_area_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_safety_set_allowed_area_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_imu2_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_imu3_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_imu_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_pressure2_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_pressure3_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_scaled_pressure_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_serial_control_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_servo_output_raw_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_actuator_control_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_attitude_target_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_gps_global_origin_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_home_position_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_mode_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_position_target_global_int_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_set_position_target_local_ned_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_sim_state_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_statustext_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_sys_status_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_system_time_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_terrain_check_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_terrain_data_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_terrain_report_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_terrain_request_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_timesync_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_v2_extension_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_vfr_hud_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_vibration_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_vicon_position_estimate_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_vision_position_estimate_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_vision_speed_estimate_t;
    extern PRT_TYPE *P_GEND_TYPE_mavlink_wind_cov_t;
    #ifdef __cplusplus
      }
    #endif
  #endif
  