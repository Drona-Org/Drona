#ifndef P_FLOAT32_H
#define P_FLOAT32_H

#include "PrtExecution.h"
#include <math.h>

#ifdef __cplusplus
extern "C" {
#endif
	
extern PRT_TYPE P_GEND_TYPE_float32;

//helper functions
extern float PrtGetFloat32(PRT_VALUE* frgnVal);

extern void PrtSetFloat32(PRT_VALUE* frgnVal, float newVal);

extern PRT_VALUE* PrtMkFloat32Value(float value);

#ifdef __cplusplus
}
#endif
#endif


