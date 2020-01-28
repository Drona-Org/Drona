fun omplMotionPlanExternal(destinations: seq[(float, float, float)], robot_id: int): int;
fun Sleep(time: float): int;
fun ROSGoTo(arr: int, robot_id: int): int;

event Success;
event Send_Next_Point : (float, float, float);
event Send_Ping_Back_Handler;
event Critical_Battery;
event Robot_Safe;
event Execute_Path: int;
event Path_Completed;
event new_Critical_Battery;
event Completed_Point;
event eConfigDrone: seq[machine];


fun BROADCAST(allTarget: seq[machine], ev: event, payload: any, source: machine)
{
	var index: int;
	index = 0;
	while(index < sizeof(allTarget))
	{
		if(source != allTarget[index])
		{
			send allTarget[index], ev, payload;
		}
		index = index + 1;
	}
}

machine TestDriver {
    var workerDrones: seq[machine];
    var mailCount: int;
    var numOfWorkerDrones: int;

    start state Init {
        entry {
            var index : int;
			var temp: machine;

			mailCount = 4;
			numOfWorkerDrones = 2;

			index = 1;
			while(index < numOfWorkerDrones+1) {
				temp = new DroneTaskPlanner(index, this);
				workerDrones += (0, temp);
			    index = index + 1;
			}

			BROADCAST(workerDrones, eConfigDrone, workerDrones, this);
            raise Success;
        }
        on Success goto StartSendingMailState;
    }

    state StartSendingMailState {
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
                send workerDrones[0], Send_Next_Point, s[counter];
                receive {
                    case Completed_Point: {
                        counter = counter +1;
                        // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
                        // For now we have finished
                    }
			    }
            }
            
            send workerDrones[1], Send_Next_Point, s[counter];
            receive {
                case Completed_Point: {
                    counter = counter +1;
                }
            }

            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {}
}

machine DroneTaskPlanner {
    var myId: int;
    var otherDrones: seq[machine];
    var my_project: machine;
    var my_motion_planner: machine;

    start state Init {
        entry (payload: (int, machine)) {
            myId = payload.0;
            my_project = payload.1;
            my_motion_planner = new MotionPlanner((this, myId));
        }

        on eConfigDrone goto WaitForMailRequest with (payload: seq[machine]) {
            var index : int;
            index = 0;
            while(index < sizeof(payload))
            {
                if(payload[index] != this)
                    otherDrones +=(0, payload[index]);
                index = index + 1;
            }
        }
    }

    state WaitForMailRequest {
        entry {}
        on Send_Next_Point goto Send_Next_Point_State;
    }

    state Send_Next_Point_State {
        entry (payload: (float, float, float)) {
            send my_motion_planner, Send_Next_Point, payload;
            receive {
				case Completed_Point: {
                    send my_project, Completed_Point;
                    raise Success;
                }
			}
        }
        on Success goto WaitForMailRequest;
    }

}











// machine Project
// {
//     var my_robot: machine;
//     var my_robot2: machine;

//     start state Init {
// 		entry {
//             my_robot = new Robot(this, 1);
//             my_robot2 = new Robot(this, 2);
// 			raise Success;
// 		}
//         on Success goto Send_Points_State;
// 	}

//     state Send_Points_State {
//         entry {
//             var s: seq[(float, float, float)];
//             var counter: int;

//             s = default(seq[(float, float, float)]);
//             s += (0, (0.0, 0.0, 0.0));
//             s += (1, (2.0, 0.0, 0.0));
//             s += (2, (2.0, 2.0, 0.0));
//             s += (3, (0.0, 2.0, 0.0));

//             counter = 0;
//             while (counter < 3) {
//                 send my_robot, Send_Next_Point, s[counter];
//                 receive {
//                     case Completed_Point: {
//                         counter = counter +1;
//                         // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
//                         // For now we have finished
//                     }
// 			    }
//             }
            
//             send my_robot2, Send_Next_Point, s[counter];
//             receive {
//                 case Completed_Point: {
//                     counter = counter +1;
//                     // TODO: Potentially have an array of Points and on recieve increase counter and send the corresponding idx in the array
//                     // For now we have finished
//                 }
//             }

//             raise Success;
//         }
//         on Success goto WaitRequest;
//     }

//     state WaitRequest {
//         entry {}
//         on Completed_Point goto WaitRequest;
//     }
// }

// machine Robot 
// {
//     var id: int;
//     var my_project: machine;
//     var my_battery: machine;
//     var my_motion_planner: machine;

// 	start state Init {
// 		entry (payload: (proj: machine, rid: int)) {
//             my_project = payload.proj;
//             id = payload.rid;
//             // my_battery = new Battery(this);
//             my_motion_planner = new MotionPlanner((this, id));
//             raise Success;
// 		}
//         on Success goto WaitRequest;
// 	}

//     state WaitRequest {
//         entry {}
//         on Send_Next_Point goto Send_Next_Point_State;
//         on Completed_Point goto Completed_Point_State;
//         on Critical_Battery goto Critical_Battery_State;

//     }

//     state Send_Next_Point_State {
//         entry (payload: (float, float, float)) {
//             send my_motion_planner, Send_Next_Point, payload;
//             receive {
// 				case Completed_Point: {
//                     raise Completed_Point;
//                 }
// 			}
//         }
//         on Completed_Point goto Completed_Point_State;
//     }

//     state Completed_Point_State {
//         entry {
//             send my_project, Completed_Point;
//             raise Success;
//         }
//         on Success goto WaitRequest;
//     }

//     state Critical_Battery_State {
//         entry {
//             var x: int;
//             var safe_ompl_motion_plan: int;
//             var s: seq[(float, float, float)];
//             print "ROBOT IN Critical_Battery STATE\n";

//             s = default(seq[(float, float, float)]);
//             s += (0, (0.5, 1.0, 0.0));
//             s += (1, (0.5, 1.0, 0.0));

//             raise Success;
//         }
//         on Success goto WaitRequest;
//     }
// }

// machine Battery 
// {
//     var my_robot: machine;

// 	start state Init {
// 		entry (payload: machine) {
//             my_robot = payload;
//             Sleep(2.0);
//             send my_robot, Critical_Battery;
//             raise Success;
// 		}
//         on Success goto WaitRequest;
// 	}

//     state WaitRequest {
//         entry {}
//     }
// }