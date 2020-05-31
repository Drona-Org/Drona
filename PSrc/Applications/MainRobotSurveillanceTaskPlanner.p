/*
This file contains the task planner for Multi-Robot Surveillance,
where two robots visit a series of random location in an empty gazebo world.
This file also contains the Robot machine implementation. The Task Planner sends each
Robot machine destination points, which the robot must visit. 
*/

// Foreign function declarations. Implementations are in `RobotFuncs.cpp`
fun RobotROSSetup(robotId: int): int;
fun ShutdownROSSubscribers(numRobots: int): int;
fun OmplMotionPlanExternal(destinations: seq[(float, float, float)], robot_id: int): seq[(float, float, float)];
fun ROSGoTo(arr: seq[(float, float, float)], robot_id: int): int;
fun Sleep(time: float): int;
fun randomFloat(): float;
fun getRobotLocationX(robotId: int): float;
fun getRobotLocationY(robotId: int): float;
fun workspaceSetup(): int;
fun randomLocation(): (float, float, float);

type RequestInfo = (request_id: int, priority: int);
type DstReq  = (mInfo: RequestInfo, dest: (float, float, float), sender: machine);

event Success;
event SendNextDstReq: DstReq;
event SendGoalPoint: (float, float, float);
event ExecutePath: seq[(float, float, float)];
event PathCompleted;
event CompletedPoint;
event eConfigDrone: seq[machine];


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
            numOfWorkerRobots = workspaceSetup();

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
            DstRequests = default(seq[DstReq]);
            
            requestInfo.request_id = 1;
            requestInfo.priority = 1;

            // Adding a series of random destinations for robots to visit.
            i = 0;
            while (i < 6) {
                tempDstRequest.mInfo = requestInfo;
                tempDstRequest.dest = randomLocation();
                tempDstRequest.sender = this;
                DstRequests += (i, tempDstRequest);
                i = i + 1;
            }

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (4.0, 3.5, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (6, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (4.0, 4.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (7, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (4.5, 2.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (8, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (0.0, 0.5, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (9, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (1.5, 1.5, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (10, tempDstRequest);

            // Monitors for corresponing RTA modules
            // geofence1 = new LocationMonitorGeoFence(this, 1);
            // geofence2 = new LocationMonitorGeoFence(this, 2);
            battery1 = new Battery(this,1);
            battery2 = new Battery(this,2);
            // collision = new LocationMonitorCollision(this);

            // Simultaneous Requests
            // Sending both robots a series of random locations
            send workerRobots[1], SendNextDstReq, DstRequests[7];
            send workerRobots[0], SendNextDstReq, DstRequests[8];
            send workerRobots[1], SendNextDstReq, DstRequests[10];
            send workerRobots[0], SendNextDstReq, DstRequests[9];

            send workerRobots[1], SendNextDstReq, DstRequests[1];
            send workerRobots[0], SendNextDstReq, DstRequests[0];
            send workerRobots[0], SendNextDstReq, DstRequests[2];
            send workerRobots[1], SendNextDstReq, DstRequests[3];

            // send workerRobots[1], SendNextDstReq, DstRequests[10];
            // send workerRobots[0], SendNextDstReq, DstRequests[10];


            // Sequential Requests
            // counter = 0;
            // droneId = 1;
            // send workerRobots[0], SendNextDstReq, DstRequests[0];
            // send workerRobots[0], SendNextDstReq, DstRequests[1];
            // send workerRobots[0], SendNextDstReq, DstRequests[2];
            // send workerRobots[0], SendNextDstReq, DstRequests[3];
            // while (counter < reqCount) { 
            //     if (droneId == 1) {
            //         droneId = 0;
            //     } else {
            //         droneId = 1;
            //     }
            //     send workerRobots[0], SendNextDstReq, DstRequests[counter];
            //     receive {
            //         case CompletedPoint: {
            //             counter = counter + 1;
            //         }
			//     }
            // }

            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
            // Call ShutdownROSSubscribers()
        }
    }
}
