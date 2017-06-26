machine GPSHealthMonitorMachine {
	var orb: machine;
	var commander : machine;
	var status: GPSHealthType;

	start state Init {
		entry (payload: HelperMachinesType) {
			commander = payload.commander;
			orb = payload.orb;		
			
			// configure these event streams (interval of 100000 microseconds is 100 milliseconds or 10 messages per second should be good)
			SetMessageInterval(commander, msg_gps_status, 100000, this);
			SetMessageInterval(commander, msg_global_position_int, 100000, this);
			SetMessageInterval(commander, msg_gps_raw_int, 100000, this);

			Subscribe(orb, (topic = gps_status_topic, sub = this));
            Subscribe(orb, (topic = gps_raw_int_topic, sub = this));
            Subscribe(orb, (topic = global_position_topic, sub = this));
			
			goto MonitorGPSLock;
		}
	}

	state MonitorGPSLock {
		on gps_status do (s:mavlink_gps_status_t)  {
			status.satellites = s._satellites_visible;
		}
		on gps_raw_int do (s:mavlink_gps_raw_int_t) {
			status.fix_type = s._fix_type;
			status.precision = s._eph;
			status.satellites = s._satellites_visible;
		}
		on global_position do (pos: mavlink_global_position_int_t)
		{			
			// we shouldn't report GPS lock until we actually have GPS locations.
			if (status.fix_type > 1 && status.satellites > 5 && status.precision < 50)
			{
				if (!status.locked) 
				{
					status.locked = true;
					print "GPSHealthMonitorMachine: GPS Acquired !\n";
					Publish(orb, (topic = gps_health_topic, ev = gps_health_update, payload = status));
				}
			}
			else 
			{
				if (status.locked) 
				{
					status.locked = false;
					print "GPSHealthMonitorMachine: GPS Lost !\n";
					Publish(orb, (topic = gps_health_topic, ev = gps_health_update, payload = status));
				}
			}
		}
	}
}