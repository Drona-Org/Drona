

machine BatteryMonitorMachine{
	var orb: machine;
	var commander : machine;
	var batteryDischarged: bool;
	start state Init {
		entry (payload: HelperMachinesType) {		    
			commander = payload.commander;
			orb = payload.orb;		
			batteryDischarged = false;			
			// configure these event streams (interval of 100000 microseconds is 100 milliseconds or 10 messages per second should be good)
			SetMessageInterval(commander, msg_battery_status, 100000, this);

			//subscribe to the gps status message
			Subscribe(orb, (topic = battery_status_topic, sub = this));
			goto MonitorBatteryLevel;
		}
	}

	state MonitorBatteryLevel {
		on battery_status do (s: mavlink_battery_status_t) {
			// battery remaining is -1 when the pixhawk is plugged into USB in which case we don't care.
			if (s._battery_remaining != -1 && s._battery_remaining < 20)
			{
			    print "BatteryMonitorMachine: ### Battery is less than 20% !!!\n";
			    batteryDischarged = true;
				Publish(orb, (topic= battery_critical_topic, ev = battery_critical, payload = s._battery_remaining));
			}
			else if(batteryDischarged)
			{
				
				batteryDischarged = false;
				Publish(orb, (topic= battery_critical_topic, ev = battery_recharged, payload = s._battery_remaining));
			}
		}
	}
}