fun omplMotionPlanExternal(destinations: seq[(float, float, float)]): int;
fun testArray(arr: int): int;

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

    start state Init {
		entry {
            my_robot = new Robot(this);
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
            s += (4, (0.0, 0.0, 0.0));

            counter = 0;
            while (counter < 5) {
                print "MY CURR POINT!!!: {0}\n", s[counter];
                print "INITIAL COUNTER VALUE {0}\n", counter;
                send my_robot, Send_Next_Point, s[counter];
                receive {
                    case Completed_Point: {
                        counter = counter +1;
                        // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
                        // For now we have finished
                    }
			    }
                print "FINAL COUNTER!!!!!!! {0}\n", counter;
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
    var my_project: machine;
    var my_battery: machine;
    var my_motion_planner: machine;

	start state Init {
		entry (payload: machine) {
            my_project = payload;
            // my_battery = new Battery(this);
            my_motion_planner = new MotionPlanner(this);
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
        on Success goto WaitRequest;
        on Completed_Point goto Completed_Point_State;
        on Critical_Battery goto Critical_Battery_State;
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
            print "ROBOT IN Critical_Battery STATE\n";
            print "---------------------\n";
            print "---------------------\n";
            print "---------------------\n";
            // x = ompl((0.5, 1.0, 0.0));
            // x = goTo(x);
            // Sleep(2.0);

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



machine MotionPlanner 
{
    var my_robot: machine;
    var my_plan_executor: machine;
    var my_robot_last_location: (float, float, float);

	start state Init {
		entry (payload: machine) {
            my_robot = payload;
            my_plan_executor = new PlanExecutor(this);
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
            ompl_motion_plan = omplMotionPlanExternal(s);
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

    // TODO: Have Safe_Motion_Plan State for Proper Implementation
    // state Safe_Motion_Plan {
    //     entry {
    //         // call foreign function computing path from curr location to predetermined charging station
    //         // var safe_ompl_motion_plan : int;
    //         // safe_ompl_motion_plan = ompl(7);
    //         print "IN SAFE MOTION PLAN!!! \n";

    //         // send my_plan_executor, execute_path, safe_ompl_motion_plan
    //         // send my_plan_executor, Execute_Path, safe_ompl_motion_plan;
    //         // receive path_completed
    //         receive {
	// 			case Path_Completed: {
    //                 // send my_robot, Robot_Safe;
    //                 raise Robot_Safe;
    //             }
	// 		}
    //         raise Robot_Safe;
    //         send my_robot, new_Robot_Safe;
    //         raise Success;
    //     }
        
    //     // send my_robot, Robot_Safe;
    //     on Success goto WaitRequest;
    //     // on Robot_Safe goto Robot_Safe_State;
    // }

    // state Robot_Safe_State {
    //     entry {
    //         send my_robot, Robot_Safe;
    //         raise Success;
    //     }
    //     on Success goto WaitRequest;
    // }
}


machine PlanExecutor 
{
    var my_motion_planner: machine;

	start state Init {
		entry (payload: machine) {
            my_motion_planner = payload;
            raise Success;
		}
        on Success goto WaitRequest;
	}

    state WaitRequest {
        entry {}
        on Execute_Path goto Execute_Path_State;
    }

    state Execute_Path_State {
        entry (payload: int) { // payload will actually be list of points, its the path computed between 2 points
            // call foreign function that executes this path in ROS
            var x: int;
            // x = goTo(payload);
            print "I AM EXECUTING A PATH!!!!!!!\n";
            x = testArray(payload);
            // Sleep(1.0);
            send my_motion_planner, Path_Completed;
            // print "Finished Executing Path!!!! \n";
            raise Success;
        }
        on Success goto WaitRequest;
    }
}
































// ------------------- OLD DRONA SYNCHRONOUS SIMULATION -----------------------------------
// event Success;
// event critical_battery;
// event receiveMotionPlan: int;
// event executePlan: int;
// event requestMotionPlan : seq[(float, float, float)];


// machine MotionPlanner
// {
//     var myRobot : machine;
// 	var destinations: int;
// 	var x: int;

//     start state Init {
//         entry (payload: machine) {
//             myRobot = payload;
// 			raise Success;
// 		}
//         on Success goto WaitRequest;
//     }

//     state WaitRequest {
//         entry {}
//         on requestMotionPlan goto requestMotionPlanState;
//     }

//     state requestMotionPlanState {
//         entry (payload : seq[(float, float, float)]) {
//             destinations = omplMotionPlanExternal(payload);
//             send myRobot, receiveMotionPlan, destinations;
//             raise Success;
//         }
//         on Success goto WaitRequest;
//     }
// }


// machine PlanExecutor
// {
//     var myRobot: machine;
//     var x: int;
//     start state Init {
//         entry (payload: machine) {
//             myRobot = payload;
// 			raise Success;
// 		}
//         on Success goto WaitRequest;
//     }

//     state WaitRequest {
//         entry {}
//         on executePlan goto executePlanState;
//     }

//     state executePlanState {
//         entry (payload: int) {
//             x = testArray(payload);
//             raise Success;
//         }
//         on Success goto WaitRequest;
//     }
// }


// machine Robot
// {  
//     var my_project: machine;
// 	var motion_planner: machine;
//     var plan_executor: machine;
//     var my_battery: machine;
//     var ompl_motion_plan: int;
//     var motionplan : seq[(float, float, float)];
//     var safe_motion_plan: int;

//     start state Init {
//         entry (payload: seq[(float, float, float)]) {
//             motion_planner = new MotionPlanner(this);
//             plan_executor = new PlanExecutor(this);
//             my_battery = new Battery(this);
//             // receive {
// 			// 	case critical_battery: { goto safeControllerState; }
// 			// }
//             motionplan = payload;
// 			send motion_planner, requestMotionPlan, payload;
//             receive {
// 				case receiveMotionPlan: (tmp: int) { ompl_motion_plan = tmp; }
// 			}
//             raise Success;
// 		}
//         on Success goto sendPlantoExecutorState;
//     }

//     state WaitRequest {
//         entry {}
//         on critical_battery goto safeControllerState;

//     }

//     state sendPlantoExecutorState {
//         entry {
//             send plan_executor, executePlan, ompl_motion_plan;
//         }
//         on Success goto WaitRequest;
//         on critical_battery goto safeControllerState;
//     }

//     state safeControllerState {
//         entry {
//             var s: seq[(float, float, float)];
//             s = default(seq[(float, float, float)]);
//             s += (0, (0.5, 1.0, 0.0));
//             s += (1, (0.5, 1.0, 0.0));
//             print "HELLO S!!!! {0}\n", s;
//             send motion_planner, requestMotionPlan, s;
//             receive {
// 				case receiveMotionPlan: (tmp: int) { safe_motion_plan = tmp; }
// 			}
//             send plan_executor, executePlan, safe_motion_plan;
//         }
//     }
// }

// machine Battery 
// {
//     var my_robot: machine;
//     var battery_percentage: float;

//     start state Init {
//         entry (payload: machine) {
//             my_robot = payload;
//             battery_percentage = 1.0;
//             decrease_battery();
//             raise Success;
// 		}
//         on Success goto WaitRequest;
//     }

//     state WaitRequest {
//         entry {}
//     }

//     fun decrease_battery() {
//         while (battery_percentage > 0.5) {
//             print "BATTERY PERCENTAGE: {0}\n", battery_percentage;
//             battery_percentage = battery_percentage - 0.1;
//         }
//         send my_robot, critical_battery;
//     }
// }


// machine Project
// {
//     var robot_target: machine;
//     var s: seq[(float, float, float)];
//     // TODO: Include the xml file path and pass to robot
    
//     start state Init {
//         entry {
            
//             // sequence of destination points
//             s = default(seq[(float, float, float)]);
//             s += (0, (0.0, 0.0, 0.0));
//             s += (1, (2.0, 0.0, 0.0));
//             s += (2, (2.0, 2.0, 0.0));
//             s += (3, (0.0, 2.0, 0.0));
//             s += (4, (0.0, 0.0, 0.0));
            
//             // initializing robot for this project with points
//             robot_target = new Robot(s);
//             raise Success;         
//         }
//         on Success goto WaitRequest;
//     }
    
//     state WaitRequest {
//         entry {}
//     }
// }
