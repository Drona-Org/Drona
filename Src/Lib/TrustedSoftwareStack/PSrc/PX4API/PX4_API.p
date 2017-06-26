//Type declarations
type GPSHealthType = 
(
	locked: bool,
	satellites: int,
	fix_type: int,
	precision: int
);

type HeartbeatStatusType =
(
	isAlive: bool,
	lastHeartbeat: int
);

/*******************************************************/
/*		Events corresponding to the vehicle topics			   */
/*******************************************************/
event global_position assume 100 : mavlink_global_position_int_t;
event local_position assume 100 : mavlink_local_position_ned_t;
event battery_status assume 100 : mavlink_battery_status_t;
event attitude assume 100 : mavlink_attitude_t;
event gps_status assume 100 : mavlink_gps_status_t;
event heartbeat assume 100 : mavlink_heartbeat_t;
event gps_raw_int assume 100 : mavlink_gps_raw_int_t;
event extended_sys_state assume 100 : mavlink_extended_sys_state_t;
event command_ack assume 100 : mavlink_command_ack_t;


/*********************************************************
	Events corresponding to monitors
*********************************************************/
event altitude_reached assume 100 : bool;
event geofence_reached assume 100 : bool;
event heartbeat_status_changed assume 100: HeartbeatStatusType;
event battery_critical assume 100 : int;
event battery_recharged assume 100 : int;
event gps_health_update assume 100: GPSHealthType;


/*********************************************************
	Events corresponding to vehicles
*********************************************************/
event vehicle_ready assume 100 : bool;
event vehicle_armed assume 100 : bool;
event vehicle_disarmed assume 100 : bool;
event vehicle_landed assume 100 : bool;
event vehicle_loitering assume 100 : bool;
event vehicle_crashed  assume 100 : bool;


type HelperMachinesType = (orb:machine, commander: machine);

// target location is in local coordinates
type TargetLocationType = (
    speed: float32,
	x: float32, 
	y: float32, 
	z: float32,
	yaw: float32 
);


type global_position_t =
(
	lat : float32,  /*Latitude, expressed as degrees */
	lon : float32,  /*Longitude, expressed as degrees */
	alt : float32,  /*Altitude in meters */
	yaw : float32   /*Vehicle heading (yaw angle) in degrees */
); 


enum VEHICLE_MODE_FLAG {
	VEHICLE_MODE_FLAG_NONE = 0,
	VEHICLE_MODE_FLAG_CUSTOM_MODE_ENABLED = 1
}

enum PX4_CUSTOM_MAIN_MODE {
	PX4_CUSTOM_MAIN_MODE_NONE = 0,
	PX4_CUSTOM_MAIN_MODE_MANUAL = 1,
	PX4_CUSTOM_MAIN_MODE_ALTCTL = 2,
	PX4_CUSTOM_MAIN_MODE_POSCTL = 3,
	PX4_CUSTOM_MAIN_MODE_AUTO = 4,
	PX4_CUSTOM_MAIN_MODE_ACRO = 5,
	PX4_CUSTOM_MAIN_MODE_OFFBOARD = 6,
	PX4_CUSTOM_MAIN_MODE_STABILIZED = 7,
	PX4_CUSTOM_MAIN_MODE_RATTITUDE = 8
}

enum PX4_CUSTOM_SUB_MODE_AUTO {
	PX4_CUSTOM_SUB_MODE_AUTO_NONE = 0,
	PX4_CUSTOM_SUB_MODE_AUTO_READY = 1,
	PX4_CUSTOM_SUB_MODE_AUTO_TAKEOFF = 2,
	PX4_CUSTOM_SUB_MODE_AUTO_LOITER = 3,
	PX4_CUSTOM_SUB_MODE_AUTO_MISSION = 4,
	PX4_CUSTOM_SUB_MODE_AUTO_RTL = 5,
	PX4_CUSTOM_SUB_MODE_AUTO_LAND = 6,
	PX4_CUSTOM_SUB_MODE_AUTO_RTGS = 7,
	PX4_CUSTOM_SUB_MODE_AUTO_FOLLOW_TARGET = 8
}

type LocalPositionType = (x: float32, y: float32, z:float32);
type GlobalPositionType = (timestamp: int, lat: int, lon: int, alt:int);


type VehicleStateType = (
	local_pos : LocalPositionType,
	global_pos : GlobalPositionType,
	home_pos: LocalPositionType,
	gps_locked: bool,
	battery_remaining: int,
	px4_alive : bool,
	isHomeSet : bool,
	hasGlobalPosition : bool,
	isReady : bool,
	isLocalSet: bool,
	flying: bool,
	armed: bool
	);
   

extern fun SendSetHomeCommand(commander: machine, pos: GlobalPositionType, caller : machine);
extern fun LocalToGlobal(local: mavlink_local_position_ned_t) : global_position_t;
extern fun ReturnToLaunch(commander: machine, caller : machine);
extern fun ArmVehicle(commander: machine, caller : machine);
extern fun DisArmVehicle(commander:machine, caller: machine);
extern fun TakeOff(commander: machine, local: mavlink_local_position_ned_t, caller: machine);
extern fun GoToLocation(commander: machine, local: mavlink_local_position_ned_t, caller: machine);
extern fun LandVehicle(commander: machine, caller: machine);
extern fun SetMessageInterval(commander: machine, msg_stream: mavlink_messages, interval: int, caller: machine);
extern fun SendHeartbeat();
extern fun GetSystemTime() : int;
extern fun Publish(orb: machine, payload: POrbPubMsgType);
extern fun Subscribe(orb:machine, payload: POrbSubMsgType);


event CommandSucceeded: int;
event CommandFailed: int;
type CommandType = (caller: machine, confirm:bool, cmd:int, a1:any, a2:any, a3:any, a4:any, a5:any, a6:any, a7:any);

// Use this event to send one of the commands defines in P_common_EnumFunctions.p to the PX4.
// When command ACK is received you will get either CommandSucceeded or CommandFailed event.
// This function will retry if the PX4 does not respond, or returns MAV_RESULT_TEMPORARILY_REJECTED.
// If no response is received within a timeout period you will get CommandFailed.
// The payload is 0 to 7 values that will be converted to floating point values and sent in the 
// MAVLINK_CMD_COMMAND_LONG message.
event Command : CommandType;

type CommanderInterface(machine) = {
	Command, command_ack
};

// AltitudeMonitorInterface

// You send this message to set a target altitude, when the altitude is reached, the altitude_reached_topic
// is published on the orb.
type TargetAltitudeInfoType = (
	target: float32, // relative to HomeAlt (e.g. 0 means landed back home)
	delta: float32
);

event SetTargetAltitude: TargetAltitudeInfoType;

type AltitudeMonitorInterface(HelperMachinesType) = {
	SetTargetAltitude, local_position, extended_sys_state
};


// BatteryMonitorInterface

type BatteryMonitorInterface(HelperMachinesType) = {
	battery_status 
};


// geofence monitor interface

// argument is the geofence radius.
event SetGeofenceRadius: (home: LocalPositionType, radius: float32);

type GeofenceMonitorInterface (HelperMachinesType) = {
	SetGeofenceRadius, local_position
};


// GPSHealthMonitorInterface

type GPSHealthMonitorInterface (HelperMachinesType) = {
	gps_status, gps_raw_int, global_position
};


// heartbeat monitor interfaces
type HeartbeatMonitorInterface (HelperMachinesType) = {
	heartbeat
};



// FlightControllerInterface

event mission_arm;
event mission_disarm ;
event mission_takeoff : float32;
event mission_goto : TargetLocationType; 
event mission_land;
event mission_loitering;
event mission_finished;


type FlightControllerInterface(HelperMachinesType) = {
	heartbeat_status_changed, battery_critical, battery_recharged, gps_health_update, 
	local_position, global_position, geofence_reached,  	
    mission_arm, mission_disarm, mission_takeoff, mission_goto, mission_land, mission_loitering, mission_finished,
	CommandSucceeded, CommandFailed
};

