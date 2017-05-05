#include "PX4_API.p"

// internal events
event fc_px4_no_heartbeat;
event fc_px4_battery_critical;
event fc_px4_gps_lost;
event fc_px4_gps_locked;
event fc_finish_mission_goto;
event fc_armed;
event fc_disarmed;
event fc_ready;
event fc_emergency_landing;

machine FlightControllerMachine : FlightControllerInterface {
	//Helper machines
	var orb: machine;
	var commander: machine;
	var altitudeMonitor: machine;
	var geofenceMonitor: machine;

	//Vehicle status
	var vStatus: VehicleStateType;
	var targetLocation: TargetLocationType;
	
	//Getters 
	fun IsGPSLocked() : bool { return vStatus.gps_locked; }
	fun IsPX4Alive() : bool { return vStatus.px4_alive; }
	fun IsHomeSet() : bool { return vStatus.isHomeSet; }
	fun IsLocalSet() : bool { return vStatus.isLocalSet; }
	fun IsReady() : bool { return vStatus.isReady; }
	fun IsGlobalPositionKnown() : bool { return vStatus.hasGlobalPosition; }
	fun IsBatteryCharged() : bool { return vStatus.battery_remaining > 20; }

	//Helper model functions
	model fun FlightControllerReady(){}

	// This machine builds a "push" stack of the following states so that some common events can be handled
	// in the lower state for all the higher states.
	// Init 		- checking the done is ok
	// Standby 		- ready to be armed, popped by battery_critical.
	// Armed		- ready to fly, popped by mission_disarm 
	// TakingOff, Loitering, GoingSomeplace, Landing	- these are all "goto" transitions, popped by mission_disarm.	

	fun InitializeFlightController(helpers: HelperMachinesType) {
			//stores the helpers locally
			orb = helpers.orb;
			commander = helpers.commander;
			
			// subscribe to all the topics we care about
            Subscribe(orb, (topic = local_position_topic, sub = this));
            Subscribe(orb, (topic = global_position_topic, sub = this));
            Subscribe(orb, (topic = altitude_reached_topic, sub = this));
			Subscribe(orb, (topic = heartbeat_status_topic, sub = this));
            Subscribe(orb, (topic = battery_critical_topic, sub = this));
            Subscribe(orb, (topic = vehicle_crashed_topic, sub = this));
            Subscribe(orb, (topic = gps_health_topic, sub = this));

			// start the PX4 heartbeart monitoring machine
			new HeartbeatMonitorInterface(helpers);

			// start the GPS health monitoring machine
			new GPSHealthMonitorInterface(helpers);

			// start the battery monitor
			new BatteryMonitorInterface(helpers);

			// start the altitude monitor
			altitudeMonitor = new AltitudeMonitorInterface(helpers);
			
			// start the geofence monitor.
			geofenceMonitor = new GeofenceMonitorInterface(helpers);

			//initialize the vehicle state stored by flight controller
			vStatus.gps_locked = false;
			vStatus.battery_remaining = 100;
			vStatus.px4_alive = false;
			vStatus.armed = false;
			vStatus.flying = false;
			vStatus.isLocalSet = false;
			vStatus.isReady = false;
			vStatus.isHomeSet = false;
			vStatus.hasGlobalPosition = false;

			//Flight controller is ready
			FlightControllerReady();
			print "FlightControllerMachine: Flight controller is ready !!\n";

			print "FlightControllerMachine: Waiting for PX4 status & GPS lock ...\n";
	}

	start state Init {
		entry (payload: HelperMachinesType) {
			InitializeFlightController(payload);
		}

		on heartbeat_status_changed do (payload: HeartbeatStatusType)
		{
			if(payload.isAlive)
			{
				if (!vStatus.px4_alive) {
					print "FlightControllerMachine: PX4 is alive!!\n";
				}
				vStatus.px4_alive = true;
				CheckReady();
			}
			else 
			{
				vStatus.px4_alive = false;
				print "FlightControllerMachine: No heartbeat message for a long time, last heartbeat heard at {0}\n", payload.lastHeartbeat;
				raise fc_px4_no_heartbeat;
			}
		}

		on battery_critical do (battery_remaining: int)
		{
			vStatus.battery_remaining = battery_remaining;
			print "FlightControllerMachine: Battery critical alarm, current battery remaining {0}\n", battery_remaining;			
			
			if (vStatus.flying) {
				raise fc_emergency_landing;
			}		
			else {
				raise fc_px4_battery_critical;
			}			
		}

		on battery_recharged do (battery_remaining: int) {
			vStatus.battery_remaining = battery_remaining;
			print "FlightControllerMachine: Batteries recharged ready for mission ! Batter charge = {0}\n", battery_remaining;
		}
		on fc_emergency_landing push Landing;
		
		on gps_health_update do (payload: GPSHealthType) 
		{
			if(!payload.locked)
			{
				vStatus.gps_locked = false;
				print "FlightControllerMachine: GPS Lost Alarm !!\n";
				raise fc_px4_gps_lost;
			}
			else 
			{
				vStatus.gps_locked = true;
				print "FlightControllerMachine: GPS Locked !!\n";	
				CheckHome();

				// in the case where GPS is regained we need to pop the NoGPS state.
				raise fc_px4_gps_locked;
			}
		}

		ignore fc_px4_gps_locked;

		on fc_px4_no_heartbeat do { assert false, "No heartbeat crash !!"; }

		on fc_ready push StandBy;
		
		on local_position do (pos: mavlink_local_position_ned_t)
		{
			vStatus.local_pos = (x = pos._x, y = pos._y, z = pos._z);
			vStatus.isLocalSet = true;
			CheckHome();
		}

		on global_position do (pos: mavlink_global_position_int_t)
		{			
			vStatus.global_pos = (timestamp = pos._time_boot_ms, lat = pos._lat, lon = pos._lon, alt = pos._alt);
			vStatus.hasGlobalPosition = true;			
			CheckHome();
		}
		
		on fc_px4_battery_critical push LowBattery;

		on fc_px4_gps_lost push NoGPS;

		on geofence_reached goto GeofenceBreached;

		// we can be in this state when mission sends mission_disarm if the PX4 disarms automatically on landing.
		ignore mission_disarm;

		// we can be in this state when altitude monitor sends vehicle_crashed due to some bounce that can happen
		// in the PX4 hardware where multiple landings are detected.  It is safe to ignore here.
		ignore vehicle_crashed;
	}

	fun CheckHome() {
		// If the home location is not set then we should set the current local position
		// as the home location, if we have a local position.
		if (IsLocalSet() && IsGlobalPositionKnown() && IsGPSLocked() && !IsHomeSet())
		{
			SendSetHomeCommand(commander, vStatus.global_pos, this);
			vStatus.home_pos = vStatus.local_pos;
			vStatus.isHomeSet = true;	
			print "FlightControllerMachine: setting home local position, x = {0}, y = {1}, z = {2}\n", vStatus.home_pos.x, vStatus.home_pos.y, vStatus.home_pos.z;
			CheckReady();
		}
	}

	fun CheckReady() {
		if (IsPX4Alive() && IsHomeSet() && !IsReady() && IsBatteryCharged()) {
			vStatus.isReady = true;
			raise fc_ready;
		}
	}

	state StandBy {
		entry {
			var r : float32;

			print "FlightControllerMachine: Entered standby mode\n";
			
			//initialize the geofence monitors

			r = IntToFloat32(60);
			send geofenceMonitor, SetGeofenceRadius, (home = vStatus.home_pos, radius = r);			

			// ready for business.
			Publish(orb, (topic= vehicle_ready_topic, ev = vehicle_ready, payload = true));
		}
		
		on mission_arm do { print "FlightControllerMachine: arming drone\n"; ArmVehicle(commander, this); }
		 
		on CommandSucceeded push Armed;

		on CommandFailed do { 
			print "FlightControllerMachine: Arming command was rejected\n"; 
		}

		on mission_takeoff, mission_goto, mission_land do { 
			print "FlightControllerMachine: Cannot perform these operations until drone is armed\n"; 
		}

		on fc_px4_battery_critical push LowBattery;
		on fc_px4_gps_lost goto NoGPS;
		
	}

	state NoGPS {
		entry {
			print "FlightControllerMachine: GPS signal lost after entering standby mode this is not handled yet.\n";
			raise halt;
		}
	}

	state LowBattery {
		entry {
			print "FlightControllerMachine: LowBattery !!\n";
			
		}
		on mission_arm do { print "FlightControllerMachine: Battery low cannot perform the arm operation\n"; }
		ignore battery_critical;
		on battery_recharged do { print "FlightControllerMachine: Batteries recharged entering standby mode\n";  pop; }
	}
	
	state GeofenceBreached
	{
		entry (payload: any){
			print "Drone is outside geo fence - flying back home !!\n";
			ReturnToLaunch(commander, this);
		}
	}
	
	state Disarming {
		entry {
			print "FlightControllerMachine: disarming drone\n";
			DisArmVehicle(commander, this); 
		}
		on CommandSucceeded do {
			print "FlightControllerMachine: Vehicle is disarmed\n"; 
			Publish(orb, (topic= vehicle_disarmed_topic, ev = vehicle_disarmed, payload = true));			
			vStatus.armed = false;
			pop; // back to Standby state.
		}

		on CommandFailed do { 
			print "FlightControllerMachine: Disarm command was rejected ???\n"; 
		}

	}

    state Armed {
	    entry {
			vStatus.flying = false;
			if (!vStatus.armed) {
				vStatus.armed = true;
    			print "FlightControllerMachine: Drone is ARMED\n";
				Publish(orb, (topic= vehicle_armed_topic, ev = vehicle_armed, payload = true));
			}
		}

    	on mission_disarm goto Disarming;

    	on mission_takeoff push TakingOff;  
		
		on mission_goto, mission_land do { print "FlightControllerMachine: cannot perform this operation unless the drone is flying\n"; }
    } 

    state TakingOff {
		entry (alt: float32)
		{
			var localAlt: float32;
			var local: mavlink_local_position_ned_t;
			var zero: float32;
			var one: float32;
			zero = IntToFloat32(0);
			one  = IntToFloat32(1);

			local._x = zero;
			local._y = zero;
			local._z = alt;

			// Figure out the real target altitude for AltitudeMonitor.  
			// On the PX4 hardware the z axis on local coordinates looks like this:
			// MAVLINK_MSG_ID_LOCAL_POSITION_NED: x=-0.043886, y=0.008149, z=-480.872925
			localAlt = AddFloat32(alt, vStatus.home_pos.z);			
			send altitudeMonitor, SetTargetAltitude, (target=local._z, delta=one);

			print "FlightControllerMachine: taking off to altitude {0}\n", alt;
			
			TakeOff(commander, local, this);
		}

		on CommandSucceeded do { 
			print "FlightControllerMachine: take off command was accepted\n"; 
			vStatus.flying = true;
		}

		on CommandFailed do (cmd:int) {	print "FlightControllerMachine: take off command was rejected\n"; }
		
		on altitude_reached goto Loitering;
		
		on vehicle_crashed do (payload: any){
			print "FlightControllerMachine: oops, looks like we crashed!!\n";
			assert false;
		}

		on mission_land goto Landing; 

    	on mission_disarm do {	print "FlightControllerMachine: disarming while we are flying is dangerous!!\n"; }
    }

	state Loitering {
		
		entry (payload: any)
		{ 	
			print "FlightControllerMachine: flying...\n";
			vStatus.flying = true;
			Publish(orb, (topic= vehicle_loitering_topic, ev = vehicle_loitering, payload = true));
		}
		
		on mission_land goto Landing; 
		
		on mission_goto do (payload: TargetLocationType) {
			targetLocation = payload;
			raise fc_finish_mission_goto;
		} 

		on fc_finish_mission_goto goto GoingSomeplace;
    }
	
	state GoingSomeplace {
		entry {
			
			var local: mavlink_local_position_ned_t;
		 	var conversion: float32;	
			var alt: float32;			
			var z :float32;
			
			local._x = targetLocation.x;
			local._y = targetLocation.y;

			z = AddFloat32(vStatus.home_pos.z, targetLocation.z);
			local._z = z;

			print "flying to location: {0},{1}, alt: {2}\n", targetLocation.x, targetLocation.y, targetLocation.z;	
				
			GoToLocation(commander, local, this);
		}

		on CommandSucceeded do (cmd:int) {
			print "FlightControllerMachine: goto command was accepted\n"; 
		}

		on CommandFailed do (cmd:int) { print "FlightControllerMachine: goto command failed\n"; }
		
		on mission_land goto Landing; 
		
		on mission_goto do (payload: TargetLocationType) {
			targetLocation = payload;
			raise fc_finish_mission_goto;
		} 
		on fc_finish_mission_goto goto GoingSomeplace;
	}

	
    state Landing {
		entry 
		{ 
			var zero: float32;
			zero = IntToFloat32(0);
			print "FlightControllerMachine: landing...\n";
			send altitudeMonitor, SetTargetAltitude, (target=zero, delta=zero);
			
			LandVehicle(commander, this);
		}
		
		on CommandSucceeded do { print "FlightControllerMachine: landing command was accepted\n"; }

		on CommandFailed do { print "FlightControllerMachine: landing command was rejected\n"; }
		
		on altitude_reached do (payload: any) {
			print "FlightControllerMachine: landed\n";
			Publish(orb, (topic=vehicle_landed_topic, ev = vehicle_landed, payload = true));
			// pop back to Armed state (or Init state in the case of emergency landing)
			pop;
		}
		
		on battery_critical do (battery_remaining: int) {
			print "FlightControllerMachine: Already in landing mode, ignoring GPS lost and Battery critical messages\n"; 
		}

		on mission_goto do {
			print "FlightControllerMachine: cannot process 'mission_goto' while we are landing\n"; 
		}

		ignore mission_arm, mission_disarm;
    }
}
