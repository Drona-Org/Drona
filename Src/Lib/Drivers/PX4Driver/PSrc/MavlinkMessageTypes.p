
/*The heartbeat message shows that a system is present and responding. The type of the MAV and Autopilot hardware allow the receiving system to treat further messages from this system appropriate (e.g. by laying out the user interface based on the autopilot).*/
type mavlink_heartbeat_t =
(

_custom_mode : int,  /*A bitfield for use for autopilot-specific flags.*/
_type : int,  /*Type of the MAV (quadrotor, helicopter, etc., up to 15 types, defined in MAV_TYPE ENUM)*/
_autopilot : int,  /*Autopilot type / class. defined in MAV_AUTOPILOT ENUM*/
_base_mode : int,  /*System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h*/
_system_status : int,  /*System status flag, see MAV_STATE ENUM*/
_mavlink_version : int  /*MAVLink version, not writable by user, gets added by protocol because of magic data type: uint8_t_mavlink_version*/

);

/*The general system state. If the system is following the MAVLink standard, the system state is mainly defined by three orthogonal states/modes: The system mode, which is either LOCKED (motors shut down and locked), MANUAL (system under RC control), GUIDED (system with autonomous position control, position setpoint controlled manually) or AUTO (system guided by path/waypoint planner). The NAV_MODE defined the current flight state: LIFTOFF (often an open-loop maneuver), LANDING, WAYPOINTS or VECTOR. This represents the internal navigation state machine. The system status shows wether the system is currently active or not and if an emergency occured. During the CRITICAL and EMERGENCY states the MAV is still considered to be active, but should start emergency procedures autonomously. After a failure occured it should first move from active to critical to allow manual intervention and then move to emergency after a certain timeout.*/
type mavlink_sys_status_t =
(

_onboard_control_sensors_present : int,  /*Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices defined by ENUM MAV_SYS_STATUS_SENSOR*/
_onboard_control_sensors_enabled : int,  /*Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices defined by ENUM MAV_SYS_STATUS_SENSOR*/
_onboard_control_sensors_health : int,  /*Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices defined by ENUM MAV_SYS_STATUS_SENSOR*/
_load : int,  /*Maximum usage in percent of the mainloop time, (0%: 0, 100%: 1000) should be always below 1000*/
_voltage_battery : int,  /*Battery voltage, in millivolts (1 = 1 millivolt)*/
_current_battery : int,  /*Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current*/
_drop_rate_comm : int,  /*Communication drops in percent, (0%: 0, 100%: 10'000), (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)*/
_errors_comm : int,  /*Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)*/
_errors_count1 : int,  /*Autopilot-specific errors*/
_errors_count2 : int,  /*Autopilot-specific errors*/
_errors_count3 : int,  /*Autopilot-specific errors*/
_errors_count4 : int,  /*Autopilot-specific errors*/
_battery_remaining : int  /*Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot estimate the remaining battery*/

);

/*The system time is the time of the master clock, typically the computer clock of the main onboard computer.*/
type mavlink_system_time_t =
(

_time_unix_usec : int,  /*Timestamp of the master clock in microseconds since UNIX epoch.*/
_time_boot_ms : int  /*Timestamp of the component clock since boot time in milliseconds.*/

);

/*A ping message either requesting or responding to a ping. This allows to measure the system latencies, including serial port, radio modem and UDP connections.*/
type mavlink_ping_t =
(

_time_usec : int,  /*Unix timestamp in microseconds or since system boot if smaller than MAVLink epoch (1.1.2009)*/
_seq : int,  /*PING sequence*/
_target_system : int,  /*0: request ping from all receiving systems, if greater than 0: message is a ping response and number is the system id of the requesting system*/
_target_component : int  /*0: request ping from all receiving components, if greater than 0: message is a ping response and number is the system id of the requesting system*/

);

/*Request to control this MAV*/
type mavlink_change_operator_control_t =
(

_target_system : int,  /*System the GCS requests control for*/
_control_request : int,  /*0: request control of this MAV, 1: Release control of this MAV*/
_version : int,  /*0: key as plaintext, 1-255: future, different hashing/encryption variants. The GCS should in general use the safest mode possible initially and then gradually move down the encryption level if it gets a NACK message indicating an encryption mismatch.*/
_passkey : seq[int]  /*Password / Key, depending on version plaintext or encrypted. 25 or less characters, NULL terminated. The characters may involve A-Z, a-z, 0-9, and "!?,.-"*/

);

/*Accept / deny control of this MAV*/
type mavlink_change_operator_control_ack_t =
(

_gcs_system_id : int,  /*ID of the GCS this message */
_control_request : int,  /*0: request control of this MAV, 1: Release control of this MAV*/
_ack : int  /*0: ACK, 1: NACK: Wrong passkey, 2: NACK: Unsupported passkey encryption method, 3: NACK: Already under control*/

);

/*Emit an encrypted signature / key identifying this system. PLEASE NOTE: This protocol has been kept simple, so transmitting the key requires an encrypted channel for true safety.*/
type mavlink_auth_key_t =
(

_key : seq[int]  /*key*/

);

/*THIS INTERFACE IS DEPRECATED. USE COMMAND_LONG with MAV_CMD_DO_SET_MODE INSTEAD. Set the system mode, as defined by enum MAV_MODE. There is no target component id as the mode is by definition for the overall aircraft, not only for one component.*/
type mavlink_set_mode_t =
(

_custom_mode : int,  /*The new autopilot-specific mode. This field can be ignored by an autopilot.*/
_target_system : int,  /*The system setting the mode*/
_base_mode : int  /*The new base mode*/

);

/*Request to read the onboard parameter with the param_id string id. Onboard parameters are stored as key[const char*] -> value[float]. This allows to send a parameter to any other component (such as the GCS) without the need of previous knowledge of possible parameter names. Thus the same GCS can store different parameters for different autopilots. See also http://qgroundcontrol.org/parameter_interface for a full documentation of QGroundControl and IMU code.*/
type mavlink_param_request_read_t =
(

_param_index : int,  /*Parameter index. Send -1 to use the param ID field as identifier (else the param id will be ignored)*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_param_id : seq[int]  /*Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/

);

/*Request all parameters of this component. After this request, all parameters are emitted.*/
type mavlink_param_request_list_t =
(

_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Emit the value of a onboard parameter. The inclusion of param_count and param_index in the message allows the recipient to keep track of received parameters and allows him to re-request missing parameters after a loss or timeout.*/
type mavlink_param_value_t =
(

_param_value : float,  /*Onboard parameter value*/
_param_count : int,  /*Total number of onboard parameters*/
_param_index : int,  /*Index of this onboard parameter*/
_param_id : seq[int],  /*Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
_param_type : int  /*Onboard parameter type: see the MAV_PARAM_TYPE enum for supported data types.*/

);

/*Set a parameter value TEMPORARILY to RAM. It will be reset to default on system reboot. Send the ACTION MAV_ACTION_STORAGE_WRITE to PERMANENTLY write the RAM contents to EEPROM. IMPORTANT: The receiving component should acknowledge the new parameter value by sending a param_value message to all communication partners. This will also ensure that multiple GCS all have an up-to-date list of all parameters. If the sending GCS did not receive a PARAM_VALUE message within its timeout time, it should re-send the PARAM_SET message.*/
type mavlink_param_set_t =
(

_param_value : float,  /*Onboard parameter value*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_param_id : seq[int],  /*Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
_param_type : int  /*Onboard parameter type: see the MAV_PARAM_TYPE enum for supported data types.*/

);

/*The global position, as returned by the Global Positioning System (GPS). This is
                NOT the global position estimate of the system, but rather a RAW sensor value. See message GLOBAL_POSITION for the global position estimate. Coordinate frame is right-handed, Z-axis up (GPS frame).*/
type mavlink_gps_raw_int_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_lat : int,  /*Latitude (WGS84), in degrees * 1E7*/
_lon : int,  /*Longitude (WGS84), in degrees * 1E7*/
_alt : int,  /*Altitude (AMSL, NOT WGS84), in meters * 1000 (positive for up). Note that virtually all GPS modules provide the AMSL altitude in addition to the WGS84 altitude.*/
_eph : int,  /*GPS HDOP horizontal dilution of position (unitless). If unknown, set to: UINT16_MAX*/
_epv : int,  /*GPS VDOP vertical dilution of position (unitless). If unknown, set to: UINT16_MAX*/
_vel : int,  /*GPS ground speed (m/s * 100). If unknown, set to: UINT16_MAX*/
_cog : int,  /*Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX*/
_fix_type : int,  /*See the GPS_FIX_TYPE enum.*/
_satellites_visible : int  /*Number of satellites visible. If unknown, set to 255*/

);

/*The positioning status, as reported by GPS. This message is intended to display status information about each satellite visible to the receiver. See message GLOBAL_POSITION for the global position estimate. This message can contain information for up to 20 satellites.*/
type mavlink_gps_status_t =
(

_satellites_visible : int,  /*Number of satellites visible*/
_satellite_prn : seq[int],  /*Global satellite ID*/
_satellite_used : seq[int],  /*0: Satellite not used, 1: used for localization*/
_satellite_elevation : seq[int],  /*Elevation (0: right on top of receiver, 90: on the horizon) of satellite*/
_satellite_azimuth : seq[int],  /*Direction of satellite, 0: 0 deg, 255: 360 deg.*/
_satellite_snr : seq[int]  /*Signal to noise ratio of satellite*/

);

/*The RAW IMU readings for the usual 9DOF sensor setup. This message should contain the scaled values to the described units*/
type mavlink_scaled_imu_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_xacc : int,  /*X acceleration (mg)*/
_yacc : int,  /*Y acceleration (mg)*/
_zacc : int,  /*Z acceleration (mg)*/
_xgyro : int,  /*Angular speed around X axis (millirad /sec)*/
_ygyro : int,  /*Angular speed around Y axis (millirad /sec)*/
_zgyro : int,  /*Angular speed around Z axis (millirad /sec)*/
_xmag : int,  /*X Magnetic field (milli tesla)*/
_ymag : int,  /*Y Magnetic field (milli tesla)*/
_zmag : int  /*Z Magnetic field (milli tesla)*/

);

/*The RAW IMU readings for the usual 9DOF sensor setup. This message should always contain the true raw values without any scaling to allow data capture and system debugging.*/
type mavlink_raw_imu_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_xacc : int,  /*X acceleration (raw)*/
_yacc : int,  /*Y acceleration (raw)*/
_zacc : int,  /*Z acceleration (raw)*/
_xgyro : int,  /*Angular speed around X axis (raw)*/
_ygyro : int,  /*Angular speed around Y axis (raw)*/
_zgyro : int,  /*Angular speed around Z axis (raw)*/
_xmag : int,  /*X Magnetic field (raw)*/
_ymag : int,  /*Y Magnetic field (raw)*/
_zmag : int  /*Z Magnetic field (raw)*/

);

/*The RAW pressure readings for the typical setup of one absolute pressure and one differential pressure sensor. The sensor values should be the raw, UNSCALED ADC values.*/
type mavlink_raw_pressure_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_press_abs : int,  /*Absolute pressure (raw)*/
_press_diff1 : int,  /*Differential pressure 1 (raw, 0 if nonexistant)*/
_press_diff2 : int,  /*Differential pressure 2 (raw, 0 if nonexistant)*/
_temperature : int  /*Raw Temperature measurement (raw)*/

);

/*The pressure readings for the typical setup of one absolute and differential pressure sensor. The units are as specified in each field.*/
type mavlink_scaled_pressure_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_press_abs : float,  /*Absolute pressure (hectopascal)*/
_press_diff : float,  /*Differential pressure 1 (hectopascal)*/
_temperature : int  /*Temperature measurement (0.01 degrees celsius)*/

);

/*The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right).*/
type mavlink_attitude_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_roll : float,  /*Roll angle (rad, -pi..+pi)*/
_pitch : float,  /*Pitch angle (rad, -pi..+pi)*/
_yaw : float,  /*Yaw angle (rad, -pi..+pi)*/
_rollspeed : float,  /*Roll angular speed (rad/s)*/
_pitchspeed : float,  /*Pitch angular speed (rad/s)*/
_yawspeed : float  /*Yaw angular speed (rad/s)*/

);

/*The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right), expressed as quaternion. Quaternion order is w, x, y, z and a zero rotation would be expressed as (1 0 0 0).*/
type mavlink_attitude_quaternion_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_q1 : float,  /*Quaternion component 1, w (1 in null-rotation)*/
_q2 : float,  /*Quaternion component 2, x (0 in null-rotation)*/
_q3 : float,  /*Quaternion component 3, y (0 in null-rotation)*/
_q4 : float,  /*Quaternion component 4, z (0 in null-rotation)*/
_rollspeed : float,  /*Roll angular speed (rad/s)*/
_pitchspeed : float,  /*Pitch angular speed (rad/s)*/
_yawspeed : float  /*Yaw angular speed (rad/s)*/

);

/*The filtered local position (e.g. fused computer vision and accelerometers). Coordinate frame is right-handed, Z-axis down (aeronautical frame, NED / north-east-down convention)*/
type mavlink_local_position_ned_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_x : float,  /*X Position*/
_y : float,  /*Y Position*/
_z : float,  /*Z Position*/
_vx : float,  /*X Speed*/
_vy : float,  /*Y Speed*/
_vz : float  /*Z Speed*/

);

/*The filtered global position (e.g. fused GPS and accelerometers). The position is in GPS-frame (right-handed, Z-up). It
               is designed as scaled integer message since the resolution of float is not sufficient.*/
type mavlink_global_position_int_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_lat : int,  /*Latitude, expressed as degrees * 1E7*/
_lon : int,  /*Longitude, expressed as degrees * 1E7*/
_alt : int,  /*Altitude in meters, expressed as * 1000 (millimeters), AMSL (not WGS84 - note that virtually all GPS modules provide the AMSL as well)*/
_relative_alt : int,  /*Altitude above ground in meters, expressed as * 1000 (millimeters)*/
_vx : int,  /*Ground X Speed (Latitude, positive north), expressed as m/s * 100*/
_vy : int,  /*Ground Y Speed (Longitude, positive east), expressed as m/s * 100*/
_vz : int,  /*Ground Z Speed (Altitude, positive down), expressed as m/s * 100*/
_hdg : int  /*Vehicle heading (yaw angle) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX*/

);

/*The scaled values of the RC channels received. (-100%) -10000, (0%) 0, (100%) 10000. Channels that are inactive should be set to UINT16_MAX.*/
type mavlink_rc_channels_scaled_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_chan1_scaled : int,  /*RC channel 1 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan2_scaled : int,  /*RC channel 2 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan3_scaled : int,  /*RC channel 3 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan4_scaled : int,  /*RC channel 4 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan5_scaled : int,  /*RC channel 5 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan6_scaled : int,  /*RC channel 6 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan7_scaled : int,  /*RC channel 7 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_chan8_scaled : int,  /*RC channel 8 value scaled, (-100%) -10000, (0%) 0, (100%) 10000, (invalid) INT16_MAX.*/
_port : int,  /*Servo output port (set of 8 outputs = 1 port). Most MAVs will just use one, but this allows for more than 8 servos.*/
_rssi : int  /*Receive signal strength indicator, 0: 0%, 100: 100%, 255: invalid/unknown.*/

);

/*The RAW values of the RC channels received. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. Individual receivers/transmitters might violate this specification.*/
type mavlink_rc_channels_raw_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_chan1_raw : int,  /*RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan2_raw : int,  /*RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan3_raw : int,  /*RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan4_raw : int,  /*RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan5_raw : int,  /*RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan6_raw : int,  /*RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan7_raw : int,  /*RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan8_raw : int,  /*RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_port : int,  /*Servo output port (set of 8 outputs = 1 port). Most MAVs will just use one, but this allows for more than 8 servos.*/
_rssi : int  /*Receive signal strength indicator, 0: 0%, 100: 100%, 255: invalid/unknown.*/

);

/*The RAW values of the servo outputs (for RC input from the remote, use the RC_CHANNELS messages). The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%.*/
type mavlink_servo_output_raw_t =
(

_time_usec : int,  /*Timestamp (microseconds since system boot)*/
_servo1_raw : int,  /*Servo output 1 value, in microseconds*/
_servo2_raw : int,  /*Servo output 2 value, in microseconds*/
_servo3_raw : int,  /*Servo output 3 value, in microseconds*/
_servo4_raw : int,  /*Servo output 4 value, in microseconds*/
_servo5_raw : int,  /*Servo output 5 value, in microseconds*/
_servo6_raw : int,  /*Servo output 6 value, in microseconds*/
_servo7_raw : int,  /*Servo output 7 value, in microseconds*/
_servo8_raw : int,  /*Servo output 8 value, in microseconds*/
_servo9_raw : int,  /*Servo output 9 value, in microseconds*/
_servo10_raw : int,  /*Servo output 10 value, in microseconds*/
_servo11_raw : int,  /*Servo output 11 value, in microseconds*/
_servo12_raw : int,  /*Servo output 12 value, in microseconds*/
_servo13_raw : int,  /*Servo output 13 value, in microseconds*/
_servo14_raw : int,  /*Servo output 14 value, in microseconds*/
_servo15_raw : int,  /*Servo output 15 value, in microseconds*/
_servo16_raw : int,  /*Servo output 16 value, in microseconds*/
_port : int  /*Servo output port (set of 8 outputs = 1 port). Most MAVs will just use one, but this allows to encode more than 8 servos.*/

);

/*Request a partial list of mission items from the system/component. http://qgroundcontrol.org/mavlink/waypoint_protocol. If start and end index are the same, just send one waypoint.*/
type mavlink_mission_request_partial_list_t =
(

_start_index : int,  /*Start index, 0 by default*/
_end_index : int,  /*End index, -1 by default (-1: send list to end). Else a valid index of the list*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*This message is sent to the MAV to write a partial list. If start index == end index, only one item will be transmitted / updated. If the start index is NOT 0 and above the current list size, this request should be REJECTED!*/
type mavlink_mission_write_partial_list_t =
(

_start_index : int,  /*Start index, 0 by default and smaller / equal to the largest index of the current onboard list.*/
_end_index : int,  /*End index, equal or greater than start index.*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Message encoding a mission item. This message is emitted to announce
                the presence of a mission item and to set a mission item on the system. The mission item can be either in x, y, z meters (type: LOCAL) or x:lat, y:lon, z:altitude. Local frame is Z-down, right handed (NED), global frame is Z-up, right handed (ENU). See also http://qgroundcontrol.org/mavlink/waypoint_protocol.*/
type mavlink_mission_item_t =
(

_param1 : float,  /*PARAM1, see MAV_CMD enum*/
_param2 : float,  /*PARAM2, see MAV_CMD enum*/
_param3 : float,  /*PARAM3, see MAV_CMD enum*/
_param4 : float,  /*PARAM4, see MAV_CMD enum*/
_x : float,  /*PARAM5 / local: x position, global: latitude*/
_y : float,  /*PARAM6 / y position: global: longitude*/
_z : float,  /*PARAM7 / z position: global: altitude (relative or absolute, depending on frame.*/
_seq : int,  /*Sequence*/
_command : int,  /*The scheduled action for the MISSION. see MAV_CMD in common.xml MAVLink specs*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_frame : int,  /*The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h*/
_current : int,  /*false:0, true:1*/
_autocontinue : int  /*autocontinue to next wp*/

);

/*Request the information of the mission item with the sequence number seq. The response of the system to this message should be a MISSION_ITEM message. http://qgroundcontrol.org/mavlink/waypoint_protocol*/
type mavlink_mission_request_t =
(

_seq : int,  /*Sequence*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Set the mission item with sequence number seq as current item. This means that the MAV will continue to this mission item on the shortest path (not following the mission items in-between).*/
type mavlink_mission_set_current_t =
(

_seq : int,  /*Sequence*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Message that announces the sequence number of the current active mission item. The MAV will fly towards this mission item.*/
type mavlink_mission_current_t =
(

_seq : int  /*Sequence*/

);

/*Request the overall list of mission items from the system/component.*/
type mavlink_mission_request_list_t =
(

_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*This message is emitted as response to MISSION_REQUEST_LIST by the MAV and to initiate a write transaction. The GCS can then request the individual mission item based on the knowledge of the total number of MISSIONs.*/
type mavlink_mission_count_t =
(

_count : int,  /*Number of mission items in the sequence*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Delete all mission items at once.*/
type mavlink_mission_clear_all_t =
(

_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*A certain mission item has been reached. The system will either hold this position (or circle on the orbit) or (if the autocontinue on the WP was set) continue to the next MISSION.*/
type mavlink_mission_item_reached_t =
(

_seq : int  /*Sequence*/

);

/*Ack message during MISSION handling. The type field states if this message is a positive ack (type=0) or if an error happened (type=non-zero).*/
type mavlink_mission_ack_t =
(

_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_type : int  /*See MAV_MISSION_RESULT enum*/

);

/*As local waypoints exist, the global MISSION reference allows to transform between the local coordinate frame and the global (GPS) coordinate frame. This can be necessary when e.g. in- and outdoor settings are connected and the MAV should move from in- to outdoor.*/
type mavlink_set_gps_global_origin_t =
(

_latitude : int,  /*Latitude (WGS84), in degrees * 1E7*/
_longitude : int,  /*Longitude (WGS84, in degrees * 1E7*/
_altitude : int,  /*Altitude (AMSL), in meters * 1000 (positive for up)*/
_target_system : int  /*System ID*/

);

/*Once the MAV sets a new GPS-Local correspondence, this message announces the origin (0,0,0) position*/
type mavlink_gps_global_origin_t =
(

_latitude : int,  /*Latitude (WGS84), in degrees * 1E7*/
_longitude : int,  /*Longitude (WGS84), in degrees * 1E7*/
_altitude : int  /*Altitude (AMSL), in meters * 1000 (positive for up)*/

);

/*Bind a RC channel to a parameter. The parameter should change accoding to the RC channel value.*/
type mavlink_param_map_rc_t =
(

_param_value0 : float,  /*Initial parameter value*/
_scale : float,  /*Scale, maps the RC range [-1, 1] to a parameter value*/
_param_value_min : float,  /*Minimum param value. The protocol does not define if this overwrites an onboard minimum value. (Depends on implementation)*/
_param_value_max : float,  /*Maximum param value. The protocol does not define if this overwrites an onboard maximum value. (Depends on implementation)*/
_param_index : int,  /*Parameter index. Send -1 to use the param ID field as identifier (else the param id will be ignored), send -2 to disable any existing map for this rc_channel_index.*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_param_id : seq[int],  /*Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string*/
_parameter_rc_channel_index : int  /*Index of parameter RC channel. Not equal to the RC channel id. Typically correpsonds to a potentiometer-knob on the RC.*/

);

/*Request the information of the mission item with the sequence number seq. The response of the system to this message should be a MISSION_ITEM_INT message. http://qgroundcontrol.org/mavlink/waypoint_protocol*/
type mavlink_mission_request_int_t =
(

_seq : int,  /*Sequence*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Set a safety zone (volume), which is defined by two corners of a cube. This message can be used to tell the MAV which setpoints/MISSIONs to accept and which to reject. Safety areas are often enforced by national or competition regulations.*/
type mavlink_safety_set_allowed_area_t =
(

_p1x : float,  /*x position 1 / Latitude 1*/
_p1y : float,  /*y position 1 / Longitude 1*/
_p1z : float,  /*z position 1 / Altitude 1*/
_p2x : float,  /*x position 2 / Latitude 2*/
_p2y : float,  /*y position 2 / Longitude 2*/
_p2z : float,  /*z position 2 / Altitude 2*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_frame : int  /*Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.*/

);

/*Read out the safety zone the MAV currently assumes.*/
type mavlink_safety_allowed_area_t =
(

_p1x : float,  /*x position 1 / Latitude 1*/
_p1y : float,  /*y position 1 / Longitude 1*/
_p1z : float,  /*z position 1 / Altitude 1*/
_p2x : float,  /*x position 2 / Latitude 2*/
_p2y : float,  /*y position 2 / Longitude 2*/
_p2z : float,  /*z position 2 / Altitude 2*/
_frame : int  /*Coordinate frame, as defined by MAV_FRAME enum in mavlink_types.h. Can be either global, GPS, right-handed with Z axis up or local, right handed, Z axis down.*/

);

/*The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right), expressed as quaternion. Quaternion order is w, x, y, z and a zero rotation would be expressed as (1 0 0 0).*/
type mavlink_attitude_quaternion_cov_t =
(

_time_usec : int,  /*Timestamp (microseconds since system boot or since UNIX epoch)*/
_q : seq[float],  /*Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation)*/
_rollspeed : float,  /*Roll angular speed (rad/s)*/
_pitchspeed : float,  /*Pitch angular speed (rad/s)*/
_yawspeed : float,  /*Yaw angular speed (rad/s)*/
_covariance : seq[float]  /*Attitude covariance*/

);

/*The state of the fixed wing navigation and position controller.*/
type mavlink_nav_controller_output_t =
(

_nav_roll : float,  /*Current desired roll in degrees*/
_nav_pitch : float,  /*Current desired pitch in degrees*/
_alt_error : float,  /*Current altitude error in meters*/
_aspd_error : float,  /*Current airspeed error in meters/second*/
_xtrack_error : float,  /*Current crosstrack error on x-y plane in meters*/
_nav_bearing : int,  /*Current desired heading in degrees*/
_target_bearing : int,  /*Bearing to current MISSION/target in degrees*/
_wp_dist : int  /*Distance to active MISSION in meters*/

);

/*The filtered global position (e.g. fused GPS and accelerometers). The position is in GPS-frame (right-handed, Z-up). It  is designed as scaled integer message since the resolution of float is not sufficient. NOTE: This message is intended for onboard networks / companion computers and higher-bandwidth links and optimized for accuracy and completeness. Please use the GLOBAL_POSITION_INT message for a minimal subset.*/
type mavlink_global_position_int_cov_t =
(

_time_usec : int,  /*Timestamp (microseconds since system boot or since UNIX epoch)*/
_lat : int,  /*Latitude, expressed as degrees * 1E7*/
_lon : int,  /*Longitude, expressed as degrees * 1E7*/
_alt : int,  /*Altitude in meters, expressed as * 1000 (millimeters), above MSL*/
_relative_alt : int,  /*Altitude above ground in meters, expressed as * 1000 (millimeters)*/
_vx : float,  /*Ground X Speed (Latitude), expressed as m/s*/
_vy : float,  /*Ground Y Speed (Longitude), expressed as m/s*/
_vz : float,  /*Ground Z Speed (Altitude), expressed as m/s*/
_covariance : seq[float],  /*Covariance matrix (first six entries are the first ROW, next six entries are the second row, etc.)*/
_estimator_type : int  /*Class id of the estimator this estimate originated from.*/

);

/*The filtered local position (e.g. fused computer vision and accelerometers). Coordinate frame is right-handed, Z-axis down (aeronautical frame, NED / north-east-down convention)*/
type mavlink_local_position_ned_cov_t =
(

_time_usec : int,  /*Timestamp (microseconds since system boot or since UNIX epoch)*/
_x : float,  /*X Position*/
_y : float,  /*Y Position*/
_z : float,  /*Z Position*/
_vx : float,  /*X Speed (m/s)*/
_vy : float,  /*Y Speed (m/s)*/
_vz : float,  /*Z Speed (m/s)*/
_ax : float,  /*X Acceleration (m/s^2)*/
_ay : float,  /*Y Acceleration (m/s^2)*/
_az : float,  /*Z Acceleration (m/s^2)*/
_covariance : seq[float],  /*Covariance matrix upper right triangular (first nine entries are the first ROW, next eight entries are the second row, etc.)*/
_estimator_type : int  /*Class id of the estimator this estimate originated from.*/

);

/*The PPM values of the RC channels received. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. Individual receivers/transmitters might violate this specification.*/
type mavlink_rc_channels_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_chan1_raw : int,  /*RC channel 1 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan2_raw : int,  /*RC channel 2 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan3_raw : int,  /*RC channel 3 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan4_raw : int,  /*RC channel 4 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan5_raw : int,  /*RC channel 5 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan6_raw : int,  /*RC channel 6 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan7_raw : int,  /*RC channel 7 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan8_raw : int,  /*RC channel 8 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan9_raw : int,  /*RC channel 9 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan10_raw : int,  /*RC channel 10 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan11_raw : int,  /*RC channel 11 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan12_raw : int,  /*RC channel 12 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan13_raw : int,  /*RC channel 13 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan14_raw : int,  /*RC channel 14 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan15_raw : int,  /*RC channel 15 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan16_raw : int,  /*RC channel 16 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan17_raw : int,  /*RC channel 17 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chan18_raw : int,  /*RC channel 18 value, in microseconds. A value of UINT16_MAX implies the channel is unused.*/
_chancount : int,  /*Total number of RC channels being received. This can be larger than 18, indicating that more channels are available but not given in this message. This value should be 0 when no RC channels are available.*/
_rssi : int  /*Receive signal strength indicator, 0: 0%, 100: 100%, 255: invalid/unknown.*/

);

/*THIS INTERFACE IS DEPRECATED. USE SET_MESSAGE_INTERVAL INSTEAD.*/
type mavlink_request_data_stream_t =
(

_req_message_rate : int,  /*The requested message rate*/
_target_system : int,  /*The target requested to send the message stream.*/
_target_component : int,  /*The target requested to send the message stream.*/
_req_stream_id : int,  /*The ID of the requested data stream*/
_start_stop : int  /*1 to start sending, 0 to stop sending.*/

);

/*THIS INTERFACE IS DEPRECATED. USE MESSAGE_INTERVAL INSTEAD.*/
type mavlink_data_stream_t =
(

_message_rate : int,  /*The message rate*/
_stream_id : int,  /*The ID of the requested data stream*/
_on_off : int  /*1 stream is enabled, 0 stream is stopped.*/

);

/*This message provides an API for manually controlling the vehicle using standard joystick axes nomenclature, along with a joystick-like input device. Unused axes can be disabled an buttons are also transmit as boolean values of their */
type mavlink_manual_control_t =
(

_x : int,  /*X-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to forward(1000)-backward(-1000) movement on a joystick and the pitch of a vehicle.*/
_y : int,  /*Y-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to left(-1000)-right(1000) movement on a joystick and the roll of a vehicle.*/
_z : int,  /*Z-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a separate slider movement with maximum being 1000 and minimum being -1000 on a joystick and the thrust of a vehicle. Positive values are positive thrust, negative values are negative thrust.*/
_r : int,  /*R-axis, normalized to the range [-1000,1000]. A value of INT16_MAX indicates that this axis is invalid. Generally corresponds to a twisting of the joystick, with counter-clockwise being 1000 and clockwise being -1000, and the yaw of a vehicle.*/
_buttons : int,  /*A bitfield corresponding to the joystick buttons' current state, 1 for pressed, 0 for released. The lowest bit corresponds to Button 1.*/
_target : int  /*The system to be controlled.*/

);

/*The RAW values of the RC channels sent to the MAV to override info received from the RC radio. A value of UINT16_MAX means no change to that channel. A value of 0 means control of that channel should be released back to the RC radio. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. Individual receivers/transmitters might violate this specification.*/
type mavlink_rc_channels_override_t =
(

_chan1_raw : int,  /*RC channel 1 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan2_raw : int,  /*RC channel 2 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan3_raw : int,  /*RC channel 3 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan4_raw : int,  /*RC channel 4 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan5_raw : int,  /*RC channel 5 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan6_raw : int,  /*RC channel 6 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan7_raw : int,  /*RC channel 7 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_chan8_raw : int,  /*RC channel 8 value, in microseconds. A value of UINT16_MAX means to ignore this field.*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Message encoding a mission item. This message is emitted to announce
                the presence of a mission item and to set a mission item on the system. The mission item can be either in x, y, z meters (type: LOCAL) or x:lat, y:lon, z:altitude. Local frame is Z-down, right handed (NED), global frame is Z-up, right handed (ENU). See alsohttp://qgroundcontrol.org/mavlink/waypoint_protocol.*/
type mavlink_mission_item_int_t =
(

_param1 : float,  /*PARAM1, see MAV_CMD enum*/
_param2 : float,  /*PARAM2, see MAV_CMD enum*/
_param3 : float,  /*PARAM3, see MAV_CMD enum*/
_param4 : float,  /*PARAM4, see MAV_CMD enum*/
_x : int,  /*PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
_y : int,  /*PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7*/
_z : float,  /*PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.*/
_seq : int,  /*Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).*/
_command : int,  /*The scheduled action for the MISSION. see MAV_CMD in common.xml MAVLink specs*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_frame : int,  /*The coordinate system of the MISSION. see MAV_FRAME in mavlink_types.h*/
_current : int,  /*false:0, true:1*/
_autocontinue : int  /*autocontinue to next wp*/

);

/*Metrics typically displayed on a HUD for fixed wing aircraft*/
type mavlink_vfr_hud_t =
(

_airspeed : float,  /*Current airspeed in m/s*/
_groundspeed : float,  /*Current ground speed in m/s*/
_alt : float,  /*Current altitude (MSL), in meters*/
_climb : float,  /*Current climb rate in meters/second*/
_heading : int,  /*Current heading in degrees, in compass units (0..360, 0=north)*/
_throttle : int  /*Current throttle setting in integer percent, 0 to 100*/

);

/*Message encoding a command with parameters as scaled integers. Scaling depends on the actual command value.*/
type mavlink_command_int_t =
(

_param1 : float,  /*PARAM1, see MAV_CMD enum*/
_param2 : float,  /*PARAM2, see MAV_CMD enum*/
_param3 : float,  /*PARAM3, see MAV_CMD enum*/
_param4 : float,  /*PARAM4, see MAV_CMD enum*/
_x : int,  /*PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7*/
_y : int,  /*PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7*/
_z : float,  /*PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.*/
_command : int,  /*The scheduled action for the mission item. see MAV_CMD in common.xml MAVLink specs*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_frame : int,  /*The coordinate system of the COMMAND. see MAV_FRAME in mavlink_types.h*/
_current : int,  /*false:0, true:1*/
_autocontinue : int  /*autocontinue to next wp*/

);

/*Send a command with up to seven parameters to the MAV*/
type mavlink_command_long_t =
(

_param1 : float,  /*Parameter 1, as defined by MAV_CMD enum.*/
_param2 : float,  /*Parameter 2, as defined by MAV_CMD enum.*/
_param3 : float,  /*Parameter 3, as defined by MAV_CMD enum.*/
_param4 : float,  /*Parameter 4, as defined by MAV_CMD enum.*/
_param5 : float,  /*Parameter 5, as defined by MAV_CMD enum.*/
_param6 : float,  /*Parameter 6, as defined by MAV_CMD enum.*/
_param7 : float,  /*Parameter 7, as defined by MAV_CMD enum.*/
_command : int,  /*Command ID, as defined by MAV_CMD enum.*/
_target_system : int,  /*System which should execute the command*/
_target_component : int,  /*Component which should execute the command, 0 for all components*/
_confirmation : int  /*0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)*/

);

/*Report status of a command. Includes feedback wether the command was executed.*/
type mavlink_command_ack_t =
(

_command : int,  /*Command ID, as defined by MAV_CMD enum.*/
_result : int  /*See MAV_RESULT enum*/

);

/*Setpoint in roll, pitch, yaw and thrust from the operator*/
type mavlink_manual_setpoint_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot*/
_roll : float,  /*Desired roll rate in radians per second*/
_pitch : float,  /*Desired pitch rate in radians per second*/
_yaw : float,  /*Desired yaw rate in radians per second*/
_thrust : float,  /*Collective thrust, normalized to 0 .. 1*/
_mode_switch : int,  /*Flight mode switch position, 0.. 255*/
_manual_override_switch : int  /*Override mode switch position, 0.. 255*/

);

/*Sets a desired vehicle attitude. Used by an external controller to command the vehicle (manual controller or other system).*/
type mavlink_set_attitude_target_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot*/
_q : seq[float],  /*Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)*/
_body_roll_rate : float,  /*Body roll rate in radians per second*/
_body_pitch_rate : float,  /*Body roll rate in radians per second*/
_body_yaw_rate : float,  /*Body roll rate in radians per second*/
_thrust : float,  /*Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_type_mask : int  /*Mappings: If any of these bits are set, the corresponding input should be ignored: bit 1: body roll rate, bit 2: body pitch rate, bit 3: body yaw rate. bit 4-bit 6: reserved, bit 7: throttle, bit 8: attitude*/

);

/*Reports the current commanded attitude of the vehicle as specified by the autopilot. This should match the commands sent in a SET_ATTITUDE_TARGET message if the vehicle is being controlled this way.*/
type mavlink_attitude_target_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot*/
_q : seq[float],  /*Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)*/
_body_roll_rate : float,  /*Body roll rate in radians per second*/
_body_pitch_rate : float,  /*Body roll rate in radians per second*/
_body_yaw_rate : float,  /*Body roll rate in radians per second*/
_thrust : float,  /*Collective thrust, normalized to 0 .. 1 (-1 .. 1 for vehicles capable of reverse trust)*/
_type_mask : int  /*Mappings: If any of these bits are set, the corresponding input should be ignored: bit 1: body roll rate, bit 2: body pitch rate, bit 3: body yaw rate. bit 4-bit 7: reserved, bit 8: attitude*/

);

/*Sets a desired vehicle position in a local north-east-down coordinate frame. Used by an external controller to command the vehicle (manual controller or other system).*/
type mavlink_set_position_target_local_ned_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot*/
_x : float,  /*X Position in NED frame in meters*/
_y : float,  /*Y Position in NED frame in meters*/
_z : float,  /*Z Position in NED frame in meters (note, altitude is negative in NED)*/
_vx : float,  /*X velocity in NED frame in meter / s*/
_vy : float,  /*Y velocity in NED frame in meter / s*/
_vz : float,  /*Z velocity in NED frame in meter / s*/
_afx : float,  /*X acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afy : float,  /*Y acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afz : float,  /*Z acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_yaw : float,  /*yaw setpoint in rad*/
_yaw_rate : float,  /*yaw rate setpoint in rad/s*/
_type_mask : int,  /*Bitmask to indicate which dimensions should be ignored by the vehicle: a value of 0b0000000000000000 or 0b0000001000000000 indicates that none of the setpoint dimensions should be ignored. If bit 10 is set the floats afx afy afz should be interpreted as force instead of acceleration. Mapping: bit 1: x, bit 2: y, bit 3: z, bit 4: vx, bit 5: vy, bit 6: vz, bit 7: ax, bit 8: ay, bit 9: az, bit 10: is force setpoint, bit 11: yaw, bit 12: yaw rate*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_coordinate_frame : int  /*Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9*/

);

/*Reports the current commanded vehicle position, velocity, and acceleration as specified by the autopilot. This should match the commands sent in SET_POSITION_TARGET_LOCAL_NED if the vehicle is being controlled this way.*/
type mavlink_position_target_local_ned_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot*/
_x : float,  /*X Position in NED frame in meters*/
_y : float,  /*Y Position in NED frame in meters*/
_z : float,  /*Z Position in NED frame in meters (note, altitude is negative in NED)*/
_vx : float,  /*X velocity in NED frame in meter / s*/
_vy : float,  /*Y velocity in NED frame in meter / s*/
_vz : float,  /*Z velocity in NED frame in meter / s*/
_afx : float,  /*X acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afy : float,  /*Y acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afz : float,  /*Z acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_yaw : float,  /*yaw setpoint in rad*/
_yaw_rate : float,  /*yaw rate setpoint in rad/s*/
_type_mask : int,  /*Bitmask to indicate which dimensions should be ignored by the vehicle: a value of 0b0000000000000000 or 0b0000001000000000 indicates that none of the setpoint dimensions should be ignored. If bit 10 is set the floats afx afy afz should be interpreted as force instead of acceleration. Mapping: bit 1: x, bit 2: y, bit 3: z, bit 4: vx, bit 5: vy, bit 6: vz, bit 7: ax, bit 8: ay, bit 9: az, bit 10: is force setpoint, bit 11: yaw, bit 12: yaw rate*/
_coordinate_frame : int  /*Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9*/

);

/*Sets a desired vehicle position, velocity, and/or acceleration in a global coordinate system (WGS84). Used by an external controller to command the vehicle (manual controller or other system).*/
type mavlink_set_position_target_global_int_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot. The rationale for the timestamp in the setpoint is to allow the system to compensate for the transport delay of the setpoint. This allows the system to compensate processing latency.*/
_lat_int : int,  /*X Position in WGS84 frame in 1e7 * meters*/
_lon_int : int,  /*Y Position in WGS84 frame in 1e7 * meters*/
_alt : float,  /*Altitude in meters in AMSL altitude, not WGS84 if absolute or relative, above terrain if GLOBAL_TERRAIN_ALT_INT*/
_vx : float,  /*X velocity in NED frame in meter / s*/
_vy : float,  /*Y velocity in NED frame in meter / s*/
_vz : float,  /*Z velocity in NED frame in meter / s*/
_afx : float,  /*X acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afy : float,  /*Y acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afz : float,  /*Z acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_yaw : float,  /*yaw setpoint in rad*/
_yaw_rate : float,  /*yaw rate setpoint in rad/s*/
_type_mask : int,  /*Bitmask to indicate which dimensions should be ignored by the vehicle: a value of 0b0000000000000000 or 0b0000001000000000 indicates that none of the setpoint dimensions should be ignored. If bit 10 is set the floats afx afy afz should be interpreted as force instead of acceleration. Mapping: bit 1: x, bit 2: y, bit 3: z, bit 4: vx, bit 5: vy, bit 6: vz, bit 7: ax, bit 8: ay, bit 9: az, bit 10: is force setpoint, bit 11: yaw, bit 12: yaw rate*/
_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_coordinate_frame : int  /*Valid options are: MAV_FRAME_GLOBAL_INT = 5, MAV_FRAME_GLOBAL_RELATIVE_ALT_INT = 6, MAV_FRAME_GLOBAL_TERRAIN_ALT_INT = 11*/

);

/*Reports the current commanded vehicle position, velocity, and acceleration as specified by the autopilot. This should match the commands sent in SET_POSITION_TARGET_GLOBAL_INT if the vehicle is being controlled this way.*/
type mavlink_position_target_global_int_t =
(

_time_boot_ms : int,  /*Timestamp in milliseconds since system boot. The rationale for the timestamp in the setpoint is to allow the system to compensate for the transport delay of the setpoint. This allows the system to compensate processing latency.*/
_lat_int : int,  /*X Position in WGS84 frame in 1e7 * meters*/
_lon_int : int,  /*Y Position in WGS84 frame in 1e7 * meters*/
_alt : float,  /*Altitude in meters in AMSL altitude, not WGS84 if absolute or relative, above terrain if GLOBAL_TERRAIN_ALT_INT*/
_vx : float,  /*X velocity in NED frame in meter / s*/
_vy : float,  /*Y velocity in NED frame in meter / s*/
_vz : float,  /*Z velocity in NED frame in meter / s*/
_afx : float,  /*X acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afy : float,  /*Y acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_afz : float,  /*Z acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N*/
_yaw : float,  /*yaw setpoint in rad*/
_yaw_rate : float,  /*yaw rate setpoint in rad/s*/
_type_mask : int,  /*Bitmask to indicate which dimensions should be ignored by the vehicle: a value of 0b0000000000000000 or 0b0000001000000000 indicates that none of the setpoint dimensions should be ignored. If bit 10 is set the floats afx afy afz should be interpreted as force instead of acceleration. Mapping: bit 1: x, bit 2: y, bit 3: z, bit 4: vx, bit 5: vy, bit 6: vz, bit 7: ax, bit 8: ay, bit 9: az, bit 10: is force setpoint, bit 11: yaw, bit 12: yaw rate*/
_coordinate_frame : int  /*Valid options are: MAV_FRAME_GLOBAL_INT = 5, MAV_FRAME_GLOBAL_RELATIVE_ALT_INT = 6, MAV_FRAME_GLOBAL_TERRAIN_ALT_INT = 11*/

);

/*The offset in X, Y, Z and yaw between the LOCAL_POSITION_NED messages of MAV X and the global coordinate frame in NED coordinates. Coordinate frame is right-handed, Z-axis down (aeronautical frame, NED / north-east-down convention)*/
type mavlink_local_position_ned_system_global_offset_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_x : float,  /*X Position*/
_y : float,  /*Y Position*/
_z : float,  /*Z Position*/
_roll : float,  /*Roll*/
_pitch : float,  /*Pitch*/
_yaw : float  /*Yaw*/

);

/*DEPRECATED PACKET! Suffers from missing airspeed fields and singularities due to Euler angles. Please use HIL_STATE_QUATERNION instead. Sent from simulation to autopilot. This packet is useful for high throughput applications such as hardware in the loop simulations.*/
type mavlink_hil_state_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_roll : float,  /*Roll angle (rad)*/
_pitch : float,  /*Pitch angle (rad)*/
_yaw : float,  /*Yaw angle (rad)*/
_rollspeed : float,  /*Body frame roll / phi angular speed (rad/s)*/
_pitchspeed : float,  /*Body frame pitch / theta angular speed (rad/s)*/
_yawspeed : float,  /*Body frame yaw / psi angular speed (rad/s)*/
_lat : int,  /*Latitude, expressed as * 1E7*/
_lon : int,  /*Longitude, expressed as * 1E7*/
_alt : int,  /*Altitude in meters, expressed as * 1000 (millimeters)*/
_vx : int,  /*Ground X Speed (Latitude), expressed as m/s * 100*/
_vy : int,  /*Ground Y Speed (Longitude), expressed as m/s * 100*/
_vz : int,  /*Ground Z Speed (Altitude), expressed as m/s * 100*/
_xacc : int,  /*X acceleration (mg)*/
_yacc : int,  /*Y acceleration (mg)*/
_zacc : int  /*Z acceleration (mg)*/

);

/*Sent from autopilot to simulation. Hardware in the loop control outputs*/
type mavlink_hil_controls_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_roll_ailerons : float,  /*Control output -1 .. 1*/
_pitch_elevator : float,  /*Control output -1 .. 1*/
_yaw_rudder : float,  /*Control output -1 .. 1*/
_throttle : float,  /*Throttle 0 .. 1*/
_aux1 : float,  /*Aux 1, -1 .. 1*/
_aux2 : float,  /*Aux 2, -1 .. 1*/
_aux3 : float,  /*Aux 3, -1 .. 1*/
_aux4 : float,  /*Aux 4, -1 .. 1*/
_mode : int,  /*System mode (MAV_MODE)*/
_nav_mode : int  /*Navigation mode (MAV_NAV_MODE)*/

);

/*Sent from simulation to autopilot. The RAW values of the RC channels received. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. Individual receivers/transmitters might violate this specification.*/
type mavlink_hil_rc_inputs_raw_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_chan1_raw : int,  /*RC channel 1 value, in microseconds*/
_chan2_raw : int,  /*RC channel 2 value, in microseconds*/
_chan3_raw : int,  /*RC channel 3 value, in microseconds*/
_chan4_raw : int,  /*RC channel 4 value, in microseconds*/
_chan5_raw : int,  /*RC channel 5 value, in microseconds*/
_chan6_raw : int,  /*RC channel 6 value, in microseconds*/
_chan7_raw : int,  /*RC channel 7 value, in microseconds*/
_chan8_raw : int,  /*RC channel 8 value, in microseconds*/
_chan9_raw : int,  /*RC channel 9 value, in microseconds*/
_chan10_raw : int,  /*RC channel 10 value, in microseconds*/
_chan11_raw : int,  /*RC channel 11 value, in microseconds*/
_chan12_raw : int,  /*RC channel 12 value, in microseconds*/
_rssi : int  /*Receive signal strength indicator, 0: 0%, 255: 100%*/

);

/*Sent from autopilot to simulation. Hardware in the loop control outputs (replacement for HIL_CONTROLS)*/
type mavlink_hil_actuator_controls_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_flags : int,  /*Flags as bitfield, reserved for future use.*/
_controls : seq[float],  /*Control outputs -1 .. 1. Channel assignment depends on the simulated hardware.*/
_mode : int  /*System mode (MAV_MODE), includes arming state.*/

);

/*Optical flow from a flow sensor (e.g. optical mouse sensor)*/
type mavlink_optical_flow_t =
(

_time_usec : int,  /*Timestamp (UNIX)*/
_flow_comp_m_x : float,  /*Flow in meters in x-sensor direction, angular-speed compensated*/
_flow_comp_m_y : float,  /*Flow in meters in y-sensor direction, angular-speed compensated*/
_ground_distance : float,  /*Ground distance in meters. Positive value: distance known. Negative value: Unknown distance*/
_flow_x : int,  /*Flow in pixels * 10 in x-sensor direction (dezi-pixels)*/
_flow_y : int,  /*Flow in pixels * 10 in y-sensor direction (dezi-pixels)*/
_sensor_id : int,  /*Sensor ID*/
_quality : int  /*Optical flow quality / confidence. 0: bad, 255: maximum quality*/

);

/**/
type mavlink_global_vision_position_estimate_t =
(

_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_x : float,  /*Global X position*/
_y : float,  /*Global Y position*/
_z : float,  /*Global Z position*/
_roll : float,  /*Roll angle in rad*/
_pitch : float,  /*Pitch angle in rad*/
_yaw : float  /*Yaw angle in rad*/

);

/**/
type mavlink_vision_position_estimate_t =
(

_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_x : float,  /*Global X position*/
_y : float,  /*Global Y position*/
_z : float,  /*Global Z position*/
_roll : float,  /*Roll angle in rad*/
_pitch : float,  /*Pitch angle in rad*/
_yaw : float  /*Yaw angle in rad*/

);

/**/
type mavlink_vision_speed_estimate_t =
(

_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_x : float,  /*Global X speed*/
_y : float,  /*Global Y speed*/
_z : float  /*Global Z speed*/

);

/**/
type mavlink_vicon_position_estimate_t =
(

_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_x : float,  /*Global X position*/
_y : float,  /*Global Y position*/
_z : float,  /*Global Z position*/
_roll : float,  /*Roll angle in rad*/
_pitch : float,  /*Pitch angle in rad*/
_yaw : float  /*Yaw angle in rad*/

);

/*The IMU readings in SI units in NED body frame*/
type mavlink_highres_imu_t =
(

_time_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_xacc : float,  /*X acceleration (m/s^2)*/
_yacc : float,  /*Y acceleration (m/s^2)*/
_zacc : float,  /*Z acceleration (m/s^2)*/
_xgyro : float,  /*Angular speed around X axis (rad / sec)*/
_ygyro : float,  /*Angular speed around Y axis (rad / sec)*/
_zgyro : float,  /*Angular speed around Z axis (rad / sec)*/
_xmag : float,  /*X Magnetic field (Gauss)*/
_ymag : float,  /*Y Magnetic field (Gauss)*/
_zmag : float,  /*Z Magnetic field (Gauss)*/
_abs_pressure : float,  /*Absolute pressure in millibar*/
_diff_pressure : float,  /*Differential pressure in millibar*/
_pressure_alt : float,  /*Altitude calculated from pressure*/
_temperature : float,  /*Temperature in degrees celsius*/
_fields_updated : int  /*Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature*/

);

/*Optical flow from an angular rate flow sensor (e.g. PX4FLOW or mouse sensor)*/
type mavlink_optical_flow_rad_t =
(

_time_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_integration_time_us : int,  /*Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.*/
_integrated_x : float,  /*Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)*/
_integrated_y : float,  /*Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)*/
_integrated_xgyro : float,  /*RH rotation around X axis (rad)*/
_integrated_ygyro : float,  /*RH rotation around Y axis (rad)*/
_integrated_zgyro : float,  /*RH rotation around Z axis (rad)*/
_time_delta_distance_us : int,  /*Time in microseconds since the distance was sampled.*/
_distance : float,  /*Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.*/
_temperature : int,  /*Temperature * 100 in centi-degrees Celsius*/
_sensor_id : int,  /*Sensor ID*/
_quality : int  /*Optical flow quality / confidence. 0: no valid flow, 255: maximum quality*/

);

/*The IMU readings in SI units in NED body frame*/
type mavlink_hil_sensor_t =
(

_time_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_xacc : float,  /*X acceleration (m/s^2)*/
_yacc : float,  /*Y acceleration (m/s^2)*/
_zacc : float,  /*Z acceleration (m/s^2)*/
_xgyro : float,  /*Angular speed around X axis in body frame (rad / sec)*/
_ygyro : float,  /*Angular speed around Y axis in body frame (rad / sec)*/
_zgyro : float,  /*Angular speed around Z axis in body frame (rad / sec)*/
_xmag : float,  /*X Magnetic field (Gauss)*/
_ymag : float,  /*Y Magnetic field (Gauss)*/
_zmag : float,  /*Z Magnetic field (Gauss)*/
_abs_pressure : float,  /*Absolute pressure in millibar*/
_diff_pressure : float,  /*Differential pressure (airspeed) in millibar*/
_pressure_alt : float,  /*Altitude calculated from pressure*/
_temperature : float,  /*Temperature in degrees celsius*/
_fields_updated : int  /*Bitmask for fields that have updated since last message, bit 0 = xacc, bit 12: temperature, bit 31: full reset of attitude/position/velocities/etc was performed in sim.*/

);

/*Status of simulation environment, if used*/
type mavlink_sim_state_t =
(

_q1 : float,  /*True attitude quaternion component 1, w (1 in null-rotation)*/
_q2 : float,  /*True attitude quaternion component 2, x (0 in null-rotation)*/
_q3 : float,  /*True attitude quaternion component 3, y (0 in null-rotation)*/
_q4 : float,  /*True attitude quaternion component 4, z (0 in null-rotation)*/
_roll : float,  /*Attitude roll expressed as Euler angles, not recommended except for human-readable outputs*/
_pitch : float,  /*Attitude pitch expressed as Euler angles, not recommended except for human-readable outputs*/
_yaw : float,  /*Attitude yaw expressed as Euler angles, not recommended except for human-readable outputs*/
_xacc : float,  /*X acceleration m/s/s*/
_yacc : float,  /*Y acceleration m/s/s*/
_zacc : float,  /*Z acceleration m/s/s*/
_xgyro : float,  /*Angular speed around X axis rad/s*/
_ygyro : float,  /*Angular speed around Y axis rad/s*/
_zgyro : float,  /*Angular speed around Z axis rad/s*/
_lat : float,  /*Latitude in degrees*/
_lon : float,  /*Longitude in degrees*/
_alt : float,  /*Altitude in meters*/
_std_dev_horz : float,  /*Horizontal position standard deviation*/
_std_dev_vert : float,  /*Vertical position standard deviation*/
_vn : float,  /*True velocity in m/s in NORTH direction in earth-fixed NED frame*/
_ve : float,  /*True velocity in m/s in EAST direction in earth-fixed NED frame*/
_vd : float  /*True velocity in m/s in DOWN direction in earth-fixed NED frame*/

);

/*Status generated by radio and injected into MAVLink stream.*/
type mavlink_radio_status_t =
(

_rxerrors : int,  /*Receive errors*/
_fixed : int,  /*Count of error corrected packets*/
_rssi : int,  /*Local signal strength*/
_remrssi : int,  /*Remote signal strength*/
_txbuf : int,  /*Remaining free buffer space in percent.*/
_noise : int,  /*Background noise level*/
_remnoise : int  /*Remote background noise level*/

);

/*File transfer message*/
type mavlink_file_transfer_protocol_t =
(

_target_network : int,  /*Network ID (0 for broadcast)*/
_target_system : int,  /*System ID (0 for broadcast)*/
_target_component : int,  /*Component ID (0 for broadcast)*/
_payload : seq[int]  /*Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.*/

);

/*Time synchronization message.*/
type mavlink_timesync_t =
(

_tc1 : int,  /*Time sync timestamp 1*/
_ts1 : int  /*Time sync timestamp 2*/

);

/*Camera-IMU triggering and synchronisation message.*/
type mavlink_camera_trigger_t =
(

_time_usec : int,  /*Timestamp for the image frame in microseconds*/
_seq : int  /*Image frame sequence*/

);

/*The global position, as returned by the Global Positioning System (GPS). This is
                 NOT the global position estimate of the sytem, but rather a RAW sensor value. See message GLOBAL_POSITION for the global position estimate. Coordinate frame is right-handed, Z-axis up (GPS frame).*/
type mavlink_hil_gps_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_lat : int,  /*Latitude (WGS84), in degrees * 1E7*/
_lon : int,  /*Longitude (WGS84), in degrees * 1E7*/
_alt : int,  /*Altitude (AMSL, not WGS84), in meters * 1000 (positive for up)*/
_eph : int,  /*GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: 65535*/
_epv : int,  /*GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: 65535*/
_vel : int,  /*GPS ground speed (m/s * 100). If unknown, set to: 65535*/
_vn : int,  /*GPS velocity in cm/s in NORTH direction in earth-fixed NED frame*/
_ve : int,  /*GPS velocity in cm/s in EAST direction in earth-fixed NED frame*/
_vd : int,  /*GPS velocity in cm/s in DOWN direction in earth-fixed NED frame*/
_cog : int,  /*Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: 65535*/
_fix_type : int,  /*0-1: no fix, 2: 2D fix, 3: 3D fix. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.*/
_satellites_visible : int  /*Number of satellites visible. If unknown, set to 255*/

);

/*Simulated optical flow from a flow sensor (e.g. PX4FLOW or optical mouse sensor)*/
type mavlink_hil_optical_flow_t =
(

_time_usec : int,  /*Timestamp (microseconds, synced to UNIX time or since system boot)*/
_integration_time_us : int,  /*Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.*/
_integrated_x : float,  /*Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)*/
_integrated_y : float,  /*Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)*/
_integrated_xgyro : float,  /*RH rotation around X axis (rad)*/
_integrated_ygyro : float,  /*RH rotation around Y axis (rad)*/
_integrated_zgyro : float,  /*RH rotation around Z axis (rad)*/
_time_delta_distance_us : int,  /*Time in microseconds since the distance was sampled.*/
_distance : float,  /*Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.*/
_temperature : int,  /*Temperature * 100 in centi-degrees Celsius*/
_sensor_id : int,  /*Sensor ID*/
_quality : int  /*Optical flow quality / confidence. 0: no valid flow, 255: maximum quality*/

);

/*Sent from simulation to autopilot, avoids in contrast to HIL_STATE singularities. This packet is useful for high throughput applications such as hardware in the loop simulations.*/
type mavlink_hil_state_quaternion_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_attitude_quaternion : seq[float],  /*Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 1 0 0 0 being the null-rotation)*/
_rollspeed : float,  /*Body frame roll / phi angular speed (rad/s)*/
_pitchspeed : float,  /*Body frame pitch / theta angular speed (rad/s)*/
_yawspeed : float,  /*Body frame yaw / psi angular speed (rad/s)*/
_lat : int,  /*Latitude, expressed as * 1E7*/
_lon : int,  /*Longitude, expressed as * 1E7*/
_alt : int,  /*Altitude in meters, expressed as * 1000 (millimeters)*/
_vx : int,  /*Ground X Speed (Latitude), expressed as m/s * 100*/
_vy : int,  /*Ground Y Speed (Longitude), expressed as m/s * 100*/
_vz : int,  /*Ground Z Speed (Altitude), expressed as m/s * 100*/
_ind_airspeed : int,  /*Indicated airspeed, expressed as m/s * 100*/
_true_airspeed : int,  /*True airspeed, expressed as m/s * 100*/
_xacc : int,  /*X acceleration (mg)*/
_yacc : int,  /*Y acceleration (mg)*/
_zacc : int  /*Z acceleration (mg)*/

);

/*The RAW IMU readings for secondary 9DOF sensor setup. This message should contain the scaled values to the described units*/
type mavlink_scaled_imu2_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_xacc : int,  /*X acceleration (mg)*/
_yacc : int,  /*Y acceleration (mg)*/
_zacc : int,  /*Z acceleration (mg)*/
_xgyro : int,  /*Angular speed around X axis (millirad /sec)*/
_ygyro : int,  /*Angular speed around Y axis (millirad /sec)*/
_zgyro : int,  /*Angular speed around Z axis (millirad /sec)*/
_xmag : int,  /*X Magnetic field (milli tesla)*/
_ymag : int,  /*Y Magnetic field (milli tesla)*/
_zmag : int  /*Z Magnetic field (milli tesla)*/

);

/*Request a list of available logs. On some systems calling this may stop on-board logging until LOG_REQUEST_END is called.*/
type mavlink_log_request_list_t =
(

_start : int,  /*First log id (0 for first available)*/
_end : int,  /*Last log id (0xffff for last available)*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Reply to LOG_REQUEST_LIST*/
type mavlink_log_entry_t =
(

_time_utc : int,  /*UTC timestamp of log in seconds since 1970, or 0 if not available*/
_size : int,  /*Size of the log (may be approximate) in bytes*/
_id : int,  /*Log id*/
_num_logs : int,  /*Total number of logs*/
_last_log_num : int  /*High log number*/

);

/*Request a chunk of a log*/
type mavlink_log_request_data_t =
(

_ofs : int,  /*Offset into the log*/
_count : int,  /*Number of bytes*/
_id : int,  /*Log id (from LOG_ENTRY reply)*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Reply to LOG_REQUEST_DATA*/
type mavlink_log_data_t =
(

_ofs : int,  /*Offset into the log*/
_id : int,  /*Log id (from LOG_ENTRY reply)*/
_count : int,  /*Number of bytes (zero for end of log)*/
_data : seq[int]  /*log data*/

);

/*Erase all logs*/
type mavlink_log_erase_t =
(

_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Stop log transfer and resume normal logging*/
type mavlink_log_request_end_t =
(

_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*data for injecting into the onboard GPS (used for DGPS)*/
type mavlink_gps_inject_data_t =
(

_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_len : int,  /*data length*/
_data : seq[int]  /*raw data (110 is enough for 12 satellites of RTCMv2)*/

);

/*Second GPS data. Coordinate frame is right-handed, Z-axis up (GPS frame).*/
type mavlink_gps2_raw_t =
(

_time_usec : int,  /*Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
_lat : int,  /*Latitude (WGS84), in degrees * 1E7*/
_lon : int,  /*Longitude (WGS84), in degrees * 1E7*/
_alt : int,  /*Altitude (AMSL, not WGS84), in meters * 1000 (positive for up)*/
_dgps_age : int,  /*Age of DGPS info*/
_eph : int,  /*GPS HDOP horizontal dilution of position in cm (m*100). If unknown, set to: UINT16_MAX*/
_epv : int,  /*GPS VDOP vertical dilution of position in cm (m*100). If unknown, set to: UINT16_MAX*/
_vel : int,  /*GPS ground speed (m/s * 100). If unknown, set to: UINT16_MAX*/
_cog : int,  /*Course over ground (NOT heading, but direction of movement) in degrees * 100, 0.0..359.99 degrees. If unknown, set to: UINT16_MAX*/
_fix_type : int,  /*See the GPS_FIX_TYPE enum.*/
_satellites_visible : int,  /*Number of satellites visible. If unknown, set to 255*/
_dgps_numch : int  /*Number of DGPS satellites*/

);

/*Power supply status*/
type mavlink_power_status_t =
(

_vcc : int,  /*5V rail voltage in millivolts*/
_vservo : int,  /*servo rail voltage in millivolts*/
_flags : int  /*power supply status flags (see MAV_POWER_STATUS enum)*/

);

/*Control a serial port. This can be used for raw access to an onboard serial peripheral such as a GPS or telemetry radio. It is designed to make it possible to update the devices firmware via MAVLink messages or change the devices settings. A message with zero bytes can be used to change just the baudrate.*/
type mavlink_serial_control_t =
(

_baudrate : int,  /*Baudrate of transfer. Zero means no change.*/
_timeout : int,  /*Timeout for reply data in milliseconds*/
_device : int,  /*See SERIAL_CONTROL_DEV enum*/
_flags : int,  /*See SERIAL_CONTROL_FLAG enum*/
_count : int,  /*how many bytes in this transfer*/
_data : seq[int]  /*serial data*/

);

/*RTK GPS data. Gives information on the relative baseline calculation the GPS is reporting*/
type mavlink_gps_rtk_t =
(

_time_last_baseline_ms : int,  /*Time since boot of last baseline message received in ms.*/
_tow : int,  /*GPS Time of Week of last baseline*/
_baseline_a_mm : int,  /*Current baseline in ECEF x or NED north component in mm.*/
_baseline_b_mm : int,  /*Current baseline in ECEF y or NED east component in mm.*/
_baseline_c_mm : int,  /*Current baseline in ECEF z or NED down component in mm.*/
_accuracy : int,  /*Current estimate of baseline accuracy.*/
_iar_num_hypotheses : int,  /*Current number of integer ambiguity hypotheses.*/
_wn : int,  /*GPS Week Number of last baseline*/
_rtk_receiver_id : int,  /*Identification of connected RTK receiver.*/
_rtk_health : int,  /*GPS-specific health report for RTK data.*/
_rtk_rate : int,  /*Rate of baseline messages being received by GPS, in HZ*/
_nsats : int,  /*Current number of sats used for RTK calculation.*/
_baseline_coords_type : int  /*Coordinate system of baseline. 0 == ECEF, 1 == NED*/

);

/*RTK GPS data. Gives information on the relative baseline calculation the GPS is reporting*/
type mavlink_gps2_rtk_t =
(

_time_last_baseline_ms : int,  /*Time since boot of last baseline message received in ms.*/
_tow : int,  /*GPS Time of Week of last baseline*/
_baseline_a_mm : int,  /*Current baseline in ECEF x or NED north component in mm.*/
_baseline_b_mm : int,  /*Current baseline in ECEF y or NED east component in mm.*/
_baseline_c_mm : int,  /*Current baseline in ECEF z or NED down component in mm.*/
_accuracy : int,  /*Current estimate of baseline accuracy.*/
_iar_num_hypotheses : int,  /*Current number of integer ambiguity hypotheses.*/
_wn : int,  /*GPS Week Number of last baseline*/
_rtk_receiver_id : int,  /*Identification of connected RTK receiver.*/
_rtk_health : int,  /*GPS-specific health report for RTK data.*/
_rtk_rate : int,  /*Rate of baseline messages being received by GPS, in HZ*/
_nsats : int,  /*Current number of sats used for RTK calculation.*/
_baseline_coords_type : int  /*Coordinate system of baseline. 0 == ECEF, 1 == NED*/

);

/*The RAW IMU readings for 3rd 9DOF sensor setup. This message should contain the scaled values to the described units*/
type mavlink_scaled_imu3_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_xacc : int,  /*X acceleration (mg)*/
_yacc : int,  /*Y acceleration (mg)*/
_zacc : int,  /*Z acceleration (mg)*/
_xgyro : int,  /*Angular speed around X axis (millirad /sec)*/
_ygyro : int,  /*Angular speed around Y axis (millirad /sec)*/
_zgyro : int,  /*Angular speed around Z axis (millirad /sec)*/
_xmag : int,  /*X Magnetic field (milli tesla)*/
_ymag : int,  /*Y Magnetic field (milli tesla)*/
_zmag : int  /*Z Magnetic field (milli tesla)*/

);

/**/
type mavlink_data_transmission_handshake_t =
(

_size : int,  /*total data size in bytes (set on ACK only)*/
_width : int,  /*Width of a matrix or image*/
_height : int,  /*Height of a matrix or image*/
_packets : int,  /*number of packets beeing sent (set on ACK only)*/
_type : int,  /*type of requested/acknowledged data (as defined in ENUM DATA_TYPES in mavlink/include/mavlink_types.h)*/
_payload : int,  /*payload size per packet (normally 253 byte, see DATA field size in message ENCAPSULATED_DATA) (set on ACK only)*/
_jpg_quality : int  /*JPEG quality out of [1,100]*/

);

/**/
type mavlink_encapsulated_data_t =
(

_seqnr : int,  /*sequence number (starting with 0 on every transmission)*/
_data : seq[int]  /*image data bytes*/

);

/**/
type mavlink_distance_sensor_t =
(

_time_boot_ms : int,  /*Time since system boot*/
_min_distance : int,  /*Minimum distance the sensor can measure in centimeters*/
_max_distance : int,  /*Maximum distance the sensor can measure in centimeters*/
_current_distance : int,  /*Current distance reading*/
_type : int,  /*Type from MAV_DISTANCE_SENSOR enum.*/
_id : int,  /*Onboard ID of the sensor*/
_orientation : int,  /*Direction the sensor faces from MAV_SENSOR_ORIENTATION enum.*/
_covariance : int  /*Measurement covariance in centimeters, 0 for unknown / invalid readings*/

);

/*Request for terrain data and terrain status*/
type mavlink_terrain_request_t =
(

_mask : int,  /*Bitmask of requested 4x4 grids (row major 8x7 array of grids, 56 bits)*/
_lat : int,  /*Latitude of SW corner of first grid (degrees *10^7)*/
_lon : int,  /*Longitude of SW corner of first grid (in degrees *10^7)*/
_grid_spacing : int  /*Grid spacing in meters*/

);

/*Terrain data sent from GCS. The lat/lon and grid_spacing must be the same as a lat/lon from a TERRAIN_REQUEST*/
type mavlink_terrain_data_t =
(

_lat : int,  /*Latitude of SW corner of first grid (degrees *10^7)*/
_lon : int,  /*Longitude of SW corner of first grid (in degrees *10^7)*/
_grid_spacing : int,  /*Grid spacing in meters*/
_data : seq[int],  /*Terrain data in meters AMSL*/
_gridbit : int  /*bit within the terrain request mask*/

);

/*Request that the vehicle report terrain height at the given location. Used by GCS to check if vehicle has all terrain data needed for a mission.*/
type mavlink_terrain_check_t =
(

_lat : int,  /*Latitude (degrees *10^7)*/
_lon : int  /*Longitude (degrees *10^7)*/

);

/*Response from a TERRAIN_CHECK request*/
type mavlink_terrain_report_t =
(

_lat : int,  /*Latitude (degrees *10^7)*/
_lon : int,  /*Longitude (degrees *10^7)*/
_terrain_height : float,  /*Terrain height in meters AMSL*/
_current_height : float,  /*Current vehicle height above lat/lon terrain height (meters)*/
_spacing : int,  /*grid spacing (zero if terrain at this location unavailable)*/
_pending : int,  /*Number of 4x4 terrain blocks waiting to be received or read from disk*/
_loaded : int  /*Number of 4x4 terrain blocks in memory*/

);

/*Barometer readings for 2nd barometer*/
type mavlink_scaled_pressure2_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_press_abs : float,  /*Absolute pressure (hectopascal)*/
_press_diff : float,  /*Differential pressure 1 (hectopascal)*/
_temperature : int  /*Temperature measurement (0.01 degrees celsius)*/

);

/*Motion capture attitude and position*/
type mavlink_att_pos_mocap_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_q : seq[float],  /*Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)*/
_x : float,  /*X position in meters (NED)*/
_y : float,  /*Y position in meters (NED)*/
_z : float  /*Z position in meters (NED)*/

);

/*Set the vehicle attitude and body angular rates.*/
type mavlink_set_actuator_control_target_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_controls : seq[float],  /*Actuator controls. Normed to -1..+1 where 0 is neutral position. Throttle for single rotation direction motors is 0..1, negative range for reverse direction. Standard mapping for attitude controls (group 0): (index 0-7): roll, pitch, yaw, throttle, flaps, spoilers, airbrakes, landing gear. Load a pass-through mixer to repurpose them as generic outputs.*/
_group_mlx : int,  /*Actuator group. The "_mlx" indicates this is a multi-instance message and a MAVLink parser should use this field to difference between instances.*/
_target_system : int,  /*System ID*/
_target_component : int  /*Component ID*/

);

/*Set the vehicle attitude and body angular rates.*/
type mavlink_actuator_control_target_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_controls : seq[float],  /*Actuator controls. Normed to -1..+1 where 0 is neutral position. Throttle for single rotation direction motors is 0..1, negative range for reverse direction. Standard mapping for attitude controls (group 0): (index 0-7): roll, pitch, yaw, throttle, flaps, spoilers, airbrakes, landing gear. Load a pass-through mixer to repurpose them as generic outputs.*/
_group_mlx : int  /*Actuator group. The "_mlx" indicates this is a multi-instance message and a MAVLink parser should use this field to difference between instances.*/

);

/*The current system altitude.*/
type mavlink_altitude_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_altitude_monotonic : float,  /*This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.*/
_altitude_amsl : float,  /*This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output AMSL by default and not the WGS84 altitude.*/
_altitude_local : float,  /*This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.*/
_altitude_relative : float,  /*This is the altitude above the home position. It resets on each change of the current home position.*/
_altitude_terrain : float,  /*This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.*/
_bottom_clearance : float  /*This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.*/

);

/*The autopilot is requesting a resource (file, binary, other type of data)*/
type mavlink_resource_request_t =
(

_request_id : int,  /*Request ID. This ID should be re-used when sending back URI contents*/
_uri_type : int,  /*The type of requested URI. 0 = a file via URL. 1 = a UAVCAN binary*/
_uri : seq[int],  /*The requested unique resource identifier (URI). It is not necessarily a straight domain name (depends on the URI type enum)*/
_transfer_type : int,  /*The way the autopilot wants to receive the URI. 0 = MAVLink FTP. 1 = binary stream.*/
_storage : seq[int]  /*The storage path the autopilot wants the URI to be stored in. Will only be valid if the transfer_type has a storage associated (e.g. MAVLink FTP).*/

);

/*Barometer readings for 3rd barometer*/
type mavlink_scaled_pressure3_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_press_abs : float,  /*Absolute pressure (hectopascal)*/
_press_diff : float,  /*Differential pressure 1 (hectopascal)*/
_temperature : int  /*Temperature measurement (0.01 degrees celsius)*/

);

/*current motion information from a designated system*/
type mavlink_follow_target_t =
(

_timestamp : int,  /*Timestamp in milliseconds since system boot*/
_custom_state : int,  /*button states or switches of a tracker device*/
_lat : int,  /*Latitude (WGS84), in degrees * 1E7*/
_lon : int,  /*Longitude (WGS84), in degrees * 1E7*/
_alt : float,  /*AMSL, in meters*/
_vel : seq[float],  /*target velocity (0,0,0) for unknown*/
_acc : seq[float],  /*linear target acceleration (0,0,0) for unknown*/
_attitude_q : seq[float],  /*(1 0 0 0 for unknown)*/
_rates : seq[float],  /*(0 0 0 for unknown)*/
_position_cov : seq[float],  /*eph epv*/
_est_capabilities : int  /*bit positions for tracker reporting capabilities (POS = 0, VEL = 1, ACCEL = 2, ATT + RATES = 3)*/

);

/*The smoothed, monotonic system state used to feed the control loops of the system.*/
type mavlink_control_system_state_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_x_acc : float,  /*X acceleration in body frame*/
_y_acc : float,  /*Y acceleration in body frame*/
_z_acc : float,  /*Z acceleration in body frame*/
_x_vel : float,  /*X velocity in body frame*/
_y_vel : float,  /*Y velocity in body frame*/
_z_vel : float,  /*Z velocity in body frame*/
_x_pos : float,  /*X position in local frame*/
_y_pos : float,  /*Y position in local frame*/
_z_pos : float,  /*Z position in local frame*/
_airspeed : float,  /*Airspeed, set to -1 if unknown*/
_vel_variance : seq[float],  /*Variance of body velocity estimate*/
_pos_variance : seq[float],  /*Variance in local position*/
_q : seq[float],  /*The attitude, represented as Quaternion*/
_roll_rate : float,  /*Angular rate in roll axis*/
_pitch_rate : float,  /*Angular rate in pitch axis*/
_yaw_rate : float  /*Angular rate in yaw axis*/

);

/*Battery information*/
type mavlink_battery_status_t =
(

_current_consumed : int,  /*Consumed charge, in milliampere hours (1 = 1 mAh), -1: autopilot does not provide mAh consumption estimate*/
_energy_consumed : int,  /*Consumed energy, in 100*Joules (intergrated U*I*dt)  (1 = 100 Joule), -1: autopilot does not provide energy consumption estimate*/
_temperature : int,  /*Temperature of the battery in centi-degrees celsius. INT16_MAX for unknown temperature.*/
_voltages : seq[int],  /*Battery voltage of cells, in millivolts (1 = 1 millivolt). Cells above the valid cell count for this battery should have the UINT16_MAX value.*/
_current_battery : int,  /*Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current*/
_id : int,  /*Battery ID*/
_battery_function : int,  /*Function of the battery*/
_type : int,  /*Type (chemistry) of the battery*/
_battery_remaining : int  /*Remaining battery energy: (0%: 0, 100%: 100), -1: autopilot does not estimate the remaining battery*/

);

/*Version and capability of autopilot software*/
type mavlink_autopilot_version_t =
(

_capabilities : int,  /*bitmask of capabilities (see MAV_PROTOCOL_CAPABILITY enum)*/
_uid : int,  /*UID if provided by hardware*/
_flight_sw_version : int,  /*Firmware version number*/
_middleware_sw_version : int,  /*Middleware version number*/
_os_sw_version : int,  /*Operating system version number*/
_board_version : int,  /*HW / board version (last 8 bytes should be silicon ID, if any)*/
_vendor_id : int,  /*ID of the board vendor*/
_product_id : int,  /*ID of the product*/
_flight_custom_version : seq[int],  /*Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/
_middleware_custom_version : seq[int],  /*Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/
_os_custom_version : seq[int]  /*Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.*/

);

/*The location of a landing area captured from a downward facing camera*/
type mavlink_landing_target_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_angle_x : float,  /*X-axis angular offset (in radians) of the target from the center of the image*/
_angle_y : float,  /*Y-axis angular offset (in radians) of the target from the center of the image*/
_distance : float,  /*Distance to the target from the vehicle in meters*/
_size_x : float,  /*Size in radians of target along x-axis*/
_size_y : float,  /*Size in radians of target along y-axis*/
_target_num : int,  /*The ID of the target if multiple targets are present*/
_frame : int  /*MAV_FRAME enum specifying the whether the following feilds are earth-frame, body-frame, etc.*/

);

/*Estimator status message including flags, innovation test ratios and estimated accuracies. The flags message is an integer bitmask containing information on which EKF outputs are valid. See the ESTIMATOR_STATUS_FLAGS enum definition for further information. The innovaton test ratios show the magnitude of the sensor innovation divided by the innovation check threshold. Under normal operation the innovaton test ratios should be below 0.5 with occasional values up to 1.0. Values greater than 1.0 should be rare under normal operation and indicate that a measurement has been rejected by the filter. The user should be notified if an innovation test ratio greater than 1.0 is recorded. Notifications for values in the range between 0.5 and 1.0 should be optional and controllable by the user.*/
type mavlink_estimator_status_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_vel_ratio : float,  /*Velocity innovation test ratio*/
_pos_horiz_ratio : float,  /*Horizontal position innovation test ratio*/
_pos_vert_ratio : float,  /*Vertical position innovation test ratio*/
_mag_ratio : float,  /*Magnetometer innovation test ratio*/
_hagl_ratio : float,  /*Height above terrain innovation test ratio*/
_tas_ratio : float,  /*True airspeed innovation test ratio*/
_pos_horiz_accuracy : float,  /*Horizontal position 1-STD accuracy relative to the EKF local origin (m)*/
_pos_vert_accuracy : float,  /*Vertical position 1-STD accuracy relative to the EKF local origin (m)*/
_flags : int  /*Integer bitmask indicating which EKF outputs are valid. See definition for ESTIMATOR_STATUS_FLAGS.*/

);

/**/
type mavlink_wind_cov_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_wind_x : float,  /*Wind in X (NED) direction in m/s*/
_wind_y : float,  /*Wind in Y (NED) direction in m/s*/
_wind_z : float,  /*Wind in Z (NED) direction in m/s*/
_var_horiz : float,  /*Variability of the wind in XY. RMS of a 1 Hz lowpassed wind estimate.*/
_var_vert : float,  /*Variability of the wind in Z. RMS of a 1 Hz lowpassed wind estimate.*/
_wind_alt : float,  /*AMSL altitude (m) this measurement was taken at*/
_horiz_accuracy : float,  /*Horizontal speed 1-STD accuracy*/
_vert_accuracy : float  /*Vertical speed 1-STD accuracy*/

);

/*GPS sensor input message.  This is a raw sensor value sent by the GPS. This is NOT the global position estimate of the sytem.*/
type mavlink_gps_input_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_time_week_ms : int,  /*GPS time (milliseconds from start of GPS week)*/
_lat : int,  /*Latitude (WGS84), in degrees * 1E7*/
_lon : int,  /*Longitude (WGS84), in degrees * 1E7*/
_alt : float,  /*Altitude (AMSL, not WGS84), in m (positive for up)*/
_hdop : float,  /*GPS HDOP horizontal dilution of position in m*/
_vdop : float,  /*GPS VDOP vertical dilution of position in m*/
_vn : float,  /*GPS velocity in m/s in NORTH direction in earth-fixed NED frame*/
_ve : float,  /*GPS velocity in m/s in EAST direction in earth-fixed NED frame*/
_vd : float,  /*GPS velocity in m/s in DOWN direction in earth-fixed NED frame*/
_speed_accuracy : float,  /*GPS speed accuracy in m/s*/
_horiz_accuracy : float,  /*GPS horizontal accuracy in m*/
_vert_accuracy : float,  /*GPS vertical accuracy in m*/
_ignore_flags : int,  /*Flags indicating which fields to ignore (see GPS_INPUT_IGNORE_FLAGS enum).  All other fields must be provided.*/
_time_week : int,  /*GPS week number*/
_gps_id : int,  /*ID of the GPS for multiple GPS inputs*/
_fix_type : int,  /*0-1: no fix, 2: 2D fix, 3: 3D fix. 4: 3D with DGPS. 5: 3D with RTK*/
_satellites_visible : int  /*Number of satellites visible.*/

);

/*WORK IN PROGRESS! RTCM message for injecting into the onboard GPS (used for DGPS)*/
type mavlink_gps_rtcm_data_t =
(

_flags : int,  /*LSB: 1 means message is fragmented*/
_len : int,  /*data length*/
_data : seq[int]  /*RTCM message (may be fragmented)*/

);

/*Message appropriate for high latency connections like Iridium*/
type mavlink_high_latency_t =
(

_custom_mode : int,  /*A bitfield for use for autopilot-specific flags.*/
_latitude : int,  /*Latitude, expressed as degrees * 1E7*/
_longitude : int,  /*Longitude, expressed as degrees * 1E7*/
_roll : int,  /*roll (centidegrees)*/
_pitch : int,  /*pitch (centidegrees)*/
_heading : int,  /*heading (centidegrees)*/
_heading_sp : int,  /*heading setpoint (centidegrees)*/
_altitude_amsl : int,  /*Altitude above mean sea level (meters)*/
_altitude_sp : int,  /*Altitude setpoint relative to the home position (meters)*/
_wp_distance : int,  /*distance to target (meters)*/
_base_mode : int,  /*System mode bitfield, see MAV_MODE_FLAG ENUM in mavlink/include/mavlink_types.h*/
_landed_state : int,  /*The landed state. Is set to MAV_LANDED_STATE_UNDEFINED if landed state is unknown.*/
_throttle : int,  /*throttle (percentage)*/
_airspeed : int,  /*airspeed (m/s)*/
_airspeed_sp : int,  /*airspeed setpoint (m/s)*/
_groundspeed : int,  /*groundspeed (m/s)*/
_climb_rate : int,  /*climb rate (m/s)*/
_gps_nsat : int,  /*Number of satellites visible. If unknown, set to 255*/
_gps_fix_type : int,  /*See the GPS_FIX_TYPE enum.*/
_battery_remaining : int,  /*Remaining battery (percentage)*/
_temperature : int,  /*Autopilot temperature (degrees C)*/
_temperature_air : int,  /*Air temperature (degrees C) from airspeed sensor*/
_failsafe : int,  /*failsafe (each bit represents a failsafe where 0=ok, 1=failsafe active (bit0:RC, bit1:batt, bit2:GPS, bit3:GCS, bit4:fence)*/
_wp_num : int  /*current waypoint number*/

);

/*Vibration levels and accelerometer clipping*/
type mavlink_vibration_t =
(

_time_usec : int,  /*Timestamp (micros since boot or Unix epoch)*/
_vibration_x : float,  /*Vibration levels on X-axis*/
_vibration_y : float,  /*Vibration levels on Y-axis*/
_vibration_z : float,  /*Vibration levels on Z-axis*/
_clipping_0 : int,  /*first accelerometer clipping count*/
_clipping_1 : int,  /*second accelerometer clipping count*/
_clipping_2 : int  /*third accelerometer clipping count*/

);

/*This message can be requested by sending the MAV_CMD_GET_HOME_POSITION command. The position the system will return to and land on. The position is set automatically by the system during the takeoff in case it was not explicitely set by the operator before or after. The position the system will return to and land on. The global and local positions encode the position in the respective coordinate frames, while the q parameter encodes the orientation of the surface. Under normal conditions it describes the heading and terrain slope, which can be used by the aircraft to adjust the approach. The approach 3D vector describes the point to which the system should fly in normal flight mode and then perform a landing sequence along the vector.*/
type mavlink_home_position_t =
(

_latitude : int,  /*Latitude (WGS84), in degrees * 1E7*/
_longitude : int,  /*Longitude (WGS84, in degrees * 1E7*/
_altitude : int,  /*Altitude (AMSL), in meters * 1000 (positive for up)*/
_x : float,  /*Local X position of this position in the local coordinate frame*/
_y : float,  /*Local Y position of this position in the local coordinate frame*/
_z : float,  /*Local Z position of this position in the local coordinate frame*/
_q : seq[float],  /*World to surface normal and heading transformation of the takeoff position. Used to indicate the heading and slope of the ground*/
_approach_x : float,  /*Local X position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/
_approach_y : float,  /*Local Y position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/
_approach_z : float  /*Local Z position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/

);

/*The position the system will return to and land on. The position is set automatically by the system during the takeoff in case it was not explicitely set by the operator before or after. The global and local positions encode the position in the respective coordinate frames, while the q parameter encodes the orientation of the surface. Under normal conditions it describes the heading and terrain slope, which can be used by the aircraft to adjust the approach. The approach 3D vector describes the point to which the system should fly in normal flight mode and then perform a landing sequence along the vector.*/
type mavlink_set_home_position_t =
(

_latitude : int,  /*Latitude (WGS84), in degrees * 1E7*/
_longitude : int,  /*Longitude (WGS84, in degrees * 1E7*/
_altitude : int,  /*Altitude (AMSL), in meters * 1000 (positive for up)*/
_x : float,  /*Local X position of this position in the local coordinate frame*/
_y : float,  /*Local Y position of this position in the local coordinate frame*/
_z : float,  /*Local Z position of this position in the local coordinate frame*/
_q : seq[float],  /*World to surface normal and heading transformation of the takeoff position. Used to indicate the heading and slope of the ground*/
_approach_x : float,  /*Local X position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/
_approach_y : float,  /*Local Y position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/
_approach_z : float,  /*Local Z position of the end of the approach vector. Multicopters should set this position based on their takeoff path. Grass-landing fixed wing aircraft should set it the same way as multicopters. Runway-landing fixed wing aircraft should set it to the opposite direction of the takeoff, assuming the takeoff happened from the threshold / touchdown zone.*/
_target_system : int  /*System ID.*/

);

/*This interface replaces DATA_STREAM*/
type mavlink_message_interval_t =
(

_interval_us : int,  /*The interval between two messages, in microseconds. A value of -1 indicates this stream is disabled, 0 indicates it is not available, > 0 indicates the interval at which it is sent.*/
_message_id : int  /*The ID of the requested MAVLink message. v1.0 is limited to 254 messages.*/

);

/*Provides state for additional features*/
type mavlink_extended_sys_state_t =
(

_vtol_state : int,  /*The VTOL state if applicable. Is set to MAV_VTOL_STATE_UNDEFINED if UAV is not in VTOL configuration.*/
_landed_state : int  /*The landed state. Is set to MAV_LANDED_STATE_UNDEFINED if landed state is unknown.*/

);

/*The location and information of an ADSB vehicle*/
type mavlink_adsb_vehicle_t =
(

_icao_address : int,  /*ICAO address*/
_lat : int,  /*Latitude, expressed as degrees * 1E7*/
_lon : int,  /*Longitude, expressed as degrees * 1E7*/
_altitude : int,  /*Altitude(ASL) in millimeters*/
_heading : int,  /*Course over ground in centidegrees*/
_hor_velocity : int,  /*The horizontal velocity in centimeters/second*/
_ver_velocity : int,  /*The vertical velocity in centimeters/second, positive is up*/
_flags : int,  /*Flags to indicate various statuses including valid data fields*/
_squawk : int,  /*Squawk code*/
_altitude_type : int,  /*Type from ADSB_ALTITUDE_TYPE enum*/
_callsign : seq[int],  /*The callsign, 8+null*/
_emitter_type : int,  /*Type from ADSB_EMITTER_TYPE enum*/
_tslc : int  /*Time since last communication in seconds*/

);

/*Information about a potential collision*/
type mavlink_collision_t =
(

_id : int,  /*Unique identifier, domain based on src field*/
_time_to_minimum_delta : float,  /*Estimated time until collision occurs (seconds)*/
_altitude_minimum_delta : float,  /*Closest vertical distance in meters between vehicle and object*/
_horizontal_minimum_delta : float,  /*Closest horizontal distance in meteres between vehicle and object*/
_src : int,  /*Collision data source*/
_action : int,  /*Action that is being taken to avoid this collision*/
_threat_level : int  /*How concerned the aircraft is about this collision*/

);

/*Message implementing parts of the V2 payload specs in V1 frames for transitional support.*/
type mavlink_v2_extension_t =
(

_message_type : int,  /*A code that identifies the software component that understands this message (analogous to usb device classes or mime type strings).  If this code is less than 32768, it is considered a 'registered' protocol extension and the corresponding entry should be added to https://github.com/mavlink/mavlink/extension-message-ids.xml.  Software creators can register blocks of message IDs as needed (useful for GCS specific metadata, etc...). Message_types greater than 32767 are considered local experiments and should not be checked in to any widely distributed codebase.*/
_target_network : int,  /*Network ID (0 for broadcast)*/
_target_system : int,  /*System ID (0 for broadcast)*/
_target_component : int,  /*Component ID (0 for broadcast)*/
_payload : seq[int]  /*Variable length payload. The length is defined by the remaining message length when subtracting the header and other fields.  The entire content of this block is opaque unless you understand any the encoding message_type.  The particular encoding used can be extension specific and might not always be documented as part of the mavlink specification.*/

);

/*Send raw controller memory. The use of this message is discouraged for normal packets, but a quite efficient way for testing new messages and getting experimental debug output.*/
type mavlink_memory_vect_t =
(

_address : int,  /*Starting address of the debug variables*/
_ver : int,  /*Version code of the type variable. 0=unknown, type ignored and assumed int16_t. 1=as below*/
_type : int,  /*Type code of the memory variables. for ver = 1: 0=16 x int16_t, 1=16 x uint16_t, 2=16 x Q15, 3=16 x 1Q14*/
_value : seq[int]  /*Memory contents at specified address*/

);

/**/
type mavlink_debug_vect_t =
(

_time_usec : int,  /*Timestamp*/
_x : float,  /*x*/
_y : float,  /*y*/
_z : float,  /*z*/
_name : seq[int]  /*Name*/

);

/*Send a key-value pair as float. The use of this message is discouraged for normal packets, but a quite efficient way for testing new messages and getting experimental debug output.*/
type mavlink_named_value_float_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_value : float,  /*Floating point value*/
_name : seq[int]  /*Name of the debug variable*/

);

/*Send a key-value pair as integer. The use of this message is discouraged for normal packets, but a quite efficient way for testing new messages and getting experimental debug output.*/
type mavlink_named_value_int_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_value : int,  /*Signed integer value*/
_name : seq[int]  /*Name of the debug variable*/

);

/*Status text message. These messages are printed in yellow in the COMM console of QGroundControl. WARNING: They consume quite some bandwidth, so use only for important status and error messages. If implemented wisely, these messages are buffered on the MCU and sent only at a limited rate (e.g. 10 Hz).*/
type mavlink_statustext_t =
(

_severity : int,  /*Severity of status. Relies on the definitions within RFC-5424. See enum MAV_SEVERITY.*/
_text : seq[int]  /*Status text message, without null termination character*/

);

/*Send a debug value. The index is used to discriminate between values. These values show up in the plot of QGroundControl as DEBUG N.*/
type mavlink_debug_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_value : float,  /*DEBUG value*/
_ind : int  /*index of debug variable*/

);

/*Report button state change*/
type mavlink_button_change_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_last_change_ms : int,  /*Time of last change of button state*/
_state : int  /*Bitmap state of buttons*/

);

/*Control vehicle tone generation (buzzer)*/
type mavlink_play_tune_t =
(

_target_system : int,  /*System ID*/
_target_component : int,  /*Component ID*/
_tune : seq[int]  /*tune in board specific format*/

);

/*WIP: Information about a camera*/
type mavlink_camera_information_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_focal_length : float,  /*Focal length in mm*/
_sensor_size_h : float,  /*Image sensor size horizontal in mm*/
_sensor_size_v : float,  /*Image sensor size vertical in mm*/
_resolution_h : int,  /*Image resolution in pixels horizontal*/
_resolution_v : int,  /*Image resolution in pixels vertical*/
_camera_id : int,  /*Camera ID if there are multiple*/
_vendor_name : seq[int],  /*Name of the camera vendor*/
_model_name : seq[int],  /*Name of the camera model*/
_lense_id : int  /*Reserved for a lense ID*/

);

/*WIP: Settings of a camera, can be requested using MAV_CMD_REQUEST_CAMERA_SETTINGS and written using MAV_CMD_SET_CAMERA_SETTINGS*/
type mavlink_camera_settings_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_aperture : float,  /*Aperture is 1/value*/
_shutter_speed : float,  /*Shutter speed in s*/
_iso_sensitivity : float,  /*ISO sensitivity*/
_white_balance : float,  /*Color temperature in K*/
_camera_id : int,  /*Camera ID if there are multiple*/
_aperture_locked : int,  /*Aperture locked (0: auto, 1: locked)*/
_shutter_speed_locked : int,  /*Shutter speed locked (0: auto, 1: locked)*/
_iso_sensitivity_locked : int,  /*ISO sensitivity locked (0: auto, 1: locked)*/
_white_balance_locked : int,  /*Color temperature locked (0: auto, 1: locked)*/
_mode_id : int,  /*Reserved for a camera mode ID*/
_color_mode_id : int,  /*Reserved for a color mode ID*/
_image_format_id : int  /*Reserved for image format ID*/

);

/*WIP: Information about a storage medium*/
type mavlink_storage_information_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_total_capacity : float,  /*Total capacity in MiB*/
_used_capacity : float,  /*Used capacity in MiB*/
_available_capacity : float,  /*Available capacity in MiB*/
_read_speed : float,  /*Read speed in MiB/s*/
_write_speed : float,  /*Write speed in MiB/s*/
_storage_id : int,  /*Storage ID if there are multiple*/
_status : int  /*Status of storage (0 not available, 1 unformatted, 2 formatted)*/

);

/*WIP: Information about the status of a capture*/
type mavlink_camera_capture_status_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_image_interval : float,  /*Image capture interval in seconds*/
_video_framerate : float,  /*Video frame rate in Hz*/
_image_resolution_h : int,  /*Image resolution in pixels horizontal*/
_image_resolution_v : int,  /*Image resolution in pixels vertical*/
_video_resolution_h : int,  /*Video resolution in pixels horizontal*/
_video_resolution_v : int,  /*Video resolution in pixels vertical*/
_camera_id : int,  /*Camera ID if there are multiple*/
_image_status : int,  /*Current status of image capturing (0: not running, 1: interval capture in progress)*/
_video_status : int  /*Current status of video capturing (0: not running, 1: capture in progress)*/

);

/*WIP: Information about a captured image*/
type mavlink_camera_image_captured_t =
(

_time_utc : int,  /*Timestamp (microseconds since UNIX epoch) in UTC. 0 for unknown.*/
_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_lat : int,  /*Latitude, expressed as degrees * 1E7 where image was taken*/
_lon : int,  /*Longitude, expressed as degrees * 1E7 where capture was taken*/
_alt : int,  /*Altitude in meters, expressed as * 1E3 (AMSL, not WGS84) where image was taken*/
_relative_alt : int,  /*Altitude above ground in meters, expressed as * 1E3 where image was taken*/
_q : seq[float],  /*Quaternion of camera orientation (w, x, y, z order, zero-rotation is 0, 0, 0, 0)*/
_camera_id : int,  /*Camera ID if there are multiple*/
_file_path : seq[int]  /*File path of image taken.*/

);

/*WIP: Information about flight since last arming*/
type mavlink_flight_information_t =
(

_arming_time_utc : int,  /*Timestamp at arming (microseconds since UNIX epoch) in UTC, 0 for unknown*/
_takeoff_time_utc : int,  /*Timestamp at takeoff (microseconds since UNIX epoch) in UTC, 0 for unknown*/
_flight_uuid : int,  /*Universally unique identifier (UUID) of flight, should correspond to name of logfiles*/
_time_boot_ms : int  /*Timestamp (milliseconds since system boot)*/

);

/*WIP: Orientation of a mount*/
type mavlink_mount_orientation_t =
(

_time_boot_ms : int,  /*Timestamp (milliseconds since system boot)*/
_roll : float,  /*Roll in degrees*/
_pitch : float,  /*Pitch in degrees*/
_yaw : float  /*Yaw in degrees*/

);

/*A message containing logged data (see also MAV_CMD_LOGGING_START)*/
type mavlink_logging_data_t =
(

_sequence : int,  /*sequence number (can wrap)*/
_target_system : int,  /*system ID of the target*/
_target_component : int,  /*component ID of the target*/
_length : int,  /*data length*/
_first_message_offset : int,  /*offset into data where first message starts. This can be used for recovery, when a previous message got lost (set to 255 if no start exists).*/
_data : seq[int]  /*logged data*/

);

/*A message containing logged data which requires a LOGGING_ACK to be sent back*/
type mavlink_logging_data_acked_t =
(

_sequence : int,  /*sequence number (can wrap)*/
_target_system : int,  /*system ID of the target*/
_target_component : int,  /*component ID of the target*/
_length : int,  /*data length*/
_first_message_offset : int,  /*offset into data where first message starts. This can be used for recovery, when a previous message got lost (set to 255 if no start exists).*/
_data : seq[int]  /*logged data*/

);

/*An ack for a LOGGING_DATA_ACKED message*/
type mavlink_logging_ack_t =
(

_sequence : int,  /*sequence number (must match the one in LOGGING_DATA_ACKED)*/
_target_system : int,  /*system ID of the target*/
_target_component : int  /*component ID of the target*/

);
