/*
This file contains the Plan Executor implementation. There is a single Plan Executor
machine for each Motion planner machine. The Plan Executor takes the plan from the Motion Planner,
and physically executes this plan. 
*/
machine PlanExecutor {
    var motionPlanner: machine;
    var robotId: int;
    // var RTASurveillance: machine;
    var RTACollision: machine;

	start state Init {
		entry (payload: (mp: machine, rid: int)) {
            motionPlanner = payload.mp;
			robotId = payload.rid;
            // RTASurveillance = new RTASurveillance(this, robotId, 1);
            RTACollision = new RTACollision(this, robotId, 1);
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on ExecutePath goto ExecutePathState;
    }

    state CompletedPointState {
        entry {
            send motionPlanner, PathCompleted;
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state ExecutePathState {
        entry (payload: seq[(float, float, float)]) {
            // send RTASurveillance, ExecutePath, payload;
            send RTACollision, ExecutePath, payload;
            receive {
				case PathCompleted: {
                    raise CompletedPoint;
                }
			}
        }
        on CompletedPoint goto CompletedPointState;
    }
}
