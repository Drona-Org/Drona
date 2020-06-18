#include "../Applications/DroneExploration/MainDroneTaskPlanner.h"

extern "C" PRT_VALUE* P_ShutdownROSSubscribersDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_RobotROSSetupDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_OmplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_getRobotLocationX_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_getRobotLocationY_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_getRobotLocationZ_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_workspaceSetupDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_decisionModuleDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_advancedControllerDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_safeControllerDrone_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
