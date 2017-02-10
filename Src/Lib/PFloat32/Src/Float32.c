#include "Float32.h"
#include <math.h>

typedef union PRT_LIB_FLOAT32_DATA
{
	PRT_UINT64 bits;
	float value;
} PRT_LIB_FLOAT32_DATA;

// These are the required foreign core functions.

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

PRT_STRING PRT_FORGN_TOSTRING_float32_IMPL(PRT_UINT64 frgnVal)
{
	PRT_STRING temp = PrtMalloc(50);
	sprintf_s(temp, 50, "%f", ((PRT_LIB_FLOAT32_DATA*)&frgnVal)->value);
	return temp;
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
	def.value = 0;
	return def.bits;
}

PRT_UINT64 PRT_FORGN_CLONE_float32_IMPL(PRT_UINT64 frgnVal)
{
	return frgnVal;
}


//  Model functions

PRT_VALUE *P_FUN_NaNFloat32_FOREIGN(PRT_MACHINEINST *context)
{
	return PrtMkFloat32Value(NAN);
}

PRT_VALUE *P_FUN_AddFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkFloat32Value(value1 + value2);
}

PRT_VALUE *P_FUN_DivFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkFloat32Value(value1 / value2);
}

PRT_VALUE *P_FUN_IsNearFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2, PRT_VALUE *epsilon)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	float e = PrtGetFloat32(epsilon);
	PRT_BOOLEAN result = (fabs(value1 - value2) <= e) ? PRT_TRUE : PRT_FALSE;
	return PrtMkBoolValue(result);
}

PRT_VALUE *P_FUN_AbsFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	value = (float)fabs(value);
	return PrtMkFloat32Value(value);
}

PRT_VALUE *P_FUN_IntToFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *val)
{
	PRT_INT32 i = PrtPrimGetInt(val);
	return PrtMkFloat32Value((float)i);
}

PRT_VALUE *P_FUN_IsEqFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 == value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsFiniteFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkBoolValue(isfinite(value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsGeFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 >= value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsGtFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 > value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsInftyFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkBoolValue(isinf(value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsLeFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 <= value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsLtFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 < value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNEqFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkBoolValue(value1 != value2 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNaNFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkBoolValue(isnan(value) ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsNegInftyFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkBoolValue(isinf(value) && value < 0 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_IsPosInftyFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkBoolValue(isinf(value) && value > 0 ? PRT_TRUE : PRT_FALSE);
}

PRT_VALUE *P_FUN_MulFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkFloat32Value(value1 * value2);
}

PRT_VALUE *P_FUN_NegFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1)
{
	float value = PrtGetFloat32(op1);
	return PrtMkFloat32Value(-value);
}

PRT_VALUE *P_FUN_ScientificToFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *mantissaValue, PRT_VALUE *expValue)
{
	float mantissa = PrtGetFloat32(mantissaValue);
	float exponent = PrtGetFloat32(expValue);
	double result = (double)mantissa * pow(10.0, (double)exponent);
	return PrtMkFloat32Value((float)result);
}

PRT_VALUE *P_FUN_SubFloat32_FOREIGN(PRT_MACHINEINST *context, PRT_VALUE *op1, PRT_VALUE *op2)
{
	float value1 = PrtGetFloat32(op1);
	float value2 = PrtGetFloat32(op2);
	return PrtMkFloat32Value(value1 - value2);
}

PRT_VALUE* PrtMkFloat32Value(float value)
{
	PRT_LIB_FLOAT32_DATA f;
	f.value = value;
    return PrtMkForeignValue(f.bits, &P_GEND_TYPE_float32);
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
            arg.bits = PrtGetForeignValue(value);
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
    frgnVal->valueUnion.frgn->value = newVal;
}
