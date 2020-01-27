

machine MotionPlanner 
{
    var my_robot: machine;
    var robot_id: int;
    var my_plan_executor: machine;
    var my_robot_last_location: (float, float, float);

	start state Init {
		entry (payload: (machine, int)) {
            my_robot = payload.0;
            robot_id = payload.1;
            my_plan_executor = new PlanExecutor(this, robot_id);
            my_robot_last_location = (0.0, 0.0, 0.0);
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on Send_Next_Point goto Compute_Path_And_Send_To_PE;
        on Completed_Point goto Completed_Point_State;

        // TODO: Handle Critical_Battery event from Robot for Proper Implementation
        // on Critical_Battery goto Safe_Motion_Plan;
    }

    state Completed_Point_State {
        entry {
            send my_robot, Completed_Point;
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state Compute_Path_And_Send_To_PE {
        entry (payload: (float, float, float)) {
            var s: seq[(float, float, float)];
            var ompl_motion_plan : int;

            // call foreign function computing path from curr location to payload point
            s = default(seq[(float, float, float)]);
            s += (0, my_robot_last_location);
            s += (1, payload);

            // ompl_motion_plan = ompl(payload);
            ompl_motion_plan = omplMotionPlanExternal(s, robot_id);
            // send my_plan_executor, execute_path, ompl_motion_plan
            send my_plan_executor, Execute_Path, ompl_motion_plan;
            // receive path_completed
            receive {
				case Path_Completed: {
                    my_robot_last_location = payload;
                    raise Completed_Point;
                }
			}
        }
        on Completed_Point goto Completed_Point_State;
    }

}