machine RTASurveillance {
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
        on ExecutePath goto ExecutePathState;
    }

    state ExecutePathState {
        entry (payload: seq[(float, float, float)]) {
            var i: int;
            var s: int;
            var o: int;

            i = 0;
            while (i < sizeof(payload)) {
                // call a dm function, returns safe or not safe (not safe if at least one rta module is not safe)
                print "CALLING DM FROM P\n";
                s = decisionModule(payload, robotId, delta, i);
                print "MY S VALUE IS {0}\n", s;
                // call safe controller if dm not safe
                if (s == 0) {
                    o = safeController(payload[i], robotId);
                    i = i+1;
                }

                if (s == 1) {
                    o = advancedController(payload[i], robotId);
                    i = i+1;
                }
            }
            send planExecutor, PathCompleted; // Signals the MP that it has finished executing this path
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
