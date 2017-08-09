machine HeartbeatMonitorMachine  {
	var orb: machine;
	var heartbeatTimerV : TimerPtr;
	var status : HeartbeatStatusType;

	start state Init {
		entry (payload: HelperMachinesType) {
		    
			orb = payload.orb;		

			heartbeatTimerV = CreateTimer(this to ITimerClient);
			
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
			
			status.lastHeartbeat = time;

			//reset the timer			 
			CancelTimer(heartbeatTimerV);
			StartTimer(heartbeatTimerV, 10000);
			
			status.isAlive = true;
			Publish(orb, (topic= heartbeat_status_topic, ev = heartbeat_status_changed, payload = status));
		}

		on eTimeOut do (timer: TimerPtr) {
			//timeout received something is wrong !!
			print "HeartbeatMonitorMachine: No Heartbeat for a long time !!\n";
			status.isAlive = false;
			Publish(orb, (topic= heartbeat_status_topic, ev = heartbeat_status_changed, payload = status));
		}

	}
	
}