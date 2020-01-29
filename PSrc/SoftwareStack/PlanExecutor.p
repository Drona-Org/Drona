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
            x = ROSGoTo(payload, robotId);
            send motionPlanner, PathCompleted;
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
