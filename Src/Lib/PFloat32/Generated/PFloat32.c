
  #include "PFloat32.h"
  #define P_SEQ
  #define P_BOOL_EXPR(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_bool = PrtPrimGetBool(p_tmp_expr_0), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_bool)
  static PRT_TYPE P_GEND_TYPE_0 = 
  {
    PRT_KIND_ANY,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_1 = 
  {
    PRT_KIND_BOOL,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_2 = 
  {
    PRT_KIND_EVENT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_3 = 
  {
    PRT_KIND_INT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_4 = 
  {
    PRT_KIND_MACHINE,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_5 = 
  {
    PRT_KIND_NULL,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_6 = 
  {
    PRT_KIND_FORGN,
    
    {
        (PRT_MAPTYPE *)P_FORGN_TYPE_float32
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_7[] = 
  {
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_7[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_7 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_7,
    P_GEND_TYPE_NMDTUP_TARR_7
  };
  static PRT_TYPE P_GEND_TYPE_7 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_7
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_8[] = 
  {
    "exp"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_8[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_8 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_8,
    P_GEND_TYPE_NMDTUP_TARR_8
  };
  static PRT_TYPE P_GEND_TYPE_8 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_8
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_9[] = 
  {
    "op1"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_9[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_9 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_9,
    P_GEND_TYPE_NMDTUP_TARR_9
  };
  static PRT_TYPE P_GEND_TYPE_9 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_9
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_10[] = 
  {
    "op2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_10[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_10 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_10,
    P_GEND_TYPE_NMDTUP_TARR_10
  };
  static PRT_TYPE P_GEND_TYPE_10 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_10
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_11[] = 
  {
    "val"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_11[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_11 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_11,
    P_GEND_TYPE_NMDTUP_TARR_11
  };
  static PRT_TYPE P_GEND_TYPE_11 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_11
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_12[] = 
  {
    "index",
    "val"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_12[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_12 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_12,
    P_GEND_TYPE_NMDTUP_TARR_12
  };
  static PRT_TYPE P_GEND_TYPE_12 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_12
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_13[] = 
  {
    "mantissa",
    "exp"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_13[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_13 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_13,
    P_GEND_TYPE_NMDTUP_TARR_13
  };
  static PRT_TYPE P_GEND_TYPE_13 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_14[] = 
  {
    "op1",
    "op2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_14[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_14 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_14,
    P_GEND_TYPE_NMDTUP_TARR_14
  };
  static PRT_TYPE P_GEND_TYPE_14 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_14
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_15[] = 
  {
    "op2",
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_15[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_15 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_15,
    P_GEND_TYPE_NMDTUP_TARR_15
  };
  static PRT_TYPE P_GEND_TYPE_15 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_15
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_16[] = 
  {
    "op1",
    "op2",
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_16[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_16 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_16,
    P_GEND_TYPE_NMDTUP_TARR_16
  };
  static PRT_TYPE P_GEND_TYPE_16 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_16
    }
  };
  static PRT_VALUE P_GEND_VALUE_0 = 
  {
    PRT_VALUE_KIND_EVENT,
    
    {
        PRT_SPECIAL_EVENT_HALT
    }
  };
  static PRT_VALUE P_GEND_VALUE_1 = 
  {
    PRT_VALUE_KIND_NULL,
    
    {
        PRT_SPECIAL_EVENT_NULL
    }
  };
  PRT_VALUE *P_FUN_AbsFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_AbsFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_AddFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_AddFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_DivFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_DivFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IntToFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IntToFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsEqFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsEqFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsFiniteFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsFiniteFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsGeFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsGeFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsGtFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsGtFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsInftyFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsInftyFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsLeFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsLeFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsLtFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsLtFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsNEqFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsNEqFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsNaNFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsNaNFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsNearFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsNearFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U], p_tmp_frame.locals[2U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsNegInftyFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsNegInftyFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_IsPosInftyFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_IsPosInftyFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_MulFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_MulFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_NaNFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_NaNFloat32_FOREIGN(context);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_NegFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_NegFloat32_FOREIGN(context, p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_ScientificToFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_ScientificToFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_SubFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_SubFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_FUNDECL P_FUN_AbsFloat32_STRUCT = 
  {
    P_FUN_AbsFloat32,
    0U,
    "AbsFloat32",
    &P_FUN_AbsFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_AddFloat32_STRUCT = 
  {
    P_FUN_AddFloat32,
    0U,
    "AddFloat32",
    &P_FUN_AddFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_DivFloat32_STRUCT = 
  {
    P_FUN_DivFloat32,
    0U,
    "DivFloat32",
    &P_FUN_DivFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IntToFloat32_STRUCT = 
  {
    P_FUN_IntToFloat32,
    0U,
    "IntToFloat32",
    &P_FUN_IntToFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsEqFloat32_STRUCT = 
  {
    P_FUN_IsEqFloat32,
    0U,
    "IsEqFloat32",
    &P_FUN_IsEqFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsFiniteFloat32_STRUCT = 
  {
    P_FUN_IsFiniteFloat32,
    0U,
    "IsFiniteFloat32",
    &P_FUN_IsFiniteFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsGeFloat32_STRUCT = 
  {
    P_FUN_IsGeFloat32,
    0U,
    "IsGeFloat32",
    &P_FUN_IsGeFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsGtFloat32_STRUCT = 
  {
    P_FUN_IsGtFloat32,
    0U,
    "IsGtFloat32",
    &P_FUN_IsGtFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsInftyFloat32_STRUCT = 
  {
    P_FUN_IsInftyFloat32,
    0U,
    "IsInftyFloat32",
    &P_FUN_IsInftyFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsLeFloat32_STRUCT = 
  {
    P_FUN_IsLeFloat32,
    0U,
    "IsLeFloat32",
    &P_FUN_IsLeFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsLtFloat32_STRUCT = 
  {
    P_FUN_IsLtFloat32,
    0U,
    "IsLtFloat32",
    &P_FUN_IsLtFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsNEqFloat32_STRUCT = 
  {
    P_FUN_IsNEqFloat32,
    0U,
    "IsNEqFloat32",
    &P_FUN_IsNEqFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsNaNFloat32_STRUCT = 
  {
    P_FUN_IsNaNFloat32,
    0U,
    "IsNaNFloat32",
    &P_FUN_IsNaNFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsNearFloat32_STRUCT = 
  {
    P_FUN_IsNearFloat32,
    0U,
    "IsNearFloat32",
    &P_FUN_IsNearFloat32_IMPL,
    3U,
    3U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsNegInftyFloat32_STRUCT = 
  {
    P_FUN_IsNegInftyFloat32,
    0U,
    "IsNegInftyFloat32",
    &P_FUN_IsNegInftyFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_IsPosInftyFloat32_STRUCT = 
  {
    P_FUN_IsPosInftyFloat32,
    0U,
    "IsPosInftyFloat32",
    &P_FUN_IsPosInftyFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_MulFloat32_STRUCT = 
  {
    P_FUN_MulFloat32,
    0U,
    "MulFloat32",
    &P_FUN_MulFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_NaNFloat32_STRUCT = 
  {
    P_FUN_NaNFloat32,
    0U,
    "NaNFloat32",
    &P_FUN_NaNFloat32_IMPL,
    0U,
    0U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_NegFloat32_STRUCT = 
  {
    P_FUN_NegFloat32,
    0U,
    "NegFloat32",
    &P_FUN_NegFloat32_IMPL,
    1U,
    1U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_ScientificToFloat32_STRUCT = 
  {
    P_FUN_ScientificToFloat32,
    0U,
    "ScientificToFloat32",
    &P_FUN_ScientificToFloat32_IMPL,
    2U,
    4U,
    0U,
    NULL,
    &P_GEND_TYPE_12,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_SubFloat32_STRUCT = 
  {
    P_FUN_SubFloat32,
    0U,
    "SubFloat32",
    &P_FUN_SubFloat32_IMPL,
    2U,
    2U,
    0U,
    NULL,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  