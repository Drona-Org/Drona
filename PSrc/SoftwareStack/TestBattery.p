fun switchACtoSC(rtaModuleID: int, robotID: int): int;
fun switchSCtoAC(rtaModuleID: int, robotID: int): int;
fun getCurrentPercentage(robotID: int): int;
// TODO: Create foreign function getCurrPercentage() that keeps track of battery percentage in Cpp. This is so we can reset the percentage after the SC controller. 

machine Battery {
    var taskPlanner: machine;
    var robotID: int;
    var currPercentage: int;
    var x: int;
    var y: int;
    start state Init {
        entry (payload: (machine, int)) {
            taskPlanner = payload.0;
            robotID = payload.1;
            currPercentage = 100;
            raise Success;
        }
        on Success goto StartBattery;
    }

    state StartBattery {
        entry {
            while (currPercentage > 50) {
                x = Sleep(10.0);
                currPercentage = getCurrentPercentage(robotID);
                print "currPercentage Robot{0}: {1}\n", robotID, currPercentage;
                if (currPercentage <= 94) {
                    print "Robot {0} Low Battery!\n", robotID;
                    y = switchACtoSC(1,1);
                    y = switchACtoSC(1,2);
                } else if (currPercentage > 94) {
                    print "Robot {0} Safe Battery!\n", robotID;
                    y = switchSCtoAC(1,1);
                    y = switchSCtoAC(1,2);
                }
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }
}