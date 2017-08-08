
  #ifndef P_BOOTMASTER_H_
    #define P_BOOTMASTER_H_
    #include "POrb.h"
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FUNS_BootMaster
    {
      P_FUN_BootMaster_ANON0 = 1,
      P_FUN_BootMaster_ANON1 = 3,
      _P_FUNS_BootMaster_COUNT = 3,
      P_FUN_BootMaster_ANON2 = 5
    };

    enum P_STATES_BootMaster
    {
      P_STATE_BootMaster_Init = 0,
      _P_STATES_BootMaster_COUNT = 1
    };

    enum P_VARS_BootMaster
    {
      _P_VARS_BootMaster_COUNT = 0
    };

    extern PRT_EVENTDECL P_EVENT_POrbPublish_STRUCT;
    extern PRT_EVENTDECL P_EVENT_POrbSubscribe_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_HALT_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_NULL_STRUCT;
    extern PRT_EVENTSETDECL P_GEND_EVENTSET;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON0_STRUCT;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON1_STRUCT;
    extern PRT_FUNDECL P_FUN_BootMaster_ANON2_STRUCT;
    extern PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT;
    extern PRT_FUNDECL P_FUN_InitializeListener_STRUCT;
    extern PRT_FUNDECL P_FUN_Publish_STRUCT;
    extern PRT_FUNDECL P_FUN_Subscribe_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_BootMaster_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_POrbMachine_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_Topics;
    extern PRT_UINT32 P_EVENT_POrbPublish;
    extern PRT_UINT32 P_EVENT_POrbSubscribe;
    extern PRT_UINT32 P_FUN_InitializeListener;
    extern PRT_UINT32 P_FUN_Publish;
    extern PRT_UINT32 P_FUN_Subscribe;
    extern PRT_UINT32 P_IORM_BootMaster;
    extern PRT_UINT32 P_IORM_POrbMachine;
    extern PRT_UINT32 P_MACHINE_BootMaster;
    extern PRT_UINT32 P_MACHINE_POrbMachine;
    extern PRT_UINT32 _P_EVENT_HALT;
    extern PRT_UINT32 _P_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_HALT;
    extern PRT_VALUE P_GEND_VALUE_EVENT_NULL;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbPublish;
    extern PRT_VALUE P_GEND_VALUE_EVENT_POrbSubscribe;
    #ifdef __cplusplus
      }
    #endif
  #endif
  
