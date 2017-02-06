
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
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_6[] = 
  {
    "index",
    "val"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_6[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_6 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_6,
    P_GEND_TYPE_NMDTUP_TARR_6
  };
  static PRT_TYPE P_GEND_TYPE_6 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_6
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
    &P_GEND_TYPE_6,
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
  