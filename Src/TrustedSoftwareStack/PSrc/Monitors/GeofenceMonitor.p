machine GeofenceMonitorMachine {
	var orb: machine;
	var commander : machine;
	var radius: float32;
	var home: LocalPositionType;

	start state Init {
		entry (payload: HelperMachinesType) {
		    
			commander = payload.commander;
			orb = payload.orb;		
						
			// configure these event streams (interval of 100000 microseconds is 100 milliseconds or 10 messages per second should be good)
			SetMessageInterval(commander, msg_local_position_ned, 100000, this);

            Subscribe(orb, (topic = local_position_topic, sub = this));
		}
		on SetGeofenceRadius goto MonitorGeofence;

		ignore local_position;
	}

	state MonitorGeofence {
		entry (payload: (home: LocalPositionType, radius: float32))
		{
			radius = payload.radius;
			home = payload.home;
		} 
		
		on local_position do (pos: mavlink_local_position_ned_t) {
			var not_outside_x: bool;
			var not_outside_y: bool;
			not_outside_x = IsNearFloat32(home.x, pos._x, radius);
			not_outside_y = IsNearFloat32(home.y, pos._y, radius);
			if (!(not_outside_x || not_outside_y)) 
			{
				Publish(orb, (topic = geofence_reached_topic, ev = geofence_reached, payload = true));
			}
		}
		on SetGeofenceRadius goto MonitorGeofence;
	}
}