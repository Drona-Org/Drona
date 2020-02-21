machine Battery {
    var robot: machine;
    var currPercentage: int;
    var x: int;
    start state Init {
        entry (payload: machine) {
            robot = payload;
            currPercentage = 100;
            raise Success;
        }
        on Success goto StartBattery;
    }

    state StartBattery {
        entry {
            while (currPercentage > 50) {
                x = Sleep(10.0);
                currPercentage = currPercentage - 1;
                print "currPercentage: {0}\n", currPercentage;
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }
}