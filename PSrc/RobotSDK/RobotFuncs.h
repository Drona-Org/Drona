#include "../SoftwareStack/MailDeliveryTaskPlanner.h"

extern "C" PRT_VALUE* P_OmplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_ROSGoTo_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern "C" PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);