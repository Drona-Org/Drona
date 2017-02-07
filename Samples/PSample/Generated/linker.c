
  #include "linker.h"
  PRT_UINT32 P_GEND_EVENTSET_0[] = 
  {
    0x0U
  };
  PRT_UINT32 P_GEND_EVENTSET_1[] = 
  {
    0x4U
  };
  PRT_UINT32 P_GEND_EVENTSET_2[] = 
  {
    0x08U
  };
  PRT_UINT32 P_GEND_EVENTSET_3[] = 
  {
    0x10U
  };
  PRT_EVENTSETDECL P_GEND_EVENTSETS[] = 
  {
    
    {
        0,
        P_GEND_EVENTSET_0
    },
    
    {
        1,
        P_GEND_EVENTSET_1
    },
    
    {
        2,
        P_GEND_EVENTSET_2
    },
    
    {
        3,
        P_GEND_EVENTSET_3
    }
  };
  PRT_FUNDECL P_FUN_IGNORE_PUSH_STRUCT = 
  {
    _P_FUN_PUSH_OR_IGN,
    0U,
    NULL,
    NULL,
    1U,
    0U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_UINT32 P_GEND_LINKMAP_Main[] = 
  {
    0U,
    1U
  };
  PRT_UINT32 P_GEND_LINKMAP_PONG[] = 
  {
    0U,
    1U
  };
  PRT_UINT32 P_GEND_RENAMEMAP[] = 
  {
    P_MACHINE_Main,
    P_MACHINE_PONG
  };
  PRT_EVENTDECL *P_GEND_EVENTS[] = 
  {
    &_P_EVENT_NULL_STRUCT,
    &_P_EVENT_HALT_STRUCT,
    &P_EVENT_Ping_STRUCT,
    &P_EVENT_Pong_STRUCT,
    &P_EVENT_Success_STRUCT
  };
  PRT_FUNDECL *P_GEND_FUNS[] = 
  {
    &P_FUN_IGNORE_PUSH_STRUCT
  };
  PRT_MACHINEDECL *P_GEND_MACHINES[] = 
  {
    &P_MACHINE_Main_STRUCT,
    &P_MACHINE_PONG_STRUCT
  };
  PRT_UINT32 *P_GEND_LINKMAP[] = 
  {
    P_GEND_LINKMAP_Main,
    P_GEND_LINKMAP_PONG
  };
  PRT_PROGRAMDECL P_GEND_PROGRAM = 
  {
    5U,
    4U,
    2U,
    1U,
    0U,
    P_GEND_EVENTS,
    P_GEND_EVENTSETS,
    P_GEND_MACHINES,
    P_GEND_FUNS,
    NULL,
    P_GEND_LINKMAP,
    P_GEND_RENAMEMAP,
    0U,
    NULL
  };
  