/*
This file contains the Plan Executor implementation. There is a single Plan Executor
machine for each Motion planner machine. The Plan Executor takes the plan from the Motion Planner,
and physically executes this plan. 
*/
machine PlanExecutor {
    var motionPlanner: machine;
    var robotId: int;
    // var RTACollision: machine;
    var RTASurveillance: machine;

	start state Init {
		entry (payload: (mp: machine, rid: int)) {
            motionPlanner = payload.mp;
			robotId = payload.rid;
            // RTACollision = new RTACollision(this, robotId, 1);
            RTASurveillance = new RTASurveillance(this, robotId, 1);
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
            // send RTACollision, ExecutePath, payload;
            send RTASurveillance, ExecutePath, payload;
            receive {
				case PathCompleted: {
                    raise CompletedPoint;
                }
			}
        }
        on CompletedPoint goto CompletedPointState;
    }
}
