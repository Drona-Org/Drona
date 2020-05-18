fun switchACtoSC(rtaModuleID: int, robotID: int): int;
fun switchSCtoAC(rtaModuleID: int, robotID: int): int;
fun getCurrentPercentage(robotID: int): int;

fun MonitorBattery(batteryLevel: int, robotID: int) {
    var batteryThreshold: int; // computed offline
    var y: int;
    batteryThreshold = 5;
    print "batteryLevel Robot{0}: {1}\n", robotID, batteryLevel;
    if (batteryLevel <= batteryThreshold) {
        print "Robot {0} Low Battery!\n", robotID;
        y = switchACtoSC(1,robotID);
    } else if (batteryLevel > batteryThreshold) {
        print "Robot {0} Safe Battery!\n", robotID;
        y = switchSCtoAC(1,robotID);
    }
}

machine Battery {
    var taskPlanner: machine;
    var robotID: int;
    var currPercentage: int;
    var x: int;

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
                MonitorBattery(getCurrentPercentage(robotID), robotID);                
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }
}