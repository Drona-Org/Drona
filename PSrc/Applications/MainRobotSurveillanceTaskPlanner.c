#include "MainRobotSurveillanceTaskPlanner.h"

// Type universe for program:
static PRT_TYPE P_GEND_TYPE_n = { PRT_KIND_NULL, { NULL } };
static PRT_STRING P_NMDTUP_N[] = { "mInfo", "dest", "sender" };
static PRT_STRING P_NMDTUP_N_1[] = { "request_id", "priority" };
static PRT_TYPE P_GEND_TYPE_i = { PRT_KIND_INT, { NULL } };
static PRT_TYPE* P_NMDTUP_T_1[] = { &P_GEND_TYPE_i, &P_GEND_TYPE_i };
static PRT_NMDTUPTYPE P_NMDTUP_1 = { 2U, P_NMDTUP_N_1, P_NMDTUP_T_1 };
static PRT_TYPE P_GEND_TYPE_T2ii = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP_1 } };
static PRT_TYPE P_GEND_TYPE_f = { PRT_KIND_FLOAT, { NULL } };
static PRT_TYPE* P_TUP_T[] = { &P_GEND_TYPE_f, &P_GEND_TYPE_f, &P_GEND_TYPE_f };
static PRT_TUPTYPE P_TUP = { 3U, P_TUP_T };
static PRT_TYPE P_GEND_TYPE_T3fff = { PRT_KIND_TUPLE, { .tuple = &P_TUP } };
static PRT_TYPE P_GEND_TYPE_m = { PRT_KIND_MACHINE, { NULL } };
static PRT_TYPE* P_NMDTUP_T[] = { &P_GEND_TYPE_T2ii, &P_GEND_TYPE_T3fff, &P_GEND_TYPE_m };
static PRT_NMDTUPTYPE P_NMDTUP = { 3U, P_NMDTUP_N, P_NMDTUP_T };
static PRT_TYPE P_GEND_TYPE_T3T2iiT3fffm = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP } };
static PRT_SEQTYPE P_SEQTYPE = { &P_GEND_TYPE_T3fff };
static PRT_TYPE P_GEND_TYPE_ST3fff = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE } };
static PRT_SEQTYPE P_SEQTYPE_1 = { &P_GEND_TYPE_m };
static PRT_TYPE P_GEND_TYPE_Sm = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE_1 } };
static PRT_TYPE* P_TUP_T_1[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_1 = { 2U, P_TUP_T_1 };
static PRT_TYPE P_GEND_TYPE_T2mi = { PRT_KIND_TUPLE, { .tuple = &P_TUP_1 } };
static PRT_STRING P_NMDTUP_N_2[] = { "mp", "rid" };
static PRT_TYPE* P_NMDTUP_T_2[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_NMDTUPTYPE P_NMDTUP_2 = { 2U, P_NMDTUP_N_2, P_NMDTUP_T_2 };
static PRT_TYPE P_GEND_TYPE_T2mi_1 = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP_2 } };
static PRT_TYPE* P_TUP_T_2[] = { &P_GEND_TYPE_i, &P_GEND_TYPE_m };
static PRT_TUPTYPE P_TUP_2 = { 2U, P_TUP_T_2 };
static PRT_TYPE P_GEND_TYPE_T2im = { PRT_KIND_TUPLE, { .tuple = &P_TUP_2 } };
static PRT_SEQTYPE P_SEQTYPE_2 = { &P_GEND_TYPE_T3T2iiT3fffm };
static PRT_TYPE P_GEND_TYPE_ST3T2iiT3fffm = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE_2 } };
static PRT_TYPE P_GEND_TYPE_R = { PRT_KIND_MACHINE, { NULL } };
static PRT_TYPE* P_TUP_T_3[] = { &P_GEND_TYPE_R, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_3 = { 2U, P_TUP_T_3 };
static PRT_TYPE P_GEND_TYPE_T2Ri = { PRT_KIND_TUPLE, { .tuple = &P_TUP_3 } };

// Function implementation prototypes:
PRT_VALUE* P_RobotROSSetup_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_ShutdownROSSubscribers_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_OmplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_ROSGoTo_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_randomFloat_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_getRobotLocationX_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_getRobotLocationY_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_BROADCAST_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_BROADCAST;

PRT_VALUE* P_switchACtoSC_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_switchSCtoAC_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_getCurrentPercentage_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_MonitorBattery_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_MonitorBattery;

PRT_VALUE* P_collisionSafe_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_MonitorLocation_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_Anon_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon;

PRT_VALUE* P_Anon_IMPL_1(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_1;

PRT_VALUE* P_Anon_IMPL_2(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_2;

PRT_VALUE* P_Anon_IMPL_3(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_3;

PRT_VALUE* P_Anon_IMPL_4(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_4;

PRT_VALUE* P_Anon_IMPL_5(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_5;

PRT_VALUE* P_Anon_IMPL_6(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_6;

PRT_VALUE* P_Anon_IMPL_7(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_7;

PRT_VALUE* P_Anon_IMPL_8(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_8;

PRT_VALUE* P_Anon_IMPL_9(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_9;

PRT_VALUE* P_Anon_IMPL_10(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_10;

PRT_VALUE* P_Anon_IMPL_11(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_11;

PRT_VALUE* P_Anon_IMPL_12(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_12;

PRT_VALUE* P_Anon_IMPL_13(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_13;

PRT_VALUE* P_Anon_IMPL_14(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_14;

PRT_VALUE* P_Anon_IMPL_15(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_15;

PRT_VALUE* P_Anon_IMPL_16(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_16;

PRT_VALUE* P_Anon_IMPL_17(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_17;

PRT_VALUE* P_Anon_IMPL_18(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_18;

PRT_VALUE* P_Anon_IMPL_19(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_19;

PRT_VALUE* P_Anon_IMPL_20(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_Anon_20;


PRT_EVENTDECL P_EVENT_Success = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Success",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_SendNextDstReq = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "SendNextDstReq",
    4294967295U,
    &P_GEND_TYPE_T3T2iiT3fffm
};

PRT_EVENTDECL P_EVENT_SendGoalPoint = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "SendGoalPoint",
    4294967295U,
    &P_GEND_TYPE_T3fff
};

PRT_EVENTDECL P_EVENT_ExecutePath = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "ExecutePath",
    4294967295U,
    &P_GEND_TYPE_ST3fff
};

PRT_EVENTDECL P_EVENT_PathCompleted = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "PathCompleted",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_CompletedPoint = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "CompletedPoint",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_eConfigDrone = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "eConfigDrone",
    4294967295U,
    &P_GEND_TYPE_Sm
};

PRT_FUNDECL P_FUNCTION_RobotROSSetup =
{
    "RobotROSSetup",
    &P_RobotROSSetup_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_ShutdownROSSubscribers =
{
    "ShutdownROSSubscribers",
    &P_ShutdownROSSubscribers_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_OmplMotionPlanExternal =
{
    "OmplMotionPlanExternal",
    &P_OmplMotionPlanExternal_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_ROSGoTo =
{
    "ROSGoTo",
    &P_ROSGoTo_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_Sleep =
{
    "Sleep",
    &P_Sleep_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_randomFloat =
{
    "randomFloat",
    &P_randomFloat_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_getRobotLocationX =
{
    "getRobotLocationX",
    &P_getRobotLocationX_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_getRobotLocationY =
{
    "getRobotLocationY",
    &P_getRobotLocationY_IMPL,
    NULL
};


PRT_VALUE* P_BROADCAST_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_allTarget = argRefs[0];
    PRT_VALUE** P_VAR_ev = argRefs[1];
    PRT_VALUE** P_VAR_payload = argRefs[2];
    PRT_VALUE** P_VAR_source = argRefs[3];
    PRT_VALUE* P_VAR_index = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0 = NULL;
    PRT_VALUE* PTMP_tmp1 = NULL;
    PRT_VALUE* PTMP_tmp2 = NULL;
    PRT_VALUE* PTMP_tmp3 = NULL;
    PRT_VALUE* PTMP_tmp4 = NULL;
    PRT_VALUE* PTMP_tmp5 = NULL;
    PRT_VALUE* PTMP_tmp6 = NULL;
    PRT_VALUE* PTMP_tmp7 = NULL;
    PRT_VALUE* PTMP_tmp8 = NULL;
    PRT_VALUE* PTMP_tmp9 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_1 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE = &(P_VAR_index);
    PrtFreeValue(*P_LVALUE);
    *P_LVALUE = PrtCloneValue((&P_LIT_INT32));
    
    PRT_VALUE** P_LVALUE_1 = &(PTMP_tmp0);
    PrtFreeValue(*P_LVALUE_1);
    *P_LVALUE_1 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_allTarget));
    
    PRT_VALUE** P_LVALUE_2 = &(PTMP_tmp1);
    PrtFreeValue(*P_LVALUE_2);
    *P_LVALUE_2 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index) < PrtPrimGetInt(PTMP_tmp0));
    
    PRT_VALUE** P_LVALUE_3 = &(PTMP_tmp2);
    PrtFreeValue(*P_LVALUE_3);
    *P_LVALUE_3 = PrtCloneValue(PTMP_tmp1);
    
    while (PrtPrimGetBool(PTMP_tmp2))
    {
        PRT_VALUE** P_LVALUE_4 = &(PTMP_tmp3);
        PrtFreeValue(*P_LVALUE_4);
        *P_LVALUE_4 = PrtSeqGet(*P_VAR_allTarget, P_VAR_index);
        
        PRT_VALUE** P_LVALUE_5 = &(PTMP_tmp4);
        PrtFreeValue(*P_LVALUE_5);
        *P_LVALUE_5 = PrtMkBoolValue(!PrtIsEqualValue(*P_VAR_source, PTMP_tmp3));
        
        if (PrtPrimGetBool(PTMP_tmp4))
        {
            PRT_VALUE** P_LVALUE_6 = &(PTMP_tmp5);
            PrtFreeValue(*P_LVALUE_6);
            *P_LVALUE_6 = PrtSeqGet(*P_VAR_allTarget, P_VAR_index);
            
            PRT_VALUE** P_LVALUE_7 = &(PTMP_tmp6);
            PrtFreeValue(*P_LVALUE_7);
            *P_LVALUE_7 = PrtCloneValue(PTMP_tmp5);
            
            PRT_VALUE** P_LVALUE_8 = &(PTMP_tmp7);
            PrtFreeValue(*P_LVALUE_8);
            *P_LVALUE_8 = PrtCloneValue(*P_VAR_ev);
            
            PRT_VALUE** P_LVALUE_9 = &(PTMP_tmp8);
            PrtFreeValue(*P_LVALUE_9);
            *P_LVALUE_9 = PrtCloneValue(*P_VAR_payload);
            
            PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp6), PTMP_tmp7, 1, &(PTMP_tmp8));
            *(&(PTMP_tmp7)) = NULL;
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return;
            }
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_10 = &(PTMP_tmp9);
        PrtFreeValue(*P_LVALUE_10);
        *P_LVALUE_10 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index) + PrtPrimGetInt((&P_LIT_INT32_1)));
        
        {
            PRT_VALUE** P_LVALUE_11 = &(P_VAR_index);
            PrtFreeValue(*P_LVALUE_11);
            *P_LVALUE_11 = PTMP_tmp9;
            PTMP_tmp9 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_12 = &(PTMP_tmp0);
        PrtFreeValue(*P_LVALUE_12);
        *P_LVALUE_12 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_allTarget));
        
        PRT_VALUE** P_LVALUE_13 = &(PTMP_tmp1);
        PrtFreeValue(*P_LVALUE_13);
        *P_LVALUE_13 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index) < PrtPrimGetInt(PTMP_tmp0));
        
        PRT_VALUE** P_LVALUE_14 = &(PTMP_tmp2);
        PrtFreeValue(*P_LVALUE_14);
        *P_LVALUE_14 = PrtCloneValue(PTMP_tmp1);
        
    }
    
    
p_return: ;
    PrtFreeValue(P_VAR_index); P_VAR_index = NULL;
    PrtFreeValue(PTMP_tmp0); PTMP_tmp0 = NULL;
    PrtFreeValue(PTMP_tmp1); PTMP_tmp1 = NULL;
    PrtFreeValue(PTMP_tmp2); PTMP_tmp2 = NULL;
    PrtFreeValue(PTMP_tmp3); PTMP_tmp3 = NULL;
    PrtFreeValue(PTMP_tmp4); PTMP_tmp4 = NULL;
    PrtFreeValue(PTMP_tmp5); PTMP_tmp5 = NULL;
    PrtFreeValue(PTMP_tmp6); PTMP_tmp6 = NULL;
    PrtFreeValue(PTMP_tmp7); PTMP_tmp7 = NULL;
    PrtFreeValue(PTMP_tmp8); PTMP_tmp8 = NULL;
    PrtFreeValue(PTMP_tmp9); PTMP_tmp9 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_BROADCAST =
{
    "BROADCAST",
    &P_BROADCAST_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_switchACtoSC =
{
    "switchACtoSC",
    &P_switchACtoSC_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_switchSCtoAC =
{
    "switchSCtoAC",
    &P_switchSCtoAC_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_getCurrentPercentage =
{
    "getCurrentPercentage",
    &P_getCurrentPercentage_IMPL,
    NULL
};


PRT_VALUE* P_MonitorBattery_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_batteryLevel = argRefs[0];
    PRT_VALUE** P_VAR_robotID = argRefs[1];
    PRT_VALUE* P_VAR_batteryThreshold = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_y = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_1 = NULL;
    PRT_VALUE* PTMP_tmp1_1 = NULL;
    PRT_VALUE* PTMP_tmp2_1 = NULL;
    PRT_VALUE* PTMP_tmp3_1 = NULL;
    PRT_VALUE* PTMP_tmp4_1 = NULL;
    PRT_VALUE* PTMP_tmp5_1 = NULL;
    PRT_VALUE* PTMP_tmp6_1 = NULL;
    PRT_VALUE* PTMP_tmp7_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_2 = { PRT_VALUE_KIND_INT, { .nt = 10 } };
    PRT_VALUE P_LIT_INT32_3 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_15 = &(P_VAR_batteryThreshold);
    PrtFreeValue(*P_LVALUE_15);
    *P_LVALUE_15 = PrtCloneValue((&P_LIT_INT32_2));
    
    PrtFormatPrintf("batteryLevel Robot", 2, *P_VAR_robotID, *P_VAR_batteryLevel, 2, 0, ": ", 1, "\n");
    
    PRT_VALUE** P_LVALUE_16 = &(PTMP_tmp0_1);
    PrtFreeValue(*P_LVALUE_16);
    *P_LVALUE_16 = PrtMkBoolValue(PrtPrimGetInt(*P_VAR_batteryLevel) <= PrtPrimGetInt(P_VAR_batteryThreshold));
    
    if (PrtPrimGetBool(PTMP_tmp0_1))
    {
        PrtFormatPrintf("Robot ", 1, *P_VAR_robotID, 1, 0, " Low Battery!\n");
        
        PRT_VALUE** P_LVALUE_17 = &(PTMP_tmp1_1);
        PrtFreeValue(*P_LVALUE_17);
        *P_LVALUE_17 = PrtCloneValue((&P_LIT_INT32_3));
        
        PRT_VALUE** P_LVALUE_18 = &(PTMP_tmp2_1);
        PrtFreeValue(*P_LVALUE_18);
        *P_LVALUE_18 = PrtCloneValue(*P_VAR_robotID);
        
        PRT_VALUE** P_LVALUE_19 = &(PTMP_tmp3_1);
        PrtFreeValue(*P_LVALUE_19);
        *P_LVALUE_19 = ((_P_GEN_funargs[0] = &(PTMP_tmp1_1)), (_P_GEN_funargs[1] = &(PTMP_tmp2_1)), (_P_GEN_funval = P_switchACtoSC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp1_1), PTMP_tmp1_1 = NULL), (PrtFreeValue(PTMP_tmp2_1), PTMP_tmp2_1 = NULL), (_P_GEN_funval));
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_1;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_1;
        }
        
        {
            PRT_VALUE** P_LVALUE_20 = &(P_VAR_y);
            PrtFreeValue(*P_LVALUE_20);
            *P_LVALUE_20 = PTMP_tmp3_1;
            PTMP_tmp3_1 = NULL;
        }
        
    }
    
    else
    {
        PRT_VALUE** P_LVALUE_21 = &(PTMP_tmp4_1);
        PrtFreeValue(*P_LVALUE_21);
        *P_LVALUE_21 = PrtMkBoolValue(PrtPrimGetInt(*P_VAR_batteryLevel) > PrtPrimGetInt(P_VAR_batteryThreshold));
        
        if (PrtPrimGetBool(PTMP_tmp4_1))
        {
            PrtFormatPrintf("Robot ", 1, *P_VAR_robotID, 1, 0, " Safe Battery!\n");
            
            PRT_VALUE** P_LVALUE_22 = &(PTMP_tmp5_1);
            PrtFreeValue(*P_LVALUE_22);
            *P_LVALUE_22 = PrtCloneValue((&P_LIT_INT32_3));
            
            PRT_VALUE** P_LVALUE_23 = &(PTMP_tmp6_1);
            PrtFreeValue(*P_LVALUE_23);
            *P_LVALUE_23 = PrtCloneValue(*P_VAR_robotID);
            
            PRT_VALUE** P_LVALUE_24 = &(PTMP_tmp7_1);
            PrtFreeValue(*P_LVALUE_24);
            *P_LVALUE_24 = ((_P_GEN_funargs[0] = &(PTMP_tmp5_1)), (_P_GEN_funargs[1] = &(PTMP_tmp6_1)), (_P_GEN_funval = P_switchSCtoAC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp5_1), PTMP_tmp5_1 = NULL), (PrtFreeValue(PTMP_tmp6_1), PTMP_tmp6_1 = NULL), (_P_GEN_funval));
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_1;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_1;
            }
            
            {
                PRT_VALUE** P_LVALUE_25 = &(P_VAR_y);
                PrtFreeValue(*P_LVALUE_25);
                *P_LVALUE_25 = PTMP_tmp7_1;
                PTMP_tmp7_1 = NULL;
            }
            
        }
        
        else
        {
        }
        
        
    }
    
    
p_return_1: ;
    PrtFreeValue(P_VAR_batteryThreshold); P_VAR_batteryThreshold = NULL;
    PrtFreeValue(P_VAR_y); P_VAR_y = NULL;
    PrtFreeValue(PTMP_tmp0_1); PTMP_tmp0_1 = NULL;
    PrtFreeValue(PTMP_tmp1_1); PTMP_tmp1_1 = NULL;
    PrtFreeValue(PTMP_tmp2_1); PTMP_tmp2_1 = NULL;
    PrtFreeValue(PTMP_tmp3_1); PTMP_tmp3_1 = NULL;
    PrtFreeValue(PTMP_tmp4_1); PTMP_tmp4_1 = NULL;
    PrtFreeValue(PTMP_tmp5_1); PTMP_tmp5_1 = NULL;
    PrtFreeValue(PTMP_tmp6_1); PTMP_tmp6_1 = NULL;
    PrtFreeValue(PTMP_tmp7_1); PTMP_tmp7_1 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_MonitorBattery =
{
    "MonitorBattery",
    &P_MonitorBattery_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_collisionSafe =
{
    "collisionSafe",
    &P_collisionSafe_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_MonitorLocation =
{
    "MonitorLocation",
    &P_MonitorLocation_IMPL,
    NULL
};


PRT_EVENTDECL* P_TestDriver_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_RECV =
{
    8U,
    P_TestDriver_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_TestDriver =
{
    0U,
    "TestDriver",
    &P_GEND_TYPE_n,
    &P_EVENTSET_TestDriver_RECV
};

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV =
{
    8U,
    P_MotionPlanner_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_MotionPlanner =
{
    1U,
    "MotionPlanner",
    &P_GEND_TYPE_T2mi,
    &P_EVENTSET_MotionPlanner_RECV
};

PRT_EVENTDECL* P_Battery_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Battery_RECV =
{
    8U,
    P_Battery_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_Battery =
{
    2U,
    "Battery",
    &P_GEND_TYPE_T2mi,
    &P_EVENTSET_Battery_RECV
};

PRT_EVENTDECL* P_LocationMonitorCollision_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorCollision_RECV =
{
    8U,
    P_LocationMonitorCollision_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_LocationMonitorCollision =
{
    3U,
    "LocationMonitorCollision",
    &P_GEND_TYPE_m,
    &P_EVENTSET_LocationMonitorCollision_RECV
};

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV =
{
    8U,
    P_PlanExecutor_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_PlanExecutor =
{
    4U,
    "PlanExecutor",
    &P_GEND_TYPE_T2mi_1,
    &P_EVENTSET_PlanExecutor_RECV
};

PRT_EVENTDECL* P_LocationMonitorGeoFence_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorGeoFence_RECV =
{
    8U,
    P_LocationMonitorGeoFence_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_LocationMonitorGeoFence =
{
    5U,
    "LocationMonitorGeoFence",
    &P_GEND_TYPE_T2mi,
    &P_EVENTSET_LocationMonitorGeoFence_RECV
};

PRT_EVENTDECL* P_Robot_RECV_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Robot_RECV =
{
    8U,
    P_Robot_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_Robot =
{
    6U,
    "Robot",
    &P_GEND_TYPE_T2im,
    &P_EVENTSET_Robot_RECV
};

PRT_VARDECL P_TestDriver_VARS[] = {
    { "workerRobots", &P_GEND_TYPE_Sm },
    { "reqCount", &P_GEND_TYPE_i },
    { "numOfWorkerRobots", &P_GEND_TYPE_i },
    { "x", &P_GEND_TYPE_i },
    { "geofence1", &P_GEND_TYPE_m },
    { "geofence2", &P_GEND_TYPE_m },
    { "battery1", &P_GEND_TYPE_m },
    { "battery2", &P_GEND_TYPE_m },
    { "collision", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS =
{
    0U,
    P_Init_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS =
{
    1U,
    P_Init_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS =
{
    0U,
    P_Init_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_TestDriver_Init \
{ \
    "TestDriver.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS, \
    &P_EVENTSET_Init_TRANS, \
    &P_EVENTSET_Init_DOS, \
    P_TRANS, \
    NULL, \
    &P_FUNCTION_Anon, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_StartSurvillanceState_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartSurvillanceState_DEFERS =
{
    0U,
    P_StartSurvillanceState_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartSurvillanceState_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_StartSurvillanceState_TRANS =
{
    1U,
    P_StartSurvillanceState_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartSurvillanceState_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartSurvillanceState_DOS =
{
    0U,
    P_StartSurvillanceState_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_1[] =
{
    { 1, &P_EVENT_Success, 2, &_P_NO_OP }
};

#define P_STATE_TestDriver_StartSurvillanceState \
{ \
    "TestDriver.StartSurvillanceState", \
    1U, \
    0U, \
    &P_EVENTSET_StartSurvillanceState_DEFERS, \
    &P_EVENTSET_StartSurvillanceState_TRANS, \
    &P_EVENTSET_StartSurvillanceState_DOS, \
    P_TRANS_1, \
    NULL, \
    &P_FUNCTION_Anon_1, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS =
{
    0U,
    P_WaitRequest_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS =
{
    0U,
    P_WaitRequest_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS =
{
    0U,
    P_WaitRequest_DOS_INNER,
    NULL
};

#define P_STATE_TestDriver_WaitRequest \
{ \
    "TestDriver.WaitRequest", \
    0U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS, \
    &P_EVENTSET_WaitRequest_TRANS, \
    &P_EVENTSET_WaitRequest_DOS, \
    NULL, \
    NULL, \
    &P_FUNCTION_Anon_2, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_TestDriver_STATES[] = { P_STATE_TestDriver_Init, P_STATE_TestDriver_StartSurvillanceState, P_STATE_TestDriver_WaitRequest };

PRT_VALUE* P_Anon_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* P_VAR_index_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_temp = PrtMkDefaultValue(&P_GEND_TYPE_m);
    PRT_VALUE* PTMP_tmp0_2 = NULL;
    PRT_VALUE* PTMP_tmp1_2 = NULL;
    PRT_VALUE* PTMP_tmp2_2 = NULL;
    PRT_VALUE* PTMP_tmp3_2 = NULL;
    PRT_VALUE* PTMP_tmp4_2 = NULL;
    PRT_VALUE* PTMP_tmp5_2 = NULL;
    PRT_VALUE* PTMP_tmp6_2 = NULL;
    PRT_VALUE* PTMP_tmp7_2 = NULL;
    PRT_VALUE* PTMP_tmp8_1 = NULL;
    PRT_VALUE* PTMP_tmp9_1 = NULL;
    PRT_VALUE* PTMP_tmp10 = NULL;
    PRT_VALUE* PTMP_tmp11 = NULL;
    PRT_VALUE* PTMP_tmp12 = NULL;
    PRT_VALUE* PTMP_tmp13 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_4 = { PRT_VALUE_KIND_INT, { .nt = 4 } };
    PRT_VALUE P_LIT_INT32_5 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_6 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_26 = &(p_this->varValues[1]);
    PrtFreeValue(*P_LVALUE_26);
    *P_LVALUE_26 = PrtCloneValue((&P_LIT_INT32_4));
    
    PRT_VALUE** P_LVALUE_27 = &(p_this->varValues[2]);
    PrtFreeValue(*P_LVALUE_27);
    *P_LVALUE_27 = PrtCloneValue((&P_LIT_INT32_5));
    
    PRT_VALUE** P_LVALUE_28 = &(P_VAR_index_1);
    PrtFreeValue(*P_LVALUE_28);
    *P_LVALUE_28 = PrtCloneValue((&P_LIT_INT32_6));
    
    PRT_VALUE** P_LVALUE_29 = &(PTMP_tmp0_2);
    PrtFreeValue(*P_LVALUE_29);
    *P_LVALUE_29 = PrtMkIntValue(PrtPrimGetInt(p_this->varValues[2]) + PrtPrimGetInt((&P_LIT_INT32_6)));
    
    PRT_VALUE** P_LVALUE_30 = &(PTMP_tmp1_2);
    PrtFreeValue(*P_LVALUE_30);
    *P_LVALUE_30 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_1) < PrtPrimGetInt(PTMP_tmp0_2));
    
    PRT_VALUE** P_LVALUE_31 = &(PTMP_tmp2_2);
    PrtFreeValue(*P_LVALUE_31);
    *P_LVALUE_31 = PrtCloneValue(PTMP_tmp1_2);
    
    while (PrtPrimGetBool(PTMP_tmp2_2))
    {
        PRT_VALUE** P_LVALUE_32 = &(PTMP_tmp3_2);
        PrtFreeValue(*P_LVALUE_32);
        *P_LVALUE_32 = PrtCloneValue(P_VAR_index_1);
        
        PRT_VALUE** P_LVALUE_33 = &(PTMP_tmp4_2);
        PrtFreeValue(*P_LVALUE_33);
        *P_LVALUE_33 = PrtCloneValue((p_this->id));
        
        PRT_VALUE** P_LVALUE_34 = &(PTMP_tmp5_2);
        PrtFreeValue(*P_LVALUE_34);
        *P_LVALUE_34 = PrtCloneValue(PrtMkInterface(context, 6, 2, &(PTMP_tmp3_2), &(PTMP_tmp4_2))->id);
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_2;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_2;
        }
        
        {
            PRT_VALUE** P_LVALUE_35 = &(P_VAR_temp);
            PrtFreeValue(*P_LVALUE_35);
            *P_LVALUE_35 = PTMP_tmp5_2;
            PTMP_tmp5_2 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_36 = &(PTMP_tmp6_2);
        PrtFreeValue(*P_LVALUE_36);
        *P_LVALUE_36 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index_1) - PrtPrimGetInt((&P_LIT_INT32_6)));
        
        PRT_VALUE** P_LVALUE_37 = &(PTMP_tmp7_2);
        PrtFreeValue(*P_LVALUE_37);
        *P_LVALUE_37 = PrtCloneValue(P_VAR_temp);
        
        PrtSeqInsertEx(p_this->varValues[0], PTMP_tmp6_2, PTMP_tmp7_2, PRT_FALSE);
        *(&(PTMP_tmp7_2)) = NULL;
        
        PRT_VALUE** P_LVALUE_38 = &(PTMP_tmp8_1);
        PrtFreeValue(*P_LVALUE_38);
        *P_LVALUE_38 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index_1) + PrtPrimGetInt((&P_LIT_INT32_6)));
        
        {
            PRT_VALUE** P_LVALUE_39 = &(P_VAR_index_1);
            PrtFreeValue(*P_LVALUE_39);
            *P_LVALUE_39 = PTMP_tmp8_1;
            PTMP_tmp8_1 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_40 = &(PTMP_tmp0_2);
        PrtFreeValue(*P_LVALUE_40);
        *P_LVALUE_40 = PrtMkIntValue(PrtPrimGetInt(p_this->varValues[2]) + PrtPrimGetInt((&P_LIT_INT32_6)));
        
        PRT_VALUE** P_LVALUE_41 = &(PTMP_tmp1_2);
        PrtFreeValue(*P_LVALUE_41);
        *P_LVALUE_41 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_1) < PrtPrimGetInt(PTMP_tmp0_2));
        
        PRT_VALUE** P_LVALUE_42 = &(PTMP_tmp2_2);
        PrtFreeValue(*P_LVALUE_42);
        *P_LVALUE_42 = PrtCloneValue(PTMP_tmp1_2);
        
    }
    
    
    PRT_VALUE** P_LVALUE_43 = &(PTMP_tmp9_1);
    PrtFreeValue(*P_LVALUE_43);
    *P_LVALUE_43 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_44 = &(PTMP_tmp10);
    PrtFreeValue(*P_LVALUE_44);
    *P_LVALUE_44 = PrtCloneValue((&P_EVENT_eConfigDrone.value));
    
    PRT_VALUE** P_LVALUE_45 = &(PTMP_tmp11);
    PrtFreeValue(*P_LVALUE_45);
    *P_LVALUE_45 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_46 = &(PTMP_tmp12);
    PrtFreeValue(*P_LVALUE_46);
    *P_LVALUE_46 = PrtCloneValue((p_this->id));
    
    _P_GEN_funargs[0] = &(PTMP_tmp9_1);
    _P_GEN_funargs[1] = &(PTMP_tmp10);
    _P_GEN_funargs[2] = &(PTMP_tmp11);
    _P_GEN_funargs[3] = &(PTMP_tmp12);
    PrtFreeValue(P_BROADCAST_IMPL(context, _P_GEN_funargs));
    PrtFreeValue(PTMP_tmp9_1);
    PTMP_tmp9_1 = NULL;
    PrtFreeValue(PTMP_tmp10);
    PTMP_tmp10 = NULL;
    PrtFreeValue(PTMP_tmp11);
    PTMP_tmp11 = NULL;
    PrtFreeValue(PTMP_tmp12);
    PTMP_tmp12 = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_2;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_2;
    }
    
    PRT_VALUE** P_LVALUE_47 = &(PTMP_tmp13);
    PrtFreeValue(*P_LVALUE_47);
    *P_LVALUE_47 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp13, 0);
    *(&(PTMP_tmp13)) = NULL;
    goto p_return_2;
    
p_return_2: ;
    PrtFreeValue(P_VAR_index_1); P_VAR_index_1 = NULL;
    PrtFreeValue(P_VAR_temp); P_VAR_temp = NULL;
    PrtFreeValue(PTMP_tmp0_2); PTMP_tmp0_2 = NULL;
    PrtFreeValue(PTMP_tmp1_2); PTMP_tmp1_2 = NULL;
    PrtFreeValue(PTMP_tmp2_2); PTMP_tmp2_2 = NULL;
    PrtFreeValue(PTMP_tmp3_2); PTMP_tmp3_2 = NULL;
    PrtFreeValue(PTMP_tmp4_2); PTMP_tmp4_2 = NULL;
    PrtFreeValue(PTMP_tmp5_2); PTMP_tmp5_2 = NULL;
    PrtFreeValue(PTMP_tmp6_2); PTMP_tmp6_2 = NULL;
    PrtFreeValue(PTMP_tmp7_2); PTMP_tmp7_2 = NULL;
    PrtFreeValue(PTMP_tmp8_1); PTMP_tmp8_1 = NULL;
    PrtFreeValue(PTMP_tmp9_1); PTMP_tmp9_1 = NULL;
    PrtFreeValue(PTMP_tmp10); PTMP_tmp10 = NULL;
    PrtFreeValue(PTMP_tmp11); PTMP_tmp11 = NULL;
    PrtFreeValue(PTMP_tmp12); PTMP_tmp12 = NULL;
    PrtFreeValue(PTMP_tmp13); PTMP_tmp13 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon =
{
    NULL,
    &P_Anon_IMPL,
    NULL
};


PRT_VALUE* P_Anon_IMPL_1(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* P_VAR_requestInfo = PrtMkDefaultValue(&P_GEND_TYPE_T2ii);
    PRT_VALUE* P_VAR_tempDstRequest = PrtMkDefaultValue(&P_GEND_TYPE_T3T2iiT3fffm);
    PRT_VALUE* P_VAR_counter = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_droneId = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_DstRequests = PrtMkDefaultValue(&P_GEND_TYPE_ST3T2iiT3fffm);
    PRT_VALUE* P_VAR_randomFloat = PrtMkDefaultValue(&P_GEND_TYPE_f);
    PRT_VALUE* P_VAR_randomFloat2 = PrtMkDefaultValue(&P_GEND_TYPE_f);
    PRT_VALUE* PTMP_tmp0_3 = NULL;
    PRT_VALUE* PTMP_tmp1_3 = NULL;
    PRT_VALUE* PTMP_tmp2_3 = NULL;
    PRT_VALUE* PTMP_tmp3_3 = NULL;
    PRT_VALUE* PTMP_tmp4_3 = NULL;
    PRT_VALUE* PTMP_tmp5_3 = NULL;
    PRT_VALUE* PTMP_tmp6_3 = NULL;
    PRT_VALUE* PTMP_tmp7_3 = NULL;
    PRT_VALUE* PTMP_tmp8_2 = NULL;
    PRT_VALUE* PTMP_tmp9_2 = NULL;
    PRT_VALUE* PTMP_tmp10_1 = NULL;
    PRT_VALUE* PTMP_tmp11_1 = NULL;
    PRT_VALUE* PTMP_tmp12_1 = NULL;
    PRT_VALUE* PTMP_tmp13_1 = NULL;
    PRT_VALUE* PTMP_tmp14 = NULL;
    PRT_VALUE* PTMP_tmp15 = NULL;
    PRT_VALUE* PTMP_tmp16 = NULL;
    PRT_VALUE* PTMP_tmp17 = NULL;
    PRT_VALUE* PTMP_tmp18 = NULL;
    PRT_VALUE* PTMP_tmp19 = NULL;
    PRT_VALUE* PTMP_tmp20 = NULL;
    PRT_VALUE* PTMP_tmp21 = NULL;
    PRT_VALUE* PTMP_tmp22 = NULL;
    PRT_VALUE* PTMP_tmp23 = NULL;
    PRT_VALUE* PTMP_tmp24 = NULL;
    PRT_VALUE* PTMP_tmp25 = NULL;
    PRT_VALUE* PTMP_tmp26 = NULL;
    PRT_VALUE* PTMP_tmp27 = NULL;
    PRT_VALUE* PTMP_tmp28 = NULL;
    PRT_VALUE* PTMP_tmp29 = NULL;
    PRT_VALUE* PTMP_tmp30 = NULL;
    PRT_VALUE* PTMP_tmp31 = NULL;
    PRT_VALUE* PTMP_tmp32 = NULL;
    PRT_VALUE* PTMP_tmp33 = NULL;
    PRT_VALUE* PTMP_tmp34 = NULL;
    PRT_VALUE* PTMP_tmp35 = NULL;
    PRT_VALUE* PTMP_tmp36 = NULL;
    PRT_VALUE* PTMP_tmp37 = NULL;
    PRT_VALUE* PTMP_tmp38 = NULL;
    PRT_VALUE* PTMP_tmp39 = NULL;
    PRT_VALUE* PTMP_tmp40 = NULL;
    PRT_VALUE* PTMP_tmp41 = NULL;
    PRT_VALUE* PTMP_tmp42 = NULL;
    PRT_VALUE* PTMP_tmp43 = NULL;
    PRT_VALUE* PTMP_tmp44 = NULL;
    PRT_VALUE* PTMP_tmp45 = NULL;
    PRT_VALUE* PTMP_tmp46 = NULL;
    PRT_VALUE* PTMP_tmp47 = NULL;
    PRT_VALUE* PTMP_tmp48 = NULL;
    PRT_VALUE* PTMP_tmp49 = NULL;
    PRT_VALUE* PTMP_tmp50 = NULL;
    PRT_VALUE* PTMP_tmp51 = NULL;
    PRT_VALUE* PTMP_tmp52 = NULL;
    PRT_VALUE* PTMP_tmp53 = NULL;
    PRT_VALUE* PTMP_tmp54 = NULL;
    PRT_VALUE* PTMP_tmp55 = NULL;
    PRT_VALUE* PTMP_tmp56 = NULL;
    PRT_VALUE* PTMP_tmp57 = NULL;
    PRT_VALUE* PTMP_tmp58 = NULL;
    PRT_VALUE* PTMP_tmp59 = NULL;
    PRT_VALUE* PTMP_tmp60 = NULL;
    PRT_VALUE* PTMP_tmp61 = NULL;
    PRT_VALUE* PTMP_tmp62 = NULL;
    PRT_VALUE* PTMP_tmp63 = NULL;
    PRT_VALUE* PTMP_tmp64 = NULL;
    PRT_VALUE* PTMP_tmp65 = NULL;
    PRT_VALUE* PTMP_tmp66 = NULL;
    PRT_VALUE* PTMP_tmp67 = NULL;
    PRT_VALUE* PTMP_tmp68 = NULL;
    PRT_VALUE* PTMP_tmp69 = NULL;
    PRT_VALUE* PTMP_tmp70 = NULL;
    PRT_VALUE* PTMP_tmp71 = NULL;
    PRT_VALUE* PTMP_tmp72 = NULL;
    PRT_VALUE* PTMP_tmp73 = NULL;
    PRT_VALUE* PTMP_tmp74 = NULL;
    PRT_VALUE* PTMP_tmp75 = NULL;
    PRT_VALUE* PTMP_tmp76 = NULL;
    PRT_VALUE* PTMP_tmp77 = NULL;
    PRT_VALUE* PTMP_tmp78 = NULL;
    PRT_VALUE* PTMP_tmp79 = NULL;
    PRT_VALUE* PTMP_tmp80 = NULL;
    PRT_VALUE* PTMP_tmp81 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_7 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_INT32_8 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_9 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_10 = { PRT_VALUE_KIND_INT, { .nt = 3 } };
    PRT_VALUE P_LIT_INT32_11 = { PRT_VALUE_KIND_INT, { .nt = 4 } };
    PRT_VALUE P_LIT_INT32_12 = { PRT_VALUE_KIND_INT, { .nt = 5 } };
    PRT_VALUE P_LIT_INT32_13 = { PRT_VALUE_KIND_INT, { .nt = 6 } };
    PRT_VALUE P_LIT_INT32_14 = { PRT_VALUE_KIND_INT, { .nt = 7 } };
    PRT_VALUE P_LIT_INT32_15 = { PRT_VALUE_KIND_INT, { .nt = 8 } };
    PRT_VALUE P_LIT_INT32_16 = { PRT_VALUE_KIND_INT, { .nt = 9 } };
    PRT_VALUE P_LIT_DOUBLE = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PRT_VALUE P_LIT_DOUBLE_1 = { PRT_VALUE_KIND_FLOAT, { .ft = 4 } };
    PRT_VALUE P_LIT_DOUBLE_2 = { PRT_VALUE_KIND_FLOAT, { .ft = 3.5 } };
    PRT_VALUE P_LIT_DOUBLE_3 = { PRT_VALUE_KIND_FLOAT, { .ft = 2 } };
    PRT_VALUE P_LIT_DOUBLE_4 = { PRT_VALUE_KIND_FLOAT, { .ft = 5 } };
    PRT_VALUE** P_LVALUE_48 = &(PTMP_tmp0_3);
    PrtFreeValue(*P_LVALUE_48);
    *P_LVALUE_48 = PrtMkDefaultValue(&P_GEND_TYPE_ST3T2iiT3fffm);
    
    {
        PRT_VALUE** P_LVALUE_49 = &(P_VAR_DstRequests);
        PrtFreeValue(*P_LVALUE_49);
        *P_LVALUE_49 = PTMP_tmp0_3;
        PTMP_tmp0_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_50 = &(*(PrtTupleGetLValue(P_VAR_requestInfo, 0)));
    PrtFreeValue(*P_LVALUE_50);
    *P_LVALUE_50 = PrtCloneValue((&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_51 = &(*(PrtTupleGetLValue(P_VAR_requestInfo, 1)));
    PrtFreeValue(*P_LVALUE_51);
    *P_LVALUE_51 = PrtCloneValue((&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_52 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_52);
    *P_LVALUE_52 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_53 = &(PTMP_tmp1_3);
    PrtFreeValue(*P_LVALUE_53);
    *P_LVALUE_53 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_54 = &(PTMP_tmp2_3);
    PrtFreeValue(*P_LVALUE_54);
    *P_LVALUE_54 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_55 = &(PTMP_tmp3_3);
    PrtFreeValue(*P_LVALUE_55);
    *P_LVALUE_55 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_56 = &(PTMP_tmp4_3);
    PrtFreeValue(*P_LVALUE_56);
    *P_LVALUE_56 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp1_3), &(PTMP_tmp2_3), &(PTMP_tmp3_3)));
    
    {
        PRT_VALUE** P_LVALUE_57 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_57);
        *P_LVALUE_57 = PTMP_tmp4_3;
        PTMP_tmp4_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_58 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_58);
    *P_LVALUE_58 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_59 = &(PTMP_tmp5_3);
    PrtFreeValue(*P_LVALUE_59);
    *P_LVALUE_59 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_8), PTMP_tmp5_3, PRT_FALSE);
    *(&(PTMP_tmp5_3)) = NULL;
    
    PRT_VALUE** P_LVALUE_60 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_60);
    *P_LVALUE_60 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_61 = &(PTMP_tmp6_3);
    PrtFreeValue(*P_LVALUE_61);
    *P_LVALUE_61 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_62 = &(PTMP_tmp7_3);
    PrtFreeValue(*P_LVALUE_62);
    *P_LVALUE_62 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_63 = &(PTMP_tmp8_2);
    PrtFreeValue(*P_LVALUE_63);
    *P_LVALUE_63 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_64 = &(PTMP_tmp9_2);
    PrtFreeValue(*P_LVALUE_64);
    *P_LVALUE_64 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp6_3), &(PTMP_tmp7_3), &(PTMP_tmp8_2)));
    
    {
        PRT_VALUE** P_LVALUE_65 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_65);
        *P_LVALUE_65 = PTMP_tmp9_2;
        PTMP_tmp9_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_66 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_66);
    *P_LVALUE_66 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_67 = &(PTMP_tmp10_1);
    PrtFreeValue(*P_LVALUE_67);
    *P_LVALUE_67 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_7), PTMP_tmp10_1, PRT_FALSE);
    *(&(PTMP_tmp10_1)) = NULL;
    
    PRT_VALUE** P_LVALUE_68 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_68);
    *P_LVALUE_68 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_69 = &(PTMP_tmp11_1);
    PrtFreeValue(*P_LVALUE_69);
    *P_LVALUE_69 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_70 = &(PTMP_tmp12_1);
    PrtFreeValue(*P_LVALUE_70);
    *P_LVALUE_70 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_71 = &(PTMP_tmp13_1);
    PrtFreeValue(*P_LVALUE_71);
    *P_LVALUE_71 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_72 = &(PTMP_tmp14);
    PrtFreeValue(*P_LVALUE_72);
    *P_LVALUE_72 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp11_1), &(PTMP_tmp12_1), &(PTMP_tmp13_1)));
    
    {
        PRT_VALUE** P_LVALUE_73 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_73);
        *P_LVALUE_73 = PTMP_tmp14;
        PTMP_tmp14 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_74 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_74);
    *P_LVALUE_74 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_75 = &(PTMP_tmp15);
    PrtFreeValue(*P_LVALUE_75);
    *P_LVALUE_75 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_9), PTMP_tmp15, PRT_FALSE);
    *(&(PTMP_tmp15)) = NULL;
    
    PRT_VALUE** P_LVALUE_76 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_76);
    *P_LVALUE_76 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_77 = &(PTMP_tmp16);
    PrtFreeValue(*P_LVALUE_77);
    *P_LVALUE_77 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_78 = &(PTMP_tmp17);
    PrtFreeValue(*P_LVALUE_78);
    *P_LVALUE_78 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_79 = &(PTMP_tmp18);
    PrtFreeValue(*P_LVALUE_79);
    *P_LVALUE_79 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_80 = &(PTMP_tmp19);
    PrtFreeValue(*P_LVALUE_80);
    *P_LVALUE_80 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp16), &(PTMP_tmp17), &(PTMP_tmp18)));
    
    {
        PRT_VALUE** P_LVALUE_81 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_81);
        *P_LVALUE_81 = PTMP_tmp19;
        PTMP_tmp19 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_82 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_82);
    *P_LVALUE_82 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_83 = &(PTMP_tmp20);
    PrtFreeValue(*P_LVALUE_83);
    *P_LVALUE_83 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_10), PTMP_tmp20, PRT_FALSE);
    *(&(PTMP_tmp20)) = NULL;
    
    PRT_VALUE** P_LVALUE_84 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_84);
    *P_LVALUE_84 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_85 = &(PTMP_tmp21);
    PrtFreeValue(*P_LVALUE_85);
    *P_LVALUE_85 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_86 = &(PTMP_tmp22);
    PrtFreeValue(*P_LVALUE_86);
    *P_LVALUE_86 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_87 = &(PTMP_tmp23);
    PrtFreeValue(*P_LVALUE_87);
    *P_LVALUE_87 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_88 = &(PTMP_tmp24);
    PrtFreeValue(*P_LVALUE_88);
    *P_LVALUE_88 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp21), &(PTMP_tmp22), &(PTMP_tmp23)));
    
    {
        PRT_VALUE** P_LVALUE_89 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_89);
        *P_LVALUE_89 = PTMP_tmp24;
        PTMP_tmp24 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_90 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_90);
    *P_LVALUE_90 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_91 = &(PTMP_tmp25);
    PrtFreeValue(*P_LVALUE_91);
    *P_LVALUE_91 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_11), PTMP_tmp25, PRT_FALSE);
    *(&(PTMP_tmp25)) = NULL;
    
    PRT_VALUE** P_LVALUE_92 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_92);
    *P_LVALUE_92 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_93 = &(PTMP_tmp26);
    PrtFreeValue(*P_LVALUE_93);
    *P_LVALUE_93 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_94 = &(PTMP_tmp27);
    PrtFreeValue(*P_LVALUE_94);
    *P_LVALUE_94 = ((_P_GEN_funval = P_randomFloat_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_95 = &(PTMP_tmp28);
    PrtFreeValue(*P_LVALUE_95);
    *P_LVALUE_95 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_96 = &(PTMP_tmp29);
    PrtFreeValue(*P_LVALUE_96);
    *P_LVALUE_96 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp26), &(PTMP_tmp27), &(PTMP_tmp28)));
    
    {
        PRT_VALUE** P_LVALUE_97 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_97);
        *P_LVALUE_97 = PTMP_tmp29;
        PTMP_tmp29 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_98 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_98);
    *P_LVALUE_98 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_99 = &(PTMP_tmp30);
    PrtFreeValue(*P_LVALUE_99);
    *P_LVALUE_99 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_12), PTMP_tmp30, PRT_FALSE);
    *(&(PTMP_tmp30)) = NULL;
    
    PRT_VALUE** P_LVALUE_100 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_100);
    *P_LVALUE_100 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_101 = &(PTMP_tmp31);
    PrtFreeValue(*P_LVALUE_101);
    *P_LVALUE_101 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_102 = &(PTMP_tmp32);
    PrtFreeValue(*P_LVALUE_102);
    *P_LVALUE_102 = PrtCloneValue((&P_LIT_DOUBLE_2));
    
    PRT_VALUE** P_LVALUE_103 = &(PTMP_tmp33);
    PrtFreeValue(*P_LVALUE_103);
    *P_LVALUE_103 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_104 = &(PTMP_tmp34);
    PrtFreeValue(*P_LVALUE_104);
    *P_LVALUE_104 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp31), &(PTMP_tmp32), &(PTMP_tmp33)));
    
    {
        PRT_VALUE** P_LVALUE_105 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_105);
        *P_LVALUE_105 = PTMP_tmp34;
        PTMP_tmp34 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_106 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_106);
    *P_LVALUE_106 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_107 = &(PTMP_tmp35);
    PrtFreeValue(*P_LVALUE_107);
    *P_LVALUE_107 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_13), PTMP_tmp35, PRT_FALSE);
    *(&(PTMP_tmp35)) = NULL;
    
    PRT_VALUE** P_LVALUE_108 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_108);
    *P_LVALUE_108 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_109 = &(PTMP_tmp36);
    PrtFreeValue(*P_LVALUE_109);
    *P_LVALUE_109 = PrtCloneValue((&P_LIT_DOUBLE_3));
    
    PRT_VALUE** P_LVALUE_110 = &(PTMP_tmp37);
    PrtFreeValue(*P_LVALUE_110);
    *P_LVALUE_110 = PrtCloneValue((&P_LIT_DOUBLE_3));
    
    PRT_VALUE** P_LVALUE_111 = &(PTMP_tmp38);
    PrtFreeValue(*P_LVALUE_111);
    *P_LVALUE_111 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_112 = &(PTMP_tmp39);
    PrtFreeValue(*P_LVALUE_112);
    *P_LVALUE_112 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp36), &(PTMP_tmp37), &(PTMP_tmp38)));
    
    {
        PRT_VALUE** P_LVALUE_113 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_113);
        *P_LVALUE_113 = PTMP_tmp39;
        PTMP_tmp39 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_114 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_114);
    *P_LVALUE_114 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_115 = &(PTMP_tmp40);
    PrtFreeValue(*P_LVALUE_115);
    *P_LVALUE_115 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_14), PTMP_tmp40, PRT_FALSE);
    *(&(PTMP_tmp40)) = NULL;
    
    PRT_VALUE** P_LVALUE_116 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_116);
    *P_LVALUE_116 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_117 = &(PTMP_tmp41);
    PrtFreeValue(*P_LVALUE_117);
    *P_LVALUE_117 = PrtCloneValue((&P_LIT_DOUBLE_4));
    
    PRT_VALUE** P_LVALUE_118 = &(PTMP_tmp42);
    PrtFreeValue(*P_LVALUE_118);
    *P_LVALUE_118 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_119 = &(PTMP_tmp43);
    PrtFreeValue(*P_LVALUE_119);
    *P_LVALUE_119 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_120 = &(PTMP_tmp44);
    PrtFreeValue(*P_LVALUE_120);
    *P_LVALUE_120 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp41), &(PTMP_tmp42), &(PTMP_tmp43)));
    
    {
        PRT_VALUE** P_LVALUE_121 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_121);
        *P_LVALUE_121 = PTMP_tmp44;
        PTMP_tmp44 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_122 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_122);
    *P_LVALUE_122 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_123 = &(PTMP_tmp45);
    PrtFreeValue(*P_LVALUE_123);
    *P_LVALUE_123 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_15), PTMP_tmp45, PRT_FALSE);
    *(&(PTMP_tmp45)) = NULL;
    
    PRT_VALUE** P_LVALUE_124 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 0)));
    PrtFreeValue(*P_LVALUE_124);
    *P_LVALUE_124 = PrtCloneValue(P_VAR_requestInfo);
    
    PRT_VALUE** P_LVALUE_125 = &(PTMP_tmp46);
    PrtFreeValue(*P_LVALUE_125);
    *P_LVALUE_125 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_126 = &(PTMP_tmp47);
    PrtFreeValue(*P_LVALUE_126);
    *P_LVALUE_126 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_127 = &(PTMP_tmp48);
    PrtFreeValue(*P_LVALUE_127);
    *P_LVALUE_127 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_128 = &(PTMP_tmp49);
    PrtFreeValue(*P_LVALUE_128);
    *P_LVALUE_128 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp46), &(PTMP_tmp47), &(PTMP_tmp48)));
    
    {
        PRT_VALUE** P_LVALUE_129 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 1)));
        PrtFreeValue(*P_LVALUE_129);
        *P_LVALUE_129 = PTMP_tmp49;
        PTMP_tmp49 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_130 = &(*(PrtTupleGetLValue(P_VAR_tempDstRequest, 2)));
    PrtFreeValue(*P_LVALUE_130);
    *P_LVALUE_130 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_131 = &(PTMP_tmp50);
    PrtFreeValue(*P_LVALUE_131);
    *P_LVALUE_131 = PrtCloneValue(P_VAR_tempDstRequest);
    
    PrtSeqInsertEx(P_VAR_DstRequests, (&P_LIT_INT32_16), PTMP_tmp50, PRT_FALSE);
    *(&(PTMP_tmp50)) = NULL;
    
    PRT_VALUE** P_LVALUE_132 = &(PTMP_tmp51);
    PrtFreeValue(*P_LVALUE_132);
    *P_LVALUE_132 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_133 = &(PTMP_tmp52);
    PrtFreeValue(*P_LVALUE_133);
    *P_LVALUE_133 = PrtCloneValue((&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_134 = &(PTMP_tmp53);
    PrtFreeValue(*P_LVALUE_134);
    *P_LVALUE_134 = PrtCloneValue(PrtMkInterface(context, 5, 2, &(PTMP_tmp51), &(PTMP_tmp52))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    {
        PRT_VALUE** P_LVALUE_135 = &(p_this->varValues[4]);
        PrtFreeValue(*P_LVALUE_135);
        *P_LVALUE_135 = PTMP_tmp53;
        PTMP_tmp53 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_136 = &(PTMP_tmp54);
    PrtFreeValue(*P_LVALUE_136);
    *P_LVALUE_136 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_137 = &(PTMP_tmp55);
    PrtFreeValue(*P_LVALUE_137);
    *P_LVALUE_137 = PrtCloneValue((&P_LIT_INT32_9));
    
    PRT_VALUE** P_LVALUE_138 = &(PTMP_tmp56);
    PrtFreeValue(*P_LVALUE_138);
    *P_LVALUE_138 = PrtCloneValue(PrtMkInterface(context, 5, 2, &(PTMP_tmp54), &(PTMP_tmp55))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    {
        PRT_VALUE** P_LVALUE_139 = &(p_this->varValues[5]);
        PrtFreeValue(*P_LVALUE_139);
        *P_LVALUE_139 = PTMP_tmp56;
        PTMP_tmp56 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_140 = &(PTMP_tmp57);
    PrtFreeValue(*P_LVALUE_140);
    *P_LVALUE_140 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_141 = &(PTMP_tmp58);
    PrtFreeValue(*P_LVALUE_141);
    *P_LVALUE_141 = PrtCloneValue((&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_142 = &(PTMP_tmp59);
    PrtFreeValue(*P_LVALUE_142);
    *P_LVALUE_142 = PrtCloneValue(PrtMkInterface(context, 2, 2, &(PTMP_tmp57), &(PTMP_tmp58))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    {
        PRT_VALUE** P_LVALUE_143 = &(p_this->varValues[6]);
        PrtFreeValue(*P_LVALUE_143);
        *P_LVALUE_143 = PTMP_tmp59;
        PTMP_tmp59 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_144 = &(PTMP_tmp60);
    PrtFreeValue(*P_LVALUE_144);
    *P_LVALUE_144 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_145 = &(PTMP_tmp61);
    PrtFreeValue(*P_LVALUE_145);
    *P_LVALUE_145 = PrtCloneValue((&P_LIT_INT32_9));
    
    PRT_VALUE** P_LVALUE_146 = &(PTMP_tmp62);
    PrtFreeValue(*P_LVALUE_146);
    *P_LVALUE_146 = PrtCloneValue(PrtMkInterface(context, 2, 2, &(PTMP_tmp60), &(PTMP_tmp61))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    {
        PRT_VALUE** P_LVALUE_147 = &(p_this->varValues[7]);
        PrtFreeValue(*P_LVALUE_147);
        *P_LVALUE_147 = PTMP_tmp62;
        PTMP_tmp62 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_148 = &(PTMP_tmp63);
    PrtFreeValue(*P_LVALUE_148);
    *P_LVALUE_148 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_149 = &(PTMP_tmp64);
    PrtFreeValue(*P_LVALUE_149);
    *P_LVALUE_149 = PrtCloneValue(PrtMkInterface(context, 3, 1, &(PTMP_tmp63))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    {
        PRT_VALUE** P_LVALUE_150 = &(p_this->varValues[8]);
        PrtFreeValue(*P_LVALUE_150);
        *P_LVALUE_150 = PTMP_tmp64;
        PTMP_tmp64 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_151 = &(PTMP_tmp65);
    PrtFreeValue(*P_LVALUE_151);
    *P_LVALUE_151 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_152 = &(PTMP_tmp66);
    PrtFreeValue(*P_LVALUE_152);
    *P_LVALUE_152 = PrtCloneValue(PTMP_tmp65);
    
    PRT_VALUE** P_LVALUE_153 = &(PTMP_tmp67);
    PrtFreeValue(*P_LVALUE_153);
    *P_LVALUE_153 = PrtCloneValue((&P_EVENT_SendNextDstReq.value));
    
    PRT_VALUE** P_LVALUE_154 = &(PTMP_tmp68);
    PrtFreeValue(*P_LVALUE_154);
    *P_LVALUE_154 = PrtSeqGet(P_VAR_DstRequests, (&P_LIT_INT32_15));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp66), PTMP_tmp67, 1, &(PTMP_tmp68));
    *(&(PTMP_tmp67)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_155 = &(PTMP_tmp69);
    PrtFreeValue(*P_LVALUE_155);
    *P_LVALUE_155 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_8));
    
    PRT_VALUE** P_LVALUE_156 = &(PTMP_tmp70);
    PrtFreeValue(*P_LVALUE_156);
    *P_LVALUE_156 = PrtCloneValue(PTMP_tmp69);
    
    PRT_VALUE** P_LVALUE_157 = &(PTMP_tmp71);
    PrtFreeValue(*P_LVALUE_157);
    *P_LVALUE_157 = PrtCloneValue((&P_EVENT_SendNextDstReq.value));
    
    PRT_VALUE** P_LVALUE_158 = &(PTMP_tmp72);
    PrtFreeValue(*P_LVALUE_158);
    *P_LVALUE_158 = PrtSeqGet(P_VAR_DstRequests, (&P_LIT_INT32_16));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp70), PTMP_tmp71, 1, &(PTMP_tmp72));
    *(&(PTMP_tmp71)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_159 = &(PTMP_tmp73);
    PrtFreeValue(*P_LVALUE_159);
    *P_LVALUE_159 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_8));
    
    PRT_VALUE** P_LVALUE_160 = &(PTMP_tmp74);
    PrtFreeValue(*P_LVALUE_160);
    *P_LVALUE_160 = PrtCloneValue(PTMP_tmp73);
    
    PRT_VALUE** P_LVALUE_161 = &(PTMP_tmp75);
    PrtFreeValue(*P_LVALUE_161);
    *P_LVALUE_161 = PrtCloneValue((&P_EVENT_SendNextDstReq.value));
    
    PRT_VALUE** P_LVALUE_162 = &(PTMP_tmp76);
    PrtFreeValue(*P_LVALUE_162);
    *P_LVALUE_162 = PrtSeqGet(P_VAR_DstRequests, (&P_LIT_INT32_13));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp74), PTMP_tmp75, 1, &(PTMP_tmp76));
    *(&(PTMP_tmp75)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_163 = &(PTMP_tmp77);
    PrtFreeValue(*P_LVALUE_163);
    *P_LVALUE_163 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_164 = &(PTMP_tmp78);
    PrtFreeValue(*P_LVALUE_164);
    *P_LVALUE_164 = PrtCloneValue(PTMP_tmp77);
    
    PRT_VALUE** P_LVALUE_165 = &(PTMP_tmp79);
    PrtFreeValue(*P_LVALUE_165);
    *P_LVALUE_165 = PrtCloneValue((&P_EVENT_SendNextDstReq.value));
    
    PRT_VALUE** P_LVALUE_166 = &(PTMP_tmp80);
    PrtFreeValue(*P_LVALUE_166);
    *P_LVALUE_166 = PrtSeqGet(P_VAR_DstRequests, (&P_LIT_INT32_13));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp78), PTMP_tmp79, 1, &(PTMP_tmp80));
    *(&(PTMP_tmp79)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_3;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_3;
    }
    
    PRT_VALUE** P_LVALUE_167 = &(PTMP_tmp81);
    PrtFreeValue(*P_LVALUE_167);
    *P_LVALUE_167 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp81, 0);
    *(&(PTMP_tmp81)) = NULL;
    goto p_return_3;
    
p_return_3: ;
    PrtFreeValue(P_VAR_requestInfo); P_VAR_requestInfo = NULL;
    PrtFreeValue(P_VAR_tempDstRequest); P_VAR_tempDstRequest = NULL;
    PrtFreeValue(P_VAR_counter); P_VAR_counter = NULL;
    PrtFreeValue(P_VAR_droneId); P_VAR_droneId = NULL;
    PrtFreeValue(P_VAR_DstRequests); P_VAR_DstRequests = NULL;
    PrtFreeValue(P_VAR_randomFloat); P_VAR_randomFloat = NULL;
    PrtFreeValue(P_VAR_randomFloat2); P_VAR_randomFloat2 = NULL;
    PrtFreeValue(PTMP_tmp0_3); PTMP_tmp0_3 = NULL;
    PrtFreeValue(PTMP_tmp1_3); PTMP_tmp1_3 = NULL;
    PrtFreeValue(PTMP_tmp2_3); PTMP_tmp2_3 = NULL;
    PrtFreeValue(PTMP_tmp3_3); PTMP_tmp3_3 = NULL;
    PrtFreeValue(PTMP_tmp4_3); PTMP_tmp4_3 = NULL;
    PrtFreeValue(PTMP_tmp5_3); PTMP_tmp5_3 = NULL;
    PrtFreeValue(PTMP_tmp6_3); PTMP_tmp6_3 = NULL;
    PrtFreeValue(PTMP_tmp7_3); PTMP_tmp7_3 = NULL;
    PrtFreeValue(PTMP_tmp8_2); PTMP_tmp8_2 = NULL;
    PrtFreeValue(PTMP_tmp9_2); PTMP_tmp9_2 = NULL;
    PrtFreeValue(PTMP_tmp10_1); PTMP_tmp10_1 = NULL;
    PrtFreeValue(PTMP_tmp11_1); PTMP_tmp11_1 = NULL;
    PrtFreeValue(PTMP_tmp12_1); PTMP_tmp12_1 = NULL;
    PrtFreeValue(PTMP_tmp13_1); PTMP_tmp13_1 = NULL;
    PrtFreeValue(PTMP_tmp14); PTMP_tmp14 = NULL;
    PrtFreeValue(PTMP_tmp15); PTMP_tmp15 = NULL;
    PrtFreeValue(PTMP_tmp16); PTMP_tmp16 = NULL;
    PrtFreeValue(PTMP_tmp17); PTMP_tmp17 = NULL;
    PrtFreeValue(PTMP_tmp18); PTMP_tmp18 = NULL;
    PrtFreeValue(PTMP_tmp19); PTMP_tmp19 = NULL;
    PrtFreeValue(PTMP_tmp20); PTMP_tmp20 = NULL;
    PrtFreeValue(PTMP_tmp21); PTMP_tmp21 = NULL;
    PrtFreeValue(PTMP_tmp22); PTMP_tmp22 = NULL;
    PrtFreeValue(PTMP_tmp23); PTMP_tmp23 = NULL;
    PrtFreeValue(PTMP_tmp24); PTMP_tmp24 = NULL;
    PrtFreeValue(PTMP_tmp25); PTMP_tmp25 = NULL;
    PrtFreeValue(PTMP_tmp26); PTMP_tmp26 = NULL;
    PrtFreeValue(PTMP_tmp27); PTMP_tmp27 = NULL;
    PrtFreeValue(PTMP_tmp28); PTMP_tmp28 = NULL;
    PrtFreeValue(PTMP_tmp29); PTMP_tmp29 = NULL;
    PrtFreeValue(PTMP_tmp30); PTMP_tmp30 = NULL;
    PrtFreeValue(PTMP_tmp31); PTMP_tmp31 = NULL;
    PrtFreeValue(PTMP_tmp32); PTMP_tmp32 = NULL;
    PrtFreeValue(PTMP_tmp33); PTMP_tmp33 = NULL;
    PrtFreeValue(PTMP_tmp34); PTMP_tmp34 = NULL;
    PrtFreeValue(PTMP_tmp35); PTMP_tmp35 = NULL;
    PrtFreeValue(PTMP_tmp36); PTMP_tmp36 = NULL;
    PrtFreeValue(PTMP_tmp37); PTMP_tmp37 = NULL;
    PrtFreeValue(PTMP_tmp38); PTMP_tmp38 = NULL;
    PrtFreeValue(PTMP_tmp39); PTMP_tmp39 = NULL;
    PrtFreeValue(PTMP_tmp40); PTMP_tmp40 = NULL;
    PrtFreeValue(PTMP_tmp41); PTMP_tmp41 = NULL;
    PrtFreeValue(PTMP_tmp42); PTMP_tmp42 = NULL;
    PrtFreeValue(PTMP_tmp43); PTMP_tmp43 = NULL;
    PrtFreeValue(PTMP_tmp44); PTMP_tmp44 = NULL;
    PrtFreeValue(PTMP_tmp45); PTMP_tmp45 = NULL;
    PrtFreeValue(PTMP_tmp46); PTMP_tmp46 = NULL;
    PrtFreeValue(PTMP_tmp47); PTMP_tmp47 = NULL;
    PrtFreeValue(PTMP_tmp48); PTMP_tmp48 = NULL;
    PrtFreeValue(PTMP_tmp49); PTMP_tmp49 = NULL;
    PrtFreeValue(PTMP_tmp50); PTMP_tmp50 = NULL;
    PrtFreeValue(PTMP_tmp51); PTMP_tmp51 = NULL;
    PrtFreeValue(PTMP_tmp52); PTMP_tmp52 = NULL;
    PrtFreeValue(PTMP_tmp53); PTMP_tmp53 = NULL;
    PrtFreeValue(PTMP_tmp54); PTMP_tmp54 = NULL;
    PrtFreeValue(PTMP_tmp55); PTMP_tmp55 = NULL;
    PrtFreeValue(PTMP_tmp56); PTMP_tmp56 = NULL;
    PrtFreeValue(PTMP_tmp57); PTMP_tmp57 = NULL;
    PrtFreeValue(PTMP_tmp58); PTMP_tmp58 = NULL;
    PrtFreeValue(PTMP_tmp59); PTMP_tmp59 = NULL;
    PrtFreeValue(PTMP_tmp60); PTMP_tmp60 = NULL;
    PrtFreeValue(PTMP_tmp61); PTMP_tmp61 = NULL;
    PrtFreeValue(PTMP_tmp62); PTMP_tmp62 = NULL;
    PrtFreeValue(PTMP_tmp63); PTMP_tmp63 = NULL;
    PrtFreeValue(PTMP_tmp64); PTMP_tmp64 = NULL;
    PrtFreeValue(PTMP_tmp65); PTMP_tmp65 = NULL;
    PrtFreeValue(PTMP_tmp66); PTMP_tmp66 = NULL;
    PrtFreeValue(PTMP_tmp67); PTMP_tmp67 = NULL;
    PrtFreeValue(PTMP_tmp68); PTMP_tmp68 = NULL;
    PrtFreeValue(PTMP_tmp69); PTMP_tmp69 = NULL;
    PrtFreeValue(PTMP_tmp70); PTMP_tmp70 = NULL;
    PrtFreeValue(PTMP_tmp71); PTMP_tmp71 = NULL;
    PrtFreeValue(PTMP_tmp72); PTMP_tmp72 = NULL;
    PrtFreeValue(PTMP_tmp73); PTMP_tmp73 = NULL;
    PrtFreeValue(PTMP_tmp74); PTMP_tmp74 = NULL;
    PrtFreeValue(PTMP_tmp75); PTMP_tmp75 = NULL;
    PrtFreeValue(PTMP_tmp76); PTMP_tmp76 = NULL;
    PrtFreeValue(PTMP_tmp77); PTMP_tmp77 = NULL;
    PrtFreeValue(PTMP_tmp78); PTMP_tmp78 = NULL;
    PrtFreeValue(PTMP_tmp79); PTMP_tmp79 = NULL;
    PrtFreeValue(PTMP_tmp80); PTMP_tmp80 = NULL;
    PrtFreeValue(PTMP_tmp81); PTMP_tmp81 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_1 =
{
    NULL,
    &P_Anon_IMPL_1,
    NULL
};


PRT_VALUE* P_Anon_IMPL_2(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_4: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_2 =
{
    NULL,
    &P_Anon_IMPL_2,
    NULL
};


PRT_FUNDECL* P_TestDriver_METHODS[] = { &P_FUNCTION_Anon, &P_FUNCTION_Anon_1, &P_FUNCTION_Anon_2 };

PRT_EVENTDECL* P_TestDriver_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_RECV_1 =
{
    8U,
    P_TestDriver_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_TestDriver_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_SEND =
{
    8U,
    P_TestDriver_SEND_INNER,
    NULL
};

PRT_UINT32 P_TestDriver_CREATES_ARR[] = { 2, 3, 5, 6 };
PRT_INTERFACESETDECL P_TestDriver_CREATES = { 4, P_TestDriver_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_TestDriver = 
{
    0U,
    "TestDriver",
    &P_EVENTSET_TestDriver_RECV_1,
    &P_EVENTSET_TestDriver_SEND,
    &P_TestDriver_CREATES,
    9U,
    3U,
    3U,
    4294967295U,
    0U,
    P_TestDriver_VARS,
    P_TestDriver_STATES,
    P_TestDriver_METHODS
};

PRT_VARDECL P_MotionPlanner_VARS[] = {
    { "robot", &P_GEND_TYPE_m },
    { "robotId", &P_GEND_TYPE_i },
    { "planExecutor", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_1 =
{
    0U,
    P_Init_DEFERS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_1[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_1 =
{
    1U,
    P_Init_TRANS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_1 =
{
    0U,
    P_Init_DOS_INNER_1,
    NULL
};

PRT_TRANSDECL P_TRANS_2[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_Init \
{ \
    "MotionPlanner.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_1, \
    &P_EVENTSET_Init_TRANS_1, \
    &P_EVENTSET_Init_DOS_1, \
    P_TRANS_2, \
    NULL, \
    &P_FUNCTION_Anon_3, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_1 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_SendGoalPoint };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_1 =
{
    2U,
    P_WaitRequest_TRANS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS_1 =
{
    0U,
    P_WaitRequest_DOS_INNER_1,
    NULL
};

PRT_TRANSDECL P_TRANS_3[] =
{
    { 1, &P_EVENT_SendGoalPoint, 2, &_P_NO_OP },
    { 1, &P_EVENT_CompletedPoint, 3, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_WaitRequest \
{ \
    "MotionPlanner.WaitRequest", \
    2U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_1, \
    &P_EVENTSET_WaitRequest_TRANS_1, \
    &P_EVENTSET_WaitRequest_DOS_1, \
    P_TRANS_3, \
    NULL, \
    &P_FUNCTION_Anon_4, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_CompletedPointState_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_CompletedPointState_DEFERS =
{
    0U,
    P_CompletedPointState_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_CompletedPointState_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_CompletedPointState_TRANS =
{
    1U,
    P_CompletedPointState_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_CompletedPointState_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_CompletedPointState_DOS =
{
    0U,
    P_CompletedPointState_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_4[] =
{
    { 3, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_CompletedPointState \
{ \
    "MotionPlanner.CompletedPointState", \
    1U, \
    0U, \
    &P_EVENTSET_CompletedPointState_DEFERS, \
    &P_EVENTSET_CompletedPointState_TRANS, \
    &P_EVENTSET_CompletedPointState_DOS, \
    P_TRANS_4, \
    NULL, \
    &P_FUNCTION_Anon_5, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_ComputePathAndSendToPE_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ComputePathAndSendToPE_DEFERS =
{
    0U,
    P_ComputePathAndSendToPE_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_ComputePathAndSendToPE_TRANS_INNER[] = { &P_EVENT_CompletedPoint };
PRT_EVENTSETDECL P_EVENTSET_ComputePathAndSendToPE_TRANS =
{
    1U,
    P_ComputePathAndSendToPE_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_ComputePathAndSendToPE_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ComputePathAndSendToPE_DOS =
{
    0U,
    P_ComputePathAndSendToPE_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_5[] =
{
    { 2, &P_EVENT_CompletedPoint, 3, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_ComputePathAndSendToPE \
{ \
    "MotionPlanner.ComputePathAndSendToPE", \
    1U, \
    0U, \
    &P_EVENTSET_ComputePathAndSendToPE_DEFERS, \
    &P_EVENTSET_ComputePathAndSendToPE_TRANS, \
    &P_EVENTSET_ComputePathAndSendToPE_DOS, \
    P_TRANS_5, \
    NULL, \
    &P_FUNCTION_Anon_6, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_MotionPlanner_STATES[] = { P_STATE_MotionPlanner_Init, P_STATE_MotionPlanner_WaitRequest, P_STATE_MotionPlanner_ComputePathAndSendToPE, P_STATE_MotionPlanner_CompletedPointState };

PRT_VALUE* P_Anon_IMPL_3(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_1 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_4 = NULL;
    PRT_VALUE* PTMP_tmp1_4 = NULL;
    PRT_VALUE* PTMP_tmp2_4 = NULL;
    PRT_VALUE* PTMP_tmp3_4 = NULL;
    PRT_VALUE* PTMP_tmp4_4 = NULL;
    PRT_VALUE* PTMP_tmp5_4 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_168 = &(PTMP_tmp0_4);
    PrtFreeValue(*P_LVALUE_168);
    *P_LVALUE_168 = PrtTupleGet(*P_VAR_payload_1, 0);
    
    {
        PRT_VALUE** P_LVALUE_169 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_169);
        *P_LVALUE_169 = PTMP_tmp0_4;
        PTMP_tmp0_4 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_170 = &(PTMP_tmp1_4);
    PrtFreeValue(*P_LVALUE_170);
    *P_LVALUE_170 = PrtTupleGet(*P_VAR_payload_1, 1);
    
    {
        PRT_VALUE** P_LVALUE_171 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_171);
        *P_LVALUE_171 = PTMP_tmp1_4;
        PTMP_tmp1_4 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_172 = &(PTMP_tmp2_4);
    PrtFreeValue(*P_LVALUE_172);
    *P_LVALUE_172 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_173 = &(PTMP_tmp3_4);
    PrtFreeValue(*P_LVALUE_173);
    *P_LVALUE_173 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_174 = &(PTMP_tmp4_4);
    PrtFreeValue(*P_LVALUE_174);
    *P_LVALUE_174 = PrtCloneValue(PrtMkInterface(context, 4, 2, &(PTMP_tmp2_4), &(PTMP_tmp3_4))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_5;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_5;
    }
    
    {
        PRT_VALUE** P_LVALUE_175 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_175);
        *P_LVALUE_175 = PTMP_tmp4_4;
        PTMP_tmp4_4 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_176 = &(PTMP_tmp5_4);
    PrtFreeValue(*P_LVALUE_176);
    *P_LVALUE_176 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp5_4, 0);
    *(&(PTMP_tmp5_4)) = NULL;
    goto p_return_5;
    
p_return_5: ;
    PrtFreeValue(PTMP_tmp0_4); PTMP_tmp0_4 = NULL;
    PrtFreeValue(PTMP_tmp1_4); PTMP_tmp1_4 = NULL;
    PrtFreeValue(PTMP_tmp2_4); PTMP_tmp2_4 = NULL;
    PrtFreeValue(PTMP_tmp3_4); PTMP_tmp3_4 = NULL;
    PrtFreeValue(PTMP_tmp4_4); PTMP_tmp4_4 = NULL;
    PrtFreeValue(PTMP_tmp5_4); PTMP_tmp5_4 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_3 =
{
    NULL,
    &P_Anon_IMPL_3,
    &P_GEND_TYPE_T2mi
};


PRT_VALUE* P_Anon_IMPL_4(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_6: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_4 =
{
    NULL,
    &P_Anon_IMPL_4,
    NULL
};


PRT_VALUE* P_Anon_IMPL_5(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* PTMP_tmp0_5 = NULL;
    PRT_VALUE* PTMP_tmp1_5 = NULL;
    PRT_VALUE* PTMP_tmp2_5 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_177 = &(PTMP_tmp0_5);
    PrtFreeValue(*P_LVALUE_177);
    *P_LVALUE_177 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_178 = &(PTMP_tmp1_5);
    PrtFreeValue(*P_LVALUE_178);
    *P_LVALUE_178 = PrtCloneValue((&P_EVENT_CompletedPoint.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_5), PTMP_tmp1_5, 0);
    *(&(PTMP_tmp1_5)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_7;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_7;
    }
    
    PRT_VALUE** P_LVALUE_179 = &(PTMP_tmp2_5);
    PrtFreeValue(*P_LVALUE_179);
    *P_LVALUE_179 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_5, 0);
    *(&(PTMP_tmp2_5)) = NULL;
    goto p_return_7;
    
p_return_7: ;
    PrtFreeValue(PTMP_tmp0_5); PTMP_tmp0_5 = NULL;
    PrtFreeValue(PTMP_tmp1_5); PTMP_tmp1_5 = NULL;
    PrtFreeValue(PTMP_tmp2_5); PTMP_tmp2_5 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_5 =
{
    NULL,
    &P_Anon_IMPL_5,
    NULL
};


PRT_VALUE* P_Anon_IMPL_6(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_2 = argRefs[0];
    PRT_VALUE* P_VAR_s = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* P_VAR_omplMotionPlan = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* P_VAR_robot_x = PrtMkDefaultValue(&P_GEND_TYPE_f);
    PRT_VALUE* P_VAR_robot_y = PrtMkDefaultValue(&P_GEND_TYPE_f);
    PRT_VALUE* PTMP_tmp0_6 = NULL;
    PRT_VALUE* PTMP_tmp1_6 = NULL;
    PRT_VALUE* PTMP_tmp2_6 = NULL;
    PRT_VALUE* PTMP_tmp3_5 = NULL;
    PRT_VALUE* PTMP_tmp4_5 = NULL;
    PRT_VALUE* PTMP_tmp5_5 = NULL;
    PRT_VALUE* PTMP_tmp6_4 = NULL;
    PRT_VALUE* PTMP_tmp7_4 = NULL;
    PRT_VALUE* PTMP_tmp8_3 = NULL;
    PRT_VALUE* PTMP_tmp9_3 = NULL;
    PRT_VALUE* PTMP_tmp10_2 = NULL;
    PRT_VALUE* PTMP_tmp11_2 = NULL;
    PRT_VALUE* PTMP_tmp12_2 = NULL;
    PRT_VALUE* PTMP_tmp13_2 = NULL;
    PRT_VALUE* PTMP_tmp14_1 = NULL;
    PRT_VALUE* PTMP_tmp15_1 = NULL;
    PRT_VALUE* PTMP_tmp16_1 = NULL;
    PRT_VALUE* P_VAR_P_payload = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_17 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_18 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_DOUBLE_5 = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PRT_VALUE** P_LVALUE_180 = &(PTMP_tmp0_6);
    PrtFreeValue(*P_LVALUE_180);
    *P_LVALUE_180 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_181 = &(P_VAR_s);
        PrtFreeValue(*P_LVALUE_181);
        *P_LVALUE_181 = PTMP_tmp0_6;
        PTMP_tmp0_6 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_182 = &(PTMP_tmp1_6);
    PrtFreeValue(*P_LVALUE_182);
    *P_LVALUE_182 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_183 = &(PTMP_tmp2_6);
    PrtFreeValue(*P_LVALUE_183);
    *P_LVALUE_183 = ((_P_GEN_funargs[0] = &(PTMP_tmp1_6)), (_P_GEN_funval = P_getRobotLocationX_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp1_6), PTMP_tmp1_6 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    {
        PRT_VALUE** P_LVALUE_184 = &(P_VAR_robot_x);
        PrtFreeValue(*P_LVALUE_184);
        *P_LVALUE_184 = PTMP_tmp2_6;
        PTMP_tmp2_6 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_185 = &(PTMP_tmp3_5);
    PrtFreeValue(*P_LVALUE_185);
    *P_LVALUE_185 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_186 = &(PTMP_tmp4_5);
    PrtFreeValue(*P_LVALUE_186);
    *P_LVALUE_186 = ((_P_GEN_funargs[0] = &(PTMP_tmp3_5)), (_P_GEN_funval = P_getRobotLocationY_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp3_5), PTMP_tmp3_5 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    {
        PRT_VALUE** P_LVALUE_187 = &(P_VAR_robot_y);
        PrtFreeValue(*P_LVALUE_187);
        *P_LVALUE_187 = PTMP_tmp4_5;
        PTMP_tmp4_5 = NULL;
    }
    
    PrtFormatPrintf("ROBOT X: ", 1, P_VAR_robot_x, 1, 0, "\n");
    
    PrtFormatPrintf("ROBOT Y: ", 1, P_VAR_robot_y, 1, 0, "\n");
    
    PRT_VALUE** P_LVALUE_188 = &(PTMP_tmp5_5);
    PrtFreeValue(*P_LVALUE_188);
    *P_LVALUE_188 = PrtCloneValue(P_VAR_robot_x);
    
    PRT_VALUE** P_LVALUE_189 = &(PTMP_tmp6_4);
    PrtFreeValue(*P_LVALUE_189);
    *P_LVALUE_189 = PrtCloneValue(P_VAR_robot_y);
    
    PRT_VALUE** P_LVALUE_190 = &(PTMP_tmp7_4);
    PrtFreeValue(*P_LVALUE_190);
    *P_LVALUE_190 = PrtCloneValue((&P_LIT_DOUBLE_5));
    
    PRT_VALUE** P_LVALUE_191 = &(PTMP_tmp8_3);
    PrtFreeValue(*P_LVALUE_191);
    *P_LVALUE_191 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp5_5), &(PTMP_tmp6_4), &(PTMP_tmp7_4)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_17), PTMP_tmp8_3, PRT_FALSE);
    *(&(PTMP_tmp8_3)) = NULL;
    
    PRT_VALUE** P_LVALUE_192 = &(PTMP_tmp9_3);
    PrtFreeValue(*P_LVALUE_192);
    *P_LVALUE_192 = PrtCloneValue(*P_VAR_payload_2);
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_18), PTMP_tmp9_3, PRT_FALSE);
    *(&(PTMP_tmp9_3)) = NULL;
    
    PRT_VALUE** P_LVALUE_193 = &(PTMP_tmp10_2);
    PrtFreeValue(*P_LVALUE_193);
    *P_LVALUE_193 = PrtCloneValue(P_VAR_s);
    
    PRT_VALUE** P_LVALUE_194 = &(PTMP_tmp11_2);
    PrtFreeValue(*P_LVALUE_194);
    *P_LVALUE_194 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_195 = &(PTMP_tmp12_2);
    PrtFreeValue(*P_LVALUE_195);
    *P_LVALUE_195 = ((_P_GEN_funargs[0] = &(PTMP_tmp10_2)), (_P_GEN_funargs[1] = &(PTMP_tmp11_2)), (_P_GEN_funval = P_OmplMotionPlanExternal_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp10_2), PTMP_tmp10_2 = NULL), (PrtFreeValue(PTMP_tmp11_2), PTMP_tmp11_2 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    {
        PRT_VALUE** P_LVALUE_196 = &(P_VAR_omplMotionPlan);
        PrtFreeValue(*P_LVALUE_196);
        *P_LVALUE_196 = PTMP_tmp12_2;
        PTMP_tmp12_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_197 = &(PTMP_tmp13_2);
    PrtFreeValue(*P_LVALUE_197);
    *P_LVALUE_197 = PrtCloneValue(p_this->varValues[2]);
    
    PRT_VALUE** P_LVALUE_198 = &(PTMP_tmp14_1);
    PrtFreeValue(*P_LVALUE_198);
    *P_LVALUE_198 = PrtCloneValue((&P_EVENT_ExecutePath.value));
    
    PRT_VALUE** P_LVALUE_199 = &(PTMP_tmp15_1);
    PrtFreeValue(*P_LVALUE_199);
    *P_LVALUE_199 = PrtCloneValue(P_VAR_omplMotionPlan);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp13_2), PTMP_tmp14_1, 1, &(PTMP_tmp15_1));
    *(&(PTMP_tmp14_1)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    PRT_UINT32 P_allowedEventIds[] = { 2 };
    PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
    PRT_UINT32 P_eventId = PrtReceiveAsync(1U, P_allowedEventIds, &P_VAR_P_payload);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    switch (P_eventId) {
        case 2: {
                        PRT_VALUE** P_LVALUE_200 = &(PTMP_tmp16_1);
            PrtFreeValue(*P_LVALUE_200);
            *P_LVALUE_200 = PrtCloneValue((&P_EVENT_CompletedPoint.value));
            
            PrtRaise(p_this, PTMP_tmp16_1, 0);
            *(&(PTMP_tmp16_1)) = NULL;
            goto p_return_8;
            
            p_return_9: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
    
p_return_8: ;
    PrtFreeValue(P_VAR_s); P_VAR_s = NULL;
    PrtFreeValue(P_VAR_omplMotionPlan); P_VAR_omplMotionPlan = NULL;
    PrtFreeValue(P_VAR_robot_x); P_VAR_robot_x = NULL;
    PrtFreeValue(P_VAR_robot_y); P_VAR_robot_y = NULL;
    PrtFreeValue(PTMP_tmp0_6); PTMP_tmp0_6 = NULL;
    PrtFreeValue(PTMP_tmp1_6); PTMP_tmp1_6 = NULL;
    PrtFreeValue(PTMP_tmp2_6); PTMP_tmp2_6 = NULL;
    PrtFreeValue(PTMP_tmp3_5); PTMP_tmp3_5 = NULL;
    PrtFreeValue(PTMP_tmp4_5); PTMP_tmp4_5 = NULL;
    PrtFreeValue(PTMP_tmp5_5); PTMP_tmp5_5 = NULL;
    PrtFreeValue(PTMP_tmp6_4); PTMP_tmp6_4 = NULL;
    PrtFreeValue(PTMP_tmp7_4); PTMP_tmp7_4 = NULL;
    PrtFreeValue(PTMP_tmp8_3); PTMP_tmp8_3 = NULL;
    PrtFreeValue(PTMP_tmp9_3); PTMP_tmp9_3 = NULL;
    PrtFreeValue(PTMP_tmp10_2); PTMP_tmp10_2 = NULL;
    PrtFreeValue(PTMP_tmp11_2); PTMP_tmp11_2 = NULL;
    PrtFreeValue(PTMP_tmp12_2); PTMP_tmp12_2 = NULL;
    PrtFreeValue(PTMP_tmp13_2); PTMP_tmp13_2 = NULL;
    PrtFreeValue(PTMP_tmp14_1); PTMP_tmp14_1 = NULL;
    PrtFreeValue(PTMP_tmp15_1); PTMP_tmp15_1 = NULL;
    PrtFreeValue(PTMP_tmp16_1); PTMP_tmp16_1 = NULL;
    PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_6 =
{
    NULL,
    &P_Anon_IMPL_6,
    &P_GEND_TYPE_T3fff
};


PRT_FUNDECL* P_MotionPlanner_METHODS[] = { &P_FUNCTION_Anon_3, &P_FUNCTION_Anon_4, &P_FUNCTION_Anon_5, &P_FUNCTION_Anon_6 };

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV_1 =
{
    8U,
    P_MotionPlanner_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_MotionPlanner_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_SEND =
{
    8U,
    P_MotionPlanner_SEND_INNER,
    NULL
};

PRT_UINT32 P_MotionPlanner_CREATES_ARR[] = { 4 };
PRT_INTERFACESETDECL P_MotionPlanner_CREATES = { 1, P_MotionPlanner_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_MotionPlanner = 
{
    1U,
    "MotionPlanner",
    &P_EVENTSET_MotionPlanner_RECV_1,
    &P_EVENTSET_MotionPlanner_SEND,
    &P_MotionPlanner_CREATES,
    3U,
    4U,
    4U,
    4294967295U,
    0U,
    P_MotionPlanner_VARS,
    P_MotionPlanner_STATES,
    P_MotionPlanner_METHODS
};

PRT_VARDECL P_Battery_VARS[] = {
    { "taskPlanner", &P_GEND_TYPE_m },
    { "robotID", &P_GEND_TYPE_i },
    { "currPercentage", &P_GEND_TYPE_i },
    { "x", &P_GEND_TYPE_i }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_2 =
{
    0U,
    P_Init_DEFERS_INNER_2,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_2[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_2 =
{
    1U,
    P_Init_TRANS_INNER_2,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_2 =
{
    0U,
    P_Init_DOS_INNER_2,
    NULL
};

PRT_TRANSDECL P_TRANS_6[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_Battery_Init \
{ \
    "Battery.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_2, \
    &P_EVENTSET_Init_TRANS_2, \
    &P_EVENTSET_Init_DOS_2, \
    P_TRANS_6, \
    NULL, \
    &P_FUNCTION_Anon_7, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_StartBattery_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartBattery_DEFERS =
{
    0U,
    P_StartBattery_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartBattery_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_StartBattery_TRANS =
{
    1U,
    P_StartBattery_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartBattery_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartBattery_DOS =
{
    0U,
    P_StartBattery_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_7[] =
{
    { 1, &P_EVENT_Success, 2, &_P_NO_OP }
};

#define P_STATE_Battery_StartBattery \
{ \
    "Battery.StartBattery", \
    1U, \
    0U, \
    &P_EVENTSET_StartBattery_DEFERS, \
    &P_EVENTSET_StartBattery_TRANS, \
    &P_EVENTSET_StartBattery_DOS, \
    P_TRANS_7, \
    NULL, \
    &P_FUNCTION_Anon_8, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_2 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_2,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_2 =
{
    0U,
    P_WaitRequest_TRANS_INNER_2,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS_2 =
{
    0U,
    P_WaitRequest_DOS_INNER_2,
    NULL
};

#define P_STATE_Battery_WaitRequest \
{ \
    "Battery.WaitRequest", \
    0U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_2, \
    &P_EVENTSET_WaitRequest_TRANS_2, \
    &P_EVENTSET_WaitRequest_DOS_2, \
    NULL, \
    NULL, \
    &P_FUNCTION_Anon_9, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_Battery_STATES[] = { P_STATE_Battery_Init, P_STATE_Battery_StartBattery, P_STATE_Battery_WaitRequest };

PRT_VALUE* P_Anon_IMPL_7(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_3 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_7 = NULL;
    PRT_VALUE* PTMP_tmp1_7 = NULL;
    PRT_VALUE* PTMP_tmp2_7 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_19 = { PRT_VALUE_KIND_INT, { .nt = 100 } };
    PRT_VALUE** P_LVALUE_201 = &(PTMP_tmp0_7);
    PrtFreeValue(*P_LVALUE_201);
    *P_LVALUE_201 = PrtTupleGet(*P_VAR_payload_3, 0);
    
    {
        PRT_VALUE** P_LVALUE_202 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_202);
        *P_LVALUE_202 = PTMP_tmp0_7;
        PTMP_tmp0_7 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_203 = &(PTMP_tmp1_7);
    PrtFreeValue(*P_LVALUE_203);
    *P_LVALUE_203 = PrtTupleGet(*P_VAR_payload_3, 1);
    
    {
        PRT_VALUE** P_LVALUE_204 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_204);
        *P_LVALUE_204 = PTMP_tmp1_7;
        PTMP_tmp1_7 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_205 = &(p_this->varValues[2]);
    PrtFreeValue(*P_LVALUE_205);
    *P_LVALUE_205 = PrtCloneValue((&P_LIT_INT32_19));
    
    PRT_VALUE** P_LVALUE_206 = &(PTMP_tmp2_7);
    PrtFreeValue(*P_LVALUE_206);
    *P_LVALUE_206 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_7, 0);
    *(&(PTMP_tmp2_7)) = NULL;
    goto p_return_10;
    
p_return_10: ;
    PrtFreeValue(PTMP_tmp0_7); PTMP_tmp0_7 = NULL;
    PrtFreeValue(PTMP_tmp1_7); PTMP_tmp1_7 = NULL;
    PrtFreeValue(PTMP_tmp2_7); PTMP_tmp2_7 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_7 =
{
    NULL,
    &P_Anon_IMPL_7,
    &P_GEND_TYPE_T2mi
};


PRT_VALUE* P_Anon_IMPL_8(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* PTMP_tmp0_8 = NULL;
    PRT_VALUE* PTMP_tmp1_8 = NULL;
    PRT_VALUE* PTMP_tmp2_8 = NULL;
    PRT_VALUE* PTMP_tmp3_6 = NULL;
    PRT_VALUE* PTMP_tmp4_6 = NULL;
    PRT_VALUE* PTMP_tmp5_6 = NULL;
    PRT_VALUE* PTMP_tmp6_5 = NULL;
    PRT_VALUE* PTMP_tmp7_5 = NULL;
    PRT_VALUE* PTMP_tmp8_4 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_20 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_DOUBLE_6 = { PRT_VALUE_KIND_FLOAT, { .ft = 10 } };
    PRT_VALUE** P_LVALUE_207 = &(PTMP_tmp0_8);
    PrtFreeValue(*P_LVALUE_207);
    *P_LVALUE_207 = PrtMkBoolValue(PrtPrimGetInt(p_this->varValues[2]) > PrtPrimGetInt((&P_LIT_INT32_20)));
    
    PRT_VALUE** P_LVALUE_208 = &(PTMP_tmp1_8);
    PrtFreeValue(*P_LVALUE_208);
    *P_LVALUE_208 = PrtCloneValue(PTMP_tmp0_8);
    
    while (PrtPrimGetBool(PTMP_tmp1_8))
    {
        PRT_VALUE** P_LVALUE_209 = &(PTMP_tmp2_8);
        PrtFreeValue(*P_LVALUE_209);
        *P_LVALUE_209 = PrtCloneValue((&P_LIT_DOUBLE_6));
        
        PRT_VALUE** P_LVALUE_210 = &(PTMP_tmp3_6);
        PrtFreeValue(*P_LVALUE_210);
        *P_LVALUE_210 = ((_P_GEN_funargs[0] = &(PTMP_tmp2_8)), (_P_GEN_funval = P_Sleep_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp2_8), PTMP_tmp2_8 = NULL), (_P_GEN_funval));
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_11;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_11;
        }
        
        {
            PRT_VALUE** P_LVALUE_211 = &(p_this->varValues[3]);
            PrtFreeValue(*P_LVALUE_211);
            *P_LVALUE_211 = PTMP_tmp3_6;
            PTMP_tmp3_6 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_212 = &(PTMP_tmp4_6);
        PrtFreeValue(*P_LVALUE_212);
        *P_LVALUE_212 = PrtCloneValue(p_this->varValues[1]);
        
        PRT_VALUE** P_LVALUE_213 = &(PTMP_tmp5_6);
        PrtFreeValue(*P_LVALUE_213);
        *P_LVALUE_213 = ((_P_GEN_funargs[0] = &(PTMP_tmp4_6)), (_P_GEN_funval = P_getCurrentPercentage_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp4_6), PTMP_tmp4_6 = NULL), (_P_GEN_funval));
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_11;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_11;
        }
        
        {
            PRT_VALUE** P_LVALUE_214 = &(p_this->varValues[2]);
            PrtFreeValue(*P_LVALUE_214);
            *P_LVALUE_214 = PTMP_tmp5_6;
            PTMP_tmp5_6 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_215 = &(PTMP_tmp6_5);
        PrtFreeValue(*P_LVALUE_215);
        *P_LVALUE_215 = PrtCloneValue(p_this->varValues[2]);
        
        PRT_VALUE** P_LVALUE_216 = &(PTMP_tmp7_5);
        PrtFreeValue(*P_LVALUE_216);
        *P_LVALUE_216 = PrtCloneValue(p_this->varValues[1]);
        
        _P_GEN_funargs[0] = &(PTMP_tmp6_5);
        _P_GEN_funargs[1] = &(PTMP_tmp7_5);
        PrtFreeValue(P_MonitorBattery_IMPL(context, _P_GEN_funargs));
        PrtFreeValue(PTMP_tmp6_5);
        PTMP_tmp6_5 = NULL;
        PrtFreeValue(PTMP_tmp7_5);
        PTMP_tmp7_5 = NULL;
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_11;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_11;
        }
        
        PRT_VALUE** P_LVALUE_217 = &(PTMP_tmp0_8);
        PrtFreeValue(*P_LVALUE_217);
        *P_LVALUE_217 = PrtMkBoolValue(PrtPrimGetInt(p_this->varValues[2]) > PrtPrimGetInt((&P_LIT_INT32_20)));
        
        PRT_VALUE** P_LVALUE_218 = &(PTMP_tmp1_8);
        PrtFreeValue(*P_LVALUE_218);
        *P_LVALUE_218 = PrtCloneValue(PTMP_tmp0_8);
        
    }
    
    
    PRT_VALUE** P_LVALUE_219 = &(PTMP_tmp8_4);
    PrtFreeValue(*P_LVALUE_219);
    *P_LVALUE_219 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp8_4, 0);
    *(&(PTMP_tmp8_4)) = NULL;
    goto p_return_11;
    
p_return_11: ;
    PrtFreeValue(PTMP_tmp0_8); PTMP_tmp0_8 = NULL;
    PrtFreeValue(PTMP_tmp1_8); PTMP_tmp1_8 = NULL;
    PrtFreeValue(PTMP_tmp2_8); PTMP_tmp2_8 = NULL;
    PrtFreeValue(PTMP_tmp3_6); PTMP_tmp3_6 = NULL;
    PrtFreeValue(PTMP_tmp4_6); PTMP_tmp4_6 = NULL;
    PrtFreeValue(PTMP_tmp5_6); PTMP_tmp5_6 = NULL;
    PrtFreeValue(PTMP_tmp6_5); PTMP_tmp6_5 = NULL;
    PrtFreeValue(PTMP_tmp7_5); PTMP_tmp7_5 = NULL;
    PrtFreeValue(PTMP_tmp8_4); PTMP_tmp8_4 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_8 =
{
    NULL,
    &P_Anon_IMPL_8,
    NULL
};


PRT_VALUE* P_Anon_IMPL_9(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_12: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_9 =
{
    NULL,
    &P_Anon_IMPL_9,
    NULL
};


PRT_FUNDECL* P_Battery_METHODS[] = { &P_FUNCTION_Anon_7, &P_FUNCTION_Anon_8, &P_FUNCTION_Anon_9 };

PRT_EVENTDECL* P_Battery_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Battery_RECV_1 =
{
    8U,
    P_Battery_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Battery_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Battery_SEND =
{
    8U,
    P_Battery_SEND_INNER,
    NULL
};

PRT_MACHINEDECL P_MACHINE_Battery = 
{
    2U,
    "Battery",
    &P_EVENTSET_Battery_RECV_1,
    &P_EVENTSET_Battery_SEND,
    NULL,
    4U,
    3U,
    3U,
    4294967295U,
    0U,
    P_Battery_VARS,
    P_Battery_STATES,
    P_Battery_METHODS
};

PRT_VARDECL P_LocationMonitorCollision_VARS[] = {
    { "taskPlanner", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_3 =
{
    0U,
    P_Init_DEFERS_INNER_3,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_3[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_3 =
{
    1U,
    P_Init_TRANS_INNER_3,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_3 =
{
    0U,
    P_Init_DOS_INNER_3,
    NULL
};

PRT_TRANSDECL P_TRANS_8[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_LocationMonitorCollision_Init \
{ \
    "LocationMonitorCollision.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_3, \
    &P_EVENTSET_Init_TRANS_3, \
    &P_EVENTSET_Init_DOS_3, \
    P_TRANS_8, \
    NULL, \
    &P_FUNCTION_Anon_10, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_3 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_3,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_3 =
{
    0U,
    P_WaitRequest_TRANS_INNER_3,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS_3 =
{
    0U,
    P_WaitRequest_DOS_INNER_3,
    NULL
};

#define P_STATE_LocationMonitorCollision_WaitRequest \
{ \
    "LocationMonitorCollision.WaitRequest", \
    0U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_3, \
    &P_EVENTSET_WaitRequest_TRANS_3, \
    &P_EVENTSET_WaitRequest_DOS_3, \
    NULL, \
    NULL, \
    &P_FUNCTION_Anon_11, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_LocationMonitorCollision_STATES[] = { P_STATE_LocationMonitorCollision_Init, P_STATE_LocationMonitorCollision_WaitRequest };

PRT_VALUE* P_Anon_IMPL_10(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_4 = argRefs[0];
    PRT_VALUE* P_VAR_robot1Safe = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_robot2Safe = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_collisionFree = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_i = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_y_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_9 = NULL;
    PRT_VALUE* PTMP_tmp1_9 = NULL;
    PRT_VALUE* PTMP_tmp2_9 = NULL;
    PRT_VALUE* PTMP_tmp3_7 = NULL;
    PRT_VALUE* PTMP_tmp4_7 = NULL;
    PRT_VALUE* PTMP_tmp5_7 = NULL;
    PRT_VALUE* PTMP_tmp6_6 = NULL;
    PRT_VALUE* PTMP_tmp7_6 = NULL;
    PRT_VALUE* PTMP_tmp8_5 = NULL;
    PRT_VALUE* PTMP_tmp9_4 = NULL;
    PRT_VALUE* PTMP_tmp10_3 = NULL;
    PRT_VALUE* PTMP_tmp11_3 = NULL;
    PRT_VALUE* PTMP_tmp12_3 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_21 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_22 = { PRT_VALUE_KIND_INT, { .nt = 500 } };
    PRT_VALUE P_LIT_INT32_23 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_24 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_220 = &(p_this->varValues[0]);
    PrtFreeValue(*P_LVALUE_220);
    *P_LVALUE_220 = PrtCloneValue(*P_VAR_payload_4);
    
    PRT_VALUE** P_LVALUE_221 = &(P_VAR_i);
    PrtFreeValue(*P_LVALUE_221);
    *P_LVALUE_221 = PrtCloneValue((&P_LIT_INT32_21));
    
    PRT_VALUE** P_LVALUE_222 = &(PTMP_tmp0_9);
    PrtFreeValue(*P_LVALUE_222);
    *P_LVALUE_222 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_i) < PrtPrimGetInt((&P_LIT_INT32_22)));
    
    PRT_VALUE** P_LVALUE_223 = &(PTMP_tmp1_9);
    PrtFreeValue(*P_LVALUE_223);
    *P_LVALUE_223 = PrtCloneValue(PTMP_tmp0_9);
    
    while (PrtPrimGetBool(PTMP_tmp1_9))
    {
        PRT_VALUE** P_LVALUE_224 = &(PTMP_tmp2_9);
        PrtFreeValue(*P_LVALUE_224);
        *P_LVALUE_224 = ((_P_GEN_funval = P_collisionSafe_IMPL(context, _P_GEN_funargs)), (_P_GEN_funval));
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_13;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_13;
        }
        
        {
            PRT_VALUE** P_LVALUE_225 = &(P_VAR_collisionFree);
            PrtFreeValue(*P_LVALUE_225);
            *P_LVALUE_225 = PTMP_tmp2_9;
            PTMP_tmp2_9 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_226 = &(PTMP_tmp3_7);
        PrtFreeValue(*P_LVALUE_226);
        *P_LVALUE_226 = PrtMkBoolValue(PrtIsEqualValue(P_VAR_collisionFree, (&P_LIT_INT32_21)));
        
        if (PrtPrimGetBool(PTMP_tmp3_7))
        {
            PRT_VALUE** P_LVALUE_227 = &(PTMP_tmp4_7);
            PrtFreeValue(*P_LVALUE_227);
            *P_LVALUE_227 = PrtCloneValue((&P_LIT_INT32_23));
            
            PRT_VALUE** P_LVALUE_228 = &(PTMP_tmp5_7);
            PrtFreeValue(*P_LVALUE_228);
            *P_LVALUE_228 = PrtMkIntValue(-PrtPrimGetInt((&P_LIT_INT32_24)));
            
            PRT_VALUE** P_LVALUE_229 = &(PTMP_tmp6_6);
            PrtFreeValue(*P_LVALUE_229);
            *P_LVALUE_229 = ((_P_GEN_funargs[0] = &(PTMP_tmp4_7)), (_P_GEN_funargs[1] = &(PTMP_tmp5_7)), (_P_GEN_funval = P_switchACtoSC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp4_7), PTMP_tmp4_7 = NULL), (PrtFreeValue(PTMP_tmp5_7), PTMP_tmp5_7 = NULL), (_P_GEN_funval));
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_13;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_13;
            }
            
            {
                PRT_VALUE** P_LVALUE_230 = &(P_VAR_y_1);
                PrtFreeValue(*P_LVALUE_230);
                *P_LVALUE_230 = PTMP_tmp6_6;
                PTMP_tmp6_6 = NULL;
            }
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_231 = &(PTMP_tmp7_6);
        PrtFreeValue(*P_LVALUE_231);
        *P_LVALUE_231 = PrtMkBoolValue(PrtIsEqualValue(P_VAR_collisionFree, (&P_LIT_INT32_24)));
        
        if (PrtPrimGetBool(PTMP_tmp7_6))
        {
            PRT_VALUE** P_LVALUE_232 = &(PTMP_tmp8_5);
            PrtFreeValue(*P_LVALUE_232);
            *P_LVALUE_232 = PrtCloneValue((&P_LIT_INT32_23));
            
            PRT_VALUE** P_LVALUE_233 = &(PTMP_tmp9_4);
            PrtFreeValue(*P_LVALUE_233);
            *P_LVALUE_233 = PrtMkIntValue(-PrtPrimGetInt((&P_LIT_INT32_24)));
            
            PRT_VALUE** P_LVALUE_234 = &(PTMP_tmp10_3);
            PrtFreeValue(*P_LVALUE_234);
            *P_LVALUE_234 = ((_P_GEN_funargs[0] = &(PTMP_tmp8_5)), (_P_GEN_funargs[1] = &(PTMP_tmp9_4)), (_P_GEN_funval = P_switchSCtoAC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp8_5), PTMP_tmp8_5 = NULL), (PrtFreeValue(PTMP_tmp9_4), PTMP_tmp9_4 = NULL), (_P_GEN_funval));
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_13;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_13;
            }
            
            {
                PRT_VALUE** P_LVALUE_235 = &(P_VAR_y_1);
                PrtFreeValue(*P_LVALUE_235);
                *P_LVALUE_235 = PTMP_tmp10_3;
                PTMP_tmp10_3 = NULL;
            }
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_236 = &(PTMP_tmp11_3);
        PrtFreeValue(*P_LVALUE_236);
        *P_LVALUE_236 = PrtMkIntValue(PrtPrimGetInt(P_VAR_i) + PrtPrimGetInt((&P_LIT_INT32_24)));
        
        {
            PRT_VALUE** P_LVALUE_237 = &(P_VAR_i);
            PrtFreeValue(*P_LVALUE_237);
            *P_LVALUE_237 = PTMP_tmp11_3;
            PTMP_tmp11_3 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_238 = &(PTMP_tmp0_9);
        PrtFreeValue(*P_LVALUE_238);
        *P_LVALUE_238 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_i) < PrtPrimGetInt((&P_LIT_INT32_22)));
        
        PRT_VALUE** P_LVALUE_239 = &(PTMP_tmp1_9);
        PrtFreeValue(*P_LVALUE_239);
        *P_LVALUE_239 = PrtCloneValue(PTMP_tmp0_9);
        
    }
    
    
    PRT_VALUE** P_LVALUE_240 = &(PTMP_tmp12_3);
    PrtFreeValue(*P_LVALUE_240);
    *P_LVALUE_240 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp12_3, 0);
    *(&(PTMP_tmp12_3)) = NULL;
    goto p_return_13;
    
p_return_13: ;
    PrtFreeValue(P_VAR_robot1Safe); P_VAR_robot1Safe = NULL;
    PrtFreeValue(P_VAR_robot2Safe); P_VAR_robot2Safe = NULL;
    PrtFreeValue(P_VAR_collisionFree); P_VAR_collisionFree = NULL;
    PrtFreeValue(P_VAR_i); P_VAR_i = NULL;
    PrtFreeValue(P_VAR_y_1); P_VAR_y_1 = NULL;
    PrtFreeValue(PTMP_tmp0_9); PTMP_tmp0_9 = NULL;
    PrtFreeValue(PTMP_tmp1_9); PTMP_tmp1_9 = NULL;
    PrtFreeValue(PTMP_tmp2_9); PTMP_tmp2_9 = NULL;
    PrtFreeValue(PTMP_tmp3_7); PTMP_tmp3_7 = NULL;
    PrtFreeValue(PTMP_tmp4_7); PTMP_tmp4_7 = NULL;
    PrtFreeValue(PTMP_tmp5_7); PTMP_tmp5_7 = NULL;
    PrtFreeValue(PTMP_tmp6_6); PTMP_tmp6_6 = NULL;
    PrtFreeValue(PTMP_tmp7_6); PTMP_tmp7_6 = NULL;
    PrtFreeValue(PTMP_tmp8_5); PTMP_tmp8_5 = NULL;
    PrtFreeValue(PTMP_tmp9_4); PTMP_tmp9_4 = NULL;
    PrtFreeValue(PTMP_tmp10_3); PTMP_tmp10_3 = NULL;
    PrtFreeValue(PTMP_tmp11_3); PTMP_tmp11_3 = NULL;
    PrtFreeValue(PTMP_tmp12_3); PTMP_tmp12_3 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_10 =
{
    NULL,
    &P_Anon_IMPL_10,
    &P_GEND_TYPE_m
};


PRT_VALUE* P_Anon_IMPL_11(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_14: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_11 =
{
    NULL,
    &P_Anon_IMPL_11,
    NULL
};


PRT_FUNDECL* P_LocationMonitorCollision_METHODS[] = { &P_FUNCTION_Anon_10, &P_FUNCTION_Anon_11 };

PRT_EVENTDECL* P_LocationMonitorCollision_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorCollision_RECV_1 =
{
    8U,
    P_LocationMonitorCollision_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_LocationMonitorCollision_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorCollision_SEND =
{
    8U,
    P_LocationMonitorCollision_SEND_INNER,
    NULL
};

PRT_MACHINEDECL P_MACHINE_LocationMonitorCollision = 
{
    3U,
    "LocationMonitorCollision",
    &P_EVENTSET_LocationMonitorCollision_RECV_1,
    &P_EVENTSET_LocationMonitorCollision_SEND,
    NULL,
    1U,
    2U,
    2U,
    4294967295U,
    0U,
    P_LocationMonitorCollision_VARS,
    P_LocationMonitorCollision_STATES,
    P_LocationMonitorCollision_METHODS
};

PRT_VARDECL P_PlanExecutor_VARS[] = {
    { "motionPlanner", &P_GEND_TYPE_m },
    { "robotId", &P_GEND_TYPE_i }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_4[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_4 =
{
    0U,
    P_Init_DEFERS_INNER_4,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_4[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_4 =
{
    1U,
    P_Init_TRANS_INNER_4,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_4[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_4 =
{
    0U,
    P_Init_DOS_INNER_4,
    NULL
};

PRT_TRANSDECL P_TRANS_9[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_Init \
{ \
    "PlanExecutor.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_4, \
    &P_EVENTSET_Init_TRANS_4, \
    &P_EVENTSET_Init_DOS_4, \
    P_TRANS_9, \
    NULL, \
    &P_FUNCTION_Anon_12, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_4[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_4 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_4,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_4[] = { &P_EVENT_ExecutePath };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_4 =
{
    1U,
    P_WaitRequest_TRANS_INNER_4,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER_4[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS_4 =
{
    0U,
    P_WaitRequest_DOS_INNER_4,
    NULL
};

PRT_TRANSDECL P_TRANS_10[] =
{
    { 1, &P_EVENT_ExecutePath, 2, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_WaitRequest \
{ \
    "PlanExecutor.WaitRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_4, \
    &P_EVENTSET_WaitRequest_TRANS_4, \
    &P_EVENTSET_WaitRequest_DOS_4, \
    P_TRANS_10, \
    NULL, \
    &P_FUNCTION_Anon_13, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_ExecutePathState_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ExecutePathState_DEFERS =
{
    0U,
    P_ExecutePathState_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_ExecutePathState_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_ExecutePathState_TRANS =
{
    1U,
    P_ExecutePathState_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_ExecutePathState_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ExecutePathState_DOS =
{
    0U,
    P_ExecutePathState_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_11[] =
{
    { 2, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_ExecutePathState \
{ \
    "PlanExecutor.ExecutePathState", \
    1U, \
    0U, \
    &P_EVENTSET_ExecutePathState_DEFERS, \
    &P_EVENTSET_ExecutePathState_TRANS, \
    &P_EVENTSET_ExecutePathState_DOS, \
    P_TRANS_11, \
    NULL, \
    &P_FUNCTION_Anon_14, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_PlanExecutor_STATES[] = { P_STATE_PlanExecutor_Init, P_STATE_PlanExecutor_WaitRequest, P_STATE_PlanExecutor_ExecutePathState };

PRT_VALUE* P_Anon_IMPL_12(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_5 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_10 = NULL;
    PRT_VALUE* PTMP_tmp1_10 = NULL;
    PRT_VALUE* PTMP_tmp2_10 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_241 = &(PTMP_tmp0_10);
    PrtFreeValue(*P_LVALUE_241);
    *P_LVALUE_241 = PrtTupleGet(*P_VAR_payload_5, 0);
    
    {
        PRT_VALUE** P_LVALUE_242 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_242);
        *P_LVALUE_242 = PTMP_tmp0_10;
        PTMP_tmp0_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_243 = &(PTMP_tmp1_10);
    PrtFreeValue(*P_LVALUE_243);
    *P_LVALUE_243 = PrtTupleGet(*P_VAR_payload_5, 1);
    
    {
        PRT_VALUE** P_LVALUE_244 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_244);
        *P_LVALUE_244 = PTMP_tmp1_10;
        PTMP_tmp1_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_245 = &(PTMP_tmp2_10);
    PrtFreeValue(*P_LVALUE_245);
    *P_LVALUE_245 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_10, 0);
    *(&(PTMP_tmp2_10)) = NULL;
    goto p_return_15;
    
p_return_15: ;
    PrtFreeValue(PTMP_tmp0_10); PTMP_tmp0_10 = NULL;
    PrtFreeValue(PTMP_tmp1_10); PTMP_tmp1_10 = NULL;
    PrtFreeValue(PTMP_tmp2_10); PTMP_tmp2_10 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_12 =
{
    NULL,
    &P_Anon_IMPL_12,
    &P_GEND_TYPE_T2mi_1
};


PRT_VALUE* P_Anon_IMPL_13(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_16: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_13 =
{
    NULL,
    &P_Anon_IMPL_13,
    NULL
};


PRT_VALUE* P_Anon_IMPL_14(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_6 = argRefs[0];
    PRT_VALUE* P_VAR_x = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_11 = NULL;
    PRT_VALUE* PTMP_tmp1_11 = NULL;
    PRT_VALUE* PTMP_tmp2_11 = NULL;
    PRT_VALUE* PTMP_tmp3_8 = NULL;
    PRT_VALUE* PTMP_tmp4_8 = NULL;
    PRT_VALUE* PTMP_tmp5_8 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_246 = &(PTMP_tmp0_11);
    PrtFreeValue(*P_LVALUE_246);
    *P_LVALUE_246 = PrtCloneValue(*P_VAR_payload_6);
    
    PRT_VALUE** P_LVALUE_247 = &(PTMP_tmp1_11);
    PrtFreeValue(*P_LVALUE_247);
    *P_LVALUE_247 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_248 = &(PTMP_tmp2_11);
    PrtFreeValue(*P_LVALUE_248);
    *P_LVALUE_248 = ((_P_GEN_funargs[0] = &(PTMP_tmp0_11)), (_P_GEN_funargs[1] = &(PTMP_tmp1_11)), (_P_GEN_funval = P_ROSGoTo_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp0_11), PTMP_tmp0_11 = NULL), (PrtFreeValue(PTMP_tmp1_11), PTMP_tmp1_11 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_17;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_17;
    }
    
    {
        PRT_VALUE** P_LVALUE_249 = &(P_VAR_x);
        PrtFreeValue(*P_LVALUE_249);
        *P_LVALUE_249 = PTMP_tmp2_11;
        PTMP_tmp2_11 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_250 = &(PTMP_tmp3_8);
    PrtFreeValue(*P_LVALUE_250);
    *P_LVALUE_250 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_251 = &(PTMP_tmp4_8);
    PrtFreeValue(*P_LVALUE_251);
    *P_LVALUE_251 = PrtCloneValue((&P_EVENT_PathCompleted.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp3_8), PTMP_tmp4_8, 0);
    *(&(PTMP_tmp4_8)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_17;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_17;
    }
    
    PRT_VALUE** P_LVALUE_252 = &(PTMP_tmp5_8);
    PrtFreeValue(*P_LVALUE_252);
    *P_LVALUE_252 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp5_8, 0);
    *(&(PTMP_tmp5_8)) = NULL;
    goto p_return_17;
    
p_return_17: ;
    PrtFreeValue(P_VAR_x); P_VAR_x = NULL;
    PrtFreeValue(PTMP_tmp0_11); PTMP_tmp0_11 = NULL;
    PrtFreeValue(PTMP_tmp1_11); PTMP_tmp1_11 = NULL;
    PrtFreeValue(PTMP_tmp2_11); PTMP_tmp2_11 = NULL;
    PrtFreeValue(PTMP_tmp3_8); PTMP_tmp3_8 = NULL;
    PrtFreeValue(PTMP_tmp4_8); PTMP_tmp4_8 = NULL;
    PrtFreeValue(PTMP_tmp5_8); PTMP_tmp5_8 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_14 =
{
    NULL,
    &P_Anon_IMPL_14,
    &P_GEND_TYPE_ST3fff
};


PRT_FUNDECL* P_PlanExecutor_METHODS[] = { &P_FUNCTION_Anon_12, &P_FUNCTION_Anon_13, &P_FUNCTION_Anon_14 };

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV_1 =
{
    8U,
    P_PlanExecutor_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_PlanExecutor_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_SEND =
{
    8U,
    P_PlanExecutor_SEND_INNER,
    NULL
};

PRT_MACHINEDECL P_MACHINE_PlanExecutor = 
{
    4U,
    "PlanExecutor",
    &P_EVENTSET_PlanExecutor_RECV_1,
    &P_EVENTSET_PlanExecutor_SEND,
    NULL,
    2U,
    3U,
    3U,
    4294967295U,
    0U,
    P_PlanExecutor_VARS,
    P_PlanExecutor_STATES,
    P_PlanExecutor_METHODS
};

PRT_VARDECL P_LocationMonitorGeoFence_VARS[] = {
    { "taskPlanner", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_5[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_5 =
{
    0U,
    P_Init_DEFERS_INNER_5,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_5[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_5 =
{
    1U,
    P_Init_TRANS_INNER_5,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_5[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_5 =
{
    0U,
    P_Init_DOS_INNER_5,
    NULL
};

PRT_TRANSDECL P_TRANS_12[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_LocationMonitorGeoFence_Init \
{ \
    "LocationMonitorGeoFence.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_5, \
    &P_EVENTSET_Init_TRANS_5, \
    &P_EVENTSET_Init_DOS_5, \
    P_TRANS_12, \
    NULL, \
    &P_FUNCTION_Anon_15, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_5[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_5 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_5,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_5[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_5 =
{
    0U,
    P_WaitRequest_TRANS_INNER_5,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_DOS_INNER_5[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DOS_5 =
{
    0U,
    P_WaitRequest_DOS_INNER_5,
    NULL
};

#define P_STATE_LocationMonitorGeoFence_WaitRequest \
{ \
    "LocationMonitorGeoFence.WaitRequest", \
    0U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_5, \
    &P_EVENTSET_WaitRequest_TRANS_5, \
    &P_EVENTSET_WaitRequest_DOS_5, \
    NULL, \
    NULL, \
    &P_FUNCTION_Anon_16, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_LocationMonitorGeoFence_STATES[] = { P_STATE_LocationMonitorGeoFence_Init, P_STATE_LocationMonitorGeoFence_WaitRequest };

PRT_VALUE* P_Anon_IMPL_15(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_7 = argRefs[0];
    PRT_VALUE* P_VAR_robotID_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_robotSafe = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_collisionFree_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_i_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_y_2 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_12 = NULL;
    PRT_VALUE* PTMP_tmp1_12 = NULL;
    PRT_VALUE* PTMP_tmp2_12 = NULL;
    PRT_VALUE* PTMP_tmp3_9 = NULL;
    PRT_VALUE* PTMP_tmp4_9 = NULL;
    PRT_VALUE* PTMP_tmp5_9 = NULL;
    PRT_VALUE* PTMP_tmp6_7 = NULL;
    PRT_VALUE* PTMP_tmp7_7 = NULL;
    PRT_VALUE* PTMP_tmp8_6 = NULL;
    PRT_VALUE* PTMP_tmp9_5 = NULL;
    PRT_VALUE* PTMP_tmp10_4 = NULL;
    PRT_VALUE* PTMP_tmp11_4 = NULL;
    PRT_VALUE* PTMP_tmp12_4 = NULL;
    PRT_VALUE* PTMP_tmp13_3 = NULL;
    PRT_VALUE* PTMP_tmp14_2 = NULL;
    PRT_VALUE* PTMP_tmp15_2 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_25 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_26 = { PRT_VALUE_KIND_INT, { .nt = 500 } };
    PRT_VALUE P_LIT_INT32_27 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_253 = &(PTMP_tmp0_12);
    PrtFreeValue(*P_LVALUE_253);
    *P_LVALUE_253 = PrtTupleGet(*P_VAR_payload_7, 0);
    
    {
        PRT_VALUE** P_LVALUE_254 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_254);
        *P_LVALUE_254 = PTMP_tmp0_12;
        PTMP_tmp0_12 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_255 = &(PTMP_tmp1_12);
    PrtFreeValue(*P_LVALUE_255);
    *P_LVALUE_255 = PrtTupleGet(*P_VAR_payload_7, 1);
    
    {
        PRT_VALUE** P_LVALUE_256 = &(P_VAR_robotID_1);
        PrtFreeValue(*P_LVALUE_256);
        *P_LVALUE_256 = PTMP_tmp1_12;
        PTMP_tmp1_12 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_257 = &(P_VAR_i_1);
    PrtFreeValue(*P_LVALUE_257);
    *P_LVALUE_257 = PrtCloneValue((&P_LIT_INT32_25));
    
    PRT_VALUE** P_LVALUE_258 = &(PTMP_tmp2_12);
    PrtFreeValue(*P_LVALUE_258);
    *P_LVALUE_258 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_i_1) < PrtPrimGetInt((&P_LIT_INT32_26)));
    
    PRT_VALUE** P_LVALUE_259 = &(PTMP_tmp3_9);
    PrtFreeValue(*P_LVALUE_259);
    *P_LVALUE_259 = PrtCloneValue(PTMP_tmp2_12);
    
    while (PrtPrimGetBool(PTMP_tmp3_9))
    {
        PRT_VALUE** P_LVALUE_260 = &(PTMP_tmp4_9);
        PrtFreeValue(*P_LVALUE_260);
        *P_LVALUE_260 = PrtCloneValue(P_VAR_robotID_1);
        
        PRT_VALUE** P_LVALUE_261 = &(PTMP_tmp5_9);
        PrtFreeValue(*P_LVALUE_261);
        *P_LVALUE_261 = ((_P_GEN_funargs[0] = &(PTMP_tmp4_9)), (_P_GEN_funval = P_MonitorLocation_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp4_9), PTMP_tmp4_9 = NULL), (_P_GEN_funval));
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_18;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_18;
        }
        
        {
            PRT_VALUE** P_LVALUE_262 = &(P_VAR_robotSafe);
            PrtFreeValue(*P_LVALUE_262);
            *P_LVALUE_262 = PTMP_tmp5_9;
            PTMP_tmp5_9 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_263 = &(PTMP_tmp6_7);
        PrtFreeValue(*P_LVALUE_263);
        *P_LVALUE_263 = PrtMkBoolValue(PrtIsEqualValue(P_VAR_robotSafe, (&P_LIT_INT32_25)));
        
        if (PrtPrimGetBool(PTMP_tmp6_7))
        {
            PRT_VALUE** P_LVALUE_264 = &(PTMP_tmp7_7);
            PrtFreeValue(*P_LVALUE_264);
            *P_LVALUE_264 = PrtCloneValue((&P_LIT_INT32_25));
            
            PRT_VALUE** P_LVALUE_265 = &(PTMP_tmp8_6);
            PrtFreeValue(*P_LVALUE_265);
            *P_LVALUE_265 = PrtCloneValue(P_VAR_robotID_1);
            
            PRT_VALUE** P_LVALUE_266 = &(PTMP_tmp9_5);
            PrtFreeValue(*P_LVALUE_266);
            *P_LVALUE_266 = ((_P_GEN_funargs[0] = &(PTMP_tmp7_7)), (_P_GEN_funargs[1] = &(PTMP_tmp8_6)), (_P_GEN_funval = P_switchACtoSC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp7_7), PTMP_tmp7_7 = NULL), (PrtFreeValue(PTMP_tmp8_6), PTMP_tmp8_6 = NULL), (_P_GEN_funval));
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_18;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_18;
            }
            
            {
                PRT_VALUE** P_LVALUE_267 = &(P_VAR_y_2);
                PrtFreeValue(*P_LVALUE_267);
                *P_LVALUE_267 = PTMP_tmp9_5;
                PTMP_tmp9_5 = NULL;
            }
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_268 = &(PTMP_tmp10_4);
        PrtFreeValue(*P_LVALUE_268);
        *P_LVALUE_268 = PrtMkBoolValue(PrtIsEqualValue(P_VAR_robotSafe, (&P_LIT_INT32_27)));
        
        if (PrtPrimGetBool(PTMP_tmp10_4))
        {
            PRT_VALUE** P_LVALUE_269 = &(PTMP_tmp11_4);
            PrtFreeValue(*P_LVALUE_269);
            *P_LVALUE_269 = PrtCloneValue((&P_LIT_INT32_25));
            
            PRT_VALUE** P_LVALUE_270 = &(PTMP_tmp12_4);
            PrtFreeValue(*P_LVALUE_270);
            *P_LVALUE_270 = PrtCloneValue(P_VAR_robotID_1);
            
            PRT_VALUE** P_LVALUE_271 = &(PTMP_tmp13_3);
            PrtFreeValue(*P_LVALUE_271);
            *P_LVALUE_271 = ((_P_GEN_funargs[0] = &(PTMP_tmp11_4)), (_P_GEN_funargs[1] = &(PTMP_tmp12_4)), (_P_GEN_funval = P_switchSCtoAC_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp11_4), PTMP_tmp11_4 = NULL), (PrtFreeValue(PTMP_tmp12_4), PTMP_tmp12_4 = NULL), (_P_GEN_funval));
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_18;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_18;
            }
            
            {
                PRT_VALUE** P_LVALUE_272 = &(P_VAR_y_2);
                PrtFreeValue(*P_LVALUE_272);
                *P_LVALUE_272 = PTMP_tmp13_3;
                PTMP_tmp13_3 = NULL;
            }
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_273 = &(PTMP_tmp14_2);
        PrtFreeValue(*P_LVALUE_273);
        *P_LVALUE_273 = PrtMkIntValue(PrtPrimGetInt(P_VAR_i_1) + PrtPrimGetInt((&P_LIT_INT32_27)));
        
        {
            PRT_VALUE** P_LVALUE_274 = &(P_VAR_i_1);
            PrtFreeValue(*P_LVALUE_274);
            *P_LVALUE_274 = PTMP_tmp14_2;
            PTMP_tmp14_2 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_275 = &(PTMP_tmp2_12);
        PrtFreeValue(*P_LVALUE_275);
        *P_LVALUE_275 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_i_1) < PrtPrimGetInt((&P_LIT_INT32_26)));
        
        PRT_VALUE** P_LVALUE_276 = &(PTMP_tmp3_9);
        PrtFreeValue(*P_LVALUE_276);
        *P_LVALUE_276 = PrtCloneValue(PTMP_tmp2_12);
        
    }
    
    
    PRT_VALUE** P_LVALUE_277 = &(PTMP_tmp15_2);
    PrtFreeValue(*P_LVALUE_277);
    *P_LVALUE_277 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp15_2, 0);
    *(&(PTMP_tmp15_2)) = NULL;
    goto p_return_18;
    
p_return_18: ;
    PrtFreeValue(P_VAR_robotID_1); P_VAR_robotID_1 = NULL;
    PrtFreeValue(P_VAR_robotSafe); P_VAR_robotSafe = NULL;
    PrtFreeValue(P_VAR_collisionFree_1); P_VAR_collisionFree_1 = NULL;
    PrtFreeValue(P_VAR_i_1); P_VAR_i_1 = NULL;
    PrtFreeValue(P_VAR_y_2); P_VAR_y_2 = NULL;
    PrtFreeValue(PTMP_tmp0_12); PTMP_tmp0_12 = NULL;
    PrtFreeValue(PTMP_tmp1_12); PTMP_tmp1_12 = NULL;
    PrtFreeValue(PTMP_tmp2_12); PTMP_tmp2_12 = NULL;
    PrtFreeValue(PTMP_tmp3_9); PTMP_tmp3_9 = NULL;
    PrtFreeValue(PTMP_tmp4_9); PTMP_tmp4_9 = NULL;
    PrtFreeValue(PTMP_tmp5_9); PTMP_tmp5_9 = NULL;
    PrtFreeValue(PTMP_tmp6_7); PTMP_tmp6_7 = NULL;
    PrtFreeValue(PTMP_tmp7_7); PTMP_tmp7_7 = NULL;
    PrtFreeValue(PTMP_tmp8_6); PTMP_tmp8_6 = NULL;
    PrtFreeValue(PTMP_tmp9_5); PTMP_tmp9_5 = NULL;
    PrtFreeValue(PTMP_tmp10_4); PTMP_tmp10_4 = NULL;
    PrtFreeValue(PTMP_tmp11_4); PTMP_tmp11_4 = NULL;
    PrtFreeValue(PTMP_tmp12_4); PTMP_tmp12_4 = NULL;
    PrtFreeValue(PTMP_tmp13_3); PTMP_tmp13_3 = NULL;
    PrtFreeValue(PTMP_tmp14_2); PTMP_tmp14_2 = NULL;
    PrtFreeValue(PTMP_tmp15_2); PTMP_tmp15_2 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_15 =
{
    NULL,
    &P_Anon_IMPL_15,
    &P_GEND_TYPE_T2mi
};


PRT_VALUE* P_Anon_IMPL_16(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_19: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_16 =
{
    NULL,
    &P_Anon_IMPL_16,
    NULL
};


PRT_FUNDECL* P_LocationMonitorGeoFence_METHODS[] = { &P_FUNCTION_Anon_15, &P_FUNCTION_Anon_16 };

PRT_EVENTDECL* P_LocationMonitorGeoFence_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorGeoFence_RECV_1 =
{
    8U,
    P_LocationMonitorGeoFence_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_LocationMonitorGeoFence_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_LocationMonitorGeoFence_SEND =
{
    8U,
    P_LocationMonitorGeoFence_SEND_INNER,
    NULL
};

PRT_MACHINEDECL P_MACHINE_LocationMonitorGeoFence = 
{
    5U,
    "LocationMonitorGeoFence",
    &P_EVENTSET_LocationMonitorGeoFence_RECV_1,
    &P_EVENTSET_LocationMonitorGeoFence_SEND,
    NULL,
    1U,
    2U,
    2U,
    4294967295U,
    0U,
    P_LocationMonitorGeoFence_VARS,
    P_LocationMonitorGeoFence_STATES,
    P_LocationMonitorGeoFence_METHODS
};

PRT_VARDECL P_Robot_VARS[] = {
    { "myId", &P_GEND_TYPE_i },
    { "otherDrones", &P_GEND_TYPE_Sm },
    { "testDriver", &P_GEND_TYPE_m },
    { "motionPlanner", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_6[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_6 =
{
    0U,
    P_Init_DEFERS_INNER_6,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_6[] = { &P_EVENT_eConfigDrone };
PRT_EVENTSETDECL P_EVENTSET_Init_TRANS_6 =
{
    1U,
    P_Init_TRANS_INNER_6,
    NULL
};

PRT_EVENTDECL* P_Init_DOS_INNER_6[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DOS_6 =
{
    0U,
    P_Init_DOS_INNER_6,
    NULL
};

PRT_TRANSDECL P_TRANS_13[] =
{
    { 0, &P_EVENT_eConfigDrone, 1, &P_FUNCTION_Anon_18 }
};

#define P_STATE_Robot_Init \
{ \
    "Robot.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_6, \
    &P_EVENTSET_Init_TRANS_6, \
    &P_EVENTSET_Init_DOS_6, \
    P_TRANS_13, \
    NULL, \
    &P_FUNCTION_Anon_17, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitForDstRequest_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitForDstRequest_DEFERS =
{
    0U,
    P_WaitForDstRequest_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitForDstRequest_TRANS_INNER[] = { &P_EVENT_SendNextDstReq };
PRT_EVENTSETDECL P_EVENTSET_WaitForDstRequest_TRANS =
{
    1U,
    P_WaitForDstRequest_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitForDstRequest_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitForDstRequest_DOS =
{
    0U,
    P_WaitForDstRequest_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_14[] =
{
    { 1, &P_EVENT_SendNextDstReq, 2, &_P_NO_OP }
};

#define P_STATE_Robot_WaitForDstRequest \
{ \
    "Robot.WaitForDstRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitForDstRequest_DEFERS, \
    &P_EVENTSET_WaitForDstRequest_TRANS, \
    &P_EVENTSET_WaitForDstRequest_DOS, \
    P_TRANS_14, \
    NULL, \
    &P_FUNCTION_Anon_19, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_ProcessDstReq_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ProcessDstReq_DEFERS =
{
    0U,
    P_ProcessDstReq_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_ProcessDstReq_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_ProcessDstReq_TRANS =
{
    1U,
    P_ProcessDstReq_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_ProcessDstReq_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_ProcessDstReq_DOS =
{
    0U,
    P_ProcessDstReq_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_15[] =
{
    { 2, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_Robot_ProcessDstReq \
{ \
    "Robot.ProcessDstReq", \
    1U, \
    0U, \
    &P_EVENTSET_ProcessDstReq_DEFERS, \
    &P_EVENTSET_ProcessDstReq_TRANS, \
    &P_EVENTSET_ProcessDstReq_DOS, \
    P_TRANS_15, \
    NULL, \
    &P_FUNCTION_Anon_20, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_Robot_STATES[] = { P_STATE_Robot_Init, P_STATE_Robot_WaitForDstRequest, P_STATE_Robot_ProcessDstReq };

PRT_VALUE* P_Anon_IMPL_17(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_8 = argRefs[0];
    PRT_VALUE* P_VAR_x_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_13 = NULL;
    PRT_VALUE* PTMP_tmp1_13 = NULL;
    PRT_VALUE* PTMP_tmp2_13 = NULL;
    PRT_VALUE* PTMP_tmp3_10 = NULL;
    PRT_VALUE* PTMP_tmp4_10 = NULL;
    PRT_VALUE* PTMP_tmp5_10 = NULL;
    PRT_VALUE* PTMP_tmp6_8 = NULL;
    PRT_VALUE* PTMP_tmp7_8 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_278 = &(PTMP_tmp0_13);
    PrtFreeValue(*P_LVALUE_278);
    *P_LVALUE_278 = PrtTupleGet(*P_VAR_payload_8, 0);
    
    {
        PRT_VALUE** P_LVALUE_279 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_279);
        *P_LVALUE_279 = PTMP_tmp0_13;
        PTMP_tmp0_13 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_280 = &(PTMP_tmp1_13);
    PrtFreeValue(*P_LVALUE_280);
    *P_LVALUE_280 = PrtTupleGet(*P_VAR_payload_8, 1);
    
    {
        PRT_VALUE** P_LVALUE_281 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_281);
        *P_LVALUE_281 = PTMP_tmp1_13;
        PTMP_tmp1_13 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_282 = &(PTMP_tmp2_13);
    PrtFreeValue(*P_LVALUE_282);
    *P_LVALUE_282 = PrtTupleGet(*P_VAR_payload_8, 0);
    
    PRT_VALUE** P_LVALUE_283 = &(PTMP_tmp3_10);
    PrtFreeValue(*P_LVALUE_283);
    *P_LVALUE_283 = ((_P_GEN_funargs[0] = &(PTMP_tmp2_13)), (_P_GEN_funval = P_RobotROSSetup_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp2_13), PTMP_tmp2_13 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_20;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_20;
    }
    
    {
        PRT_VALUE** P_LVALUE_284 = &(P_VAR_x_1);
        PrtFreeValue(*P_LVALUE_284);
        *P_LVALUE_284 = PTMP_tmp3_10;
        PTMP_tmp3_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_285 = &(PTMP_tmp4_10);
    PrtFreeValue(*P_LVALUE_285);
    *P_LVALUE_285 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_286 = &(PTMP_tmp5_10);
    PrtFreeValue(*P_LVALUE_286);
    *P_LVALUE_286 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_287 = &(PTMP_tmp6_8);
    PrtFreeValue(*P_LVALUE_287);
    *P_LVALUE_287 = (PrtMkTuple(&P_GEND_TYPE_T2Ri, &(PTMP_tmp4_10), &(PTMP_tmp5_10)));
    
    PRT_VALUE** P_LVALUE_288 = &(PTMP_tmp7_8);
    PrtFreeValue(*P_LVALUE_288);
    *P_LVALUE_288 = PrtCloneValue(PrtMkInterface(context, 1, 1, &(PTMP_tmp6_8))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_20;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_20;
    }
    
    {
        PRT_VALUE** P_LVALUE_289 = &(p_this->varValues[3]);
        PrtFreeValue(*P_LVALUE_289);
        *P_LVALUE_289 = PTMP_tmp7_8;
        PTMP_tmp7_8 = NULL;
    }
    
p_return_20: ;
    PrtFreeValue(P_VAR_x_1); P_VAR_x_1 = NULL;
    PrtFreeValue(PTMP_tmp0_13); PTMP_tmp0_13 = NULL;
    PrtFreeValue(PTMP_tmp1_13); PTMP_tmp1_13 = NULL;
    PrtFreeValue(PTMP_tmp2_13); PTMP_tmp2_13 = NULL;
    PrtFreeValue(PTMP_tmp3_10); PTMP_tmp3_10 = NULL;
    PrtFreeValue(PTMP_tmp4_10); PTMP_tmp4_10 = NULL;
    PrtFreeValue(PTMP_tmp5_10); PTMP_tmp5_10 = NULL;
    PrtFreeValue(PTMP_tmp6_8); PTMP_tmp6_8 = NULL;
    PrtFreeValue(PTMP_tmp7_8); PTMP_tmp7_8 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_17 =
{
    NULL,
    &P_Anon_IMPL_17,
    &P_GEND_TYPE_T2im
};


PRT_VALUE* P_Anon_IMPL_18(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_9 = argRefs[0];
    PRT_VALUE* P_VAR_index_2 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_14 = NULL;
    PRT_VALUE* PTMP_tmp1_14 = NULL;
    PRT_VALUE* PTMP_tmp2_14 = NULL;
    PRT_VALUE* PTMP_tmp3_11 = NULL;
    PRT_VALUE* PTMP_tmp4_11 = NULL;
    PRT_VALUE* PTMP_tmp5_11 = NULL;
    PRT_VALUE* PTMP_tmp6_9 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_28 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_29 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_290 = &(P_VAR_index_2);
    PrtFreeValue(*P_LVALUE_290);
    *P_LVALUE_290 = PrtCloneValue((&P_LIT_INT32_28));
    
    PRT_VALUE** P_LVALUE_291 = &(PTMP_tmp0_14);
    PrtFreeValue(*P_LVALUE_291);
    *P_LVALUE_291 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_payload_9));
    
    PRT_VALUE** P_LVALUE_292 = &(PTMP_tmp1_14);
    PrtFreeValue(*P_LVALUE_292);
    *P_LVALUE_292 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_2) < PrtPrimGetInt(PTMP_tmp0_14));
    
    PRT_VALUE** P_LVALUE_293 = &(PTMP_tmp2_14);
    PrtFreeValue(*P_LVALUE_293);
    *P_LVALUE_293 = PrtCloneValue(PTMP_tmp1_14);
    
    while (PrtPrimGetBool(PTMP_tmp2_14))
    {
        PRT_VALUE** P_LVALUE_294 = &(PTMP_tmp3_11);
        PrtFreeValue(*P_LVALUE_294);
        *P_LVALUE_294 = PrtSeqGet(*P_VAR_payload_9, P_VAR_index_2);
        
        PRT_VALUE** P_LVALUE_295 = &(PTMP_tmp4_11);
        PrtFreeValue(*P_LVALUE_295);
        *P_LVALUE_295 = PrtMkBoolValue(!PrtIsEqualValue(PTMP_tmp3_11, (p_this->id)));
        
        if (PrtPrimGetBool(PTMP_tmp4_11))
        {
            PRT_VALUE** P_LVALUE_296 = &(PTMP_tmp5_11);
            PrtFreeValue(*P_LVALUE_296);
            *P_LVALUE_296 = PrtSeqGet(*P_VAR_payload_9, P_VAR_index_2);
            
            PrtSeqInsertEx(p_this->varValues[1], (&P_LIT_INT32_28), PTMP_tmp5_11, PRT_FALSE);
            *(&(PTMP_tmp5_11)) = NULL;
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_297 = &(PTMP_tmp6_9);
        PrtFreeValue(*P_LVALUE_297);
        *P_LVALUE_297 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index_2) + PrtPrimGetInt((&P_LIT_INT32_29)));
        
        {
            PRT_VALUE** P_LVALUE_298 = &(P_VAR_index_2);
            PrtFreeValue(*P_LVALUE_298);
            *P_LVALUE_298 = PTMP_tmp6_9;
            PTMP_tmp6_9 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_299 = &(PTMP_tmp0_14);
        PrtFreeValue(*P_LVALUE_299);
        *P_LVALUE_299 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_payload_9));
        
        PRT_VALUE** P_LVALUE_300 = &(PTMP_tmp1_14);
        PrtFreeValue(*P_LVALUE_300);
        *P_LVALUE_300 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_2) < PrtPrimGetInt(PTMP_tmp0_14));
        
        PRT_VALUE** P_LVALUE_301 = &(PTMP_tmp2_14);
        PrtFreeValue(*P_LVALUE_301);
        *P_LVALUE_301 = PrtCloneValue(PTMP_tmp1_14);
        
    }
    
    
p_return_21: ;
    PrtFreeValue(P_VAR_index_2); P_VAR_index_2 = NULL;
    PrtFreeValue(PTMP_tmp0_14); PTMP_tmp0_14 = NULL;
    PrtFreeValue(PTMP_tmp1_14); PTMP_tmp1_14 = NULL;
    PrtFreeValue(PTMP_tmp2_14); PTMP_tmp2_14 = NULL;
    PrtFreeValue(PTMP_tmp3_11); PTMP_tmp3_11 = NULL;
    PrtFreeValue(PTMP_tmp4_11); PTMP_tmp4_11 = NULL;
    PrtFreeValue(PTMP_tmp5_11); PTMP_tmp5_11 = NULL;
    PrtFreeValue(PTMP_tmp6_9); PTMP_tmp6_9 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_18 =
{
    NULL,
    &P_Anon_IMPL_18,
    &P_GEND_TYPE_Sm
};


PRT_VALUE* P_Anon_IMPL_19(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_22: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_19 =
{
    NULL,
    &P_Anon_IMPL_19,
    NULL
};


PRT_VALUE* P_Anon_IMPL_20(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_10 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_15 = NULL;
    PRT_VALUE* PTMP_tmp1_15 = NULL;
    PRT_VALUE* PTMP_tmp2_15 = NULL;
    PRT_VALUE* PTMP_tmp3_12 = NULL;
    PRT_VALUE* P_VAR_P_payload_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_302 = &(PTMP_tmp0_15);
    PrtFreeValue(*P_LVALUE_302);
    *P_LVALUE_302 = PrtCloneValue(p_this->varValues[3]);
    
    PRT_VALUE** P_LVALUE_303 = &(PTMP_tmp1_15);
    PrtFreeValue(*P_LVALUE_303);
    *P_LVALUE_303 = PrtCloneValue((&P_EVENT_SendGoalPoint.value));
    
    PRT_VALUE** P_LVALUE_304 = &(PTMP_tmp2_15);
    PrtFreeValue(*P_LVALUE_304);
    *P_LVALUE_304 = PrtTupleGet(*P_VAR_payload_10, 1);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_15), PTMP_tmp1_15, 1, &(PTMP_tmp2_15));
    *(&(PTMP_tmp1_15)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_23;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_23;
    }
    
    PRT_UINT32 P_allowedEventIds_1[] = { 3 };
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    PRT_UINT32 P_eventId_1 = PrtReceiveAsync(1U, P_allowedEventIds_1, &P_VAR_P_payload_1);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_23;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_23;
    }
    switch (P_eventId_1) {
        case 3: {
                        PRT_VALUE** P_LVALUE_305 = &(PTMP_tmp3_12);
            PrtFreeValue(*P_LVALUE_305);
            *P_LVALUE_305 = PrtCloneValue((&P_EVENT_Success.value));
            
            PrtRaise(p_this, PTMP_tmp3_12, 0);
            *(&(PTMP_tmp3_12)) = NULL;
            goto p_return_23;
            
            p_return_24: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    
p_return_23: ;
    PrtFreeValue(PTMP_tmp0_15); PTMP_tmp0_15 = NULL;
    PrtFreeValue(PTMP_tmp1_15); PTMP_tmp1_15 = NULL;
    PrtFreeValue(PTMP_tmp2_15); PTMP_tmp2_15 = NULL;
    PrtFreeValue(PTMP_tmp3_12); PTMP_tmp3_12 = NULL;
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_20 =
{
    NULL,
    &P_Anon_IMPL_20,
    &P_GEND_TYPE_T3T2iiT3fffm
};


PRT_FUNDECL* P_Robot_METHODS[] = { &P_FUNCTION_Anon_17, &P_FUNCTION_Anon_18, &P_FUNCTION_Anon_19, &P_FUNCTION_Anon_20 };

PRT_EVENTDECL* P_Robot_RECV_INNER_1[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Robot_RECV_1 =
{
    8U,
    P_Robot_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Robot_SEND_INNER[] = { &P_EVENT_CompletedPoint, &P_EVENT_ExecutePath, &P_EVENT_PathCompleted, &P_EVENT_SendGoalPoint, &P_EVENT_SendNextDstReq, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT };
PRT_EVENTSETDECL P_EVENTSET_Robot_SEND =
{
    8U,
    P_Robot_SEND_INNER,
    NULL
};

PRT_UINT32 P_Robot_CREATES_ARR[] = { 1 };
PRT_INTERFACESETDECL P_Robot_CREATES = { 1, P_Robot_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_Robot = 
{
    6U,
    "Robot",
    &P_EVENTSET_Robot_RECV_1,
    &P_EVENTSET_Robot_SEND,
    &P_Robot_CREATES,
    4U,
    3U,
    4U,
    4294967295U,
    0U,
    P_Robot_VARS,
    P_Robot_STATES,
    P_Robot_METHODS
};

PRT_TYPE* P_TYPEDEF_RequestInfo = &P_GEND_TYPE_T2ii;
PRT_TYPE* P_TYPEDEF_DstReq = &P_GEND_TYPE_T3T2iiT3fffm;
PRT_EVENTDECL* P_ALL_EVENTS[] = { &_P_EVENT_NULL_STRUCT, &_P_EVENT_HALT_STRUCT, &P_EVENT_PathCompleted, &P_EVENT_CompletedPoint, &P_EVENT_Success, &P_EVENT_SendNextDstReq, &P_EVENT_SendGoalPoint, &P_EVENT_ExecutePath, &P_EVENT_eConfigDrone };
PRT_MACHINEDECL* P_ALL_MACHINES[] = { &P_MACHINE_TestDriver, &P_MACHINE_MotionPlanner, &P_MACHINE_Battery, &P_MACHINE_LocationMonitorCollision, &P_MACHINE_PlanExecutor, &P_MACHINE_LocationMonitorGeoFence, &P_MACHINE_Robot };
PRT_INTERFACEDECL* P_ALL_INTERFACES[] = { &P_I_TestDriver, &P_I_MotionPlanner, &P_I_Battery, &P_I_LocationMonitorCollision, &P_I_PlanExecutor, &P_I_LocationMonitorGeoFence, &P_I_Robot };
PRT_FUNDECL* P_ALL_FUNCTIONS[] = { &P_FUNCTION_BROADCAST, &P_FUNCTION_MonitorBattery };
PRT_FOREIGNTYPEDECL* P_ALL_FOREIGN_TYPES[] = { NULL };
int P_DefaultImpl_LME_0[] = { -1,-1,2,3,-1,5,6 };
int P_DefaultImpl_LME_1[] = { -1,-1,-1,-1,4,-1,-1 };
int P_DefaultImpl_LME_2[] = { -1,-1,-1,-1,-1,-1,-1 };
int P_DefaultImpl_LME_3[] = { -1,-1,-1,-1,-1,-1,-1 };
int P_DefaultImpl_LME_4[] = { -1,-1,-1,-1,-1,-1,-1 };
int P_DefaultImpl_LME_5[] = { -1,-1,-1,-1,-1,-1,-1 };
int P_DefaultImpl_LME_6[] = { -1,1,-1,-1,-1,-1,-1 };
int* P_DefaultImpl_LINKMAP[] = { P_DefaultImpl_LME_0, P_DefaultImpl_LME_1, P_DefaultImpl_LME_2, P_DefaultImpl_LME_3, P_DefaultImpl_LME_4, P_DefaultImpl_LME_5, P_DefaultImpl_LME_6 };
int P_DefaultImpl_DEFMAP[] = { 0,1,2,3,4,5,6 };
PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl = {
    9U,
    7U,
    7U,
    2U,
    0U,
    P_ALL_EVENTS,
    P_ALL_MACHINES,
    P_ALL_INTERFACES,
    P_ALL_FUNCTIONS,
    P_ALL_FOREIGN_TYPES,
    P_DefaultImpl_LINKMAP,
    P_DefaultImpl_DEFMAP
};
