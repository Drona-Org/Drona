fun RobotSubscribe(robotId: int): int;

machine LocationMonitor {
    var taskPlanner: machine;
    start state Init {
        entry (payload: machine) {
            var x: int;
            var i: int;
            taskPlanner = payload;
            i = 0;
            while (i < 120) {
                x = RobotSubscribe(1);
                i = i + 1;
            }
            /* 
            - Create a foreign function, currently RobotSubscribe, that handles all decision module logic. 
                This function should just return whether the robot should be in SC or AC.
            - Decision module function above should be wrapped in an infinite loop in P. Depending on the result
                of the function, call the foreign functions as described in email to set the global map
            - Not clear why we need PrtSend wrapper, maybe we can just handle this in the PlanExecutor's 
                goTo goal foreign function??
            */
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {
            // x = ShutdownROSSubscribers(numOfWorkerDrones);
        }
    }
}
