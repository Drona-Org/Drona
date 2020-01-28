#include "MailDeliveryTaskPlanner.h"

// Type universe for program:
static PRT_TYPE P_GEND_TYPE_n = { PRT_KIND_NULL, { NULL } };
static PRT_TYPE P_GEND_TYPE_f = { PRT_KIND_FLOAT, { NULL } };
static PRT_TYPE* P_TUP_T[] = { &P_GEND_TYPE_f, &P_GEND_TYPE_f, &P_GEND_TYPE_f };
static PRT_TUPTYPE P_TUP = { 3U, P_TUP_T };
static PRT_TYPE P_GEND_TYPE_T3fff = { PRT_KIND_TUPLE, { .tuple = &P_TUP } };
static PRT_TYPE P_GEND_TYPE_i = { PRT_KIND_INT, { NULL } };
static PRT_TYPE P_GEND_TYPE_m = { PRT_KIND_MACHINE, { NULL } };
static PRT_SEQTYPE P_SEQTYPE = { &P_GEND_TYPE_m };
static PRT_TYPE P_GEND_TYPE_Sm = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE } };
static PRT_TYPE* P_TUP_T_1[] = { &P_GEND_TYPE_i, &P_GEND_TYPE_m };
static PRT_TUPTYPE P_TUP_1 = { 2U, P_TUP_T_1 };
static PRT_TYPE P_GEND_TYPE_T2im = { PRT_KIND_TUPLE, { .tuple = &P_TUP_1 } };
static PRT_TYPE* P_TUP_T_2[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_2 = { 2U, P_TUP_T_2 };
static PRT_TYPE P_GEND_TYPE_T2mi = { PRT_KIND_TUPLE, { .tuple = &P_TUP_2 } };
static PRT_STRING P_NMDTUP_N[] = { "mp", "rid" };
static PRT_TYPE* P_NMDTUP_T[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_NMDTUPTYPE P_NMDTUP = { 2U, P_NMDTUP_N, P_NMDTUP_T };
static PRT_TYPE P_GEND_TYPE_T2mi_1 = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP } };
static PRT_SEQTYPE P_SEQTYPE_1 = { &P_GEND_TYPE_T3fff };
static PRT_TYPE P_GEND_TYPE_ST3fff = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE_1 } };
static PRT_TYPE P_GEND_TYPE_R = { PRT_KIND_MACHINE, { NULL } };
static PRT_TYPE* P_TUP_T_3[] = { &P_GEND_TYPE_R, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_3 = { 2U, P_TUP_T_3 };
static PRT_TYPE P_GEND_TYPE_T2Ri = { PRT_KIND_TUPLE, { .tuple = &P_TUP_3 } };

// Function implementation prototypes:
PRT_VALUE* P_omplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_ROSGoTo_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_BROADCAST_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);
extern PRT_FUNDECL P_FUNCTION_BROADCAST;

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


PRT_EVENTDECL P_EVENT_Success = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Success",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_Send_Next_Point = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Send_Next_Point",
    4294967295U,
    &P_GEND_TYPE_T3fff
};

PRT_EVENTDECL P_EVENT_Send_Ping_Back_Handler = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Send_Ping_Back_Handler",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_Critical_Battery = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Critical_Battery",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_Robot_Safe = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Robot_Safe",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_Execute_Path = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Execute_Path",
    4294967295U,
    &P_GEND_TYPE_i
};

PRT_EVENTDECL P_EVENT_Path_Completed = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Path_Completed",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_new_Critical_Battery = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "new_Critical_Battery",
    4294967295U,
    &P_GEND_TYPE_n
};

PRT_EVENTDECL P_EVENT_Completed_Point = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Completed_Point",
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

PRT_FUNDECL P_FUNCTION_omplMotionPlanExternal =
{
    "omplMotionPlanExternal",
    &P_omplMotionPlanExternal_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_Sleep =
{
    "Sleep",
    &P_Sleep_IMPL,
    NULL
};


PRT_FUNDECL P_FUNCTION_ROSGoTo =
{
    "ROSGoTo",
    &P_ROSGoTo_IMPL,
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


PRT_EVENTDECL* P_TestDriver_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_RECV =
{
    11U,
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

PRT_EVENTDECL* P_DroneTaskPlanner_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_DroneTaskPlanner_RECV =
{
    11U,
    P_DroneTaskPlanner_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_DroneTaskPlanner =
{
    1U,
    "DroneTaskPlanner",
    &P_GEND_TYPE_T2im,
    &P_EVENTSET_DroneTaskPlanner_RECV
};

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV =
{
    11U,
    P_MotionPlanner_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_MotionPlanner =
{
    2U,
    "MotionPlanner",
    &P_GEND_TYPE_T2mi,
    &P_EVENTSET_MotionPlanner_RECV
};

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV =
{
    11U,
    P_PlanExecutor_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_PlanExecutor =
{
    3U,
    "PlanExecutor",
    &P_GEND_TYPE_T2mi_1,
    &P_EVENTSET_PlanExecutor_RECV
};

PRT_VARDECL P_TestDriver_VARS[] = {
    { "workerDrones", &P_GEND_TYPE_Sm },
    { "mailCount", &P_GEND_TYPE_i },
    { "numOfWorkerDrones", &P_GEND_TYPE_i }
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

PRT_EVENTDECL* P_StartSendingMailState_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartSendingMailState_DEFERS =
{
    0U,
    P_StartSendingMailState_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartSendingMailState_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_StartSendingMailState_TRANS =
{
    1U,
    P_StartSendingMailState_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_StartSendingMailState_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_StartSendingMailState_DOS =
{
    0U,
    P_StartSendingMailState_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_1[] =
{
    { 1, &P_EVENT_Success, 2, &_P_NO_OP }
};

#define P_STATE_TestDriver_StartSendingMailState \
{ \
    "TestDriver.StartSendingMailState", \
    1U, \
    0U, \
    &P_EVENTSET_StartSendingMailState_DEFERS, \
    &P_EVENTSET_StartSendingMailState_TRANS, \
    &P_EVENTSET_StartSendingMailState_DOS, \
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
    &_P_NO_OP, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_TestDriver_STATES[] = { P_STATE_TestDriver_Init, P_STATE_TestDriver_StartSendingMailState, P_STATE_TestDriver_WaitRequest };

PRT_VALUE* P_Anon_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* P_VAR_index_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_temp = PrtMkDefaultValue(&P_GEND_TYPE_m);
    PRT_VALUE* PTMP_tmp0_1 = NULL;
    PRT_VALUE* PTMP_tmp1_1 = NULL;
    PRT_VALUE* PTMP_tmp2_1 = NULL;
    PRT_VALUE* PTMP_tmp3_1 = NULL;
    PRT_VALUE* PTMP_tmp4_1 = NULL;
    PRT_VALUE* PTMP_tmp5_1 = NULL;
    PRT_VALUE* PTMP_tmp6_1 = NULL;
    PRT_VALUE* PTMP_tmp7_1 = NULL;
    PRT_VALUE* PTMP_tmp8_1 = NULL;
    PRT_VALUE* PTMP_tmp9_1 = NULL;
    PRT_VALUE* PTMP_tmp10 = NULL;
    PRT_VALUE* PTMP_tmp11 = NULL;
    PRT_VALUE* PTMP_tmp12 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_2 = { PRT_VALUE_KIND_INT, { .nt = 4 } };
    PRT_VALUE P_LIT_INT32_3 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_4 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_INT32_5 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE** P_LVALUE_15 = &(p_this->varValues[1]);
    PrtFreeValue(*P_LVALUE_15);
    *P_LVALUE_15 = PrtCloneValue((&P_LIT_INT32_2));
    
    PRT_VALUE** P_LVALUE_16 = &(p_this->varValues[2]);
    PrtFreeValue(*P_LVALUE_16);
    *P_LVALUE_16 = PrtCloneValue((&P_LIT_INT32_3));
    
    PRT_VALUE** P_LVALUE_17 = &(P_VAR_index_1);
    PrtFreeValue(*P_LVALUE_17);
    *P_LVALUE_17 = PrtCloneValue((&P_LIT_INT32_4));
    
    PRT_VALUE** P_LVALUE_18 = &(PTMP_tmp0_1);
    PrtFreeValue(*P_LVALUE_18);
    *P_LVALUE_18 = PrtMkIntValue(PrtPrimGetInt(p_this->varValues[2]) + PrtPrimGetInt((&P_LIT_INT32_4)));
    
    PRT_VALUE** P_LVALUE_19 = &(PTMP_tmp1_1);
    PrtFreeValue(*P_LVALUE_19);
    *P_LVALUE_19 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_1) < PrtPrimGetInt(PTMP_tmp0_1));
    
    PRT_VALUE** P_LVALUE_20 = &(PTMP_tmp2_1);
    PrtFreeValue(*P_LVALUE_20);
    *P_LVALUE_20 = PrtCloneValue(PTMP_tmp1_1);
    
    while (PrtPrimGetBool(PTMP_tmp2_1))
    {
        PRT_VALUE** P_LVALUE_21 = &(PTMP_tmp3_1);
        PrtFreeValue(*P_LVALUE_21);
        *P_LVALUE_21 = PrtCloneValue(P_VAR_index_1);
        
        PRT_VALUE** P_LVALUE_22 = &(PTMP_tmp4_1);
        PrtFreeValue(*P_LVALUE_22);
        *P_LVALUE_22 = PrtCloneValue((p_this->id));
        
        PRT_VALUE** P_LVALUE_23 = &(PTMP_tmp5_1);
        PrtFreeValue(*P_LVALUE_23);
        *P_LVALUE_23 = PrtCloneValue(PrtMkInterface(context, 1, 2, &(PTMP_tmp3_1), &(PTMP_tmp4_1))->id);
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_1;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_1;
        }
        
        {
            PRT_VALUE** P_LVALUE_24 = &(P_VAR_temp);
            PrtFreeValue(*P_LVALUE_24);
            *P_LVALUE_24 = PTMP_tmp5_1;
            PTMP_tmp5_1 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_25 = &(PTMP_tmp6_1);
        PrtFreeValue(*P_LVALUE_25);
        *P_LVALUE_25 = PrtCloneValue(P_VAR_temp);
        
        PrtSeqInsertEx(p_this->varValues[0], (&P_LIT_INT32_5), PTMP_tmp6_1, PRT_FALSE);
        *(&(PTMP_tmp6_1)) = NULL;
        
        PRT_VALUE** P_LVALUE_26 = &(PTMP_tmp7_1);
        PrtFreeValue(*P_LVALUE_26);
        *P_LVALUE_26 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index_1) + PrtPrimGetInt((&P_LIT_INT32_4)));
        
        {
            PRT_VALUE** P_LVALUE_27 = &(P_VAR_index_1);
            PrtFreeValue(*P_LVALUE_27);
            *P_LVALUE_27 = PTMP_tmp7_1;
            PTMP_tmp7_1 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_28 = &(PTMP_tmp0_1);
        PrtFreeValue(*P_LVALUE_28);
        *P_LVALUE_28 = PrtMkIntValue(PrtPrimGetInt(p_this->varValues[2]) + PrtPrimGetInt((&P_LIT_INT32_4)));
        
        PRT_VALUE** P_LVALUE_29 = &(PTMP_tmp1_1);
        PrtFreeValue(*P_LVALUE_29);
        *P_LVALUE_29 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_1) < PrtPrimGetInt(PTMP_tmp0_1));
        
        PRT_VALUE** P_LVALUE_30 = &(PTMP_tmp2_1);
        PrtFreeValue(*P_LVALUE_30);
        *P_LVALUE_30 = PrtCloneValue(PTMP_tmp1_1);
        
    }
    
    
    PRT_VALUE** P_LVALUE_31 = &(PTMP_tmp8_1);
    PrtFreeValue(*P_LVALUE_31);
    *P_LVALUE_31 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_32 = &(PTMP_tmp9_1);
    PrtFreeValue(*P_LVALUE_32);
    *P_LVALUE_32 = PrtCloneValue((&P_EVENT_eConfigDrone.value));
    
    PRT_VALUE** P_LVALUE_33 = &(PTMP_tmp10);
    PrtFreeValue(*P_LVALUE_33);
    *P_LVALUE_33 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_34 = &(PTMP_tmp11);
    PrtFreeValue(*P_LVALUE_34);
    *P_LVALUE_34 = PrtCloneValue((p_this->id));
    
    _P_GEN_funargs[0] = &(PTMP_tmp8_1);
    _P_GEN_funargs[1] = &(PTMP_tmp9_1);
    _P_GEN_funargs[2] = &(PTMP_tmp10);
    _P_GEN_funargs[3] = &(PTMP_tmp11);
    PrtFreeValue(P_BROADCAST_IMPL(context, _P_GEN_funargs));
    PrtFreeValue(PTMP_tmp8_1);
    PTMP_tmp8_1 = NULL;
    PrtFreeValue(PTMP_tmp9_1);
    PTMP_tmp9_1 = NULL;
    PrtFreeValue(PTMP_tmp10);
    PTMP_tmp10 = NULL;
    PrtFreeValue(PTMP_tmp11);
    PTMP_tmp11 = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_1;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_1;
    }
    
    PRT_VALUE** P_LVALUE_35 = &(PTMP_tmp12);
    PrtFreeValue(*P_LVALUE_35);
    *P_LVALUE_35 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp12, 0);
    *(&(PTMP_tmp12)) = NULL;
    goto p_return_1;
    
p_return_1: ;
    PrtFreeValue(P_VAR_index_1); P_VAR_index_1 = NULL;
    PrtFreeValue(P_VAR_temp); P_VAR_temp = NULL;
    PrtFreeValue(PTMP_tmp0_1); PTMP_tmp0_1 = NULL;
    PrtFreeValue(PTMP_tmp1_1); PTMP_tmp1_1 = NULL;
    PrtFreeValue(PTMP_tmp2_1); PTMP_tmp2_1 = NULL;
    PrtFreeValue(PTMP_tmp3_1); PTMP_tmp3_1 = NULL;
    PrtFreeValue(PTMP_tmp4_1); PTMP_tmp4_1 = NULL;
    PrtFreeValue(PTMP_tmp5_1); PTMP_tmp5_1 = NULL;
    PrtFreeValue(PTMP_tmp6_1); PTMP_tmp6_1 = NULL;
    PrtFreeValue(PTMP_tmp7_1); PTMP_tmp7_1 = NULL;
    PrtFreeValue(PTMP_tmp8_1); PTMP_tmp8_1 = NULL;
    PrtFreeValue(PTMP_tmp9_1); PTMP_tmp9_1 = NULL;
    PrtFreeValue(PTMP_tmp10); PTMP_tmp10 = NULL;
    PrtFreeValue(PTMP_tmp11); PTMP_tmp11 = NULL;
    PrtFreeValue(PTMP_tmp12); PTMP_tmp12 = NULL;
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
    PRT_VALUE* P_VAR_s = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* P_VAR_counter = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_2 = NULL;
    PRT_VALUE* PTMP_tmp1_2 = NULL;
    PRT_VALUE* PTMP_tmp2_2 = NULL;
    PRT_VALUE* PTMP_tmp3_2 = NULL;
    PRT_VALUE* PTMP_tmp4_2 = NULL;
    PRT_VALUE* PTMP_tmp5_2 = NULL;
    PRT_VALUE* PTMP_tmp6_2 = NULL;
    PRT_VALUE* PTMP_tmp7_2 = NULL;
    PRT_VALUE* PTMP_tmp8_2 = NULL;
    PRT_VALUE* PTMP_tmp9_2 = NULL;
    PRT_VALUE* PTMP_tmp10_1 = NULL;
    PRT_VALUE* PTMP_tmp11_1 = NULL;
    PRT_VALUE* PTMP_tmp12_1 = NULL;
    PRT_VALUE* PTMP_tmp13 = NULL;
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
    PRT_VALUE* P_VAR_P_payload = NULL;
    PRT_VALUE* P_VAR_P_payload_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_6 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_7 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_INT32_8 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_9 = { PRT_VALUE_KIND_INT, { .nt = 3 } };
    PRT_VALUE P_LIT_DOUBLE = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PRT_VALUE P_LIT_DOUBLE_1 = { PRT_VALUE_KIND_FLOAT, { .ft = 2 } };
    PRT_VALUE** P_LVALUE_36 = &(PTMP_tmp0_2);
    PrtFreeValue(*P_LVALUE_36);
    *P_LVALUE_36 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_37 = &(P_VAR_s);
        PrtFreeValue(*P_LVALUE_37);
        *P_LVALUE_37 = PTMP_tmp0_2;
        PTMP_tmp0_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_38 = &(PTMP_tmp1_2);
    PrtFreeValue(*P_LVALUE_38);
    *P_LVALUE_38 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_39 = &(PTMP_tmp2_2);
    PrtFreeValue(*P_LVALUE_39);
    *P_LVALUE_39 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_40 = &(PTMP_tmp3_2);
    PrtFreeValue(*P_LVALUE_40);
    *P_LVALUE_40 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_41 = &(PTMP_tmp4_2);
    PrtFreeValue(*P_LVALUE_41);
    *P_LVALUE_41 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp1_2), &(PTMP_tmp2_2), &(PTMP_tmp3_2)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_6), PTMP_tmp4_2, PRT_FALSE);
    *(&(PTMP_tmp4_2)) = NULL;
    
    PRT_VALUE** P_LVALUE_42 = &(PTMP_tmp5_2);
    PrtFreeValue(*P_LVALUE_42);
    *P_LVALUE_42 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_43 = &(PTMP_tmp6_2);
    PrtFreeValue(*P_LVALUE_43);
    *P_LVALUE_43 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_44 = &(PTMP_tmp7_2);
    PrtFreeValue(*P_LVALUE_44);
    *P_LVALUE_44 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_45 = &(PTMP_tmp8_2);
    PrtFreeValue(*P_LVALUE_45);
    *P_LVALUE_45 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp5_2), &(PTMP_tmp6_2), &(PTMP_tmp7_2)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_7), PTMP_tmp8_2, PRT_FALSE);
    *(&(PTMP_tmp8_2)) = NULL;
    
    PRT_VALUE** P_LVALUE_46 = &(PTMP_tmp9_2);
    PrtFreeValue(*P_LVALUE_46);
    *P_LVALUE_46 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_47 = &(PTMP_tmp10_1);
    PrtFreeValue(*P_LVALUE_47);
    *P_LVALUE_47 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_48 = &(PTMP_tmp11_1);
    PrtFreeValue(*P_LVALUE_48);
    *P_LVALUE_48 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_49 = &(PTMP_tmp12_1);
    PrtFreeValue(*P_LVALUE_49);
    *P_LVALUE_49 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp9_2), &(PTMP_tmp10_1), &(PTMP_tmp11_1)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_8), PTMP_tmp12_1, PRT_FALSE);
    *(&(PTMP_tmp12_1)) = NULL;
    
    PRT_VALUE** P_LVALUE_50 = &(PTMP_tmp13);
    PrtFreeValue(*P_LVALUE_50);
    *P_LVALUE_50 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_51 = &(PTMP_tmp14);
    PrtFreeValue(*P_LVALUE_51);
    *P_LVALUE_51 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_52 = &(PTMP_tmp15);
    PrtFreeValue(*P_LVALUE_52);
    *P_LVALUE_52 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_53 = &(PTMP_tmp16);
    PrtFreeValue(*P_LVALUE_53);
    *P_LVALUE_53 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp13), &(PTMP_tmp14), &(PTMP_tmp15)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_9), PTMP_tmp16, PRT_FALSE);
    *(&(PTMP_tmp16)) = NULL;
    
    PRT_VALUE** P_LVALUE_54 = &(P_VAR_counter);
    PrtFreeValue(*P_LVALUE_54);
    *P_LVALUE_54 = PrtCloneValue((&P_LIT_INT32_6));
    
    PRT_VALUE** P_LVALUE_55 = &(PTMP_tmp17);
    PrtFreeValue(*P_LVALUE_55);
    *P_LVALUE_55 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_counter) < PrtPrimGetInt((&P_LIT_INT32_9)));
    
    PRT_VALUE** P_LVALUE_56 = &(PTMP_tmp18);
    PrtFreeValue(*P_LVALUE_56);
    *P_LVALUE_56 = PrtCloneValue(PTMP_tmp17);
    
    while (PrtPrimGetBool(PTMP_tmp18))
    {
        PRT_VALUE** P_LVALUE_57 = &(PTMP_tmp19);
        PrtFreeValue(*P_LVALUE_57);
        *P_LVALUE_57 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_6));
        
        PRT_VALUE** P_LVALUE_58 = &(PTMP_tmp20);
        PrtFreeValue(*P_LVALUE_58);
        *P_LVALUE_58 = PrtCloneValue(PTMP_tmp19);
        
        PRT_VALUE** P_LVALUE_59 = &(PTMP_tmp21);
        PrtFreeValue(*P_LVALUE_59);
        *P_LVALUE_59 = PrtCloneValue((&P_EVENT_Send_Next_Point.value));
        
        PRT_VALUE** P_LVALUE_60 = &(PTMP_tmp22);
        PrtFreeValue(*P_LVALUE_60);
        *P_LVALUE_60 = PrtSeqGet(P_VAR_s, P_VAR_counter);
        
        PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp20), PTMP_tmp21, 1, &(PTMP_tmp22));
        *(&(PTMP_tmp21)) = NULL;
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_2;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_2;
        }
        
        PRT_UINT32 P_allowedEventIds[] = { 2 };
        PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
        PRT_UINT32 P_eventId = PrtReceiveAsync(1U, P_allowedEventIds, &P_VAR_P_payload);
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_2;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_2;
        }
        switch (P_eventId) {
            case 2: {
                PRT_VALUE P_LIT_INT32_10 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
                                PRT_VALUE** P_LVALUE_61 = &(PTMP_tmp23);
                PrtFreeValue(*P_LVALUE_61);
                *P_LVALUE_61 = PrtMkIntValue(PrtPrimGetInt(P_VAR_counter) + PrtPrimGetInt((&P_LIT_INT32_10)));
                
                {
                    PRT_VALUE** P_LVALUE_62 = &(P_VAR_counter);
                    PrtFreeValue(*P_LVALUE_62);
                    *P_LVALUE_62 = PTMP_tmp23;
                    PTMP_tmp23 = NULL;
                }
                
                p_return_3: ;
} break;
            default: {
                PrtAssert(PRT_FALSE, "receive returned unhandled event");
            } break;
        }
        PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
        
        PRT_VALUE** P_LVALUE_63 = &(PTMP_tmp17);
        PrtFreeValue(*P_LVALUE_63);
        *P_LVALUE_63 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_counter) < PrtPrimGetInt((&P_LIT_INT32_9)));
        
        PRT_VALUE** P_LVALUE_64 = &(PTMP_tmp18);
        PrtFreeValue(*P_LVALUE_64);
        *P_LVALUE_64 = PrtCloneValue(PTMP_tmp17);
        
    }
    
    
    PRT_VALUE** P_LVALUE_65 = &(PTMP_tmp24);
    PrtFreeValue(*P_LVALUE_65);
    *P_LVALUE_65 = PrtSeqGet(p_this->varValues[0], (&P_LIT_INT32_7));
    
    PRT_VALUE** P_LVALUE_66 = &(PTMP_tmp25);
    PrtFreeValue(*P_LVALUE_66);
    *P_LVALUE_66 = PrtCloneValue(PTMP_tmp24);
    
    PRT_VALUE** P_LVALUE_67 = &(PTMP_tmp26);
    PrtFreeValue(*P_LVALUE_67);
    *P_LVALUE_67 = PrtCloneValue((&P_EVENT_Send_Next_Point.value));
    
    PRT_VALUE** P_LVALUE_68 = &(PTMP_tmp27);
    PrtFreeValue(*P_LVALUE_68);
    *P_LVALUE_68 = PrtSeqGet(P_VAR_s, P_VAR_counter);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp25), PTMP_tmp26, 1, &(PTMP_tmp27));
    *(&(PTMP_tmp26)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_2;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_2;
    }
    
    PRT_UINT32 P_allowedEventIds_1[] = { 2 };
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    PRT_UINT32 P_eventId_1 = PrtReceiveAsync(1U, P_allowedEventIds_1, &P_VAR_P_payload_1);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_2;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_2;
    }
    switch (P_eventId_1) {
        case 2: {
            PRT_VALUE P_LIT_INT32_11 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
                        PRT_VALUE** P_LVALUE_69 = &(PTMP_tmp28);
            PrtFreeValue(*P_LVALUE_69);
            *P_LVALUE_69 = PrtMkIntValue(PrtPrimGetInt(P_VAR_counter) + PrtPrimGetInt((&P_LIT_INT32_11)));
            
            {
                PRT_VALUE** P_LVALUE_70 = &(P_VAR_counter);
                PrtFreeValue(*P_LVALUE_70);
                *P_LVALUE_70 = PTMP_tmp28;
                PTMP_tmp28 = NULL;
            }
            
            p_return_4: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    
    PRT_VALUE** P_LVALUE_71 = &(PTMP_tmp29);
    PrtFreeValue(*P_LVALUE_71);
    *P_LVALUE_71 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp29, 0);
    *(&(PTMP_tmp29)) = NULL;
    goto p_return_2;
    
p_return_2: ;
    PrtFreeValue(P_VAR_s); P_VAR_s = NULL;
    PrtFreeValue(P_VAR_counter); P_VAR_counter = NULL;
    PrtFreeValue(PTMP_tmp0_2); PTMP_tmp0_2 = NULL;
    PrtFreeValue(PTMP_tmp1_2); PTMP_tmp1_2 = NULL;
    PrtFreeValue(PTMP_tmp2_2); PTMP_tmp2_2 = NULL;
    PrtFreeValue(PTMP_tmp3_2); PTMP_tmp3_2 = NULL;
    PrtFreeValue(PTMP_tmp4_2); PTMP_tmp4_2 = NULL;
    PrtFreeValue(PTMP_tmp5_2); PTMP_tmp5_2 = NULL;
    PrtFreeValue(PTMP_tmp6_2); PTMP_tmp6_2 = NULL;
    PrtFreeValue(PTMP_tmp7_2); PTMP_tmp7_2 = NULL;
    PrtFreeValue(PTMP_tmp8_2); PTMP_tmp8_2 = NULL;
    PrtFreeValue(PTMP_tmp9_2); PTMP_tmp9_2 = NULL;
    PrtFreeValue(PTMP_tmp10_1); PTMP_tmp10_1 = NULL;
    PrtFreeValue(PTMP_tmp11_1); PTMP_tmp11_1 = NULL;
    PrtFreeValue(PTMP_tmp12_1); PTMP_tmp12_1 = NULL;
    PrtFreeValue(PTMP_tmp13); PTMP_tmp13 = NULL;
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
    PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_1 =
{
    NULL,
    &P_Anon_IMPL_1,
    NULL
};


PRT_FUNDECL* P_TestDriver_METHODS[] = { &P_FUNCTION_Anon, &P_FUNCTION_Anon_1 };

PRT_EVENTDECL* P_TestDriver_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_RECV_1 =
{
    11U,
    P_TestDriver_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_TestDriver_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_TestDriver_SEND =
{
    11U,
    P_TestDriver_SEND_INNER,
    NULL
};

PRT_UINT32 P_TestDriver_CREATES_ARR[] = { 1 };
PRT_INTERFACESETDECL P_TestDriver_CREATES = { 1, P_TestDriver_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_TestDriver = 
{
    0U,
    "TestDriver",
    &P_EVENTSET_TestDriver_RECV_1,
    &P_EVENTSET_TestDriver_SEND,
    &P_TestDriver_CREATES,
    3U,
    3U,
    2U,
    4294967295U,
    0U,
    P_TestDriver_VARS,
    P_TestDriver_STATES,
    P_TestDriver_METHODS
};

PRT_VARDECL P_DroneTaskPlanner_VARS[] = {
    { "myId", &P_GEND_TYPE_i },
    { "otherDrones", &P_GEND_TYPE_Sm },
    { "my_project", &P_GEND_TYPE_m },
    { "my_motion_planner", &P_GEND_TYPE_m }
};

PRT_EVENTDECL* P_Init_DEFERS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Init_DEFERS_1 =
{
    0U,
    P_Init_DEFERS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Init_TRANS_INNER_1[] = { &P_EVENT_eConfigDrone };
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
    { 0, &P_EVENT_eConfigDrone, 1, &P_FUNCTION_Anon_3 }
};

#define P_STATE_DroneTaskPlanner_Init \
{ \
    "DroneTaskPlanner.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_1, \
    &P_EVENTSET_Init_TRANS_1, \
    &P_EVENTSET_Init_DOS_1, \
    P_TRANS_2, \
    NULL, \
    &P_FUNCTION_Anon_2, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitForMailRequest_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitForMailRequest_DEFERS =
{
    0U,
    P_WaitForMailRequest_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitForMailRequest_TRANS_INNER[] = { &P_EVENT_Send_Next_Point };
PRT_EVENTSETDECL P_EVENTSET_WaitForMailRequest_TRANS =
{
    1U,
    P_WaitForMailRequest_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_WaitForMailRequest_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitForMailRequest_DOS =
{
    0U,
    P_WaitForMailRequest_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_3[] =
{
    { 1, &P_EVENT_Send_Next_Point, 2, &_P_NO_OP }
};

#define P_STATE_DroneTaskPlanner_WaitForMailRequest \
{ \
    "DroneTaskPlanner.WaitForMailRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitForMailRequest_DEFERS, \
    &P_EVENTSET_WaitForMailRequest_TRANS, \
    &P_EVENTSET_WaitForMailRequest_DOS, \
    P_TRANS_3, \
    NULL, \
    &P_FUNCTION_Anon_4, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Send_Next_Point_State_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Send_Next_Point_State_DEFERS =
{
    0U,
    P_Send_Next_Point_State_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Send_Next_Point_State_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Send_Next_Point_State_TRANS =
{
    1U,
    P_Send_Next_Point_State_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Send_Next_Point_State_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Send_Next_Point_State_DOS =
{
    0U,
    P_Send_Next_Point_State_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_4[] =
{
    { 2, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_DroneTaskPlanner_Send_Next_Point_State \
{ \
    "DroneTaskPlanner.Send_Next_Point_State", \
    1U, \
    0U, \
    &P_EVENTSET_Send_Next_Point_State_DEFERS, \
    &P_EVENTSET_Send_Next_Point_State_TRANS, \
    &P_EVENTSET_Send_Next_Point_State_DOS, \
    P_TRANS_4, \
    NULL, \
    &P_FUNCTION_Anon_5, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_DroneTaskPlanner_STATES[] = { P_STATE_DroneTaskPlanner_Init, P_STATE_DroneTaskPlanner_WaitForMailRequest, P_STATE_DroneTaskPlanner_Send_Next_Point_State };

PRT_VALUE* P_Anon_IMPL_2(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_1 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_3 = NULL;
    PRT_VALUE* PTMP_tmp1_3 = NULL;
    PRT_VALUE* PTMP_tmp2_3 = NULL;
    PRT_VALUE* PTMP_tmp3_3 = NULL;
    PRT_VALUE* PTMP_tmp4_3 = NULL;
    PRT_VALUE* PTMP_tmp5_3 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_72 = &(PTMP_tmp0_3);
    PrtFreeValue(*P_LVALUE_72);
    *P_LVALUE_72 = PrtTupleGet(*P_VAR_payload_1, 0);
    
    {
        PRT_VALUE** P_LVALUE_73 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_73);
        *P_LVALUE_73 = PTMP_tmp0_3;
        PTMP_tmp0_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_74 = &(PTMP_tmp1_3);
    PrtFreeValue(*P_LVALUE_74);
    *P_LVALUE_74 = PrtTupleGet(*P_VAR_payload_1, 1);
    
    {
        PRT_VALUE** P_LVALUE_75 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_75);
        *P_LVALUE_75 = PTMP_tmp1_3;
        PTMP_tmp1_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_76 = &(PTMP_tmp2_3);
    PrtFreeValue(*P_LVALUE_76);
    *P_LVALUE_76 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_77 = &(PTMP_tmp3_3);
    PrtFreeValue(*P_LVALUE_77);
    *P_LVALUE_77 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_78 = &(PTMP_tmp4_3);
    PrtFreeValue(*P_LVALUE_78);
    *P_LVALUE_78 = (PrtMkTuple(&P_GEND_TYPE_T2Ri, &(PTMP_tmp2_3), &(PTMP_tmp3_3)));
    
    PRT_VALUE** P_LVALUE_79 = &(PTMP_tmp5_3);
    PrtFreeValue(*P_LVALUE_79);
    *P_LVALUE_79 = PrtCloneValue(PrtMkInterface(context, 2, 1, &(PTMP_tmp4_3))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_5;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_5;
    }
    
    {
        PRT_VALUE** P_LVALUE_80 = &(p_this->varValues[3]);
        PrtFreeValue(*P_LVALUE_80);
        *P_LVALUE_80 = PTMP_tmp5_3;
        PTMP_tmp5_3 = NULL;
    }
    
p_return_5: ;
    PrtFreeValue(PTMP_tmp0_3); PTMP_tmp0_3 = NULL;
    PrtFreeValue(PTMP_tmp1_3); PTMP_tmp1_3 = NULL;
    PrtFreeValue(PTMP_tmp2_3); PTMP_tmp2_3 = NULL;
    PrtFreeValue(PTMP_tmp3_3); PTMP_tmp3_3 = NULL;
    PrtFreeValue(PTMP_tmp4_3); PTMP_tmp4_3 = NULL;
    PrtFreeValue(PTMP_tmp5_3); PTMP_tmp5_3 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_2 =
{
    NULL,
    &P_Anon_IMPL_2,
    &P_GEND_TYPE_T2im
};


PRT_VALUE* P_Anon_IMPL_3(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_2 = argRefs[0];
    PRT_VALUE* P_VAR_index_2 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_4 = NULL;
    PRT_VALUE* PTMP_tmp1_4 = NULL;
    PRT_VALUE* PTMP_tmp2_4 = NULL;
    PRT_VALUE* PTMP_tmp3_4 = NULL;
    PRT_VALUE* PTMP_tmp4_4 = NULL;
    PRT_VALUE* PTMP_tmp5_4 = NULL;
    PRT_VALUE* PTMP_tmp6_3 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_12 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_13 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_81 = &(P_VAR_index_2);
    PrtFreeValue(*P_LVALUE_81);
    *P_LVALUE_81 = PrtCloneValue((&P_LIT_INT32_12));
    
    PRT_VALUE** P_LVALUE_82 = &(PTMP_tmp0_4);
    PrtFreeValue(*P_LVALUE_82);
    *P_LVALUE_82 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_payload_2));
    
    PRT_VALUE** P_LVALUE_83 = &(PTMP_tmp1_4);
    PrtFreeValue(*P_LVALUE_83);
    *P_LVALUE_83 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_2) < PrtPrimGetInt(PTMP_tmp0_4));
    
    PRT_VALUE** P_LVALUE_84 = &(PTMP_tmp2_4);
    PrtFreeValue(*P_LVALUE_84);
    *P_LVALUE_84 = PrtCloneValue(PTMP_tmp1_4);
    
    while (PrtPrimGetBool(PTMP_tmp2_4))
    {
        PRT_VALUE** P_LVALUE_85 = &(PTMP_tmp3_4);
        PrtFreeValue(*P_LVALUE_85);
        *P_LVALUE_85 = PrtSeqGet(*P_VAR_payload_2, P_VAR_index_2);
        
        PRT_VALUE** P_LVALUE_86 = &(PTMP_tmp4_4);
        PrtFreeValue(*P_LVALUE_86);
        *P_LVALUE_86 = PrtMkBoolValue(!PrtIsEqualValue(PTMP_tmp3_4, (p_this->id)));
        
        if (PrtPrimGetBool(PTMP_tmp4_4))
        {
            PRT_VALUE** P_LVALUE_87 = &(PTMP_tmp5_4);
            PrtFreeValue(*P_LVALUE_87);
            *P_LVALUE_87 = PrtSeqGet(*P_VAR_payload_2, P_VAR_index_2);
            
            PrtSeqInsertEx(p_this->varValues[1], (&P_LIT_INT32_12), PTMP_tmp5_4, PRT_FALSE);
            *(&(PTMP_tmp5_4)) = NULL;
            
        }
        
        else
        {
        }
        
        
        PRT_VALUE** P_LVALUE_88 = &(PTMP_tmp6_3);
        PrtFreeValue(*P_LVALUE_88);
        *P_LVALUE_88 = PrtMkIntValue(PrtPrimGetInt(P_VAR_index_2) + PrtPrimGetInt((&P_LIT_INT32_13)));
        
        {
            PRT_VALUE** P_LVALUE_89 = &(P_VAR_index_2);
            PrtFreeValue(*P_LVALUE_89);
            *P_LVALUE_89 = PTMP_tmp6_3;
            PTMP_tmp6_3 = NULL;
        }
        
        PRT_VALUE** P_LVALUE_90 = &(PTMP_tmp0_4);
        PrtFreeValue(*P_LVALUE_90);
        *P_LVALUE_90 = PrtMkIntValue(PrtSeqSizeOf(*P_VAR_payload_2));
        
        PRT_VALUE** P_LVALUE_91 = &(PTMP_tmp1_4);
        PrtFreeValue(*P_LVALUE_91);
        *P_LVALUE_91 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_index_2) < PrtPrimGetInt(PTMP_tmp0_4));
        
        PRT_VALUE** P_LVALUE_92 = &(PTMP_tmp2_4);
        PrtFreeValue(*P_LVALUE_92);
        *P_LVALUE_92 = PrtCloneValue(PTMP_tmp1_4);
        
    }
    
    
p_return_6: ;
    PrtFreeValue(P_VAR_index_2); P_VAR_index_2 = NULL;
    PrtFreeValue(PTMP_tmp0_4); PTMP_tmp0_4 = NULL;
    PrtFreeValue(PTMP_tmp1_4); PTMP_tmp1_4 = NULL;
    PrtFreeValue(PTMP_tmp2_4); PTMP_tmp2_4 = NULL;
    PrtFreeValue(PTMP_tmp3_4); PTMP_tmp3_4 = NULL;
    PrtFreeValue(PTMP_tmp4_4); PTMP_tmp4_4 = NULL;
    PrtFreeValue(PTMP_tmp5_4); PTMP_tmp5_4 = NULL;
    PrtFreeValue(PTMP_tmp6_3); PTMP_tmp6_3 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_3 =
{
    NULL,
    &P_Anon_IMPL_3,
    &P_GEND_TYPE_Sm
};


PRT_VALUE* P_Anon_IMPL_4(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_7: ;
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
    PRT_VALUE** P_VAR_payload_3 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_5 = NULL;
    PRT_VALUE* PTMP_tmp1_5 = NULL;
    PRT_VALUE* PTMP_tmp2_5 = NULL;
    PRT_VALUE* PTMP_tmp3_5 = NULL;
    PRT_VALUE* PTMP_tmp4_5 = NULL;
    PRT_VALUE* PTMP_tmp5_5 = NULL;
    PRT_VALUE* P_VAR_P_payload_2 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_93 = &(PTMP_tmp0_5);
    PrtFreeValue(*P_LVALUE_93);
    *P_LVALUE_93 = PrtCloneValue(p_this->varValues[3]);
    
    PRT_VALUE** P_LVALUE_94 = &(PTMP_tmp1_5);
    PrtFreeValue(*P_LVALUE_94);
    *P_LVALUE_94 = PrtCloneValue((&P_EVENT_Send_Next_Point.value));
    
    PRT_VALUE** P_LVALUE_95 = &(PTMP_tmp2_5);
    PrtFreeValue(*P_LVALUE_95);
    *P_LVALUE_95 = PrtCloneValue(*P_VAR_payload_3);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_5), PTMP_tmp1_5, 1, &(PTMP_tmp2_5));
    *(&(PTMP_tmp1_5)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    PRT_UINT32 P_allowedEventIds_2[] = { 2 };
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    PRT_UINT32 P_eventId_2 = PrtReceiveAsync(1U, P_allowedEventIds_2, &P_VAR_P_payload_2);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    switch (P_eventId_2) {
        case 2: {
                        PRT_VALUE** P_LVALUE_96 = &(PTMP_tmp3_5);
            PrtFreeValue(*P_LVALUE_96);
            *P_LVALUE_96 = PrtCloneValue(p_this->varValues[2]);
            
            PRT_VALUE** P_LVALUE_97 = &(PTMP_tmp4_5);
            PrtFreeValue(*P_LVALUE_97);
            *P_LVALUE_97 = PrtCloneValue((&P_EVENT_Completed_Point.value));
            
            PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp3_5), PTMP_tmp4_5, 0);
            *(&(PTMP_tmp4_5)) = NULL;
            if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
                goto p_return_8;
            }
            if (p_this->isHalted == PRT_TRUE) {
                PrtFreeValue(_P_GEN_retval);
                _P_GEN_retval = NULL;
                goto p_return_8;
            }
            
            PRT_VALUE** P_LVALUE_98 = &(PTMP_tmp5_5);
            PrtFreeValue(*P_LVALUE_98);
            *P_LVALUE_98 = PrtCloneValue((&P_EVENT_Success.value));
            
            PrtRaise(p_this, PTMP_tmp5_5, 0);
            *(&(PTMP_tmp5_5)) = NULL;
            goto p_return_8;
            
            p_return_9: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    
p_return_8: ;
    PrtFreeValue(PTMP_tmp0_5); PTMP_tmp0_5 = NULL;
    PrtFreeValue(PTMP_tmp1_5); PTMP_tmp1_5 = NULL;
    PrtFreeValue(PTMP_tmp2_5); PTMP_tmp2_5 = NULL;
    PrtFreeValue(PTMP_tmp3_5); PTMP_tmp3_5 = NULL;
    PrtFreeValue(PTMP_tmp4_5); PTMP_tmp4_5 = NULL;
    PrtFreeValue(PTMP_tmp5_5); PTMP_tmp5_5 = NULL;
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_5 =
{
    NULL,
    &P_Anon_IMPL_5,
    &P_GEND_TYPE_T3fff
};


PRT_FUNDECL* P_DroneTaskPlanner_METHODS[] = { &P_FUNCTION_Anon_2, &P_FUNCTION_Anon_3, &P_FUNCTION_Anon_4, &P_FUNCTION_Anon_5 };

PRT_EVENTDECL* P_DroneTaskPlanner_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_DroneTaskPlanner_RECV_1 =
{
    11U,
    P_DroneTaskPlanner_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_DroneTaskPlanner_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_DroneTaskPlanner_SEND =
{
    11U,
    P_DroneTaskPlanner_SEND_INNER,
    NULL
};

PRT_UINT32 P_DroneTaskPlanner_CREATES_ARR[] = { 2 };
PRT_INTERFACESETDECL P_DroneTaskPlanner_CREATES = { 1, P_DroneTaskPlanner_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_DroneTaskPlanner = 
{
    1U,
    "DroneTaskPlanner",
    &P_EVENTSET_DroneTaskPlanner_RECV_1,
    &P_EVENTSET_DroneTaskPlanner_SEND,
    &P_DroneTaskPlanner_CREATES,
    4U,
    3U,
    4U,
    4294967295U,
    0U,
    P_DroneTaskPlanner_VARS,
    P_DroneTaskPlanner_STATES,
    P_DroneTaskPlanner_METHODS
};

PRT_VARDECL P_MotionPlanner_VARS[] = {
    { "my_robot", &P_GEND_TYPE_m },
    { "robot_id", &P_GEND_TYPE_i },
    { "my_plan_executor", &P_GEND_TYPE_m }
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

PRT_TRANSDECL P_TRANS_5[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_Init \
{ \
    "MotionPlanner.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_2, \
    &P_EVENTSET_Init_TRANS_2, \
    &P_EVENTSET_Init_DOS_2, \
    P_TRANS_5, \
    NULL, \
    &P_FUNCTION_Anon_6, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_1 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Send_Next_Point };
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

PRT_TRANSDECL P_TRANS_6[] =
{
    { 1, &P_EVENT_Send_Next_Point, 2, &_P_NO_OP },
    { 1, &P_EVENT_Completed_Point, 3, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_WaitRequest \
{ \
    "MotionPlanner.WaitRequest", \
    2U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_1, \
    &P_EVENTSET_WaitRequest_TRANS_1, \
    &P_EVENTSET_WaitRequest_DOS_1, \
    P_TRANS_6, \
    NULL, \
    &P_FUNCTION_Anon_7, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Completed_Point_State_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_DEFERS =
{
    0U,
    P_Completed_Point_State_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Completed_Point_State_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_TRANS =
{
    1U,
    P_Completed_Point_State_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Completed_Point_State_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_DOS =
{
    0U,
    P_Completed_Point_State_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_7[] =
{
    { 3, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_Completed_Point_State \
{ \
    "MotionPlanner.Completed_Point_State", \
    1U, \
    0U, \
    &P_EVENTSET_Completed_Point_State_DEFERS, \
    &P_EVENTSET_Completed_Point_State_TRANS, \
    &P_EVENTSET_Completed_Point_State_DOS, \
    P_TRANS_7, \
    NULL, \
    &P_FUNCTION_Anon_8, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Compute_Path_And_Send_To_PE_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Compute_Path_And_Send_To_PE_DEFERS =
{
    0U,
    P_Compute_Path_And_Send_To_PE_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Compute_Path_And_Send_To_PE_TRANS_INNER[] = { &P_EVENT_Completed_Point };
PRT_EVENTSETDECL P_EVENTSET_Compute_Path_And_Send_To_PE_TRANS =
{
    1U,
    P_Compute_Path_And_Send_To_PE_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Compute_Path_And_Send_To_PE_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Compute_Path_And_Send_To_PE_DOS =
{
    0U,
    P_Compute_Path_And_Send_To_PE_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_8[] =
{
    { 2, &P_EVENT_Completed_Point, 3, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_Compute_Path_And_Send_To_PE \
{ \
    "MotionPlanner.Compute_Path_And_Send_To_PE", \
    1U, \
    0U, \
    &P_EVENTSET_Compute_Path_And_Send_To_PE_DEFERS, \
    &P_EVENTSET_Compute_Path_And_Send_To_PE_TRANS, \
    &P_EVENTSET_Compute_Path_And_Send_To_PE_DOS, \
    P_TRANS_8, \
    NULL, \
    &P_FUNCTION_Anon_9, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_MotionPlanner_STATES[] = { P_STATE_MotionPlanner_Init, P_STATE_MotionPlanner_WaitRequest, P_STATE_MotionPlanner_Compute_Path_And_Send_To_PE, P_STATE_MotionPlanner_Completed_Point_State };

PRT_VALUE* P_Anon_IMPL_6(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_4 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_6 = NULL;
    PRT_VALUE* PTMP_tmp1_6 = NULL;
    PRT_VALUE* PTMP_tmp2_6 = NULL;
    PRT_VALUE* PTMP_tmp3_6 = NULL;
    PRT_VALUE* PTMP_tmp4_6 = NULL;
    PRT_VALUE* PTMP_tmp5_6 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_99 = &(PTMP_tmp0_6);
    PrtFreeValue(*P_LVALUE_99);
    *P_LVALUE_99 = PrtTupleGet(*P_VAR_payload_4, 0);
    
    {
        PRT_VALUE** P_LVALUE_100 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_100);
        *P_LVALUE_100 = PTMP_tmp0_6;
        PTMP_tmp0_6 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_101 = &(PTMP_tmp1_6);
    PrtFreeValue(*P_LVALUE_101);
    *P_LVALUE_101 = PrtTupleGet(*P_VAR_payload_4, 1);
    
    {
        PRT_VALUE** P_LVALUE_102 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_102);
        *P_LVALUE_102 = PTMP_tmp1_6;
        PTMP_tmp1_6 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_103 = &(PTMP_tmp2_6);
    PrtFreeValue(*P_LVALUE_103);
    *P_LVALUE_103 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_104 = &(PTMP_tmp3_6);
    PrtFreeValue(*P_LVALUE_104);
    *P_LVALUE_104 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_105 = &(PTMP_tmp4_6);
    PrtFreeValue(*P_LVALUE_105);
    *P_LVALUE_105 = PrtCloneValue(PrtMkInterface(context, 3, 2, &(PTMP_tmp2_6), &(PTMP_tmp3_6))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_10;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_10;
    }
    
    {
        PRT_VALUE** P_LVALUE_106 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_106);
        *P_LVALUE_106 = PTMP_tmp4_6;
        PTMP_tmp4_6 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_107 = &(PTMP_tmp5_6);
    PrtFreeValue(*P_LVALUE_107);
    *P_LVALUE_107 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp5_6, 0);
    *(&(PTMP_tmp5_6)) = NULL;
    goto p_return_10;
    
p_return_10: ;
    PrtFreeValue(PTMP_tmp0_6); PTMP_tmp0_6 = NULL;
    PrtFreeValue(PTMP_tmp1_6); PTMP_tmp1_6 = NULL;
    PrtFreeValue(PTMP_tmp2_6); PTMP_tmp2_6 = NULL;
    PrtFreeValue(PTMP_tmp3_6); PTMP_tmp3_6 = NULL;
    PrtFreeValue(PTMP_tmp4_6); PTMP_tmp4_6 = NULL;
    PrtFreeValue(PTMP_tmp5_6); PTMP_tmp5_6 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_6 =
{
    NULL,
    &P_Anon_IMPL_6,
    &P_GEND_TYPE_T2mi
};


PRT_VALUE* P_Anon_IMPL_7(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_11: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_7 =
{
    NULL,
    &P_Anon_IMPL_7,
    NULL
};


PRT_VALUE* P_Anon_IMPL_8(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* PTMP_tmp0_7 = NULL;
    PRT_VALUE* PTMP_tmp1_7 = NULL;
    PRT_VALUE* PTMP_tmp2_7 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_108 = &(PTMP_tmp0_7);
    PrtFreeValue(*P_LVALUE_108);
    *P_LVALUE_108 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_109 = &(PTMP_tmp1_7);
    PrtFreeValue(*P_LVALUE_109);
    *P_LVALUE_109 = PrtCloneValue((&P_EVENT_Completed_Point.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_7), PTMP_tmp1_7, 0);
    *(&(PTMP_tmp1_7)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_12;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_12;
    }
    
    PRT_VALUE** P_LVALUE_110 = &(PTMP_tmp2_7);
    PrtFreeValue(*P_LVALUE_110);
    *P_LVALUE_110 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_7, 0);
    *(&(PTMP_tmp2_7)) = NULL;
    goto p_return_12;
    
p_return_12: ;
    PrtFreeValue(PTMP_tmp0_7); PTMP_tmp0_7 = NULL;
    PrtFreeValue(PTMP_tmp1_7); PTMP_tmp1_7 = NULL;
    PrtFreeValue(PTMP_tmp2_7); PTMP_tmp2_7 = NULL;
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
    PRT_VALUE** P_VAR_payload_5 = argRefs[0];
    PRT_VALUE* P_VAR_s_1 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* P_VAR_ompl_motion_plan = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_8 = NULL;
    PRT_VALUE* PTMP_tmp1_8 = NULL;
    PRT_VALUE* PTMP_tmp2_8 = NULL;
    PRT_VALUE* PTMP_tmp3_7 = NULL;
    PRT_VALUE* PTMP_tmp4_7 = NULL;
    PRT_VALUE* PTMP_tmp5_7 = NULL;
    PRT_VALUE* PTMP_tmp6_4 = NULL;
    PRT_VALUE* PTMP_tmp7_3 = NULL;
    PRT_VALUE* PTMP_tmp8_3 = NULL;
    PRT_VALUE* PTMP_tmp9_3 = NULL;
    PRT_VALUE* P_VAR_P_payload_3 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_14 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_15 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_111 = &(PTMP_tmp0_8);
    PrtFreeValue(*P_LVALUE_111);
    *P_LVALUE_111 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_112 = &(P_VAR_s_1);
        PrtFreeValue(*P_LVALUE_112);
        *P_LVALUE_112 = PTMP_tmp0_8;
        PTMP_tmp0_8 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_113 = &(PTMP_tmp1_8);
    PrtFreeValue(*P_LVALUE_113);
    *P_LVALUE_113 = PrtCloneValue(*P_VAR_payload_5);
    
    PrtSeqInsertEx(P_VAR_s_1, (&P_LIT_INT32_14), PTMP_tmp1_8, PRT_FALSE);
    *(&(PTMP_tmp1_8)) = NULL;
    
    PRT_VALUE** P_LVALUE_114 = &(PTMP_tmp2_8);
    PrtFreeValue(*P_LVALUE_114);
    *P_LVALUE_114 = PrtCloneValue(*P_VAR_payload_5);
    
    PrtSeqInsertEx(P_VAR_s_1, (&P_LIT_INT32_15), PTMP_tmp2_8, PRT_FALSE);
    *(&(PTMP_tmp2_8)) = NULL;
    
    PRT_VALUE** P_LVALUE_115 = &(PTMP_tmp3_7);
    PrtFreeValue(*P_LVALUE_115);
    *P_LVALUE_115 = PrtCloneValue(P_VAR_s_1);
    
    PRT_VALUE** P_LVALUE_116 = &(PTMP_tmp4_7);
    PrtFreeValue(*P_LVALUE_116);
    *P_LVALUE_116 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_117 = &(PTMP_tmp5_7);
    PrtFreeValue(*P_LVALUE_117);
    *P_LVALUE_117 = ((_P_GEN_funargs[0] = &(PTMP_tmp3_7)), (_P_GEN_funargs[1] = &(PTMP_tmp4_7)), (_P_GEN_funval = P_omplMotionPlanExternal_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp3_7), PTMP_tmp3_7 = NULL), (PrtFreeValue(PTMP_tmp4_7), PTMP_tmp4_7 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_13;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_13;
    }
    
    {
        PRT_VALUE** P_LVALUE_118 = &(P_VAR_ompl_motion_plan);
        PrtFreeValue(*P_LVALUE_118);
        *P_LVALUE_118 = PTMP_tmp5_7;
        PTMP_tmp5_7 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_119 = &(PTMP_tmp6_4);
    PrtFreeValue(*P_LVALUE_119);
    *P_LVALUE_119 = PrtCloneValue(p_this->varValues[2]);
    
    PRT_VALUE** P_LVALUE_120 = &(PTMP_tmp7_3);
    PrtFreeValue(*P_LVALUE_120);
    *P_LVALUE_120 = PrtCloneValue((&P_EVENT_Execute_Path.value));
    
    PRT_VALUE** P_LVALUE_121 = &(PTMP_tmp8_3);
    PrtFreeValue(*P_LVALUE_121);
    *P_LVALUE_121 = PrtCloneValue(P_VAR_ompl_motion_plan);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp6_4), PTMP_tmp7_3, 1, &(PTMP_tmp8_3));
    *(&(PTMP_tmp7_3)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_13;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_13;
    }
    
    PRT_UINT32 P_allowedEventIds_3[] = { 3 };
    PrtFreeValue(P_VAR_P_payload_3); P_VAR_P_payload_3 = NULL;
    PRT_UINT32 P_eventId_3 = PrtReceiveAsync(1U, P_allowedEventIds_3, &P_VAR_P_payload_3);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_13;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_13;
    }
    switch (P_eventId_3) {
        case 3: {
                        PRT_VALUE** P_LVALUE_122 = &(PTMP_tmp9_3);
            PrtFreeValue(*P_LVALUE_122);
            *P_LVALUE_122 = PrtCloneValue((&P_EVENT_Completed_Point.value));
            
            PrtRaise(p_this, PTMP_tmp9_3, 0);
            *(&(PTMP_tmp9_3)) = NULL;
            goto p_return_13;
            
            p_return_14: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_3); P_VAR_P_payload_3 = NULL;
    
p_return_13: ;
    PrtFreeValue(P_VAR_s_1); P_VAR_s_1 = NULL;
    PrtFreeValue(P_VAR_ompl_motion_plan); P_VAR_ompl_motion_plan = NULL;
    PrtFreeValue(PTMP_tmp0_8); PTMP_tmp0_8 = NULL;
    PrtFreeValue(PTMP_tmp1_8); PTMP_tmp1_8 = NULL;
    PrtFreeValue(PTMP_tmp2_8); PTMP_tmp2_8 = NULL;
    PrtFreeValue(PTMP_tmp3_7); PTMP_tmp3_7 = NULL;
    PrtFreeValue(PTMP_tmp4_7); PTMP_tmp4_7 = NULL;
    PrtFreeValue(PTMP_tmp5_7); PTMP_tmp5_7 = NULL;
    PrtFreeValue(PTMP_tmp6_4); PTMP_tmp6_4 = NULL;
    PrtFreeValue(PTMP_tmp7_3); PTMP_tmp7_3 = NULL;
    PrtFreeValue(PTMP_tmp8_3); PTMP_tmp8_3 = NULL;
    PrtFreeValue(PTMP_tmp9_3); PTMP_tmp9_3 = NULL;
    PrtFreeValue(P_VAR_P_payload_3); P_VAR_P_payload_3 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_9 =
{
    NULL,
    &P_Anon_IMPL_9,
    &P_GEND_TYPE_T3fff
};


PRT_FUNDECL* P_MotionPlanner_METHODS[] = { &P_FUNCTION_Anon_6, &P_FUNCTION_Anon_7, &P_FUNCTION_Anon_8, &P_FUNCTION_Anon_9 };

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV_1 =
{
    11U,
    P_MotionPlanner_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_MotionPlanner_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_SEND =
{
    11U,
    P_MotionPlanner_SEND_INNER,
    NULL
};

PRT_UINT32 P_MotionPlanner_CREATES_ARR[] = { 3 };
PRT_INTERFACESETDECL P_MotionPlanner_CREATES = { 1, P_MotionPlanner_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_MotionPlanner = 
{
    2U,
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

PRT_VARDECL P_PlanExecutor_VARS[] = {
    { "motion_planner", &P_GEND_TYPE_m },
    { "robot_id", &P_GEND_TYPE_i }
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

PRT_TRANSDECL P_TRANS_9[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_Init \
{ \
    "PlanExecutor.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_3, \
    &P_EVENTSET_Init_TRANS_3, \
    &P_EVENTSET_Init_DOS_3, \
    P_TRANS_9, \
    NULL, \
    &P_FUNCTION_Anon_10, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_2[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_2 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_2,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_2[] = { &P_EVENT_Execute_Path };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_2 =
{
    1U,
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

PRT_TRANSDECL P_TRANS_10[] =
{
    { 1, &P_EVENT_Execute_Path, 2, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_WaitRequest \
{ \
    "PlanExecutor.WaitRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_2, \
    &P_EVENTSET_WaitRequest_TRANS_2, \
    &P_EVENTSET_WaitRequest_DOS_2, \
    P_TRANS_10, \
    NULL, \
    &P_FUNCTION_Anon_11, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Execute_Path_State_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Execute_Path_State_DEFERS =
{
    0U,
    P_Execute_Path_State_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Execute_Path_State_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Execute_Path_State_TRANS =
{
    1U,
    P_Execute_Path_State_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Execute_Path_State_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Execute_Path_State_DOS =
{
    0U,
    P_Execute_Path_State_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_11[] =
{
    { 2, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_Execute_Path_State \
{ \
    "PlanExecutor.Execute_Path_State", \
    1U, \
    0U, \
    &P_EVENTSET_Execute_Path_State_DEFERS, \
    &P_EVENTSET_Execute_Path_State_TRANS, \
    &P_EVENTSET_Execute_Path_State_DOS, \
    P_TRANS_11, \
    NULL, \
    &P_FUNCTION_Anon_12, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_PlanExecutor_STATES[] = { P_STATE_PlanExecutor_Init, P_STATE_PlanExecutor_WaitRequest, P_STATE_PlanExecutor_Execute_Path_State };

PRT_VALUE* P_Anon_IMPL_10(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_6 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_9 = NULL;
    PRT_VALUE* PTMP_tmp1_9 = NULL;
    PRT_VALUE* PTMP_tmp2_9 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_123 = &(PTMP_tmp0_9);
    PrtFreeValue(*P_LVALUE_123);
    *P_LVALUE_123 = PrtTupleGet(*P_VAR_payload_6, 0);
    
    {
        PRT_VALUE** P_LVALUE_124 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_124);
        *P_LVALUE_124 = PTMP_tmp0_9;
        PTMP_tmp0_9 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_125 = &(PTMP_tmp1_9);
    PrtFreeValue(*P_LVALUE_125);
    *P_LVALUE_125 = PrtTupleGet(*P_VAR_payload_6, 1);
    
    {
        PRT_VALUE** P_LVALUE_126 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_126);
        *P_LVALUE_126 = PTMP_tmp1_9;
        PTMP_tmp1_9 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_127 = &(PTMP_tmp2_9);
    PrtFreeValue(*P_LVALUE_127);
    *P_LVALUE_127 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_9, 0);
    *(&(PTMP_tmp2_9)) = NULL;
    goto p_return_15;
    
p_return_15: ;
    PrtFreeValue(PTMP_tmp0_9); PTMP_tmp0_9 = NULL;
    PrtFreeValue(PTMP_tmp1_9); PTMP_tmp1_9 = NULL;
    PrtFreeValue(PTMP_tmp2_9); PTMP_tmp2_9 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_10 =
{
    NULL,
    &P_Anon_IMPL_10,
    &P_GEND_TYPE_T2mi_1
};


PRT_VALUE* P_Anon_IMPL_11(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_16: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_11 =
{
    NULL,
    &P_Anon_IMPL_11,
    NULL
};


PRT_VALUE* P_Anon_IMPL_12(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_7 = argRefs[0];
    PRT_VALUE* P_VAR_x = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_10 = NULL;
    PRT_VALUE* PTMP_tmp1_10 = NULL;
    PRT_VALUE* PTMP_tmp2_10 = NULL;
    PRT_VALUE* PTMP_tmp3_8 = NULL;
    PRT_VALUE* PTMP_tmp4_8 = NULL;
    PRT_VALUE* PTMP_tmp5_8 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_128 = &(PTMP_tmp0_10);
    PrtFreeValue(*P_LVALUE_128);
    *P_LVALUE_128 = PrtCloneValue(*P_VAR_payload_7);
    
    PRT_VALUE** P_LVALUE_129 = &(PTMP_tmp1_10);
    PrtFreeValue(*P_LVALUE_129);
    *P_LVALUE_129 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_130 = &(PTMP_tmp2_10);
    PrtFreeValue(*P_LVALUE_130);
    *P_LVALUE_130 = ((_P_GEN_funargs[0] = &(PTMP_tmp0_10)), (_P_GEN_funargs[1] = &(PTMP_tmp1_10)), (_P_GEN_funval = P_ROSGoTo_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp0_10), PTMP_tmp0_10 = NULL), (PrtFreeValue(PTMP_tmp1_10), PTMP_tmp1_10 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_17;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_17;
    }
    
    {
        PRT_VALUE** P_LVALUE_131 = &(P_VAR_x);
        PrtFreeValue(*P_LVALUE_131);
        *P_LVALUE_131 = PTMP_tmp2_10;
        PTMP_tmp2_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_132 = &(PTMP_tmp3_8);
    PrtFreeValue(*P_LVALUE_132);
    *P_LVALUE_132 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_133 = &(PTMP_tmp4_8);
    PrtFreeValue(*P_LVALUE_133);
    *P_LVALUE_133 = PrtCloneValue((&P_EVENT_Path_Completed.value));
    
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
    
    PRT_VALUE** P_LVALUE_134 = &(PTMP_tmp5_8);
    PrtFreeValue(*P_LVALUE_134);
    *P_LVALUE_134 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp5_8, 0);
    *(&(PTMP_tmp5_8)) = NULL;
    goto p_return_17;
    
p_return_17: ;
    PrtFreeValue(P_VAR_x); P_VAR_x = NULL;
    PrtFreeValue(PTMP_tmp0_10); PTMP_tmp0_10 = NULL;
    PrtFreeValue(PTMP_tmp1_10); PTMP_tmp1_10 = NULL;
    PrtFreeValue(PTMP_tmp2_10); PTMP_tmp2_10 = NULL;
    PrtFreeValue(PTMP_tmp3_8); PTMP_tmp3_8 = NULL;
    PrtFreeValue(PTMP_tmp4_8); PTMP_tmp4_8 = NULL;
    PrtFreeValue(PTMP_tmp5_8); PTMP_tmp5_8 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_12 =
{
    NULL,
    &P_Anon_IMPL_12,
    &P_GEND_TYPE_i
};


PRT_FUNDECL* P_PlanExecutor_METHODS[] = { &P_FUNCTION_Anon_10, &P_FUNCTION_Anon_11, &P_FUNCTION_Anon_12 };

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV_1 =
{
    11U,
    P_PlanExecutor_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_PlanExecutor_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &P_EVENT_eConfigDrone, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_SEND =
{
    11U,
    P_PlanExecutor_SEND_INNER,
    NULL
};

PRT_MACHINEDECL P_MACHINE_PlanExecutor = 
{
    3U,
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

PRT_EVENTDECL* P_ALL_EVENTS[] = { &_P_EVENT_NULL_STRUCT, &_P_EVENT_HALT_STRUCT, &P_EVENT_Completed_Point, &P_EVENT_Path_Completed, &P_EVENT_Success, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Critical_Battery, &P_EVENT_Robot_Safe, &P_EVENT_Execute_Path, &P_EVENT_new_Critical_Battery, &P_EVENT_eConfigDrone };
PRT_MACHINEDECL* P_ALL_MACHINES[] = { &P_MACHINE_TestDriver, &P_MACHINE_DroneTaskPlanner, &P_MACHINE_MotionPlanner, &P_MACHINE_PlanExecutor };
PRT_INTERFACEDECL* P_ALL_INTERFACES[] = { &P_I_TestDriver, &P_I_DroneTaskPlanner, &P_I_MotionPlanner, &P_I_PlanExecutor };
PRT_FUNDECL* P_ALL_FUNCTIONS[] = { &P_FUNCTION_BROADCAST };
PRT_FOREIGNTYPEDECL* P_ALL_FOREIGN_TYPES[] = { NULL };
int P_DefaultImpl_LME_0[] = { -1,1,-1,-1 };
int P_DefaultImpl_LME_1[] = { -1,-1,2,-1 };
int P_DefaultImpl_LME_2[] = { -1,-1,-1,3 };
int P_DefaultImpl_LME_3[] = { -1,-1,-1,-1 };
int* P_DefaultImpl_LINKMAP[] = { P_DefaultImpl_LME_0, P_DefaultImpl_LME_1, P_DefaultImpl_LME_2, P_DefaultImpl_LME_3 };
int P_DefaultImpl_DEFMAP[] = { 0,1,2,3 };
PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl = {
    12U,
    4U,
    4U,
    1U,
    0U,
    P_ALL_EVENTS,
    P_ALL_MACHINES,
    P_ALL_INTERFACES,
    P_ALL_FUNCTIONS,
    P_ALL_FOREIGN_TYPES,
    P_DefaultImpl_LINKMAP,
    P_DefaultImpl_DEFMAP
};
