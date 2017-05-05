machine AltitudeMonitorMachine {
	var orb : machine;
	var commander : machine;
  var targetAlt: float32;
  var delta: float32;
  var currentAlt: float32;
	var isActive: bool;
	var isFlying: bool;
	var isLanding: bool;

	start state Init {
		entry(payload: HelperMachinesType) {
		    
			commander = payload.commander;
			orb = payload.orb;			
			isFlying = false;
			
			// configure these event streams (interval of 100000 microseconds is 100 milliseconds or 10 messages per second should be good)
			SetMessageInterval(commander, msg_extended_sys_state, 100000, this);
			SetMessageInterval(commander, msg_local_position_ned, 100000, this);

      Subscribe(orb, (topic = extended_sys_state_topic, sub = this));
      Subscribe(orb, (topic = local_position_topic, sub = this));

		}
		on SetTargetAltitude goto MonitorAltitude;
		ignore extended_sys_state, local_position;
	}

	state MonitorAltitude {
		entry (payload:TargetAltitudeInfoType)
		{
			var zero: float32;
			zero = IntToFloat32(0);
			delta = payload.delta;
			targetAlt = payload.target;
			isActive = true;
			isLanding = IsEqFloat32(targetAlt, zero);
			print "monitoring target altitude of {0}\n", targetAlt;
		}
		
		on SetTargetAltitude goto MonitorAltitude;

		on local_position do (pos: mavlink_local_position_ned_t) {
			// wait until we reach the target altitude....
			var near: bool;
			var higher: bool;
			currentAlt = pos._z;

			// If we are landing there is a better way to detect that we have actually landed, namely, 
			// we use the mavlink_extended_sys_state_t MAV_LANDED_STATE_ON_GROUND which is a real 
			// "landing detector" implemented inside the PX4.  The following only works for 
			// "ascending" because it also checks if we are "higher" than the target which obviously
			// doesn't work when we are going down.

			if (isActive && !isLanding)
			{
				near = IsNearFloat32(currentAlt, targetAlt, delta);
				higher = IsGtFloat32(currentAlt, targetAlt);
				if (near || higher)
				{
					print "AltitudeMonitorMachine: reached altitude of {0} which is near or higher than target {1}\n", currentAlt, targetAlt;
					Publish(orb, (topic = altitude_reached_topic, ev = altitude_reached, payload = true));
					isActive = false;
				}
			}
		}
		
		on extended_sys_state do (s: mavlink_extended_sys_state_t)
		{
			var isZero: bool;
			if (s._landed_state == 0) // MAV_LANDED_STATE_UNDEFINED
			{
			}
			else if (s._landed_state == 1) // MAV_LANDED_STATE_ON_GROUND
			{
				if (isActive)
				{
					if (isLanding) {
						print "AltitudeMonitorMachine: reached target altitude of {0}\n", targetAlt;
						Publish(orb, (topic = altitude_reached_topic, ev = altitude_reached, payload = true));
						isActive = false;
					}
				}
				else 
				{				
					if (isFlying) {
						isFlying = false;
						print "AltitudeMonitorMachine: unexpected landing at altitude {0}!!\n", currentAlt;
						Publish(orb, (topic=vehicle_crashed_topic, ev = vehicle_crashed, payload = true));
					}
				}
			}
			else if (s._landed_state == 2) // MAV_LANDED_STATE_IN_AIR
			{
				if (!isFlying)
				{
					print "AltitudeMonitorMachine: We are flying!!\n";
					isFlying = true;
				}
			}
		}
	}
}