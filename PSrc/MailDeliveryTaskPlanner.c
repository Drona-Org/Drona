#include "MailDeliveryTaskPlanner.h"

// Type universe for program:
static PRT_TYPE P_GEND_TYPE_n = { PRT_KIND_NULL, { NULL } };
static PRT_TYPE P_GEND_TYPE_f = { PRT_KIND_FLOAT, { NULL } };
static PRT_TYPE* P_TUP_T[] = { &P_GEND_TYPE_f, &P_GEND_TYPE_f, &P_GEND_TYPE_f };
static PRT_TUPTYPE P_TUP = { 3U, P_TUP_T };
static PRT_TYPE P_GEND_TYPE_T3fff = { PRT_KIND_TUPLE, { .tuple = &P_TUP } };
static PRT_TYPE P_GEND_TYPE_i = { PRT_KIND_INT, { NULL } };
static PRT_STRING P_NMDTUP_N[] = { "proj", "rid" };
static PRT_TYPE P_GEND_TYPE_m = { PRT_KIND_MACHINE, { NULL } };
static PRT_TYPE* P_NMDTUP_T[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_NMDTUPTYPE P_NMDTUP = { 2U, P_NMDTUP_N, P_NMDTUP_T };
static PRT_TYPE P_GEND_TYPE_T2mi = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP } };
static PRT_TYPE* P_TUP_T_1[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_1 = { 2U, P_TUP_T_1 };
static PRT_TYPE P_GEND_TYPE_T2mi_1 = { PRT_KIND_TUPLE, { .tuple = &P_TUP_1 } };
static PRT_STRING P_NMDTUP_N_1[] = { "mp", "rid" };
static PRT_TYPE* P_NMDTUP_T_1[] = { &P_GEND_TYPE_m, &P_GEND_TYPE_i };
static PRT_NMDTUPTYPE P_NMDTUP_1 = { 2U, P_NMDTUP_N_1, P_NMDTUP_T_1 };
static PRT_TYPE P_GEND_TYPE_T2mi_2 = { PRT_KIND_NMDTUP, { .nmTuple = &P_NMDTUP_1 } };
static PRT_SEQTYPE P_SEQTYPE = { &P_GEND_TYPE_T3fff };
static PRT_TYPE P_GEND_TYPE_ST3fff = { PRT_KIND_SEQ, { .seq = &P_SEQTYPE } };
static PRT_TYPE P_GEND_TYPE_R = { PRT_KIND_MACHINE, { NULL } };
static PRT_TYPE* P_TUP_T_2[] = { &P_GEND_TYPE_R, &P_GEND_TYPE_i };
static PRT_TUPTYPE P_TUP_2 = { 2U, P_TUP_T_2 };
static PRT_TYPE P_GEND_TYPE_T2Ri = { PRT_KIND_TUPLE, { .tuple = &P_TUP_2 } };

// Function implementation prototypes:
PRT_VALUE* P_omplMotionPlanExternal_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_Sleep_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

PRT_VALUE* P_ROSGoTo_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs);

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

PRT_EVENTDECL P_EVENT_Completed_Point = 
{
    { PRT_VALUE_KIND_EVENT, 0U },
    "Completed_Point",
    4294967295U,
    &P_GEND_TYPE_n
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


PRT_EVENTDECL* P_Project_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Project_RECV =
{
    10U,
    P_Project_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_Project =
{
    0U,
    "Project",
    &P_GEND_TYPE_n,
    &P_EVENTSET_Project_RECV
};

PRT_EVENTDECL* P_Robot_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Robot_RECV =
{
    10U,
    P_Robot_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_Robot =
{
    1U,
    "Robot",
    &P_GEND_TYPE_T2mi,
    &P_EVENTSET_Robot_RECV
};

PRT_EVENTDECL* P_Battery_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Battery_RECV =
{
    10U,
    P_Battery_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_Battery =
{
    2U,
    "Battery",
    &P_GEND_TYPE_m,
    &P_EVENTSET_Battery_RECV
};

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV =
{
    10U,
    P_MotionPlanner_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_MotionPlanner =
{
    3U,
    "MotionPlanner",
    &P_GEND_TYPE_T2mi_1,
    &P_EVENTSET_MotionPlanner_RECV
};

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV =
{
    10U,
    P_PlanExecutor_RECV_INNER,
    NULL
};

PRT_INTERFACEDECL P_I_PlanExecutor =
{
    4U,
    "PlanExecutor",
    &P_GEND_TYPE_T2mi_2,
    &P_EVENTSET_PlanExecutor_RECV
};

PRT_VARDECL P_Project_VARS[] = {
    { "my_robot", &P_GEND_TYPE_m }
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

#define P_STATE_Project_Init \
{ \
    "Project.Init", \
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

PRT_EVENTDECL* P_Send_Points_State_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Send_Points_State_DEFERS =
{
    0U,
    P_Send_Points_State_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Send_Points_State_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Send_Points_State_TRANS =
{
    1U,
    P_Send_Points_State_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Send_Points_State_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Send_Points_State_DOS =
{
    0U,
    P_Send_Points_State_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_1[] =
{
    { 1, &P_EVENT_Success, 2, &_P_NO_OP }
};

#define P_STATE_Project_Send_Points_State \
{ \
    "Project.Send_Points_State", \
    1U, \
    0U, \
    &P_EVENTSET_Send_Points_State_DEFERS, \
    &P_EVENTSET_Send_Points_State_TRANS, \
    &P_EVENTSET_Send_Points_State_DOS, \
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

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER[] = { &P_EVENT_Completed_Point };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS =
{
    1U,
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

PRT_TRANSDECL P_TRANS_2[] =
{
    { 2, &P_EVENT_Completed_Point, 2, &_P_NO_OP }
};

#define P_STATE_Project_WaitRequest \
{ \
    "Project.WaitRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS, \
    &P_EVENTSET_WaitRequest_TRANS, \
    &P_EVENTSET_WaitRequest_DOS, \
    P_TRANS_2, \
    NULL, \
    &P_FUNCTION_Anon_2, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_Project_STATES[] = { P_STATE_Project_Init, P_STATE_Project_Send_Points_State, P_STATE_Project_WaitRequest };

PRT_VALUE* P_Anon_IMPL(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* PTMP_tmp0 = NULL;
    PRT_VALUE* PTMP_tmp1 = NULL;
    PRT_VALUE* PTMP_tmp2 = NULL;
    PRT_VALUE* PTMP_tmp3 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE** P_LVALUE = &(PTMP_tmp0);
    PrtFreeValue(*P_LVALUE);
    *P_LVALUE = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_1 = &(PTMP_tmp1);
    PrtFreeValue(*P_LVALUE_1);
    *P_LVALUE_1 = PrtCloneValue((&P_LIT_INT32));
    
    PRT_VALUE** P_LVALUE_2 = &(PTMP_tmp2);
    PrtFreeValue(*P_LVALUE_2);
    *P_LVALUE_2 = PrtCloneValue(PrtMkInterface(context, 1, 2, &(PTMP_tmp0), &(PTMP_tmp1))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return;
    }
    
    {
        PRT_VALUE** P_LVALUE_3 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_3);
        *P_LVALUE_3 = PTMP_tmp2;
        PTMP_tmp2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_4 = &(PTMP_tmp3);
    PrtFreeValue(*P_LVALUE_4);
    *P_LVALUE_4 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp3, 0);
    *(&(PTMP_tmp3)) = NULL;
    goto p_return;
    
p_return: ;
    PrtFreeValue(PTMP_tmp0); PTMP_tmp0 = NULL;
    PrtFreeValue(PTMP_tmp1); PTMP_tmp1 = NULL;
    PrtFreeValue(PTMP_tmp2); PTMP_tmp2 = NULL;
    PrtFreeValue(PTMP_tmp3); PTMP_tmp3 = NULL;
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
    PRT_VALUE* PTMP_tmp0_1 = NULL;
    PRT_VALUE* PTMP_tmp1_1 = NULL;
    PRT_VALUE* PTMP_tmp2_1 = NULL;
    PRT_VALUE* PTMP_tmp3_1 = NULL;
    PRT_VALUE* PTMP_tmp4 = NULL;
    PRT_VALUE* PTMP_tmp5 = NULL;
    PRT_VALUE* PTMP_tmp6 = NULL;
    PRT_VALUE* PTMP_tmp7 = NULL;
    PRT_VALUE* PTMP_tmp8 = NULL;
    PRT_VALUE* PTMP_tmp9 = NULL;
    PRT_VALUE* PTMP_tmp10 = NULL;
    PRT_VALUE* PTMP_tmp11 = NULL;
    PRT_VALUE* PTMP_tmp12 = NULL;
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
    PRT_VALUE* P_VAR_P_payload = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_1 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_2 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_INT32_3 = { PRT_VALUE_KIND_INT, { .nt = 2 } };
    PRT_VALUE P_LIT_INT32_4 = { PRT_VALUE_KIND_INT, { .nt = 3 } };
    PRT_VALUE P_LIT_INT32_5 = { PRT_VALUE_KIND_INT, { .nt = 4 } };
    PRT_VALUE P_LIT_DOUBLE = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PRT_VALUE P_LIT_DOUBLE_1 = { PRT_VALUE_KIND_FLOAT, { .ft = 2 } };
    PRT_VALUE** P_LVALUE_5 = &(PTMP_tmp0_1);
    PrtFreeValue(*P_LVALUE_5);
    *P_LVALUE_5 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_6 = &(P_VAR_s);
        PrtFreeValue(*P_LVALUE_6);
        *P_LVALUE_6 = PTMP_tmp0_1;
        PTMP_tmp0_1 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_7 = &(PTMP_tmp1_1);
    PrtFreeValue(*P_LVALUE_7);
    *P_LVALUE_7 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_8 = &(PTMP_tmp2_1);
    PrtFreeValue(*P_LVALUE_8);
    *P_LVALUE_8 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_9 = &(PTMP_tmp3_1);
    PrtFreeValue(*P_LVALUE_9);
    *P_LVALUE_9 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_10 = &(PTMP_tmp4);
    PrtFreeValue(*P_LVALUE_10);
    *P_LVALUE_10 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp1_1), &(PTMP_tmp2_1), &(PTMP_tmp3_1)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_1), PTMP_tmp4, PRT_FALSE);
    *(&(PTMP_tmp4)) = NULL;
    
    PRT_VALUE** P_LVALUE_11 = &(PTMP_tmp5);
    PrtFreeValue(*P_LVALUE_11);
    *P_LVALUE_11 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_12 = &(PTMP_tmp6);
    PrtFreeValue(*P_LVALUE_12);
    *P_LVALUE_12 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_13 = &(PTMP_tmp7);
    PrtFreeValue(*P_LVALUE_13);
    *P_LVALUE_13 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_14 = &(PTMP_tmp8);
    PrtFreeValue(*P_LVALUE_14);
    *P_LVALUE_14 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp5), &(PTMP_tmp6), &(PTMP_tmp7)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_2), PTMP_tmp8, PRT_FALSE);
    *(&(PTMP_tmp8)) = NULL;
    
    PRT_VALUE** P_LVALUE_15 = &(PTMP_tmp9);
    PrtFreeValue(*P_LVALUE_15);
    *P_LVALUE_15 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_16 = &(PTMP_tmp10);
    PrtFreeValue(*P_LVALUE_16);
    *P_LVALUE_16 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_17 = &(PTMP_tmp11);
    PrtFreeValue(*P_LVALUE_17);
    *P_LVALUE_17 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_18 = &(PTMP_tmp12);
    PrtFreeValue(*P_LVALUE_18);
    *P_LVALUE_18 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp9), &(PTMP_tmp10), &(PTMP_tmp11)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_3), PTMP_tmp12, PRT_FALSE);
    *(&(PTMP_tmp12)) = NULL;
    
    PRT_VALUE** P_LVALUE_19 = &(PTMP_tmp13);
    PrtFreeValue(*P_LVALUE_19);
    *P_LVALUE_19 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_20 = &(PTMP_tmp14);
    PrtFreeValue(*P_LVALUE_20);
    *P_LVALUE_20 = PrtCloneValue((&P_LIT_DOUBLE_1));
    
    PRT_VALUE** P_LVALUE_21 = &(PTMP_tmp15);
    PrtFreeValue(*P_LVALUE_21);
    *P_LVALUE_21 = PrtCloneValue((&P_LIT_DOUBLE));
    
    PRT_VALUE** P_LVALUE_22 = &(PTMP_tmp16);
    PrtFreeValue(*P_LVALUE_22);
    *P_LVALUE_22 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp13), &(PTMP_tmp14), &(PTMP_tmp15)));
    
    PrtSeqInsertEx(P_VAR_s, (&P_LIT_INT32_4), PTMP_tmp16, PRT_FALSE);
    *(&(PTMP_tmp16)) = NULL;
    
    PRT_VALUE** P_LVALUE_23 = &(P_VAR_counter);
    PrtFreeValue(*P_LVALUE_23);
    *P_LVALUE_23 = PrtCloneValue((&P_LIT_INT32_1));
    
    PRT_VALUE** P_LVALUE_24 = &(PTMP_tmp17);
    PrtFreeValue(*P_LVALUE_24);
    *P_LVALUE_24 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_counter) < PrtPrimGetInt((&P_LIT_INT32_5)));
    
    PRT_VALUE** P_LVALUE_25 = &(PTMP_tmp18);
    PrtFreeValue(*P_LVALUE_25);
    *P_LVALUE_25 = PrtCloneValue(PTMP_tmp17);
    
    while (PrtPrimGetBool(PTMP_tmp18))
    {
        PRT_VALUE** P_LVALUE_26 = &(PTMP_tmp19);
        PrtFreeValue(*P_LVALUE_26);
        *P_LVALUE_26 = PrtSeqGet(P_VAR_s, P_VAR_counter);
        
        PrtFormatPrintf("MY CURR POINT!!!: ", 1, PTMP_tmp19, 1, 0, "\n");
        
        PrtFormatPrintf("INITIAL COUNTER VALUE ", 1, P_VAR_counter, 1, 0, "\n");
        
        PRT_VALUE** P_LVALUE_27 = &(PTMP_tmp20);
        PrtFreeValue(*P_LVALUE_27);
        *P_LVALUE_27 = PrtCloneValue(p_this->varValues[0]);
        
        PRT_VALUE** P_LVALUE_28 = &(PTMP_tmp21);
        PrtFreeValue(*P_LVALUE_28);
        *P_LVALUE_28 = PrtCloneValue((&P_EVENT_Send_Next_Point.value));
        
        PRT_VALUE** P_LVALUE_29 = &(PTMP_tmp22);
        PrtFreeValue(*P_LVALUE_29);
        *P_LVALUE_29 = PrtSeqGet(P_VAR_s, P_VAR_counter);
        
        PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp20), PTMP_tmp21, 1, &(PTMP_tmp22));
        *(&(PTMP_tmp21)) = NULL;
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_1;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_1;
        }
        
        PRT_UINT32 P_allowedEventIds[] = { 2 };
        PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
        PRT_UINT32 P_eventId = PrtReceiveAsync(1U, P_allowedEventIds, &P_VAR_P_payload);
        if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
            goto p_return_1;
        }
        if (p_this->isHalted == PRT_TRUE) {
            PrtFreeValue(_P_GEN_retval);
            _P_GEN_retval = NULL;
            goto p_return_1;
        }
        switch (P_eventId) {
            case 2: {
                PRT_VALUE P_LIT_INT32_6 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
                                PRT_VALUE** P_LVALUE_30 = &(PTMP_tmp23);
                PrtFreeValue(*P_LVALUE_30);
                *P_LVALUE_30 = PrtMkIntValue(PrtPrimGetInt(P_VAR_counter) + PrtPrimGetInt((&P_LIT_INT32_6)));
                
                {
                    PRT_VALUE** P_LVALUE_31 = &(P_VAR_counter);
                    PrtFreeValue(*P_LVALUE_31);
                    *P_LVALUE_31 = PTMP_tmp23;
                    PTMP_tmp23 = NULL;
                }
                
                p_return_2: ;
} break;
            default: {
                PrtAssert(PRT_FALSE, "receive returned unhandled event");
            } break;
        }
        PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
        
        PrtFormatPrintf("FINAL COUNTER!!!!!!! ", 1, P_VAR_counter, 1, 0, "\n");
        
        PRT_VALUE** P_LVALUE_32 = &(PTMP_tmp17);
        PrtFreeValue(*P_LVALUE_32);
        *P_LVALUE_32 = PrtMkBoolValue(PrtPrimGetInt(P_VAR_counter) < PrtPrimGetInt((&P_LIT_INT32_5)));
        
        PRT_VALUE** P_LVALUE_33 = &(PTMP_tmp18);
        PrtFreeValue(*P_LVALUE_33);
        *P_LVALUE_33 = PrtCloneValue(PTMP_tmp17);
        
    }
    
    
    PRT_VALUE** P_LVALUE_34 = &(PTMP_tmp24);
    PrtFreeValue(*P_LVALUE_34);
    *P_LVALUE_34 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp24, 0);
    *(&(PTMP_tmp24)) = NULL;
    goto p_return_1;
    
p_return_1: ;
    PrtFreeValue(P_VAR_s); P_VAR_s = NULL;
    PrtFreeValue(P_VAR_counter); P_VAR_counter = NULL;
    PrtFreeValue(PTMP_tmp0_1); PTMP_tmp0_1 = NULL;
    PrtFreeValue(PTMP_tmp1_1); PTMP_tmp1_1 = NULL;
    PrtFreeValue(PTMP_tmp2_1); PTMP_tmp2_1 = NULL;
    PrtFreeValue(PTMP_tmp3_1); PTMP_tmp3_1 = NULL;
    PrtFreeValue(PTMP_tmp4); PTMP_tmp4 = NULL;
    PrtFreeValue(PTMP_tmp5); PTMP_tmp5 = NULL;
    PrtFreeValue(PTMP_tmp6); PTMP_tmp6 = NULL;
    PrtFreeValue(PTMP_tmp7); PTMP_tmp7 = NULL;
    PrtFreeValue(PTMP_tmp8); PTMP_tmp8 = NULL;
    PrtFreeValue(PTMP_tmp9); PTMP_tmp9 = NULL;
    PrtFreeValue(PTMP_tmp10); PTMP_tmp10 = NULL;
    PrtFreeValue(PTMP_tmp11); PTMP_tmp11 = NULL;
    PrtFreeValue(PTMP_tmp12); PTMP_tmp12 = NULL;
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
    PrtFreeValue(P_VAR_P_payload); P_VAR_P_payload = NULL;
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
p_return_3: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_2 =
{
    NULL,
    &P_Anon_IMPL_2,
    NULL
};


PRT_FUNDECL* P_Project_METHODS[] = { &P_FUNCTION_Anon, &P_FUNCTION_Anon_1, &P_FUNCTION_Anon_2 };

PRT_EVENTDECL* P_Project_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Project_RECV_1 =
{
    10U,
    P_Project_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Project_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Project_SEND =
{
    10U,
    P_Project_SEND_INNER,
    NULL
};

PRT_UINT32 P_Project_CREATES_ARR[] = { 1 };
PRT_INTERFACESETDECL P_Project_CREATES = { 1, P_Project_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_Project = 
{
    0U,
    "Project",
    &P_EVENTSET_Project_RECV_1,
    &P_EVENTSET_Project_SEND,
    &P_Project_CREATES,
    1U,
    3U,
    3U,
    4294967295U,
    0U,
    P_Project_VARS,
    P_Project_STATES,
    P_Project_METHODS
};

PRT_VARDECL P_Robot_VARS[] = {
    { "id", &P_GEND_TYPE_i },
    { "my_project", &P_GEND_TYPE_m },
    { "my_battery", &P_GEND_TYPE_m },
    { "my_motion_planner", &P_GEND_TYPE_m }
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

PRT_TRANSDECL P_TRANS_3[] =
{
    { 0, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_Robot_Init \
{ \
    "Robot.Init", \
    1U, \
    0U, \
    &P_EVENTSET_Init_DEFERS_1, \
    &P_EVENTSET_Init_TRANS_1, \
    &P_EVENTSET_Init_DOS_1, \
    P_TRANS_3, \
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

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Send_Next_Point };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_1 =
{
    3U,
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

PRT_TRANSDECL P_TRANS_4[] =
{
    { 1, &P_EVENT_Send_Next_Point, 2, &_P_NO_OP },
    { 1, &P_EVENT_Completed_Point, 3, &_P_NO_OP },
    { 1, &P_EVENT_Critical_Battery, 4, &_P_NO_OP }
};

#define P_STATE_Robot_WaitRequest \
{ \
    "Robot.WaitRequest", \
    3U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_1, \
    &P_EVENTSET_WaitRequest_TRANS_1, \
    &P_EVENTSET_WaitRequest_DOS_1, \
    P_TRANS_4, \
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

PRT_EVENTDECL* P_Send_Next_Point_State_TRANS_INNER[] = { &P_EVENT_Completed_Point };
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

PRT_TRANSDECL P_TRANS_5[] =
{
    { 2, &P_EVENT_Completed_Point, 3, &_P_NO_OP }
};

#define P_STATE_Robot_Send_Next_Point_State \
{ \
    "Robot.Send_Next_Point_State", \
    1U, \
    0U, \
    &P_EVENTSET_Send_Next_Point_State_DEFERS, \
    &P_EVENTSET_Send_Next_Point_State_TRANS, \
    &P_EVENTSET_Send_Next_Point_State_DOS, \
    P_TRANS_5, \
    NULL, \
    &P_FUNCTION_Anon_5, \
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

PRT_TRANSDECL P_TRANS_6[] =
{
    { 3, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_Robot_Completed_Point_State \
{ \
    "Robot.Completed_Point_State", \
    1U, \
    0U, \
    &P_EVENTSET_Completed_Point_State_DEFERS, \
    &P_EVENTSET_Completed_Point_State_TRANS, \
    &P_EVENTSET_Completed_Point_State_DOS, \
    P_TRANS_6, \
    NULL, \
    &P_FUNCTION_Anon_6, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Critical_Battery_State_DEFERS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Critical_Battery_State_DEFERS =
{
    0U,
    P_Critical_Battery_State_DEFERS_INNER,
    NULL
};

PRT_EVENTDECL* P_Critical_Battery_State_TRANS_INNER[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Critical_Battery_State_TRANS =
{
    1U,
    P_Critical_Battery_State_TRANS_INNER,
    NULL
};

PRT_EVENTDECL* P_Critical_Battery_State_DOS_INNER[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Critical_Battery_State_DOS =
{
    0U,
    P_Critical_Battery_State_DOS_INNER,
    NULL
};

PRT_TRANSDECL P_TRANS_7[] =
{
    { 4, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_Robot_Critical_Battery_State \
{ \
    "Robot.Critical_Battery_State", \
    1U, \
    0U, \
    &P_EVENTSET_Critical_Battery_State_DEFERS, \
    &P_EVENTSET_Critical_Battery_State_TRANS, \
    &P_EVENTSET_Critical_Battery_State_DOS, \
    P_TRANS_7, \
    NULL, \
    &P_FUNCTION_Anon_7, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_Robot_STATES[] = { P_STATE_Robot_Init, P_STATE_Robot_WaitRequest, P_STATE_Robot_Send_Next_Point_State, P_STATE_Robot_Completed_Point_State, P_STATE_Robot_Critical_Battery_State };

PRT_VALUE* P_Anon_IMPL_3(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload = argRefs[0];
    PRT_VALUE* PTMP_tmp0_2 = NULL;
    PRT_VALUE* PTMP_tmp1_2 = NULL;
    PRT_VALUE* PTMP_tmp2_2 = NULL;
    PRT_VALUE* PTMP_tmp3_2 = NULL;
    PRT_VALUE* PTMP_tmp4_1 = NULL;
    PRT_VALUE* PTMP_tmp5_1 = NULL;
    PRT_VALUE* PTMP_tmp6_1 = NULL;
    PRT_VALUE* PTMP_tmp7_1 = NULL;
    PRT_VALUE* PTMP_tmp8_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_35 = &(PTMP_tmp0_2);
    PrtFreeValue(*P_LVALUE_35);
    *P_LVALUE_35 = PrtTupleGet(*P_VAR_payload, 0);
    
    {
        PRT_VALUE** P_LVALUE_36 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_36);
        *P_LVALUE_36 = PTMP_tmp0_2;
        PTMP_tmp0_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_37 = &(PTMP_tmp1_2);
    PrtFreeValue(*P_LVALUE_37);
    *P_LVALUE_37 = PrtTupleGet(*P_VAR_payload, 1);
    
    {
        PRT_VALUE** P_LVALUE_38 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_38);
        *P_LVALUE_38 = PTMP_tmp1_2;
        PTMP_tmp1_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_39 = &(PTMP_tmp2_2);
    PrtFreeValue(*P_LVALUE_39);
    *P_LVALUE_39 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_40 = &(PTMP_tmp3_2);
    PrtFreeValue(*P_LVALUE_40);
    *P_LVALUE_40 = PrtCloneValue(PrtMkInterface(context, 2, 1, &(PTMP_tmp2_2))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_4;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_4;
    }
    
    {
        PRT_VALUE** P_LVALUE_41 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_41);
        *P_LVALUE_41 = PTMP_tmp3_2;
        PTMP_tmp3_2 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_42 = &(PTMP_tmp4_1);
    PrtFreeValue(*P_LVALUE_42);
    *P_LVALUE_42 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_43 = &(PTMP_tmp5_1);
    PrtFreeValue(*P_LVALUE_43);
    *P_LVALUE_43 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_44 = &(PTMP_tmp6_1);
    PrtFreeValue(*P_LVALUE_44);
    *P_LVALUE_44 = (PrtMkTuple(&P_GEND_TYPE_T2Ri, &(PTMP_tmp4_1), &(PTMP_tmp5_1)));
    
    PRT_VALUE** P_LVALUE_45 = &(PTMP_tmp7_1);
    PrtFreeValue(*P_LVALUE_45);
    *P_LVALUE_45 = PrtCloneValue(PrtMkInterface(context, 3, 1, &(PTMP_tmp6_1))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_4;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_4;
    }
    
    {
        PRT_VALUE** P_LVALUE_46 = &(p_this->varValues[3]);
        PrtFreeValue(*P_LVALUE_46);
        *P_LVALUE_46 = PTMP_tmp7_1;
        PTMP_tmp7_1 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_47 = &(PTMP_tmp8_1);
    PrtFreeValue(*P_LVALUE_47);
    *P_LVALUE_47 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp8_1, 0);
    *(&(PTMP_tmp8_1)) = NULL;
    goto p_return_4;
    
p_return_4: ;
    PrtFreeValue(PTMP_tmp0_2); PTMP_tmp0_2 = NULL;
    PrtFreeValue(PTMP_tmp1_2); PTMP_tmp1_2 = NULL;
    PrtFreeValue(PTMP_tmp2_2); PTMP_tmp2_2 = NULL;
    PrtFreeValue(PTMP_tmp3_2); PTMP_tmp3_2 = NULL;
    PrtFreeValue(PTMP_tmp4_1); PTMP_tmp4_1 = NULL;
    PrtFreeValue(PTMP_tmp5_1); PTMP_tmp5_1 = NULL;
    PrtFreeValue(PTMP_tmp6_1); PTMP_tmp6_1 = NULL;
    PrtFreeValue(PTMP_tmp7_1); PTMP_tmp7_1 = NULL;
    PrtFreeValue(PTMP_tmp8_1); PTMP_tmp8_1 = NULL;
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
p_return_5: ;
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
    PRT_VALUE** P_VAR_payload_1 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_3 = NULL;
    PRT_VALUE* PTMP_tmp1_3 = NULL;
    PRT_VALUE* PTMP_tmp2_3 = NULL;
    PRT_VALUE* PTMP_tmp3_3 = NULL;
    PRT_VALUE* P_VAR_P_payload_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_48 = &(PTMP_tmp0_3);
    PrtFreeValue(*P_LVALUE_48);
    *P_LVALUE_48 = PrtCloneValue(p_this->varValues[3]);
    
    PRT_VALUE** P_LVALUE_49 = &(PTMP_tmp1_3);
    PrtFreeValue(*P_LVALUE_49);
    *P_LVALUE_49 = PrtCloneValue((&P_EVENT_Send_Next_Point.value));
    
    PRT_VALUE** P_LVALUE_50 = &(PTMP_tmp2_3);
    PrtFreeValue(*P_LVALUE_50);
    *P_LVALUE_50 = PrtCloneValue(*P_VAR_payload_1);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_3), PTMP_tmp1_3, 1, &(PTMP_tmp2_3));
    *(&(PTMP_tmp1_3)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_6;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_6;
    }
    
    PRT_UINT32 P_allowedEventIds_1[] = { 2 };
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    PRT_UINT32 P_eventId_1 = PrtReceiveAsync(1U, P_allowedEventIds_1, &P_VAR_P_payload_1);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_6;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_6;
    }
    switch (P_eventId_1) {
        case 2: {
                        PRT_VALUE** P_LVALUE_51 = &(PTMP_tmp3_3);
            PrtFreeValue(*P_LVALUE_51);
            *P_LVALUE_51 = PrtCloneValue((&P_EVENT_Completed_Point.value));
            
            PrtRaise(p_this, PTMP_tmp3_3, 0);
            *(&(PTMP_tmp3_3)) = NULL;
            goto p_return_6;
            
            p_return_7: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    
p_return_6: ;
    PrtFreeValue(PTMP_tmp0_3); PTMP_tmp0_3 = NULL;
    PrtFreeValue(PTMP_tmp1_3); PTMP_tmp1_3 = NULL;
    PrtFreeValue(PTMP_tmp2_3); PTMP_tmp2_3 = NULL;
    PrtFreeValue(PTMP_tmp3_3); PTMP_tmp3_3 = NULL;
    PrtFreeValue(P_VAR_P_payload_1); P_VAR_P_payload_1 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_5 =
{
    NULL,
    &P_Anon_IMPL_5,
    &P_GEND_TYPE_T3fff
};


PRT_VALUE* P_Anon_IMPL_6(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* PTMP_tmp0_4 = NULL;
    PRT_VALUE* PTMP_tmp1_4 = NULL;
    PRT_VALUE* PTMP_tmp2_4 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_52 = &(PTMP_tmp0_4);
    PrtFreeValue(*P_LVALUE_52);
    *P_LVALUE_52 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_53 = &(PTMP_tmp1_4);
    PrtFreeValue(*P_LVALUE_53);
    *P_LVALUE_53 = PrtCloneValue((&P_EVENT_Completed_Point.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_4), PTMP_tmp1_4, 0);
    *(&(PTMP_tmp1_4)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_8;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_8;
    }
    
    PRT_VALUE** P_LVALUE_54 = &(PTMP_tmp2_4);
    PrtFreeValue(*P_LVALUE_54);
    *P_LVALUE_54 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_4, 0);
    *(&(PTMP_tmp2_4)) = NULL;
    goto p_return_8;
    
p_return_8: ;
    PrtFreeValue(PTMP_tmp0_4); PTMP_tmp0_4 = NULL;
    PrtFreeValue(PTMP_tmp1_4); PTMP_tmp1_4 = NULL;
    PrtFreeValue(PTMP_tmp2_4); PTMP_tmp2_4 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_6 =
{
    NULL,
    &P_Anon_IMPL_6,
    NULL
};


PRT_VALUE* P_Anon_IMPL_7(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE* P_VAR_x = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_safe_ompl_motion_plan = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* P_VAR_s_1 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* PTMP_tmp0_5 = NULL;
    PRT_VALUE* PTMP_tmp1_5 = NULL;
    PRT_VALUE* PTMP_tmp2_5 = NULL;
    PRT_VALUE* PTMP_tmp3_4 = NULL;
    PRT_VALUE* PTMP_tmp4_2 = NULL;
    PRT_VALUE* PTMP_tmp5_2 = NULL;
    PRT_VALUE* PTMP_tmp6_2 = NULL;
    PRT_VALUE* PTMP_tmp7_2 = NULL;
    PRT_VALUE* PTMP_tmp8_2 = NULL;
    PRT_VALUE* PTMP_tmp9_1 = NULL;
    PRT_VALUE* PTMP_tmp10_1 = NULL;
    PRT_VALUE* PTMP_tmp11_1 = NULL;
    PRT_VALUE* PTMP_tmp12_1 = NULL;
    PRT_VALUE* PTMP_tmp13_1 = NULL;
    PRT_VALUE* PTMP_tmp14_1 = NULL;
    PRT_VALUE* PTMP_tmp15_1 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_7 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_8 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE P_LIT_DOUBLE_2 = { PRT_VALUE_KIND_FLOAT, { .ft = 0.5 } };
    PRT_VALUE P_LIT_DOUBLE_3 = { PRT_VALUE_KIND_FLOAT, { .ft = 1 } };
    PRT_VALUE P_LIT_DOUBLE_4 = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PrtPrintf("ROBOT IN Critical_Battery STATE\n");
    
    PRT_VALUE** P_LVALUE_55 = &(PTMP_tmp0_5);
    PrtFreeValue(*P_LVALUE_55);
    *P_LVALUE_55 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_56 = &(P_VAR_s_1);
        PrtFreeValue(*P_LVALUE_56);
        *P_LVALUE_56 = PTMP_tmp0_5;
        PTMP_tmp0_5 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_57 = &(PTMP_tmp1_5);
    PrtFreeValue(*P_LVALUE_57);
    *P_LVALUE_57 = PrtCloneValue((&P_LIT_DOUBLE_2));
    
    PRT_VALUE** P_LVALUE_58 = &(PTMP_tmp2_5);
    PrtFreeValue(*P_LVALUE_58);
    *P_LVALUE_58 = PrtCloneValue((&P_LIT_DOUBLE_3));
    
    PRT_VALUE** P_LVALUE_59 = &(PTMP_tmp3_4);
    PrtFreeValue(*P_LVALUE_59);
    *P_LVALUE_59 = PrtCloneValue((&P_LIT_DOUBLE_4));
    
    PRT_VALUE** P_LVALUE_60 = &(PTMP_tmp4_2);
    PrtFreeValue(*P_LVALUE_60);
    *P_LVALUE_60 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp1_5), &(PTMP_tmp2_5), &(PTMP_tmp3_4)));
    
    PrtSeqInsertEx(P_VAR_s_1, (&P_LIT_INT32_7), PTMP_tmp4_2, PRT_FALSE);
    *(&(PTMP_tmp4_2)) = NULL;
    
    PRT_VALUE** P_LVALUE_61 = &(PTMP_tmp5_2);
    PrtFreeValue(*P_LVALUE_61);
    *P_LVALUE_61 = PrtCloneValue((&P_LIT_DOUBLE_2));
    
    PRT_VALUE** P_LVALUE_62 = &(PTMP_tmp6_2);
    PrtFreeValue(*P_LVALUE_62);
    *P_LVALUE_62 = PrtCloneValue((&P_LIT_DOUBLE_3));
    
    PRT_VALUE** P_LVALUE_63 = &(PTMP_tmp7_2);
    PrtFreeValue(*P_LVALUE_63);
    *P_LVALUE_63 = PrtCloneValue((&P_LIT_DOUBLE_4));
    
    PRT_VALUE** P_LVALUE_64 = &(PTMP_tmp8_2);
    PrtFreeValue(*P_LVALUE_64);
    *P_LVALUE_64 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp5_2), &(PTMP_tmp6_2), &(PTMP_tmp7_2)));
    
    PrtSeqInsertEx(P_VAR_s_1, (&P_LIT_INT32_8), PTMP_tmp8_2, PRT_FALSE);
    *(&(PTMP_tmp8_2)) = NULL;
    
    PRT_VALUE** P_LVALUE_65 = &(PTMP_tmp9_1);
    PrtFreeValue(*P_LVALUE_65);
    *P_LVALUE_65 = PrtCloneValue(P_VAR_s_1);
    
    PRT_VALUE** P_LVALUE_66 = &(PTMP_tmp10_1);
    PrtFreeValue(*P_LVALUE_66);
    *P_LVALUE_66 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_67 = &(PTMP_tmp11_1);
    PrtFreeValue(*P_LVALUE_67);
    *P_LVALUE_67 = ((_P_GEN_funargs[0] = &(PTMP_tmp9_1)), (_P_GEN_funargs[1] = &(PTMP_tmp10_1)), (_P_GEN_funval = P_omplMotionPlanExternal_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp9_1), PTMP_tmp9_1 = NULL), (PrtFreeValue(PTMP_tmp10_1), PTMP_tmp10_1 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_9;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_9;
    }
    
    {
        PRT_VALUE** P_LVALUE_68 = &(P_VAR_safe_ompl_motion_plan);
        PrtFreeValue(*P_LVALUE_68);
        *P_LVALUE_68 = PTMP_tmp11_1;
        PTMP_tmp11_1 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_69 = &(PTMP_tmp12_1);
    PrtFreeValue(*P_LVALUE_69);
    *P_LVALUE_69 = PrtCloneValue(P_VAR_safe_ompl_motion_plan);
    
    PRT_VALUE** P_LVALUE_70 = &(PTMP_tmp13_1);
    PrtFreeValue(*P_LVALUE_70);
    *P_LVALUE_70 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_71 = &(PTMP_tmp14_1);
    PrtFreeValue(*P_LVALUE_71);
    *P_LVALUE_71 = ((_P_GEN_funargs[0] = &(PTMP_tmp12_1)), (_P_GEN_funargs[1] = &(PTMP_tmp13_1)), (_P_GEN_funval = P_ROSGoTo_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp12_1), PTMP_tmp12_1 = NULL), (PrtFreeValue(PTMP_tmp13_1), PTMP_tmp13_1 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_9;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_9;
    }
    
    {
        PRT_VALUE** P_LVALUE_72 = &(P_VAR_x);
        PrtFreeValue(*P_LVALUE_72);
        *P_LVALUE_72 = PTMP_tmp14_1;
        PTMP_tmp14_1 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_73 = &(PTMP_tmp15_1);
    PrtFreeValue(*P_LVALUE_73);
    *P_LVALUE_73 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp15_1, 0);
    *(&(PTMP_tmp15_1)) = NULL;
    goto p_return_9;
    
p_return_9: ;
    PrtFreeValue(P_VAR_x); P_VAR_x = NULL;
    PrtFreeValue(P_VAR_safe_ompl_motion_plan); P_VAR_safe_ompl_motion_plan = NULL;
    PrtFreeValue(P_VAR_s_1); P_VAR_s_1 = NULL;
    PrtFreeValue(PTMP_tmp0_5); PTMP_tmp0_5 = NULL;
    PrtFreeValue(PTMP_tmp1_5); PTMP_tmp1_5 = NULL;
    PrtFreeValue(PTMP_tmp2_5); PTMP_tmp2_5 = NULL;
    PrtFreeValue(PTMP_tmp3_4); PTMP_tmp3_4 = NULL;
    PrtFreeValue(PTMP_tmp4_2); PTMP_tmp4_2 = NULL;
    PrtFreeValue(PTMP_tmp5_2); PTMP_tmp5_2 = NULL;
    PrtFreeValue(PTMP_tmp6_2); PTMP_tmp6_2 = NULL;
    PrtFreeValue(PTMP_tmp7_2); PTMP_tmp7_2 = NULL;
    PrtFreeValue(PTMP_tmp8_2); PTMP_tmp8_2 = NULL;
    PrtFreeValue(PTMP_tmp9_1); PTMP_tmp9_1 = NULL;
    PrtFreeValue(PTMP_tmp10_1); PTMP_tmp10_1 = NULL;
    PrtFreeValue(PTMP_tmp11_1); PTMP_tmp11_1 = NULL;
    PrtFreeValue(PTMP_tmp12_1); PTMP_tmp12_1 = NULL;
    PrtFreeValue(PTMP_tmp13_1); PTMP_tmp13_1 = NULL;
    PrtFreeValue(PTMP_tmp14_1); PTMP_tmp14_1 = NULL;
    PrtFreeValue(PTMP_tmp15_1); PTMP_tmp15_1 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_7 =
{
    NULL,
    &P_Anon_IMPL_7,
    NULL
};


PRT_FUNDECL* P_Robot_METHODS[] = { &P_FUNCTION_Anon_3, &P_FUNCTION_Anon_4, &P_FUNCTION_Anon_5, &P_FUNCTION_Anon_6, &P_FUNCTION_Anon_7 };

PRT_EVENTDECL* P_Robot_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Robot_RECV_1 =
{
    10U,
    P_Robot_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Robot_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Robot_SEND =
{
    10U,
    P_Robot_SEND_INNER,
    NULL
};

PRT_UINT32 P_Robot_CREATES_ARR[] = { 2, 3 };
PRT_INTERFACESETDECL P_Robot_CREATES = { 2, P_Robot_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_Robot = 
{
    1U,
    "Robot",
    &P_EVENTSET_Robot_RECV_1,
    &P_EVENTSET_Robot_SEND,
    &P_Robot_CREATES,
    4U,
    5U,
    5U,
    4294967295U,
    0U,
    P_Robot_VARS,
    P_Robot_STATES,
    P_Robot_METHODS
};

PRT_VARDECL P_Battery_VARS[] = {
    { "my_robot", &P_GEND_TYPE_m }
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

PRT_TRANSDECL P_TRANS_8[] =
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
    P_TRANS_8, \
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

PRT_STATEDECL P_Battery_STATES[] = { P_STATE_Battery_Init, P_STATE_Battery_WaitRequest };

PRT_VALUE* P_Anon_IMPL_8(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_2 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_6 = NULL;
    PRT_VALUE* PTMP_tmp1_6 = NULL;
    PRT_VALUE* PTMP_tmp2_6 = NULL;
    PRT_VALUE* PTMP_tmp3_5 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_DOUBLE_5 = { PRT_VALUE_KIND_FLOAT, { .ft = 2 } };
    PRT_VALUE** P_LVALUE_74 = &(p_this->varValues[0]);
    PrtFreeValue(*P_LVALUE_74);
    *P_LVALUE_74 = PrtCloneValue(*P_VAR_payload_2);
    
    PrtPrintf("IN BATTERY INIT\n");
    
    PRT_VALUE** P_LVALUE_75 = &(PTMP_tmp0_6);
    PrtFreeValue(*P_LVALUE_75);
    *P_LVALUE_75 = PrtCloneValue((&P_LIT_DOUBLE_5));
    
    _P_GEN_funargs[0] = &(PTMP_tmp0_6);
    PrtFreeValue(P_Sleep_IMPL(context, _P_GEN_funargs));
    PrtFreeValue(PTMP_tmp0_6);
    PTMP_tmp0_6 = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_10;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_10;
    }
    
    PRT_VALUE** P_LVALUE_76 = &(PTMP_tmp1_6);
    PrtFreeValue(*P_LVALUE_76);
    *P_LVALUE_76 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_77 = &(PTMP_tmp2_6);
    PrtFreeValue(*P_LVALUE_77);
    *P_LVALUE_77 = PrtCloneValue((&P_EVENT_Critical_Battery.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp1_6), PTMP_tmp2_6, 0);
    *(&(PTMP_tmp2_6)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_10;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_10;
    }
    
    PRT_VALUE** P_LVALUE_78 = &(PTMP_tmp3_5);
    PrtFreeValue(*P_LVALUE_78);
    *P_LVALUE_78 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp3_5, 0);
    *(&(PTMP_tmp3_5)) = NULL;
    goto p_return_10;
    
p_return_10: ;
    PrtFreeValue(PTMP_tmp0_6); PTMP_tmp0_6 = NULL;
    PrtFreeValue(PTMP_tmp1_6); PTMP_tmp1_6 = NULL;
    PrtFreeValue(PTMP_tmp2_6); PTMP_tmp2_6 = NULL;
    PrtFreeValue(PTMP_tmp3_5); PTMP_tmp3_5 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_8 =
{
    NULL,
    &P_Anon_IMPL_8,
    &P_GEND_TYPE_m
};


PRT_VALUE* P_Anon_IMPL_9(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_11: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_9 =
{
    NULL,
    &P_Anon_IMPL_9,
    NULL
};


PRT_FUNDECL* P_Battery_METHODS[] = { &P_FUNCTION_Anon_8, &P_FUNCTION_Anon_9 };

PRT_EVENTDECL* P_Battery_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Battery_RECV_1 =
{
    10U,
    P_Battery_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Battery_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_Battery_SEND =
{
    10U,
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
    1U,
    2U,
    2U,
    4294967295U,
    0U,
    P_Battery_VARS,
    P_Battery_STATES,
    P_Battery_METHODS
};

PRT_VARDECL P_MotionPlanner_VARS[] = {
    { "my_robot", &P_GEND_TYPE_m },
    { "robot_id", &P_GEND_TYPE_i },
    { "my_plan_executor", &P_GEND_TYPE_m },
    { "my_robot_last_location", &P_GEND_TYPE_T3fff }
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

#define P_STATE_MotionPlanner_Init \
{ \
    "MotionPlanner.Init", \
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

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_3[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_3 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_3,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_3[] = { &P_EVENT_Completed_Point, &P_EVENT_Send_Next_Point };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_TRANS_3 =
{
    2U,
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

PRT_TRANSDECL P_TRANS_10[] =
{
    { 1, &P_EVENT_Send_Next_Point, 2, &_P_NO_OP },
    { 1, &P_EVENT_Completed_Point, 3, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_WaitRequest \
{ \
    "MotionPlanner.WaitRequest", \
    2U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_3, \
    &P_EVENTSET_WaitRequest_TRANS_3, \
    &P_EVENTSET_WaitRequest_DOS_3, \
    P_TRANS_10, \
    NULL, \
    &P_FUNCTION_Anon_11, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_Completed_Point_State_DEFERS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_DEFERS_1 =
{
    0U,
    P_Completed_Point_State_DEFERS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Completed_Point_State_TRANS_INNER_1[] = { &P_EVENT_Success };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_TRANS_1 =
{
    1U,
    P_Completed_Point_State_TRANS_INNER_1,
    NULL
};

PRT_EVENTDECL* P_Completed_Point_State_DOS_INNER_1[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_Completed_Point_State_DOS_1 =
{
    0U,
    P_Completed_Point_State_DOS_INNER_1,
    NULL
};

PRT_TRANSDECL P_TRANS_11[] =
{
    { 3, &P_EVENT_Success, 1, &_P_NO_OP }
};

#define P_STATE_MotionPlanner_Completed_Point_State \
{ \
    "MotionPlanner.Completed_Point_State", \
    1U, \
    0U, \
    &P_EVENTSET_Completed_Point_State_DEFERS_1, \
    &P_EVENTSET_Completed_Point_State_TRANS_1, \
    &P_EVENTSET_Completed_Point_State_DOS_1, \
    P_TRANS_11, \
    NULL, \
    &P_FUNCTION_Anon_12, \
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

PRT_TRANSDECL P_TRANS_12[] =
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
    P_TRANS_12, \
    NULL, \
    &P_FUNCTION_Anon_13, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_MotionPlanner_STATES[] = { P_STATE_MotionPlanner_Init, P_STATE_MotionPlanner_WaitRequest, P_STATE_MotionPlanner_Compute_Path_And_Send_To_PE, P_STATE_MotionPlanner_Completed_Point_State };

PRT_VALUE* P_Anon_IMPL_10(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_3 = argRefs[0];
    PRT_VALUE* PTMP_tmp0_7 = NULL;
    PRT_VALUE* PTMP_tmp1_7 = NULL;
    PRT_VALUE* PTMP_tmp2_7 = NULL;
    PRT_VALUE* PTMP_tmp3_6 = NULL;
    PRT_VALUE* PTMP_tmp4_3 = NULL;
    PRT_VALUE* PTMP_tmp5_3 = NULL;
    PRT_VALUE* PTMP_tmp6_3 = NULL;
    PRT_VALUE* PTMP_tmp7_3 = NULL;
    PRT_VALUE* PTMP_tmp8_3 = NULL;
    PRT_VALUE* PTMP_tmp9_2 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_DOUBLE_6 = { PRT_VALUE_KIND_FLOAT, { .ft = 0 } };
    PRT_VALUE** P_LVALUE_79 = &(PTMP_tmp0_7);
    PrtFreeValue(*P_LVALUE_79);
    *P_LVALUE_79 = PrtTupleGet(*P_VAR_payload_3, 0);
    
    {
        PRT_VALUE** P_LVALUE_80 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_80);
        *P_LVALUE_80 = PTMP_tmp0_7;
        PTMP_tmp0_7 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_81 = &(PTMP_tmp1_7);
    PrtFreeValue(*P_LVALUE_81);
    *P_LVALUE_81 = PrtTupleGet(*P_VAR_payload_3, 1);
    
    {
        PRT_VALUE** P_LVALUE_82 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_82);
        *P_LVALUE_82 = PTMP_tmp1_7;
        PTMP_tmp1_7 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_83 = &(PTMP_tmp2_7);
    PrtFreeValue(*P_LVALUE_83);
    *P_LVALUE_83 = PrtCloneValue((p_this->id));
    
    PRT_VALUE** P_LVALUE_84 = &(PTMP_tmp3_6);
    PrtFreeValue(*P_LVALUE_84);
    *P_LVALUE_84 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_85 = &(PTMP_tmp4_3);
    PrtFreeValue(*P_LVALUE_85);
    *P_LVALUE_85 = PrtCloneValue(PrtMkInterface(context, 4, 2, &(PTMP_tmp2_7), &(PTMP_tmp3_6))->id);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_12;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_12;
    }
    
    {
        PRT_VALUE** P_LVALUE_86 = &(p_this->varValues[2]);
        PrtFreeValue(*P_LVALUE_86);
        *P_LVALUE_86 = PTMP_tmp4_3;
        PTMP_tmp4_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_87 = &(PTMP_tmp5_3);
    PrtFreeValue(*P_LVALUE_87);
    *P_LVALUE_87 = PrtCloneValue((&P_LIT_DOUBLE_6));
    
    PRT_VALUE** P_LVALUE_88 = &(PTMP_tmp6_3);
    PrtFreeValue(*P_LVALUE_88);
    *P_LVALUE_88 = PrtCloneValue((&P_LIT_DOUBLE_6));
    
    PRT_VALUE** P_LVALUE_89 = &(PTMP_tmp7_3);
    PrtFreeValue(*P_LVALUE_89);
    *P_LVALUE_89 = PrtCloneValue((&P_LIT_DOUBLE_6));
    
    PRT_VALUE** P_LVALUE_90 = &(PTMP_tmp8_3);
    PrtFreeValue(*P_LVALUE_90);
    *P_LVALUE_90 = (PrtMkTuple(&P_GEND_TYPE_T3fff, &(PTMP_tmp5_3), &(PTMP_tmp6_3), &(PTMP_tmp7_3)));
    
    {
        PRT_VALUE** P_LVALUE_91 = &(p_this->varValues[3]);
        PrtFreeValue(*P_LVALUE_91);
        *P_LVALUE_91 = PTMP_tmp8_3;
        PTMP_tmp8_3 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_92 = &(PTMP_tmp9_2);
    PrtFreeValue(*P_LVALUE_92);
    *P_LVALUE_92 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp9_2, 0);
    *(&(PTMP_tmp9_2)) = NULL;
    goto p_return_12;
    
p_return_12: ;
    PrtFreeValue(PTMP_tmp0_7); PTMP_tmp0_7 = NULL;
    PrtFreeValue(PTMP_tmp1_7); PTMP_tmp1_7 = NULL;
    PrtFreeValue(PTMP_tmp2_7); PTMP_tmp2_7 = NULL;
    PrtFreeValue(PTMP_tmp3_6); PTMP_tmp3_6 = NULL;
    PrtFreeValue(PTMP_tmp4_3); PTMP_tmp4_3 = NULL;
    PrtFreeValue(PTMP_tmp5_3); PTMP_tmp5_3 = NULL;
    PrtFreeValue(PTMP_tmp6_3); PTMP_tmp6_3 = NULL;
    PrtFreeValue(PTMP_tmp7_3); PTMP_tmp7_3 = NULL;
    PrtFreeValue(PTMP_tmp8_3); PTMP_tmp8_3 = NULL;
    PrtFreeValue(PTMP_tmp9_2); PTMP_tmp9_2 = NULL;
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
p_return_13: ;
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
    PRT_VALUE* PTMP_tmp0_8 = NULL;
    PRT_VALUE* PTMP_tmp1_8 = NULL;
    PRT_VALUE* PTMP_tmp2_8 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_93 = &(PTMP_tmp0_8);
    PrtFreeValue(*P_LVALUE_93);
    *P_LVALUE_93 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_94 = &(PTMP_tmp1_8);
    PrtFreeValue(*P_LVALUE_94);
    *P_LVALUE_94 = PrtCloneValue((&P_EVENT_Completed_Point.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp0_8), PTMP_tmp1_8, 0);
    *(&(PTMP_tmp1_8)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_14;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_14;
    }
    
    PRT_VALUE** P_LVALUE_95 = &(PTMP_tmp2_8);
    PrtFreeValue(*P_LVALUE_95);
    *P_LVALUE_95 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_8, 0);
    *(&(PTMP_tmp2_8)) = NULL;
    goto p_return_14;
    
p_return_14: ;
    PrtFreeValue(PTMP_tmp0_8); PTMP_tmp0_8 = NULL;
    PrtFreeValue(PTMP_tmp1_8); PTMP_tmp1_8 = NULL;
    PrtFreeValue(PTMP_tmp2_8); PTMP_tmp2_8 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_12 =
{
    NULL,
    &P_Anon_IMPL_12,
    NULL
};


PRT_VALUE* P_Anon_IMPL_13(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_4 = argRefs[0];
    PRT_VALUE* P_VAR_s_2 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    PRT_VALUE* P_VAR_ompl_motion_plan = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_9 = NULL;
    PRT_VALUE* PTMP_tmp1_9 = NULL;
    PRT_VALUE* PTMP_tmp2_9 = NULL;
    PRT_VALUE* PTMP_tmp3_7 = NULL;
    PRT_VALUE* PTMP_tmp4_4 = NULL;
    PRT_VALUE* PTMP_tmp5_4 = NULL;
    PRT_VALUE* PTMP_tmp6_4 = NULL;
    PRT_VALUE* PTMP_tmp7_4 = NULL;
    PRT_VALUE* PTMP_tmp8_4 = NULL;
    PRT_VALUE* PTMP_tmp9_3 = NULL;
    PRT_VALUE* P_VAR_P_payload_2 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE P_LIT_INT32_9 = { PRT_VALUE_KIND_INT, { .nt = 0 } };
    PRT_VALUE P_LIT_INT32_10 = { PRT_VALUE_KIND_INT, { .nt = 1 } };
    PRT_VALUE** P_LVALUE_96 = &(PTMP_tmp0_9);
    PrtFreeValue(*P_LVALUE_96);
    *P_LVALUE_96 = PrtMkDefaultValue(&P_GEND_TYPE_ST3fff);
    
    {
        PRT_VALUE** P_LVALUE_97 = &(P_VAR_s_2);
        PrtFreeValue(*P_LVALUE_97);
        *P_LVALUE_97 = PTMP_tmp0_9;
        PTMP_tmp0_9 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_98 = &(PTMP_tmp1_9);
    PrtFreeValue(*P_LVALUE_98);
    *P_LVALUE_98 = PrtCloneValue(p_this->varValues[3]);
    
    PrtSeqInsertEx(P_VAR_s_2, (&P_LIT_INT32_9), PTMP_tmp1_9, PRT_FALSE);
    *(&(PTMP_tmp1_9)) = NULL;
    
    PRT_VALUE** P_LVALUE_99 = &(PTMP_tmp2_9);
    PrtFreeValue(*P_LVALUE_99);
    *P_LVALUE_99 = PrtCloneValue(*P_VAR_payload_4);
    
    PrtSeqInsertEx(P_VAR_s_2, (&P_LIT_INT32_10), PTMP_tmp2_9, PRT_FALSE);
    *(&(PTMP_tmp2_9)) = NULL;
    
    PRT_VALUE** P_LVALUE_100 = &(PTMP_tmp3_7);
    PrtFreeValue(*P_LVALUE_100);
    *P_LVALUE_100 = PrtCloneValue(P_VAR_s_2);
    
    PRT_VALUE** P_LVALUE_101 = &(PTMP_tmp4_4);
    PrtFreeValue(*P_LVALUE_101);
    *P_LVALUE_101 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_102 = &(PTMP_tmp5_4);
    PrtFreeValue(*P_LVALUE_102);
    *P_LVALUE_102 = ((_P_GEN_funargs[0] = &(PTMP_tmp3_7)), (_P_GEN_funargs[1] = &(PTMP_tmp4_4)), (_P_GEN_funval = P_omplMotionPlanExternal_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp3_7), PTMP_tmp3_7 = NULL), (PrtFreeValue(PTMP_tmp4_4), PTMP_tmp4_4 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_15;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_15;
    }
    
    {
        PRT_VALUE** P_LVALUE_103 = &(P_VAR_ompl_motion_plan);
        PrtFreeValue(*P_LVALUE_103);
        *P_LVALUE_103 = PTMP_tmp5_4;
        PTMP_tmp5_4 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_104 = &(PTMP_tmp6_4);
    PrtFreeValue(*P_LVALUE_104);
    *P_LVALUE_104 = PrtCloneValue(p_this->varValues[2]);
    
    PRT_VALUE** P_LVALUE_105 = &(PTMP_tmp7_4);
    PrtFreeValue(*P_LVALUE_105);
    *P_LVALUE_105 = PrtCloneValue((&P_EVENT_Execute_Path.value));
    
    PRT_VALUE** P_LVALUE_106 = &(PTMP_tmp8_4);
    PrtFreeValue(*P_LVALUE_106);
    *P_LVALUE_106 = PrtCloneValue(P_VAR_ompl_motion_plan);
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp6_4), PTMP_tmp7_4, 1, &(PTMP_tmp8_4));
    *(&(PTMP_tmp7_4)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_15;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_15;
    }
    
    PRT_UINT32 P_allowedEventIds_2[] = { 3 };
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    PRT_UINT32 P_eventId_2 = PrtReceiveAsync(1U, P_allowedEventIds_2, &P_VAR_P_payload_2);
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_15;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_15;
    }
    switch (P_eventId_2) {
        case 3: {
                        PRT_VALUE** P_LVALUE_107 = &(p_this->varValues[3]);
            PrtFreeValue(*P_LVALUE_107);
            *P_LVALUE_107 = PrtCloneValue(*P_VAR_payload_4);
            
            PRT_VALUE** P_LVALUE_108 = &(PTMP_tmp9_3);
            PrtFreeValue(*P_LVALUE_108);
            *P_LVALUE_108 = PrtCloneValue((&P_EVENT_Completed_Point.value));
            
            PrtRaise(p_this, PTMP_tmp9_3, 0);
            *(&(PTMP_tmp9_3)) = NULL;
            goto p_return_15;
            
            p_return_16: ;
} break;
        default: {
            PrtAssert(PRT_FALSE, "receive returned unhandled event");
        } break;
    }
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    
p_return_15: ;
    PrtFreeValue(P_VAR_s_2); P_VAR_s_2 = NULL;
    PrtFreeValue(P_VAR_ompl_motion_plan); P_VAR_ompl_motion_plan = NULL;
    PrtFreeValue(PTMP_tmp0_9); PTMP_tmp0_9 = NULL;
    PrtFreeValue(PTMP_tmp1_9); PTMP_tmp1_9 = NULL;
    PrtFreeValue(PTMP_tmp2_9); PTMP_tmp2_9 = NULL;
    PrtFreeValue(PTMP_tmp3_7); PTMP_tmp3_7 = NULL;
    PrtFreeValue(PTMP_tmp4_4); PTMP_tmp4_4 = NULL;
    PrtFreeValue(PTMP_tmp5_4); PTMP_tmp5_4 = NULL;
    PrtFreeValue(PTMP_tmp6_4); PTMP_tmp6_4 = NULL;
    PrtFreeValue(PTMP_tmp7_4); PTMP_tmp7_4 = NULL;
    PrtFreeValue(PTMP_tmp8_4); PTMP_tmp8_4 = NULL;
    PrtFreeValue(PTMP_tmp9_3); PTMP_tmp9_3 = NULL;
    PrtFreeValue(P_VAR_P_payload_2); P_VAR_P_payload_2 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_13 =
{
    NULL,
    &P_Anon_IMPL_13,
    &P_GEND_TYPE_T3fff
};


PRT_FUNDECL* P_MotionPlanner_METHODS[] = { &P_FUNCTION_Anon_10, &P_FUNCTION_Anon_11, &P_FUNCTION_Anon_12, &P_FUNCTION_Anon_13 };

PRT_EVENTDECL* P_MotionPlanner_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_RECV_1 =
{
    10U,
    P_MotionPlanner_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_MotionPlanner_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_MotionPlanner_SEND =
{
    10U,
    P_MotionPlanner_SEND_INNER,
    NULL
};

PRT_UINT32 P_MotionPlanner_CREATES_ARR[] = { 4 };
PRT_INTERFACESETDECL P_MotionPlanner_CREATES = { 1, P_MotionPlanner_CREATES_ARR };
PRT_MACHINEDECL P_MACHINE_MotionPlanner = 
{
    3U,
    "MotionPlanner",
    &P_EVENTSET_MotionPlanner_RECV_1,
    &P_EVENTSET_MotionPlanner_SEND,
    &P_MotionPlanner_CREATES,
    4U,
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

PRT_TRANSDECL P_TRANS_13[] =
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
    P_TRANS_13, \
    NULL, \
    &P_FUNCTION_Anon_14, \
    &_P_NO_OP, \
}

PRT_EVENTDECL* P_WaitRequest_DEFERS_INNER_4[] = { NULL };
PRT_EVENTSETDECL P_EVENTSET_WaitRequest_DEFERS_4 =
{
    0U,
    P_WaitRequest_DEFERS_INNER_4,
    NULL
};

PRT_EVENTDECL* P_WaitRequest_TRANS_INNER_4[] = { &P_EVENT_Execute_Path };
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

PRT_TRANSDECL P_TRANS_14[] =
{
    { 1, &P_EVENT_Execute_Path, 2, &_P_NO_OP }
};

#define P_STATE_PlanExecutor_WaitRequest \
{ \
    "PlanExecutor.WaitRequest", \
    1U, \
    0U, \
    &P_EVENTSET_WaitRequest_DEFERS_4, \
    &P_EVENTSET_WaitRequest_TRANS_4, \
    &P_EVENTSET_WaitRequest_DOS_4, \
    P_TRANS_14, \
    NULL, \
    &P_FUNCTION_Anon_15, \
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

PRT_TRANSDECL P_TRANS_15[] =
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
    P_TRANS_15, \
    NULL, \
    &P_FUNCTION_Anon_16, \
    &_P_NO_OP, \
}

PRT_STATEDECL P_PlanExecutor_STATES[] = { P_STATE_PlanExecutor_Init, P_STATE_PlanExecutor_WaitRequest, P_STATE_PlanExecutor_Execute_Path_State };

PRT_VALUE* P_Anon_IMPL_14(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
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
    PRT_VALUE** P_LVALUE_109 = &(PTMP_tmp0_10);
    PrtFreeValue(*P_LVALUE_109);
    *P_LVALUE_109 = PrtTupleGet(*P_VAR_payload_5, 0);
    
    {
        PRT_VALUE** P_LVALUE_110 = &(p_this->varValues[0]);
        PrtFreeValue(*P_LVALUE_110);
        *P_LVALUE_110 = PTMP_tmp0_10;
        PTMP_tmp0_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_111 = &(PTMP_tmp1_10);
    PrtFreeValue(*P_LVALUE_111);
    *P_LVALUE_111 = PrtTupleGet(*P_VAR_payload_5, 1);
    
    {
        PRT_VALUE** P_LVALUE_112 = &(p_this->varValues[1]);
        PrtFreeValue(*P_LVALUE_112);
        *P_LVALUE_112 = PTMP_tmp1_10;
        PTMP_tmp1_10 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_113 = &(PTMP_tmp2_10);
    PrtFreeValue(*P_LVALUE_113);
    *P_LVALUE_113 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp2_10, 0);
    *(&(PTMP_tmp2_10)) = NULL;
    goto p_return_17;
    
p_return_17: ;
    PrtFreeValue(PTMP_tmp0_10); PTMP_tmp0_10 = NULL;
    PrtFreeValue(PTMP_tmp1_10); PTMP_tmp1_10 = NULL;
    PrtFreeValue(PTMP_tmp2_10); PTMP_tmp2_10 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_14 =
{
    NULL,
    &P_Anon_IMPL_14,
    &P_GEND_TYPE_T2mi_2
};


PRT_VALUE* P_Anon_IMPL_15(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
p_return_18: ;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_15 =
{
    NULL,
    &P_Anon_IMPL_15,
    NULL
};


PRT_VALUE* P_Anon_IMPL_16(PRT_MACHINEINST* context, PRT_VALUE*** argRefs)
{
    PRT_VALUE* _P_GEN_funval = NULL;
    PRT_VALUE** _P_GEN_funargs[32];
    PRT_MACHINEINST_PRIV* p_this = (PRT_MACHINEINST_PRIV*)context;
    PRT_VALUE* _P_GEN_retval = NULL;
    PRT_VALUE** P_VAR_payload_6 = argRefs[0];
    PRT_VALUE* P_VAR_x_1 = PrtMkDefaultValue(&P_GEND_TYPE_i);
    PRT_VALUE* PTMP_tmp0_11 = NULL;
    PRT_VALUE* PTMP_tmp1_11 = NULL;
    PRT_VALUE* PTMP_tmp2_11 = NULL;
    PRT_VALUE* PTMP_tmp3_8 = NULL;
    PRT_VALUE* PTMP_tmp4_5 = NULL;
    PRT_VALUE* PTMP_tmp5_5 = NULL;
    
    PRT_VALUE _P_GEN_null = { PRT_VALUE_KIND_NULL, { .ev = PRT_SPECIAL_EVENT_NULL } };
    PRT_VALUE** P_LVALUE_114 = &(PTMP_tmp0_11);
    PrtFreeValue(*P_LVALUE_114);
    *P_LVALUE_114 = PrtCloneValue(*P_VAR_payload_6);
    
    PRT_VALUE** P_LVALUE_115 = &(PTMP_tmp1_11);
    PrtFreeValue(*P_LVALUE_115);
    *P_LVALUE_115 = PrtCloneValue(p_this->varValues[1]);
    
    PRT_VALUE** P_LVALUE_116 = &(PTMP_tmp2_11);
    PrtFreeValue(*P_LVALUE_116);
    *P_LVALUE_116 = ((_P_GEN_funargs[0] = &(PTMP_tmp0_11)), (_P_GEN_funargs[1] = &(PTMP_tmp1_11)), (_P_GEN_funval = P_ROSGoTo_IMPL(context, _P_GEN_funargs)), (PrtFreeValue(PTMP_tmp0_11), PTMP_tmp0_11 = NULL), (PrtFreeValue(PTMP_tmp1_11), PTMP_tmp1_11 = NULL), (_P_GEN_funval));
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_19;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_19;
    }
    
    {
        PRT_VALUE** P_LVALUE_117 = &(P_VAR_x_1);
        PrtFreeValue(*P_LVALUE_117);
        *P_LVALUE_117 = PTMP_tmp2_11;
        PTMP_tmp2_11 = NULL;
    }
    
    PRT_VALUE** P_LVALUE_118 = &(PTMP_tmp3_8);
    PrtFreeValue(*P_LVALUE_118);
    *P_LVALUE_118 = PrtCloneValue(p_this->varValues[0]);
    
    PRT_VALUE** P_LVALUE_119 = &(PTMP_tmp4_5);
    PrtFreeValue(*P_LVALUE_119);
    *P_LVALUE_119 = PrtCloneValue((&P_EVENT_Path_Completed.value));
    
    PrtSendInternal(context, PrtGetMachine(context->process, PTMP_tmp3_8), PTMP_tmp4_5, 0);
    *(&(PTMP_tmp4_5)) = NULL;
    if (p_this->returnKind != ReturnStatement && p_this->returnKind != ReceiveStatement) {
        goto p_return_19;
    }
    if (p_this->isHalted == PRT_TRUE) {
        PrtFreeValue(_P_GEN_retval);
        _P_GEN_retval = NULL;
        goto p_return_19;
    }
    
    PRT_VALUE** P_LVALUE_120 = &(PTMP_tmp5_5);
    PrtFreeValue(*P_LVALUE_120);
    *P_LVALUE_120 = PrtCloneValue((&P_EVENT_Success.value));
    
    PrtRaise(p_this, PTMP_tmp5_5, 0);
    *(&(PTMP_tmp5_5)) = NULL;
    goto p_return_19;
    
p_return_19: ;
    PrtFreeValue(P_VAR_x_1); P_VAR_x_1 = NULL;
    PrtFreeValue(PTMP_tmp0_11); PTMP_tmp0_11 = NULL;
    PrtFreeValue(PTMP_tmp1_11); PTMP_tmp1_11 = NULL;
    PrtFreeValue(PTMP_tmp2_11); PTMP_tmp2_11 = NULL;
    PrtFreeValue(PTMP_tmp3_8); PTMP_tmp3_8 = NULL;
    PrtFreeValue(PTMP_tmp4_5); PTMP_tmp4_5 = NULL;
    PrtFreeValue(PTMP_tmp5_5); PTMP_tmp5_5 = NULL;
    return _P_GEN_retval;
}

PRT_FUNDECL P_FUNCTION_Anon_16 =
{
    NULL,
    &P_Anon_IMPL_16,
    &P_GEND_TYPE_i
};


PRT_FUNDECL* P_PlanExecutor_METHODS[] = { &P_FUNCTION_Anon_14, &P_FUNCTION_Anon_15, &P_FUNCTION_Anon_16 };

PRT_EVENTDECL* P_PlanExecutor_RECV_INNER_1[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_RECV_1 =
{
    10U,
    P_PlanExecutor_RECV_INNER_1,
    NULL
};

PRT_EVENTDECL* P_PlanExecutor_SEND_INNER[] = { &P_EVENT_Completed_Point, &P_EVENT_Critical_Battery, &P_EVENT_Execute_Path, &P_EVENT_Path_Completed, &P_EVENT_Robot_Safe, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Success, &_P_EVENT_HALT_STRUCT, &P_EVENT_new_Critical_Battery };
PRT_EVENTSETDECL P_EVENTSET_PlanExecutor_SEND =
{
    10U,
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

PRT_EVENTDECL* P_ALL_EVENTS[] = { &_P_EVENT_NULL_STRUCT, &_P_EVENT_HALT_STRUCT, &P_EVENT_Completed_Point, &P_EVENT_Path_Completed, &P_EVENT_Success, &P_EVENT_Send_Next_Point, &P_EVENT_Send_Ping_Back_Handler, &P_EVENT_Critical_Battery, &P_EVENT_Robot_Safe, &P_EVENT_Execute_Path, &P_EVENT_new_Critical_Battery };
PRT_MACHINEDECL* P_ALL_MACHINES[] = { &P_MACHINE_Project, &P_MACHINE_Robot, &P_MACHINE_Battery, &P_MACHINE_MotionPlanner, &P_MACHINE_PlanExecutor };
PRT_INTERFACEDECL* P_ALL_INTERFACES[] = { &P_I_Project, &P_I_Robot, &P_I_Battery, &P_I_MotionPlanner, &P_I_PlanExecutor };
PRT_FUNDECL* P_ALL_FUNCTIONS[] = { NULL };
PRT_FOREIGNTYPEDECL* P_ALL_FOREIGN_TYPES[] = { NULL };
int P_DefaultImpl_LME_0[] = { -1,1,-1,-1,-1 };
int P_DefaultImpl_LME_1[] = { -1,-1,2,3,-1 };
int P_DefaultImpl_LME_2[] = { -1,-1,-1,-1,-1 };
int P_DefaultImpl_LME_3[] = { -1,-1,-1,-1,4 };
int P_DefaultImpl_LME_4[] = { -1,-1,-1,-1,-1 };
int* P_DefaultImpl_LINKMAP[] = { P_DefaultImpl_LME_0, P_DefaultImpl_LME_1, P_DefaultImpl_LME_2, P_DefaultImpl_LME_3, P_DefaultImpl_LME_4 };
int P_DefaultImpl_DEFMAP[] = { 0,1,2,3,4 };
PRT_PROGRAMDECL P_GEND_IMPL_DefaultImpl = {
    11U,
    5U,
    5U,
    0U,
    0U,
    P_ALL_EVENTS,
    P_ALL_MACHINES,
    P_ALL_INTERFACES,
    P_ALL_FUNCTIONS,
    P_ALL_FOREIGN_TYPES,
    P_DefaultImpl_LINKMAP,
    P_DefaultImpl_DEFMAP
};
