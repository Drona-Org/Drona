#pragma once
#ifndef P_MAINROBOTSURVEILLANCETASKPLANNER_H_
#define P_MAINROBOTSURVEILLANCETASKPLANNER_H_
#include "Prt.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    extern PRT_EVENTDECL P_EVENT_Success;
    extern PRT_EVENTDECL P_EVENT_SendNextDstReq;
    extern PRT_EVENTDECL P_EVENT_SendGoalPoint;
    extern PRT_EVENTDECL P_EVENT_ExecutePath;
    extern PRT_EVENTDECL P_EVENT_PathCompleted;
    extern PRT_EVENTDECL P_EVENT_CompletedPoint;
    extern PRT_EVENTDECL P_EVENT_eConfigDrone;
    extern PRT_FUNDECL P_FUNCTION_BROADCAST;
    extern PRT_FUNDECL P_FUNCTION_MonitorBattery;
    extern PRT_INTERFACEDECL P_I_TestDriver;
    extern PRT_INTERFACEDECL P_I_MotionPlanner;
    extern PRT_INTERFACEDECL P_I_Battery;
    extern PRT_INTERFACEDECL P_I_LocationMonitorCollision;
    extern PRT_INTERFACEDECL P_I_PlanExecutor;
    extern PRT_INTERFACEDECL P_I_LocationMonitorGeoFence;
    extern PRT_INTERFACEDECL P_I_Robot;
    extern PRT_MACHINEDECL P_MACHINE_TestDriver;
    extern PRT_MACHINEDECL P_MACHINE_MotionPlanner;
    extern PRT_MACHINEDECL P_MACHINE_Battery;
    extern PRT_MACHINEDECL P_MACHINE_LocationMonitorCollision;
    extern PRT_MACHINEDECL P_MACHINE_PlanExecutor;
    extern PRT_MACHINEDECL P_MACHINE_LocationMonitorGeoFence;
    extern PRT_MACHINEDECL P_MACHINE_Robot;
    extern PRT_TYPE* P_TYPEDEF_RequestInfo;
    extern PRT_TYPE* P_TYPEDEF_DstReq;
    extern PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl;
    
#ifdef __cplusplus
}
#endif

#endif // P_MAINROBOTSURVEILLANCETASKPLANNER_H_
