#include "PX4_API.p"


model fun SendSetHomeCommand(commander: machine, pos: GlobalPositionType, caller : machine)
{
	send commander, Command, (caller = caller, confirm = false, cmd = mav_cmd_do_set_home,  a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = pos.lat, a6 = pos.lon, a7 = pos.alt);
}

model fun LocalToGlobal(local: mavlink_local_position_ned_t) : global_position_t
{
	return default(global_position_t);
}

fun ReturnToLaunch(commander: machine, caller : machine)
{
	send commander, Command, (caller=caller, confirm=false, cmd=mav_cmd_nav_return_to_launch,  a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0);
}

fun ArmVehicle(commander: machine, caller : machine)
{
	send commander, Command, (caller=caller, confirm=true, cmd=mav_cmd_component_arm_disarm, a1=1,  a2=0, a3=0, a4=0, a5=0, a6=0, a7=0);
}

fun DisArmVehicle(commander:machine, caller: machine)
{	
	send commander, Command, (caller=caller, confirm=true, cmd=mav_cmd_component_arm_disarm,  a1=0,  a2=0, a3=0, a4=0, a5=0, a6=0, a7=0);
}

fun TakeOff(commander: machine, local: mavlink_local_position_ned_t, caller: machine) 
{
	var gpos: global_position_t;
	var nan: float32;

	// take off where we are currently located.
	nan = NaNFloat32();
	// mav_cmd_nav_takeoff wants global coords.
	gpos = LocalToGlobal(local);
	print "Taking off to global alt : {0}\n", gpos.alt;
	// take off: now for some unknown reason PX4 is not sending back an ACK on this, so we have to assume it works for now...
	send commander, Command, (caller=caller, confirm=false, cmd=mav_cmd_nav_takeoff, a1=0, a2=0, a3=0, a4=nan, a5=nan, a6=nan, a7=gpos.alt);
}

fun GoToLocation(commander: machine, local: mavlink_local_position_ned_t, caller: machine)
{
	var nan: float32;
	var gpos: global_position_t;
	// take off where we are currently located.
	nan = NaNFloat32();

	gpos = LocalToGlobal(local);

	print "flying to global : {0},{1}, alt: {2}\n", gpos.lat, gpos.lon, gpos.alt;
	// fly to given position (turns out PX4 implementation of mav_cmd_do_reposition supports both coordinate systems)
	// the large *1E7 values and if the value is < 1000 it inteprets it as actual value in degrees.
	send commander, Command, (caller=caller, confirm=true, cmd=mav_cmd_do_reposition, a1=-1, a2=mav_do_reposition_flags_change_mode, 
		a3=0, a4=nan, a5=gpos.lat, a6=gpos.lon, a7=gpos.alt);
}

fun LandVehicle(commander: machine, caller: machine)
{
	// land at whatever our current GPS location is
	send commander, Command, (caller=caller, confirm=true, cmd=mav_cmd_nav_land, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0);
}

fun SetMessageInterval(commander: machine, msg_stream: mavlink_messages, interval: int, caller: machine)
{
	send commander, Command, (caller=caller, confirm=false , cmd=mav_cmd_set_message_interval, a1=msg_stream,  a2=interval, a3=0, a4=0, a5=0, a6=0, a7=0);
}


model fun SendHeartbeat()
{
}

model fun GetSystemTime() : int
{
	return 0;
}

fun Publish(orb: machine, payload: POrbPubMsgType)
{
	sealwithRTC();
	send orb, POrbPublish, payload;
}

fun Subscribe(orb:machine, payload: POrbSubMsgType) 
{
	sealwithRTC();
	send orb, POrbSubscribe, payload;
	unsealwithRTC();
}

