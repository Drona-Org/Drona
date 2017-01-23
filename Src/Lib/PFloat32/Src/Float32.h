#ifndef P_FLOAT32_H
#define P_FLOAT32_H

#include "PrtExecution.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif

extern PRT_TYPE *P_GEND_TYPE_float32;

extern void PRT_FORGN_FREE_float32_IMPL(PRT_UINT64 frgnVal);

extern PRT_BOOLEAN PRT_FORGN_ISEQUAL_float32_IMPL(PRT_UINT64 frgnVal1, PRT_UINT64 frgnVal2);

extern PRT_STRING PRT_FORGN_TOSTRING_float32_IMPL(PRT_UINT64 frgnVal);

extern float PRT_FORGN_TOFLOAT_float32_IMPL(PRT_VALUE* frgnVal);

extern PRT_UINT32 PRT_FORGN_GETHASHCODE_float32_IMPL(PRT_UINT64 frgnVal);

extern PRT_UINT64 PRT_FORGN_MKDEF_float32_IMPL(void);

extern PRT_UINT64 PRT_FORGN_CLONE_float32_IMPL(PRT_UINT64 frgnVal);

extern PRT_VALUE *P_FUN_AddFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_DivFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IntToFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsEqFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsFiniteFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsGeFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsGtFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsInftyFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsLeFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsLtFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsNEqFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsNaNFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsNegInftyFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_IsPosInftyFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_MulFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_NegFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_ScientificToFloat32_IMPL(PRT_MACHINEINST *context);

extern PRT_VALUE *P_FUN_SubFloat32_IMPL(PRT_MACHINEINST *context);

//helper functions
extern float PrtGetFloat32(PRT_VALUE* frgnVal);

extern void PrtSetFloat32(PRT_VALUE* frgnVal, float newVal);

extern PRT_VALUE* PrtMkFloat32Value(float value);

#ifdef __cplusplus
}
#endif
#endif


