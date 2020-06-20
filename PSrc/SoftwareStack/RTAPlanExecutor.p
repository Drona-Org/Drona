/*
This file contains the Plan Executor implementation. There is a single Plan Executor
machine for each Motion planner machine. The Plan Executor takes the plan from the Motion Planner,
and physically executes this plan. 
*/
machine PlanExecutor {
    var motionPlanner: machine;
    var robotId: int;
    // var RTADecisionModule: machine;
    var RTADecisionModuleDrone: machine;

	start state Init {
		entry (payload: (mp: machine, rid: int)) {
            motionPlanner = payload.mp;
			robotId = payload.rid;
            // RTADecisionModule = new RTADecisionModule(this, robotId, 1);
            RTADecisionModuleDrone = new RTADecisionModuleDrone(this, robotId, 1);
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
            var i: int;
            var o: int;

            i = 0;
            while (i < sizeof(payload)) {
                // call a dm function, returns safe or not safe (not safe if at least one rta module is not safe)
                // send RTADecisionModule, DecisionEvent, (payload, i);
                send RTADecisionModuleDrone, DecisionEvent, (payload, i);
                // Robot Surveillance
                // receive {
                //     case SafeCollision: {
                //         o = safeControllerCollision(payload[i], robotId);
                //     }

                //     case SafeGeoFence: {
                //         o = safeControllerGeoFence(payload[i], robotId);
                //     }

                //     case SafeBattery: {
                //         o = safeControllerBattery(payload[i], robotId);
                //     }

                //     case AdvancedController: {
                //         o = advancedController(payload[i], robotId);
                //     }
                // }

                // Drone
                receive {
                    case SafeCollision: {
                        o = safeControllerDrone(payload[i], robotId);
                    }

                    case AdvancedController: {
                        o = advancedControllerDrone(payload[i], robotId);
                    }
                }

                // Adversarial
                // receive {
                //     case SafeCollision: {
                //         o = safeControllerAdv(payload[i], robotId);
                //     }

                //     case AdvancedController: {
                //         o = advancedControllerAdv(payload[i], robotId);
                //     }
                // }

                i = i + 1;
            }

            raise CompletedPoint;
        }
        on CompletedPoint goto CompletedPointState;
    }
}
