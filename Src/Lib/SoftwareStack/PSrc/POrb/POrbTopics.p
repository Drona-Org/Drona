
/*******************************************************/
/*	Topic for data coming from the PX4 				   */
/*******************************************************/
enum Topics {
	//from px4
	heartbeat_topic,
	attitude_topic,
	global_position_topic,
	local_position_topic,
	battery_status_topic,
	gps_raw_int_topic,
	gps_status_topic,
	command_ack_topic,
	extended_sys_state_topic,

	//from monitors
	px4status_topic,
	altitude_reached_topic,
	geofence_reached_topic,
	heartbeat_status_topic,
	battery_critical_topic,
	gps_health_topic,

	// vehicle topics
	vehicle_ready_topic,
	vehicle_armed_topic,
	vehicle_disarmed_topic,
	vehicle_landed_topic,
	vehicle_loitering_topic,
	vehicle_crashed_topic
}
