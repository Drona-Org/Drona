#include "PFloat32Interface.p"

/** Constructors **/

//// Converts an integer to float
model fun IntToFloat32(val: int) : float32
[pure = null]
{
   return val; 
} 

//// Converts scientific notation to a float (mantissa * 10^exp) 
//// If exponent is too small or too large, then returns (negative) infinity
model fun ScientificToFloat32 (mantissa: int, exp: int) : float32
[pure = null]
{
   var index : int;
   var val : int;
   val = 10;
   index = 0;
   while(index < exp)
   {
      val = val * 10;
      index = index + 1;
   }
   return mantissa * val;
} 

/** Arithmetic operations **/
model fun NegFloat32(op1: float32) : float32
[pure = null]
{
   return -op1;
} 

model fun AddFloat32(op1: float32, op2: float32) : float32
[pure = null]
{
   return op1 + op2;
} 

model fun SubFloat32(op1: float32, op2: float32) : float32
[pure = null]
{
   return op1 - op2;
} 

model fun MulFloat32(op1: float32, op2: float32) : float32
[pure = null]
{
   return op1 * op2;
} 

model fun DivFloat32(op1: float32, op2: float32) : float32
[pure = null]
{
   return op1/op2;
} 

model fun AbsFloat32(op1: float32, op2: float32) : float32
[pure = null]
{
   //not implemented
   assert false;
   return default(float32);
} 

model fun NaNFloat32() : float32
[pure = null]
{
   return 0;
}


/** Testers **/
model fun IsNaNFloat32(op1: float32) : bool
[pure = null]
{
   return $;
} 

model fun IsInftyFloat32(op1: float32) : bool
[pure = null]
{
   return $;
} 

model fun IsPosInftyFloat32(op1: float32) : bool
[pure = null]
{
   return $;
} 

model fun IsNegInftyFloat32(op1: float32) : bool
[pure = null]
{
   return $;
} 

model fun IsFiniteFloat32(op1: float32) : bool
[pure = null]
{
   return $;
} 

model fun IsEqFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 == op2;
} 

model fun IsNearFloat32(op1: float32, op2: float32, epsilon:float32) : bool
[pure = null]
{
   if(op1 > op2)
      return (op1 - op2) < epsilon;
   else 
      return (op2 - op1) < epsilon;
} 

model fun IsNEqFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 != op2;
} 

model fun IsLtFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 < op2;
} 

model fun IsGtFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 > op2;
} 

model fun IsLeFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 <= op2;
} 

model fun IsGeFloat32(op1: float32, op2: float32) : bool
[pure = null]
{
   return op1 >= op2;
} 
