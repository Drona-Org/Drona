
  #ifndef P_PORB_H_
    #define P_PORB_H_
    #include "POrbInterface.h"
    #include "linker.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FUNS_POrbMachine
    {
      P_FUN_POrbMachine_ANON0 = 1,
      P_FUN_POrbMachine_ANON1 = 3,
      P_FUN_POrbMachine_ANON2 = 5,
      P_FUN_POrbMachine_ANON3 = 7,
      P_FUN_POrbMachine_ANON4 = 9,
      P_FUN_POrbMachine_ANON5 = 11,
      _P_FUNS_POrbMachine_COUNT = 11,
      P_FUN_POrbMachine_ANON6 = 13,
      P_FUN_POrbMachine_ANON7 = 15,
      P_FUN_POrbMachine_Broadcast = 17,
      P_FUN_POrbMachine_InitializeListener = 19,
      P_FUN_POrbMachine_IsSubscribed = 21
    };

    enum P_STATES_POrbMachine
    {
      P_STATE_POrbMachine_Init = 0,
      P_STATE_POrbMachine_ReadMessagesAndPublish = 1,
      _P_STATES_POrbMachine_COUNT = 2
    };

    enum P_VARS_POrbMachine
    {
      P_VAR_POrbMachine_topicSubscribers = 0,
      _P_VARS_POrbMachine_COUNT = 1
    };

    void P_DTOR_POrbMachine_IMPL(PRT_MACHINEINST *context);

    void P_CTOR_POrbMachine_IMPL(PRT_MACHINEINST *context, PRT_VALUE *value);

    PRT_VALUE *P_FUN_POrbMachine_InitializeListener_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *payload);

    extern PRT_TYPE P_GEND_TYPE_POrbInterface;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_Topics;
    #ifdef __cplusplus
      }
    #endif
  #endif
  