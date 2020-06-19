machine RTADecisionModule {
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
            var s2: int;
            var s3: int;
            var advanced: int;

            advanced = 1;

            s1 = decisionModuleCollision(payload.0, robotId, delta, payload.1);
            if (s1 == 0) {
                send planExecutor, SafeCollision;
                advanced = 0;
                raise Success;
            }

            s2 = decisionModuleGeoFence(payload.0, robotId, delta, payload.1);
            if (s2 == 0) {
                send planExecutor, SafeGeoFence;
                advanced = 0;
                raise Success;
            }

            s3 = decisionModuleBattery(payload.0, robotId, delta, payload.1);
            if (s3 == 0) {
                send planExecutor, SafeBattery;
                advanced = 0;
                raise Success;
            }

            if(advanced == 1) {
                send planExecutor, AdvancedController;
                raise Success;
            }
        }
        on Success goto WaitRequest;
    }
}
