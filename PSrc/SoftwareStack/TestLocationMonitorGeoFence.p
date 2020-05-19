fun MonitorLocation(robotId: int): int;
fun collisionSafe(): int;

machine LocationMonitorGeoFence {
    var taskPlanner: machine;
    start state Init {
        entry (payload: (machine, int)) {
            var robotID: int;
            var robotSafe: int;
            var collisionFree: int;
            var i: int;
            var y : int;
            taskPlanner = payload.0;
            robotID = payload.1;
            i = 0;
            while (i < 120) {
                robotSafe = MonitorLocation(robotID);
                if (robotSafe == 0) {
                    y = switchACtoSC(0,robotID);
                }

                if (robotSafe == 1) {
                    y = switchSCtoAC(0,robotID);
                }
                i = i + 1;
            }
            
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
        }
    }
}
