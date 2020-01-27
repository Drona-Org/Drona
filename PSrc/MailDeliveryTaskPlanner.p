fun omplMotionPlanExternal(destinations: seq[(float, float, float)], robot_id: int): int;
fun Sleep(time: float): int;
fun ROSGoTo(arr: int, robot_id: int): int;


event Success;
event Send_Next_Point : (float, float, float); // Needs to be changed to be a (float, float, float)
event Completed_Point;
event Send_Ping_Back_Handler;
event Critical_Battery;
event Robot_Safe;
event Execute_Path: int; // Needs to be changed to be a (float, float, float)
event Path_Completed;
event new_Critical_Battery;


machine Project
{
    var my_robot: machine;
    var my_robot2: machine;

    start state Init {
		entry {
            my_robot = new Robot(this, 1);
            my_robot2 = new Robot(this, 2);
			raise Success;
		}
        on Success goto Send_Points_State;
	}

    state Send_Points_State {
        entry {
            var s: seq[(float, float, float)];
            var counter: int;

            s = default(seq[(float, float, float)]);
            s += (0, (0.0, 0.0, 0.0));
            s += (1, (2.0, 0.0, 0.0));
            s += (2, (2.0, 2.0, 0.0));
            s += (3, (0.0, 2.0, 0.0));

            counter = 0;
            while (counter < 3) {
                send my_robot, Send_Next_Point, s[counter];
                receive {
                    case Completed_Point: {
                        counter = counter +1;
                        // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
                        // For now we have finished
                    }
			    }
            }
            
            send my_robot2, Send_Next_Point, s[counter];
            receive {
                case Completed_Point: {
                    counter = counter +1;
                    // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
                    // For now we have finished
                }
            }

            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
        on Completed_Point goto WaitRequest;
    }
}

machine Robot 
{
    var id: int;
    var my_project: machine;
    var my_battery: machine;
    var my_motion_planner: machine;

	start state Init {
		entry (payload: (proj: machine, rid: int)) {
            my_project = payload.proj;
            id = payload.rid;
            my_battery = new Battery(this);
            my_motion_planner = new MotionPlanner((this, id));
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on Send_Next_Point goto Send_Next_Point_State;
        on Completed_Point goto Completed_Point_State;
        on Critical_Battery goto Critical_Battery_State;

    }

    state Send_Next_Point_State {
        entry (payload: (float, float, float)) {
            // raise Completed_Point;
            // send my_project, Completed_Point;
            // goto WaitRequest;
            send my_motion_planner, Send_Next_Point, payload;
            receive {
				case Completed_Point: {
                    raise Completed_Point;
                }
                // case Critical_Battery: {
                //     raise Critical_Battery;
                // }

			}
        }
        // on Success goto WaitRequest;
        on Completed_Point goto Completed_Point_State;
        // on Critical_Battery goto Critical_Battery_State;
    }

    state Completed_Point_State {
        entry {
            send my_project, Completed_Point;
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state Critical_Battery_State {
        entry {
            var x: int;
            var safe_ompl_motion_plan: int;
            var s: seq[(float, float, float)];
            print "ROBOT IN Critical_Battery STATE\n";

            s = default(seq[(float, float, float)]);
            s += (0, (0.5, 1.0, 0.0));
            s += (1, (0.5, 1.0, 0.0));

            // safe_ompl_motion_plan = omplMotionPlanExternal(s, id);
            // x = ROSGoTo(safe_ompl_motion_plan, id);

            // TODO: SEND EVENT TO MOTION PLAN FOR PROPER IMPLEMENTATION
            // send my_motion_planner, Critical_Battery;
            // receive {
			// 	case new_Robot_Safe: {
            //         // TODO: Once robot reaches safety, for now just tells Project to send another point. Should be ok??? NO This is not okay!
            //         // BROKEN HERE?????
            //         print "HELLO ROBOT IS SAFE!!!\n";
            //         raise Success;
            //     }
			// }
            // send my_project, Completed_Point;
            // print "ROBOT HAS ARRIVED TO SAFETY\n";
            raise Success;
        }
        on Success goto WaitRequest;
    }
}

machine Battery 
{
    var my_robot: machine;

	start state Init {
		entry (payload: machine) {
            my_robot = payload;
            print "IN BATTERY INIT\n";
            // TODO: somehow send critical battery to Robot
            // Sleep(0.1);
            Sleep(2.0);
            send my_robot, Critical_Battery;
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
    }
}