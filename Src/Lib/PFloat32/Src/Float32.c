#include "Float32.h"
#include <math.h>

typedef union PRT_LIB_FLOAT32_DATA
{
	PRT_UINT64 bits;
	float value;
} PRT_LIB_FLOAT32_DATA;

void PrtLibFloat32Init(PRT_LIB_FLOAT32_DATA *data)
{
	data->bits = 0;
}

void PrtLibFloat32GetFArgs0(PRT_MACHINEINST *context)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

void PrtLibFloat32GetFArgs1(PRT_MACHINEINST *context, PRT_LIB_FLOAT32_DATA *arg1)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	arg1->bits = PrtGetForeignValue(p_tmp_frame.locals[0])->value;
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

void PrtLibFloat32GetIArgs1(PRT_MACHINEINST *context, PRT_INT32 *arg1)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	*arg1 = PrtPrimGetInt(p_tmp_frame.locals[0]);
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

void PrtLibFloat32GetFArgs2(PRT_MACHINEINST *context, PRT_LIB_FLOAT32_DATA *arg1, PRT_LIB_FLOAT32_DATA *arg2)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	arg1->bits = PrtGetForeignValue(p_tmp_frame.locals[0])->value;
	arg2->bits = PrtGetForeignValue(p_tmp_frame.locals[1])->value;
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

void PrtLibFloat32GetFArgs3(PRT_MACHINEINST *context, PRT_LIB_FLOAT32_DATA *arg1, PRT_LIB_FLOAT32_DATA *arg2, PRT_LIB_FLOAT32_DATA *arg3)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	arg1->bits = PrtGetForeignValue(p_tmp_frame.locals[0])->value;
	arg2->bits = PrtGetForeignValue(p_tmp_frame.locals[1])->value;
	arg3->bits = PrtGetForeignValue(p_tmp_frame.locals[2])->value;
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

void PrtLibFloat32GetIArgs2(PRT_MACHINEINST *context, PRT_INT32 *arg1, PRT_INT32 *arg2)
{
	PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
	PRT_FUNSTACK_INFO p_tmp_frame;
	PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
	*arg1 = PrtPrimGetInt(p_tmp_frame.locals[0]);
	*arg2 = PrtPrimGetInt(p_tmp_frame.locals[1]);
	PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
}

//// Nothing to do, frgnVal is the float
void PRT_FORGN_FREE_float32_IMPL(PRT_UINT64 frgnVal)
{
}

PRT_BOOLEAN PRT_FORGN_ISEQUAL_float32_IMPL(PRT_UINT64 frgnVal1, PRT_UINT64 frgnVal2)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	arg1.bits = frgnVal1;
	arg2.bits = frgnVal2;
	return arg1.value == arg2.value;
}

//// Currently not implemented
PRT_STRING PRT_FORGN_TOSTRING_float32_IMPL(PRT_UINT64 frgnVal)
{
	PRT_STRING temp = PrtMalloc(50);
	sprintf_s(temp, 50, "%f", ((PRT_LIB_FLOAT32_DATA*)&frgnVal)->value);
	return temp;
}

float PRT_FORGN_TOFLOAT_float32_IMPL(PRT_VALUE* frgnVal)
{
    PRT_LIB_FLOAT32_DATA arg;
    arg.bits = PrtGetForeignValue(frgnVal)->value;
    return arg.value;
}

PRT_UINT32 PRT_FORGN_GETHASHCODE_float32_IMPL(PRT_UINT64 frgnVal)
{
	PRT_UINT32 value1 = (PRT_UINT32)(0x00000000FFFFFFFF & frgnVal);
	PRT_UINT32 value2 = (PRT_UINT32)(frgnVal >> 32);

	PRT_UINT32 i;
	PRT_UINT32 code = 0;
	for (i = 0; i < 4; ++i)
	{
		code += (value1 & 0x000000FF);
		code += (code << 10);
		code ^= (code >> 6);
		value1 = (value1 >> 8);
	}

	for (i = 0; i < 4; ++i)
	{
		code += (value2 & 0x000000FF);
		code += (code << 10);
		code ^= (code >> 6);
		value2 = (value2 >> 8);
	}

	code += (code << 3);
	code ^= (code >> 11);
	code += (code << 15);
	return code;
}

PRT_UINT64 PRT_FORGN_MKDEF_float32_IMPL(void)
{
	PRT_LIB_FLOAT32_DATA def;
	PrtLibFloat32Init(&def);
	def.value = 0;
	return def.bits;
}

PRT_UINT64 PRT_FORGN_CLONE_float32_IMPL(PRT_UINT64 frgnVal)
{
	return frgnVal;
}

PRT_VALUE *P_FUN_AssignFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value = arg2.value;
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_NaNFloat32_IMPL(PRT_MACHINEINST *context)
{
	PrtLibFloat32GetFArgs0(context);
	PRT_LIB_FLOAT32_DATA arg;
	arg.value = NAN;
	return PrtMkForeignValue(arg.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_AddFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value += arg2.value;	
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_DivFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value /= arg2.value;
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_IsNearFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2, arg3;
	PrtLibFloat32GetFArgs3(context, &arg1, &arg2, &arg3);
	PRT_BOOLEAN result = (fabs(arg1.value - arg2.value) <= arg3.value) ? PRT_TRUE : PRT_FALSE;
	return PrtMkBoolValue(result);
}


PRT_VALUE *P_FUN_AbsFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value = (float)fabs(arg2.value);
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_IntToFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_INT32 i;
	PRT_LIB_FLOAT32_DATA f;
	PrtLibFloat32Init(&f);
	PrtLibFloat32GetIArgs1(context, &i);
	f.value = (float)i;
	return PrtMkForeignValue(f.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_IsEqFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value == arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsFiniteFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	return PrtMkBoolValue(isfinite(arg1.value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsGeFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value >= arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsGtFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value > arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsInftyFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	return PrtMkBoolValue(isinf(arg1.value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsLeFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value <= arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsLtFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value < arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNEqFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	return PrtMkBoolValue(arg1.value != arg2.value ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNaNFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	return PrtMkBoolValue(isnan(arg1.value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNegInftyFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	return PrtMkBoolValue(isinf(arg1.value) && arg1.value < 0 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsPosInftyFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	return PrtMkBoolValue(isinf(arg1.value) && arg1.value > 0 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_MulFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value *= arg2.value;
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_NegFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1;
	PrtLibFloat32GetFArgs1(context, &arg1);
	arg1.value = -arg1.value;
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_ScientificToFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_INT32 arg1, arg2;
	PRT_LIB_FLOAT32_DATA f;
	PrtLibFloat32Init(&f);
	PrtLibFloat32GetIArgs2(context, &arg1, &arg2);
	f.value = (float)arg1;
	f.value *= (float)pow(10.0, (double)arg2);
	return PrtMkForeignValue(f.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE *P_FUN_SubFloat32_IMPL(PRT_MACHINEINST *context)
{
	PRT_LIB_FLOAT32_DATA arg1, arg2;
	PrtLibFloat32GetFArgs2(context, &arg1, &arg2);
	arg1.value -= arg2.value;
	return PrtMkForeignValue(arg1.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

PRT_VALUE* PrtMkFloat32Value(float value)
{
	PRT_LIB_FLOAT32_DATA f;
	PrtLibFloat32Init(&f);
	f.value = value;
	return PrtMkForeignValue(f.bits, P_GEND_TYPE_float32->typeUnion.typeTag);
}

//Helper function for getting a float from the given value
float PrtGetFloat32(PRT_VALUE* value)
{
	switch (value->discriminator)
	{
	case PRT_VALUE_KIND_BOOL:
		return (float)PrtPrimGetBool(value);
	case PRT_VALUE_KIND_EVENT:
		PrtAssert(PRT_FALSE, "Cannot convert PRT_VALUE_KIND_EVENT to float32");
		break;
	case PRT_VALUE_KIND_FORGN:
		{
			PRT_LIB_FLOAT32_DATA arg;
			arg.bits = PrtGetForeignValue(value)->value;
			return arg.value;
		}
		break;
	case PRT_VALUE_KIND_INT:
		return (float)PrtPrimGetInt(value);
	case PRT_VALUE_KIND_MAP:
		PrtAssert(PRT_FALSE, "Cannot convert PRT_VALUE_KIND_MAP to float32");
		break;
	case PRT_VALUE_KIND_MID:
		PrtAssert(PRT_FALSE, "Cannot convert PRT_VALUE_KIND_MID to float32");
		break;
	case PRT_VALUE_KIND_NULL:
		break;
	case PRT_VALUE_KIND_SEQ:
		PrtAssert(PRT_FALSE, "Cannot convert PRT_VALUE_KIND_SEQ to float32");
		break;
	case PRT_VALUE_KIND_TUPLE:
		PrtAssert(PRT_FALSE, "Cannot convert PRT_VALUE_KIND_TUPLE to float32");
		break;
	}
	return 0;
}

void PrtSetFloat32(PRT_VALUE* frgnVal, float newVal) 
{
	((PRT_LIB_FLOAT32_DATA*)&PrtGetForeignValue(frgnVal)->value)->value = newVal;
}
