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
            var robot_z: float;

            s = default(seq[(float, float, float)]);
            robot_x = getRobotLocationX(robotId);
            robot_y = getRobotLocationY(robotId);
            robot_z = getRobotLocationZ(robotId);

            s += (0, (robot_x, robot_y, robot_z));
            s += (1, payload);

            omplMotionPlan = OmplMotionPlanExternal(s, robotId); // Foreign function call to OMPL motion planner
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
