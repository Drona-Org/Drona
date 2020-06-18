/* 
This file contains the Battery simulation and the Monitor for the Battery Safety RTA module.
The monitor repeatedly cheks to see if the robots have sufficient charge to visit destination points.
If the monitor senses that the robots are not able to safely visit points, it deviates their path to route them to their charging station
in the workspace. There is one battery monitor per robot machine.
*/
fun switchACtoSC(rtaModuleID: int, robotID: int): int;
fun switchSCtoAC(rtaModuleID: int, robotID: int): int;
fun getCurrentPercentage(robotID: int): int;

fun MonitorBattery(batteryLevel: int, robotID: int) {
    var batteryThreshold: int; // computed offline
    var y: int;
    batteryThreshold = 90;
    print "batteryLevel Robot{0}: {1}\n", robotID, batteryLevel;
    if (batteryLevel <= batteryThreshold) { 
        print "Robot {0} Low Battery!\n", robotID;
        y = switchACtoSC(1,robotID); // If there is not enough charge to safely visit upcoming destinations, reroute to charging station
    } else if (batteryLevel > batteryThreshold) {
        print "Robot {0} Safe Battery!\n", robotID;
        y = switchSCtoAC(1,robotID); // If battery-safe, continue visiting destinations as normal.
    }
}

// Simulation Battery machine, since there is no concept of battery in gazebo simulator.
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
            while (currPercentage > 0) {
                x = Sleep(10.0);
                currPercentage = getCurrentPercentage(robotID); // Decreasing function that mimics battery depletion
                print "batteryLevel Robot{0}: {1}\n", robotID, currPercentage;
                // MonitorBattery(currPercentage, robotID); // Battery monitoring function       
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }
}
