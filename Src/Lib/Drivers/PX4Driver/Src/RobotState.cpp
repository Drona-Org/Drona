#include "RobotState.h"

RobotState* ROBOTSTATE = new RobotState();

void RobotState::UpdateCurrentLocalPosition(mavlink_local_position_ned_t curLocPos){
    this->currentLocalPosition = curLocPos;
}

void RobotState::UpdateCurrentGlobalPosition(mavlink_global_position_int_t curGlobPos){
    this->currentGlobalPosition = curGlobPos;
}

void RobotState::UpdateBatteryStatus(mavlink_battery_status_t batteryStatus){
    this->batteryStatus = batteryStatus;
}

void RobotState::UpdateRadioStatus(mavlink_radio_status_t radioStatus){
    this->radioStatus = radioStatus;
}

mavlink_local_position_ned_t RobotState::GetLocalPosition(){
    return this->currentLocalPosition;
}

mavlink_global_position_int_t RobotState::GetGlobalPosition(){
    return this->currentGlobalPosition;
}

char* RobotState::CurrentStateToString(){

    char* ret = (char*)malloc(sizeof(char)*1000);
    sprintf(ret, "Local position: %f,%f,%f\n", this->currentLocalPosition.x,this->currentLocalPosition.y,this->currentLocalPosition.z);
    sprintf(ret, "Global position: %d,%d,%d\n", this->currentGlobalPosition.lat,this->currentGlobalPosition.lon,this->currentGlobalPosition.alt);
    sprintf(ret, "Battery: %d\n", this->batteryStatus.current_battery);
    sprintf(ret, "Radio: %d\n", this->radioStatus.fixed);
    return ret;
}
