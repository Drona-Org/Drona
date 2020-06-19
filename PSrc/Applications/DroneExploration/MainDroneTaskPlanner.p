// Foreign function declarations. Implementations are in `RobotFuncs.cpp`
fun ShutdownROSSubscribersDrone(numRobots: int): int;
fun RobotROSSetupDrone(robotId: int): int;
fun OmplMotionPlanExternal(destinations: seq[(float, float, float)], robot_id: int): seq[(float, float, float)];
fun Sleep(time: float): int;
fun getRobotLocationX(robotId: int): float;
fun getRobotLocationY(robotId: int): float;
fun getRobotLocationZ(robotId: int): float;
fun workspaceSetupDrone(): int; //TODO: PASS XML FILE FROM P -> Cpp
fun decisionModuleDrone(wayPoint: seq[(float, float, float)], robotId: int, delta: int, curr_point: int): int;
fun advancedControllerDrone(wayPoint: (float, float, float), robotId: int): int;
fun safeControllerDrone(wayPoint: (float, float, float), robotId: int): int;

type RequestInfo = (request_id: int, priority: int);
type DstReq  = (mInfo: RequestInfo, dest: (float, float, float), sender: machine);

event Success;
event SendNextDstReq: DstReq;
event SendGoalPoint: (float, float, float);
event ExecutePath: seq[(float, float, float)];
event PathCompleted;
event CompletedPoint;
event eConfigDrone: seq[machine];
event DecisionEvent: (seq[(float, float, float)], int);
event SafeCollision;
event AdvancedController;


fun BROADCAST(allTarget: seq[machine], ev: event, payload: any, source: machine) {
	var index: int;
	index = 0;
	while(index < sizeof(allTarget))
	{
		if(source != allTarget[index])
		{
			send allTarget[index], ev, payload;
		}
		index = index + 1;
	}
}

// Task Planner that drives robot surveillance
machine TestDriver {
    var workerRobots: seq[machine];
    var reqCount: int;
    var numOfWorkerRobots: int;
    var x: int;
    var geofence1: machine;
    var geofence2: machine;
    var battery1: machine;
    var battery2: machine;
    var collision: machine;
    var y: int;

    start state Init {
        entry {
            var index : int;
			var temp: machine;

			reqCount = 4;
            numOfWorkerRobots = workspaceSetupDrone();

			index = 1;
            // Creates all robots
			while(index < numOfWorkerRobots+1) {
				temp = new Robot(index, this);
				workerRobots += (index-1, temp);
			    index = index + 1;
			}

			BROADCAST(workerRobots, eConfigDrone, workerRobots, this);
            raise Success;
        }
        on Success goto StartSurvillanceState;
    }
    
    state StartSurvillanceState {
        entry {
            var requestInfo: RequestInfo;
            var tempDstRequest: DstReq;
            var counter: int;
            var droneId: int;
            var DstRequests: seq[DstReq];
            var randomFloat: float;
            var randomFloat2: float;
            var i: int;
            var x: int;
            DstRequests = default(seq[DstReq]);
            
            requestInfo.request_id = 1;
            requestInfo.priority = 1;

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (2.5, 2.5, 1.0);
            tempDstRequest.sender = this;
            DstRequests += (0, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (2.5, -0.5, 2.0);
            tempDstRequest.sender = this;
            DstRequests += (1, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (5.0, 3.0, 2.0);
            tempDstRequest.sender = this;
            DstRequests += (2, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (2.5, 5.5, 3.0);
            tempDstRequest.sender = this;
            DstRequests += (3, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (0.0, 2.0, 1.0);
            tempDstRequest.sender = this;
            DstRequests += (4, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (2.5, -0.5, 1.0);
            tempDstRequest.sender = this;
            DstRequests += (5, tempDstRequest);

            // Sequential Requests
            counter = 0;
            while (counter < 6) {
                send workerRobots[0], SendNextDstReq, DstRequests[counter];
                receive {
                    case CompletedPoint: {
                        counter = counter + 1;
                    }
			    }
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
            Sleep(2.0);
            x = ShutdownROSSubscribersDrone(numOfWorkerRobots);
        }
    }
}
