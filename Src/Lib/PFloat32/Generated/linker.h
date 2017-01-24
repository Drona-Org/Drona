
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
      _P_EVENTS_COUNT = 2
    };

    enum P_EVENTSET
    {
      _P_EVENTSETS_COUNT = 0
    };

    enum P_FORGN_TYPES
    {
      P_FORGN_TYPE_float32 = 0,
      _P_FORGN_TYPES_COUNT = 1
    };

    enum P_FUNS
    {
      _P_FUN_PUSH_OR_IGN = 0,
      P_FUN_AbsFloat32 = 2,
      P_FUN_AddFloat32 = 4,
      P_FUN_DivFloat32 = 6,
      P_FUN_IntToFloat32 = 8,
      P_FUN_IsEqFloat32 = 10,
      P_FUN_IsFiniteFloat32 = 12,
      P_FUN_IsGeFloat32 = 14,
      P_FUN_IsGtFloat32 = 16,
      P_FUN_IsInftyFloat32 = 18,
      P_FUN_IsLeFloat32 = 20,
      P_FUN_IsLtFloat32 = 22,
      _P_FUNS_COUNT = 22,
      P_FUN_IsNEqFloat32 = 24,
      P_FUN_IsNaNFloat32 = 26,
      P_FUN_IsNearFloat32 = 28,
      P_FUN_IsNegInftyFloat32 = 30,
      P_FUN_IsPosInftyFloat32 = 32,
      P_FUN_MulFloat32 = 34,
      P_FUN_NaNFloat32 = 36,
      P_FUN_NegFloat32 = 38,
      P_FUN_ScientificToFloat32 = 40,
      P_FUN_SubFloat32 = 42
    };

    enum P_IORM
    {
      _P_IORM_COUNT = 0
    };

    enum P_MACHINES
    {
      _P_MACHINES_COUNT = 0
    };

    enum P_RENAME
    {
      _P_RENAME_COUNT = 0
    };

    void PRT_FORGN_FREE_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_BOOLEAN PRT_FORGN_ISEQUAL_float32_IMPL(PRT_UINT64 frgnVal1, PRT_UINT64 frgnVal2);

    PRT_STRING PRT_FORGN_TOSTRING_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_UINT32 PRT_FORGN_GETHASHCODE_float32_IMPL(PRT_UINT64 frgnVal);

    PRT_UINT64 PRT_FORGN_MKDEF_float32_IMPL(void);

    PRT_UINT64 PRT_FORGN_CLONE_float32_IMPL(PRT_UINT64 frgnVal);

    extern PRT_FUNDECL P_FUN_AbsFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_AddFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_DivFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IntToFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsEqFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsFiniteFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsGeFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsGtFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsLeFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsLtFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNEqFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNaNFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNearFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsNegInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_IsPosInftyFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_MulFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_NaNFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_NegFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_ScientificToFloat32_STRUCT;
    extern PRT_FUNDECL P_FUN_SubFloat32_STRUCT;
    extern PRT_PROGRAMDECL P_GEND_PROGRAM;
    extern PRT_TYPE *P_GEND_TYPE_float32;
    #ifdef __cplusplus
      }
    #endif
  #endif
  