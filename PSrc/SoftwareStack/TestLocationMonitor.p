fun MonitorLocation(robotId: int): int;

machine LocationMonitor {
    var taskPlanner: machine;
    start state Init {
        entry (payload: machine) {
            var x: int;
            var i: int;
            taskPlanner = payload;
            i = 0;
            while (i < 120) {
                x = MonitorLocation(1);
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
