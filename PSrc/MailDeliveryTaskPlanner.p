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
            print "INSIDE BROADCAST\n";
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
				workerDrones += (index-1, temp);
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
                        counter = counter + 1;
                    }
			    }
            }
            
            send workerDrones[1], Send_Next_Point, s[counter];
            receive {
                case Completed_Point: {
                    counter = counter + 1;
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
