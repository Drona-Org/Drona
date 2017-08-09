machine BootMaster {
    start state Init {
        entry {
            var pOrb: machine;
            //create the POrb machine
            pOrb = new POrbMachine();
            new HeartbeatMonitorMachine((orb = pOrb,));
            new GeofenceMonitorMachine((orb = pOrb,));
        }
    }
}
