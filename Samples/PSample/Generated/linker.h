
  #ifndef P_LINKER_H
    #define P_LINKER_H
    #include "PrtUser.h"
    #include "PrtExecution.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_EVENTS
    {
      _P_EVENT_NULL = 0,
      _P_EVENT_HALT = 1,
      P_EVENT_Ping = 2,
      P_EVENT_Pong = 3,
      P_EVENT_Success = 4,
      _P_EVENTS_COUNT = 7
    };

    enum P_EVENTSET
    {
      P_GEND_EVENTSET = 0,
      P_GEND_EVENTSET_Ping = 1,
      P_GEND_EVENTSET_Pong = 2,
      P_GEND_EVENTSET_Success = 3,
      _P_EVENTSETS_COUNT = 4
    };

    enum P_FORGN_TYPES
    {
      _P_FORGN_TYPES_COUNT = 0
    };

    enum P_FUNS
    {
      _P_FUN_PUSH_OR_IGN = 0,
      _P_FUNS_COUNT = 1
    };

    enum P_IORM
    {
      P_IORM_Main = 0,
      P_IORM_PONG = 1,
      _P_IORM_COUNT = 2
    };

    enum P_MACHINES
    {
      P_MACHINE_Main = 0,
      P_MACHINE_PONG = 1,
      _P_MACHINES_COUNT = 2
    };

    enum P_RENAME
    {
      P_RENAME_Main = 0,
      P_RENAME_PONG = 1,
      _P_RENAME_COUNT = 2
    };

    extern PRT_EVENTDECL P_EVENT_Ping_STRUCT;
    extern PRT_EVENTDECL P_EVENT_Pong_STRUCT;
    extern PRT_EVENTDECL P_EVENT_Success_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_HALT_STRUCT;
    extern PRT_EVENTDECL _P_EVENT_NULL_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_Main_STRUCT;
    extern PRT_MACHINEDECL P_MACHINE_PONG_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    #ifdef __cplusplus
      }
    #endif
  #endif
  