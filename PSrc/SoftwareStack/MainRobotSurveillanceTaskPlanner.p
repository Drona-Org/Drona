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
fun seqTest(arr: seq[float]): seq[float];
fun seqTest2(arr: seq[(float, float, float)]): seq[(float, float, float)];
fun getRobotLocationX(robotId: int): float;
fun getRobotLocationY(robotId: int): float;

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

    start state Init {
        entry {
            var index : int;
			var temp: machine;

			reqCount = 4;
			numOfWorkerRobots = 2;

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
            DstRequests = default(seq[DstReq]);
            
            requestInfo.request_id = 1;
            requestInfo.priority = 1;

            // Adding a series of random destinations for robots to visit.
            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (0, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (1, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (2, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (3, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (4, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (randomFloat(), randomFloat(), 0.0);
            tempDstRequest.sender = this;
            DstRequests += (5, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (4.0, 3.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (6, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (2.0, 2.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (7, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (5.0, 0.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (8, tempDstRequest);

            tempDstRequest.mInfo = requestInfo;
            tempDstRequest.dest = (0.0, 0.0, 0.0);
            tempDstRequest.sender = this;
            DstRequests += (9, tempDstRequest);

            // Monitors for corresponing RTA modules
            geofence1 = new LocationMonitorGeoFence(this, 1);
            geofence2 = new LocationMonitorGeoFence(this, 2);
            battery1 = new Battery(this,1);
            battery2 = new Battery(this,2);
            collision = new LocationMonitorCollision(this);

            // Simultaneous Requests
            // Sending both robots a series of random locations
            send workerRobots[1], SendNextDstReq, DstRequests[8];
            send workerRobots[0], SendNextDstReq, DstRequests[9];
            send workerRobots[0], SendNextDstReq, DstRequests[6];
            send workerRobots[1], SendNextDstReq, DstRequests[6];

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

machine Robot {
    var myId: int;
    var otherDrones: seq[machine];
    var testDriver: machine;
    var motionPlanner: machine;

    start state Init {
        entry (payload: (int, machine)) {
            var x: int;
            myId = payload.0;
            testDriver = payload.1;
            x = RobotROSSetup(payload.0); // Sets up P machine, with the ROS topics
            motionPlanner = new MotionPlanner((this, myId));
        }

        on eConfigDrone goto WaitForDstRequest with (payload: seq[machine]) {
            var index : int;
            index = 0;
            while(index < sizeof(payload)) {
                if(payload[index] != this) {
                    otherDrones +=(0, payload[index]);
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
                    // send testDriver, CompletedPoint;
                    raise Success;
                }
			}
        }
        on Success goto WaitForDstRequest;
    }
}
