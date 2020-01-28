#pragma once
#ifndef P_MAILDELIVERYTASKPLANNER_H_
#define P_MAILDELIVERYTASKPLANNER_H_
#include "Prt.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    extern PRT_EVENTDECL P_EVENT_Success;
    extern PRT_EVENTDECL P_EVENT_Send_Next_Point;
    extern PRT_EVENTDECL P_EVENT_Send_Ping_Back_Handler;
    extern PRT_EVENTDECL P_EVENT_Critical_Battery;
    extern PRT_EVENTDECL P_EVENT_Robot_Safe;
    extern PRT_EVENTDECL P_EVENT_Execute_Path;
    extern PRT_EVENTDECL P_EVENT_Path_Completed;
    extern PRT_EVENTDECL P_EVENT_new_Critical_Battery;
    extern PRT_EVENTDECL P_EVENT_Completed_Point;
    extern PRT_EVENTDECL P_EVENT_eConfigDrone;
    extern PRT_FUNDECL P_FUNCTION_BROADCAST;
    extern PRT_INTERFACEDECL P_I_TestDriver;
    extern PRT_INTERFACEDECL P_I_DroneTaskPlanner;
    extern PRT_INTERFACEDECL P_I_MotionPlanner;
    extern PRT_INTERFACEDECL P_I_PlanExecutor;
    extern PRT_MACHINEDECL P_MACHINE_TestDriver;
    extern PRT_MACHINEDECL P_MACHINE_DroneTaskPlanner;
    extern PRT_MACHINEDECL P_MACHINE_MotionPlanner;
    extern PRT_MACHINEDECL P_MACHINE_PlanExecutor;
    extern PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl;
    
#ifdef __cplusplus
}
#endif

#endif // P_MAILDELIVERYTASKPLANNER_H_
