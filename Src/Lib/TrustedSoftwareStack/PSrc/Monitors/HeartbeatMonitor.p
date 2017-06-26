machine HeartbeatMonitorMachine  {
	var orb: machine;
	var commander : machine;
	var heartbeatTimerV : machine;
	var status : HeartbeatStatusType;

	start state Init {
		entry (payload: HelperMachinesType) {
		    
			commander = payload.commander;
			orb = payload.orb;		

			heartbeatTimerV = CreateTimer(this);
			
			// configure these event streams (interval of 100000 microseconds is 100 milliseconds or 10 messages per second should be good)
			SetMessageInterval(commander, msg_heartbeat, 1000, this);

			//subscribe to the heartbeat message
			Subscribe(orb, (topic = heartbeat_topic, sub = this));
			//start timer for monitoring heartbeat message
			StartTimer(heartbeatTimerV, 10000);

			goto MonitorHeartbeat;
		}
	}

	state MonitorHeartbeat {
		on heartbeat do (payload: mavlink_heartbeat_t) {
		
			var time: int;
		    print ".";
			
			time = GetSystemTime();
			status.lastHeartbeat = time;

			//reset the timer			 
			CancelTimerAndHandleResponse(heartbeatTimerV);
			StartTimer(heartbeatTimerV, 10000);
			
			status.isAlive = true;
			Publish(orb, (topic= heartbeat_status_topic, ev = heartbeat_status_changed, payload = status));

			// tell the PX4 we are still here (so it doesn't go into failsafe mode)
			SendHeartbeat();
		}

		on timer_timeout do (timer: machine) {
			//timeout received something is wrong !!
			print "HeartbeatMonitorMachine: No Heartbeat for a long time !!\n";
			status.isAlive = false;
			Publish(orb, (topic= heartbeat_status_topic, ev = heartbeat_status_changed, payload = status));
		}

	}
	
}