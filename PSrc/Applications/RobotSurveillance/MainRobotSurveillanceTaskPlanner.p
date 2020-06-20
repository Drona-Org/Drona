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
fun getRobotLocationZ(robotId: int): float;
fun workspaceSetup(): int;
fun randomLocation(): (float, float, float);
fun decisionModule(wayPoint: seq[(float, float, float)], robotId: int, delta: int, curr_point: int): int;
fun decisionModuleCollision(wayPoint: seq[(float, float, float)], robotId: int, delta: int, curr_point: int): int;
fun decisionModuleGeoFence(wayPoint: seq[(float, float, float)], robotId: int, delta: int, curr_point: int): int;
fun decisionModuleBattery(wayPoint: seq[(float, float, float)], robotId: int, delta: int, curr_point: int): int;
fun advancedController(wayPoint: (float, float, float), robotId: int): int;
fun safeController(wayPoint: (float, float, float), robotId: int): int;
fun safeControllerCollision(wayPoint: (float, float, float), robotId: int): int;
fun safeControllerGeoFence(wayPoint: (float, float, float), robotId: int): int;
fun safeControllerBattery(wayPoint: (float, float, float), robotId: int): int;

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
event SafeBattery;
event SafeGeoFence;
event SafeCollision;
event AdvancedController;

// Function used to setup Robot Machine to Robot Machine Communication in P
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
    var battery1: machine;
    var battery2: machine;
    var reqCount: int;
    var numOfWorkerRobots: int;
    var x: int;
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
            var i: int;

            DstRequests = default(seq[DstReq]);
            requestInfo.request_id = 1;
            requestInfo.priority = 1;

            // Adding a series of random destinations for robots to visit.
            i = 0;
            counter = 0;
            while (i < 20) {
                tempDstRequest.mInfo = requestInfo;
                tempDstRequest.dest = randomLocation();
                tempDstRequest.sender = this;
                send workerRobots[0], SendNextDstReq, tempDstRequest;

                tempDstRequest.mInfo = requestInfo;
                tempDstRequest.dest = randomLocation();
                tempDstRequest.sender = this;
                send workerRobots[1], SendNextDstReq, tempDstRequest;
                i = i + 1;
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
            //ShutdownROSSubscribers();
        }
    }
}
