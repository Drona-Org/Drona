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
        entry (payload: seq[(float, float, float)]) {
            var x: int;
            var i: int;
            var s: int;
            var o: int;

            i = 0;
            while (i < sizeof(payload)) {
                // call a dm function, returns safe or not safe (not safe if at least one rta module is not safe)
                s = decisionModule(payload[i], robotId);
                // call safe controller if dm not safe
                if (s == 0) {
                    o = safeController(payload[i], robotId);
                }
                // else call advanced controller function with this way point
                if (s == 1) {
                    o = advancedController(payload[i], robotId);
                }
                i = i+1;
            }
            send motionPlanner, PathCompleted; // Signals the MP that it has finished executing this path
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
