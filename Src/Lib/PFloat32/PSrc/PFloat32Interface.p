model type float32 = int;

/** Conversion **/
//// Assign the float value
extern fun AssignFloat32(lhs: float32, rhs: float32);

//// Converts an integer to float
extern fun IntToFloat32(val: int) : float32;

//// Converts scientific notation to a float (mantissa * 10^exp) 
//// If exponent is too small or too large, then returns (negative) infinity
extern fun ScientificToFloat32 (mantissa: int, exp: int) : float32;

/** Arithmetic operations **/
extern fun NegFloat32(op1: float32) : float32;
extern fun AddFloat32(op1: float32, op2: float32) : float32;
extern fun SubFloat32(op1: float32, op2: float32) : float32;
extern fun MulFloat32(op1: float32, op2: float32) : float32;
extern fun DivFloat32(op1: float32, op2: float32) : float32;
extern fun AbsFloat32(op1: float32, op2: float32) : float32;
extern fun NaNFloat32() : float32;

/** Testers **/
extern fun IsNaNFloat32(op1: float32) : bool;
extern fun IsInftyFloat32(op1: float32) : bool;
extern fun IsPosInftyFloat32(op1: float32) : bool;
extern fun IsNegInftyFloat32(op1: float32) : bool;
extern fun IsFiniteFloat32(op1: float32) : bool;
extern fun IsEqFloat32(op1: float32, op2: float32) : bool;
extern fun IsNearFloat32(op1: float32, op2: float32, epsilon:float32) : bool;
extern fun IsNEqFloat32(op1: float32, op2: float32) : bool;
extern fun IsLtFloat32(op1: float32, op2: float32) : bool;
extern fun IsGtFloat32(op1: float32, op2: float32) : bool;
extern fun IsLeFloat32(op1: float32, op2: float32) : bool;
extern fun IsGeFloat32(op1: float32, op2: float32) : bool;