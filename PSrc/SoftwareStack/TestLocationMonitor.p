fun MonitorLocation(robotId: int): int;
fun collisionSafe(): int;

machine LocationMonitor {
    var taskPlanner: machine;
    start state Init {
        entry (payload: machine) {
            var robot1Safe: int;
            var robot2Safe: int;
            var collisionFree: int;
            var i: int;
            var y : int;
            taskPlanner = payload;
            i = 0;
            while (i < 120) {
                // Geofence Example
                robot1Safe = MonitorLocation(1);
                robot2Safe = MonitorLocation(2);
                if (robot1Safe == 0) {
                    y = switchACtoSC(0,1);
                }

                if (robot1Safe == 1) {
                    y = switchSCtoAC(0,1);
                }

                if (robot2Safe == 0) {
                    y = switchACtoSC(0,2);
                }

                if (robot2Safe == 1) {
                    y = switchSCtoAC(0,2);
                }

                // Collision Avoidance Example
                // collisionFree = collisionSafe();
                // if (collisionFree == 0) {
                //     y = switchACtoSC(2,-1);
                // }

                // if (collisionFree == 1) {
                //     y = switchSCtoAC(2,-1);
                // }

                i = i + 1;
            }
            /* 
            TODO: 
                1. Figure out exactly what this experiment should be what is considered unsafe. Based on that, we may need to split location
                    monitors, into 1 for each robot. We would only keep it this way, if location monitoring is based on collisions/interaction of both robots.
                2. Setup location monitors such that the foreign func `MonitorLocation` returns a bool (i guess for each robot??), as to whether
                    it is safe. Then we can call the `SwitchACtoSC` and `SwitchSCtoAC` funcs directly from the P monitor.
            */

            
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
        }
    }
}
