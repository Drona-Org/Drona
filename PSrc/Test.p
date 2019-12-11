fun omplMotionPlanExternal(destinations: seq[(float, float, float)]): int;
fun testArray(arr: int): int;

event Success;
event critical_battery;
event receiveMotionPlan: int;
event executePlan: int;
event requestMotionPlan : seq[(float, float, float)];


machine MotionPlanner
{
    var myRobot : machine;
	var destinations: int;
	var x: int;

    start state Init {
        entry (payload: machine) {
            myRobot = payload;
			raise Success;
		}
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
        on requestMotionPlan goto requestMotionPlanState;
    }

    state requestMotionPlanState {
        entry (payload : seq[(float, float, float)]) {
            destinations = omplMotionPlanExternal(payload);
            send myRobot, receiveMotionPlan, destinations;
            raise Success;
        }
        on Success goto WaitRequest;
    }
}


machine PlanExecutor
{
    var myRobot: machine;
    var x: int;
    start state Init {
        entry (payload: machine) {
            myRobot = payload;
			raise Success;
		}
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
        on executePlan goto executePlanState;
    }

    state executePlanState {
        entry (payload: int) {
            x = testArray(payload);
            raise Success;
        }
        on Success goto WaitRequest;
    }
}


machine Robot
{  
    var my_project: machine;
	var motion_planner: machine;
    var plan_executor: machine;
    var my_battery: machine;
    var ompl_motion_plan: int;
    var motionplan : seq[(float, float, float)];
    var safe_motion_plan: int;

    start state Init {
        entry (payload: seq[(float, float, float)]) {
            motion_planner = new MotionPlanner(this);
            plan_executor = new PlanExecutor(this);
            my_battery = new Battery(this);
            // receive {
			// 	case critical_battery: { goto safeControllerState; }
			// }
            motionplan = payload;
			send motion_planner, requestMotionPlan, payload;
            receive {
				case receiveMotionPlan: (tmp: int) { ompl_motion_plan = tmp; }
			}
            raise Success;
		}
        on Success goto sendPlantoExecutorState;
    }

    state WaitRequest {
        entry {}
        on critical_battery goto safeControllerState;

    }

    state sendPlantoExecutorState {
        entry {
            send plan_executor, executePlan, ompl_motion_plan;
        }
        on Success goto WaitRequest;
        on critical_battery goto safeControllerState;
    }

    state safeControllerState {
        entry {
            var s: seq[(float, float, float)];
            s = default(seq[(float, float, float)]);
            s += (0, (0.5, 1.0, 0.0));
            s += (1, (0.5, 1.0, 0.0));
            print "HELLO S!!!! {0}\n", s;
            send motion_planner, requestMotionPlan, s;
            receive {
				case receiveMotionPlan: (tmp: int) { safe_motion_plan = tmp; }
			}
            send plan_executor, executePlan, safe_motion_plan;
        }
    }
}

machine Battery 
{
    var my_robot: machine;
    var battery_percentage: float;

    start state Init {
        entry (payload: machine) {
            my_robot = payload;
            battery_percentage = 1.0;
            decrease_battery();
            raise Success;
		}
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }

    fun decrease_battery() {
        while (battery_percentage > 0.5) {
            print "BATTERY PERCENTAGE: {0}\n", battery_percentage;
            battery_percentage = battery_percentage - 0.1;
        }
        send my_robot, critical_battery;
    }
}


machine Project
{
    var robot_target: machine;
    var s: seq[(float, float, float)];
    // TODO: Include the xml file path and pass to robot
    
    start state Init {
        entry {
            
            // sequence of destination points
            s = default(seq[(float, float, float)]);
            s += (0, (0.0, 0.0, 0.0));
            s += (1, (2.0, 0.0, 0.0));
            s += (2, (2.0, 2.0, 0.0));
            s += (3, (0.0, 2.0, 0.0));
            s += (4, (0.0, 0.0, 0.0));
            
            // initializing robot for this project with points
            robot_target = new Robot(s);
            raise Success;         
        }
        on Success goto WaitRequest;
    }
    
    state WaitRequest {
        entry {}
    }
}
