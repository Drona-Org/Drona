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
            - Create global bool `advancedLocation` to represent robot is in advanced controller
            - Make RobotSubscribe flip `advancedLocation` to false when outside of safe region (arbitrary for now)
            - Use `advancedLocation` in goTo_gazebo func, where it only goes if true, otherwise stop for now

            -LATER:
                - create global map for all RTA modules: 
                    - SwitchMap: R -> bool where R is the set of RTA modules and bool represents whether AC is in control or SC.
                - create two foreign functions in C:
                    - switchACToSC(r) --> which sets the SwitchMap[r] to true
                    - switchACToSC(r) --> which sets the SwitchMap[r] to false
                    ** the above two functions must be invoked from the monitoring statemachine to control the switching.
                    - This means RobotSubscribe should simply return a boolean as to whether robot is safe or not and the `LocationMonitor`
                        should call these functions to set `advancedLocation` bool and later the same bool in the map.
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
