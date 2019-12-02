#pragma once
#ifndef P_TEST_H_
#define P_TEST_H_
#include "Prt.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    extern PRT_EVENTDECL P_EVENT_Success;
    extern PRT_EVENTDECL P_EVENT_critical_battery;
    extern PRT_EVENTDECL P_EVENT_receiveMotionPlan;
    extern PRT_EVENTDECL P_EVENT_executePlan;
    extern PRT_EVENTDECL P_EVENT_requestMotionPlan;
    extern PRT_INTERFACEDECL P_I_MotionPlanner;
    extern PRT_INTERFACEDECL P_I_PlanExecutor;
    extern PRT_INTERFACEDECL P_I_Robot;
    extern PRT_INTERFACEDECL P_I_Battery;
    extern PRT_INTERFACEDECL P_I_Project;
    extern PRT_MACHINEDECL P_MACHINE_MotionPlanner;
    extern PRT_MACHINEDECL P_MACHINE_PlanExecutor;
    extern PRT_MACHINEDECL P_MACHINE_Robot;
    extern PRT_MACHINEDECL P_MACHINE_Battery;
    extern PRT_MACHINEDECL P_MACHINE_Project;
    extern PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl;
    
#ifdef __cplusplus
}
#endif

#endif // P_TEST_H_
