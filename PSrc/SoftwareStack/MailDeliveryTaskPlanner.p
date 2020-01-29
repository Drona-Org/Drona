fun OmplMotionPlanExternal(destinations: seq[(float, float, float)], robot_id: int): int;
fun ROSGoTo(arr: int, robot_id: int): int;
fun Sleep(time: float): int;

type MailInfo = (mail_id: int, priority: int);
type MailReq  = (mInfo: MailInfo, dest: (float, float, float), sender: machine);

event Success;
event SendNextMailReq: MailReq;
event SendGoalPoint: (float, float, float);
event ExecutePath: int;
event PathCompleted;
event CompletedPoint;
event eConfigDrone: seq[machine];


fun BROADCAST(allTarget: seq[machine], ev: event, payload: any, source: machine) {
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
            var mailInfo: MailInfo;
            var tempMailRequest: MailReq;
            var counter: int;
            var droneId: int;
            var mailRequests: seq[MailReq];
            mailRequests = default(seq[MailReq]);

            mailInfo.mail_id = 1;
            mailInfo.priority = 1;

            tempMailRequest.mInfo = mailInfo;
            tempMailRequest.dest = (0.0, 0.0, 0.0);
            tempMailRequest.sender = this;
            mailRequests += (0, tempMailRequest);

            tempMailRequest.mInfo = mailInfo;
            tempMailRequest.dest = (2.0, 0.0, 0.0);
            tempMailRequest.sender = this;
            mailRequests += (1, tempMailRequest);

            tempMailRequest.mInfo = mailInfo;
            tempMailRequest.dest = (2.0, 2.0, 0.0);
            tempMailRequest.sender = this;
            mailRequests += (2, tempMailRequest);

            tempMailRequest.mInfo = mailInfo;
            tempMailRequest.dest = (0.0, 2.0, 0.0);
            tempMailRequest.sender = this;
            mailRequests += (3, tempMailRequest);

            counter = 0;
            droneId = 1;

            while (counter < mailCount) {
                if (droneId == 1) {
                    droneId = 0;
                } else {
                    droneId = 1;
                }

                send workerDrones[droneId], SendNextMailReq, mailRequests[counter];
                receive {
                    case CompletedPoint: {
                        counter = counter + 1;
                    }
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
    var testDriver: machine;
    var motionPlanner: machine;

    start state Init {
        entry (payload: (int, machine)) {
            myId = payload.0;
            testDriver = payload.1;
            motionPlanner = new MotionPlanner((this, myId));
        }

        on eConfigDrone goto WaitForMailRequest with (payload: seq[machine]) {
            var index : int;
            index = 0;
            while(index < sizeof(payload)) {
                if(payload[index] != this) {
                    otherDrones +=(0, payload[index]);
                }
                index = index + 1;
            }
        }
    }

    state WaitForMailRequest {
        entry {}
        on SendNextMailReq goto ProcessMailReq;
    }

    state ProcessMailReq {
        entry (payload: MailReq) {
            send motionPlanner, SendGoalPoint, payload.dest;
            receive {
				case CompletedPoint: {
                    send testDriver, CompletedPoint;
                    raise Success;
                }
			}
        }
        on Success goto WaitForMailRequest;
    }
}
