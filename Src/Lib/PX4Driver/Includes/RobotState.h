#ifndef ROBOTSTATE_H
#define ROBOTSTATE_H

#include "mavlink.h"
#include "mavlink_helpers.h"
#include "mavlink_types.h"
#include<iostream>
using namespace std;



class RobotState
{
    // Current status
    mavlink_local_position_ned_t currentLocalPosition;
    mavlink_global_position_int_t currentGlobalPosition;
    mavlink_battery_status_t batteryStatus;
    mavlink_radio_status_t radioStatus;

public:
    //setters
    void UpdateCurrentLocalPosition(mavlink_local_position_ned_t curLocPos);
    void UpdateCurrentGlobalPosition(mavlink_global_position_int_t curGlobPos);
    void UpdateBatteryStatus(mavlink_battery_status_t batteryStatus);
    void UpdateRadioStatus(mavlink_radio_status_t radioStatus);

    //getters
    mavlink_local_position_ned_t GetLocalPosition();
    mavlink_global_position_int_t GetGlobalPosition();
    RobotState *GetState(){ return this; };

    //printers
    char* CurrentStateToString();

};

extern RobotState* ROBOTSTATE;
#endif // !ROBOTSTATE_H
