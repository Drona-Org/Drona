machine MotionPlanner {
    var robot: machine;
    var robotId: int;
    var planExecutor: machine;

	start state Init {
		entry (payload: (machine, int)) {
            robot = payload.0;
            robotId = payload.1;
            planExecutor = new PlanExecutor(this, robotId);
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on SendGoalPoint goto ComputePathAndSendToPE;
        on CompletedPoint goto CompletedPointState;

    }

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
            var omplMotionPlan : int;

            s = default(seq[(float, float, float)]);
            s += (0, payload);
            s += (1, payload);

            omplMotionPlan = omplMotionPlanExternal(s, robotId);
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
