
  #ifndef P_TIMER_H_
    #define P_TIMER_H_
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FUNS_Timer
    {
      P_FUN_Timer_ANON0 = 1,
      P_FUN_Timer_ANON1 = 3,
      P_FUN_Timer_ANON2 = 5,
      P_FUN_Timer_ANON3 = 7,
      P_FUN_Timer_ANON4 = 9,
      P_FUN_Timer_ANON5 = 11,
      _P_FUNS_Timer_COUNT = 11,
      P_FUN_Timer_ANON6 = 13,
      P_FUN_Timer_ANON7 = 15,
      P_FUN_Timer_ANON8 = 17,
      P_FUN_Timer_ANON9 = 19,
      P_FUN_Timer_ANON10 = 21
    };

    enum P_STATES_Timer
    {
      P_STATE_Timer_Init = 0,
      P_STATE_Timer_WaitForCancel = 1,
      P_STATE_Timer_WaitForReq = 2,
      _P_STATES_Timer_COUNT = 3
    };

    enum P_VARS_Timer
    {
      P_VAR_Timer_client = 0,
      _P_VARS_Timer_COUNT = 1
    };

    extern PRT_EVENTDECL P_EVENT_eCancelFailure_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eCancelSuccess_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eCancelTimer_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eStartTimer_STRUCT;
    extern PRT_EVENTDECL P_EVENT_eTimeOut_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_HALT_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_NULL_STRUCT;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_eCancelSuccess_eCancelFailure;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_eStartTimer;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_eStartTimer_eCancelTimer;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_eTimeOut;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET_null_eCancelTimer;
    extern PRT_EVENTSETDECL __AnonEventSet_ITimerClient;
    extern PRT_FUNDECL P_FUN_CancelTimer_ANON0_STRUCT;
    extern PRT_FUNDECL P_FUN_CancelTimer_ANON1_STRUCT;
    extern PRT_FUNDECL P_FUN_CancelTimer_ANON2_STRUCT;
    extern PRT_FUNDECL P_FUN_CancelTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_CreateTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT;
    extern PRT_FUNDECL P_FUN_StartTimer_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON0_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON10_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON1_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON2_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON3_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON4_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON5_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON6_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON7_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON8_STRUCT;
    extern PRT_FUNDECL P_FUN_Timer_ANON9_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_Timer_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE P_GEND_TYPE_ITimer;
    extern PRT_TYPE P_GEND_TYPE_ITimerClient;
    extern PRT_TYPE P_GEND_TYPE_TimerPtr;
    extern PRT_UINT32 P_EVENT_eCancelFailure;
    extern PRT_UINT32 P_EVENT_eCancelSuccess;
    extern PRT_UINT32 P_EVENT_eCancelTimer;
    extern PRT_UINT32 P_EVENT_eStartTimer;
    extern PRT_UINT32 P_EVENT_eTimeOut;
    extern PRT_UINT32 P_FUN_CancelTimer;
    extern PRT_UINT32 P_FUN_CancelTimer_ANON0;
    extern PRT_UINT32 P_FUN_CancelTimer_ANON1;
    extern PRT_UINT32 P_FUN_CancelTimer_ANON2;
    extern PRT_UINT32 P_FUN_CreateTimer;
    extern PRT_UINT32 P_FUN_StartTimer;
    extern PRT_UINT32 P_IORM_ITimer;
    extern PRT_UINT32 P_IORM_ITimerClient;
    extern PRT_UINT32 P_IORM_Timer;
    extern PRT_UINT32 P_MACHINE_Timer;
    extern PRT_UINT32 _P_EVENT_HALT;
    extern PRT_UINT32 _P_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_HALT;
    extern PRT_VALUE P_GEND_VALUE_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelFailure;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelSuccess;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eCancelTimer;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eStartTimer;
    extern PRT_VALUE P_GEND_VALUE_EVENT_eTimeOut;
    #ifdef __cplusplus
      }
    #endif
  #endif
  