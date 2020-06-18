/* 
This file contains the Monitor for the Collision Avoidance RTA module.
The monitor repeatedly checks to see whether the two robots are going to collide
while executing their paths. If a collision in imminent, the robots radially move back from 
the collision point and one robot waits until the second robot finishes executing its path.
There is only one collision avoidance monitor for both robots in our simulation. 
*/
fun collisionSafe(): int;

machine LocationMonitorCollision {
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
            while (i < 500) {
                // Collision Avoidance Example
                collisionFree = collisionSafe(); // Checks if a collision is imminent
                if (collisionFree == 0) {
                    y = switchACtoSC(2,-1);  // If collision, then switch to the SC
                }

                if (collisionFree == 1) {
                    y = switchSCtoAC(2,-1); // If no collision, the proceed executing the plan as normal
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
