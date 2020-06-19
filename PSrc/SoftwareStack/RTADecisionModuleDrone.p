machine RTADecisionModuleDrone {
    var planExecutor: machine;
    var robotId: int;
    var delta: int;

	start state Init {
		entry (payload: (pe: machine, rid: int, delta: int)) {
            planExecutor = payload.pe;
			robotId = payload.rid;
            delta = payload.delta;
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on DecisionEvent goto DecisionModuleState;
    }

    state DecisionModuleState {
        entry (payload: (seq[(float, float, float)], int)) {
            var s1: int;

            s1 = decisionModuleDrone(payload.0, robotId, delta, payload.1);
            if (s1 == 0) {
                send planExecutor, SafeCollision;
                raise Success;
            }

            if(s1 == 1) {
                send planExecutor, AdvancedController;
                raise Success;
            }
        }
        on Success goto WaitRequest;
    }
}
