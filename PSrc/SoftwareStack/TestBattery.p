fun switchACtoSC(rtaModuleID: int, robotID: int): int;
fun switchSCtoAC(rtaModuleID: int, robotID: int): int;
// TODO: Create foreign function getCurrPercentage() that keeps track of battery percentage in Cpp. This is so we can reset the percentage after the SC controller. 

machine Battery {
    var robot: machine;
    var currPercentage: int;
    var x: int;
    var y: int;
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
                if (currPercentage < 93) {
                    print "OH NO. I AM UNSAFE!!!!\n";
                    y = switchACtoSC(1,1);
                    y = switchACtoSC(1,2);
                } else if (currPercentage > 93) {
                    print "YAY. I AM SAFE!!!!\n";
                    y = switchSCtoAC(1,1);
                    y = switchSCtoAC(1,2);
                }
            }
            raise Success;
        }
        on Success goto WaitRequest;
    }

    state WaitRequest {
        entry {}
    }
}