machine PlanExecutor 
{
    var motion_planner: machine;
    var robot_id: int;

	start state Init {
		entry (payload: (mp: machine, rid: int)) {
            motion_planner = payload.mp;
			robot_id = payload.rid;
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on Execute_Path goto Execute_Path_State;
    }

    state Execute_Path_State {
        entry (payload: int) {
            // call foreign function that executes this path in ROS
            var x: int;
            x = ROSGoTo(payload, robot_id);
            send motion_planner, Path_Completed;
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
