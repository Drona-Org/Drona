machine Robot {
    var myId: int;
    var otherRobots: seq[machine];
    var testDriver: machine;
    var motionPlanner: machine;
    var battery: machine;

    start state Init {
        entry (payload: (int, machine)) {
            var x: int;
            myId = payload.0;
            testDriver = payload.1;
            // x = RobotROSSetup(payload.0); // Sets up P machine, with the ROS topics
            x = RobotROSSetupDrone(payload.0);
            // battery = new Battery(this,myId);
            motionPlanner = new MotionPlanner((this, myId));
        }

        on eConfigDrone goto WaitForDstRequest with (payload: seq[machine]) {
            var index : int;
            index = 0;
            while(index < sizeof(payload)) {
                if(payload[index] != this) {
                    otherRobots +=(0, payload[index]);
                }
                index = index + 1;
            }
        }
    }

    state WaitForDstRequest {
        entry {}
        on SendNextDstReq goto ProcessDstReq;
    }

    // Robot receives locations from Task Planner, and sends it to correponding motion planner
    state ProcessDstReq {
        entry (payload: DstReq) {
            send motionPlanner, SendGoalPoint, payload.dest;
            receive {
				case CompletedPoint: {
                    send testDriver, CompletedPoint;
                    raise Success;
                }
			}
        }
        on Success goto WaitForDstRequest;
    }
}
