/*
This file contains the Motion Planner implementation. There is a single motion planner
machine per Robot machine, and it is responsible for creating a path to the destination point,
which is then sent to the Plan Executor. 
*/

machine MotionPlanner {
    var robot: machine;
    var robotId: int;
    var planExecutor: machine;

	start state Init {
		entry (payload: (machine, int)) {
            robot = payload.0;
            robotId = payload.1;
            planExecutor = new PlanExecutor(this, robotId); // Creates corresponding Plan Executor
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on SendGoalPoint goto ComputePathAndSendToPE;
        on CompletedPoint goto CompletedPointState;

    }

    // Signals to the Robot machine that the Plan Executor
    // and the Motion Planner have finished executing this destination
    state CompletedPointState {
        entry {
            send robot, CompletedPoint;
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state ComputePathAndSendToPE {
        entry (payload: (float, float, float)) {
            var s: seq[(float, float, float)];
            var omplMotionPlan : seq[(float, float, float)];
            var robot_x: float;
            var robot_y: float;

            s = default(seq[(float, float, float)]);
            robot_x = getRobotLocationX(robotId);
            robot_y = getRobotLocationY(robotId);
            print "ROBOT X: {0}\n", robot_x;
            print "ROBOT Y: {0}\n", robot_y;
            s += (0, (robot_x, robot_y, 0.0));
            // s += (0, payload);
            s += (1, payload);

            omplMotionPlan = OmplMotionPlanExternal(s, robotId); // Foreign function call to OMPL motion planner
            print "ompl Motion Plan returned from function {0}\n", omplMotionPlan;
            send planExecutor, ExecutePath, omplMotionPlan;
            receive {
				case PathCompleted: {
                    raise CompletedPoint;
                }
			}
        }
        on CompletedPoint goto CompletedPointState;
    }
}
