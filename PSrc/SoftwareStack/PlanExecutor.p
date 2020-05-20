/*
This file contains the Plan Executor implementation. There is a single Plan Executor
machine for each Motion planner machine. The Plan Executor takes the plan from the Motion Planner,
and physically executes this plan. 
*/
machine PlanExecutor {
    var motionPlanner: machine;
    var robotId: int;

	start state Init {
		entry (payload: (mp: machine, rid: int)) {
            motionPlanner = payload.mp;
			robotId = payload.rid;
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on ExecutePath goto ExecutePathState;
    }

    state ExecutePathState {
        entry (payload: int) {
            var x: int;
            x = ROSGoTo(payload, robotId); // Executes the path from the Motion Planner
            send motionPlanner, PathCompleted; // Signals the MP that it has finished executing this path
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
