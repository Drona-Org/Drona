/* 
This file contains the Monitor for the Geofence RTA module.
The monitor repeatedly cheks to see if the robots are exiting the 5x5 grid.
If so, the robots move backwards until within the are within the safe, 4x4 grid of the workspace.
There is 1 GeoFence monitor per robot machine.
*/
fun MonitorLocation(robotId: int): int;

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
            while (i < 500) {
                robotSafe = MonitorLocation(robotID); // Checks whether the robot is in a safe region of the workspace.
                if (robotSafe == 0) {
                    y = switchACtoSC(0,robotID); // If the robot is reaching an unsafe region, switch to SC which moves it back to safety
                }

                if (robotSafe == 1) {
                    y = switchSCtoAC(0,robotID); // If safe, then operate as normal. 
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
