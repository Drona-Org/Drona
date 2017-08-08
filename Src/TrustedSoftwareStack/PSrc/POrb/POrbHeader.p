// To subscribe to a particular topic you pass the topic id and the machine you want
// to receive the messages that are published to that topic.
type POrbSubMsgType = (topic: Topics, sub: machine);
event POrbSubscribe: POrbSubMsgType;

// To publish a particular topic you pass the topic id, the event to publish and the
// payload required for that type of event.
type POrbPubMsgType = (topic: Topics, ev: event, payload: any);
event POrbPublish: POrbPubMsgType;


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

fun Publish(orb: machine, payload: POrbPubMsgType)
{
	send orb, POrbPublish, payload;
}

fun Subscribe(orb:machine, payload: POrbSubMsgType) 
{
	send orb, POrbSubscribe, payload;
}