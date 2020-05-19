// fun MonitorLocation(robotId: int): int;
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
            while (i < 120) {

                // Collision Avoidance Example
                collisionFree = collisionSafe();
                if (collisionFree == 0) {
                    y = switchACtoSC(2,-1);
                }

                if (collisionFree == 1) {
                    y = switchSCtoAC(2,-1);
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
