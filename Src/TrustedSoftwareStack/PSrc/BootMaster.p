machine BootMaster {
    start state Init {
        entry {
            //create the POrb machine
            new POrbMachine();
        }
    }
}
