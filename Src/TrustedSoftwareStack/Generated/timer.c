
  #include "timer.h"
  #define P_SEQ
  #define P_STMT_0(s, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U))
  #define P_STMT_1(s, x1, f1, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), p_tmp_stmt_1 = (x1), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_stmt_1) : 0U))
  #define P_BOOL_EXPR(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_bool = PrtPrimGetBool(p_tmp_expr_0), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_bool)
  #define P_EXPR_0(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_0)
  #define P_EXPR_1(x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_expr_1)
  #define P_EXPR_3(x3, f3, x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), p_tmp_expr_3 = (x3), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), ((f2) ? PrtFreeValue(p_tmp_expr_2) : 0U), p_tmp_expr_3)
  #define P_TUPLE_0(t, x0) P_SEQ(p_tmp_tuple = PrtMkDefaultValue(t), PrtTupleSet(p_tmp_tuple, 0U, (x0)), p_tmp_tuple)
  static PRT_TYPE P_GEND_TYPE_0 = 
  {
    PRT_KIND_BOOL,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_1 = 
  {
    PRT_KIND_EVENT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_2 = 
  {
    PRT_KIND_INT,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_3 = 
  {
    PRT_KIND_MACHINE,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_4 = 
  {
    PRT_KIND_NULL,
    
    {
        NULL
    }
  };
  static PRT_TYPE P_GEND_TYPE_5 = 
  {
    PRT_KIND_MACHINE,
    NULL
  };
  static PRT_TYPE P_GEND_TYPE_6 = 
  {
    PRT_KIND_MACHINE,
    NULL
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_7[] = 
  {
    "m"
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
  static PRT_VALUE P_GEND_VALUE_0 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        100U
    }
  };
  PRT_EVENTDECL P_EVENT_eCancelFailure_STRUCT = 
  {
    0U,
    "eCancelFailure",
    4294967295U,
    &P_GEND_TYPE_6,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_eCancelSuccess_STRUCT = 
  {
    0U,
    "eCancelSuccess",
    4294967295U,
    &P_GEND_TYPE_6,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_eCancelTimer_STRUCT = 
  {
    0U,
    "eCancelTimer",
    4294967295U,
    &P_GEND_TYPE_4,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_eStartTimer_STRUCT = 
  {
    0U,
    "eStartTimer",
    4294967295U,
    &P_GEND_TYPE_2,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_eTimeOut_STRUCT = 
  {
    0U,
    "eTimeOut",
    4294967295U,
    &P_GEND_TYPE_6,
    0U,
    NULL
  };
  PRT_TYPE P_GEND_TYPE_ITimer = 
  {
    PRT_KIND_MACHINE,
    NULL
  };
  PRT_TYPE P_GEND_TYPE_ITimerClient = 
  {
    PRT_KIND_MACHINE,
    NULL
  };
  PRT_TYPE P_GEND_TYPE_TimerPtr = 
  {
    PRT_KIND_MACHINE,
    NULL
  };
  PRT_VARDECL P_GEND_VARS_Timer[] = 
  {
    
    {
        "client",
        &P_GEND_TYPE_5,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_Timer_WaitForCancel[] = 
  {
    
    {
        P_STATE_Timer_WaitForCancel,
        &P_EVENT_eCancelTimer_STRUCT,
        P_STATE_Timer_WaitForReq,
        &P_FUN_Timer_ANON0_STRUCT,
        0U,
        NULL
    },
    
    {
        P_STATE_Timer_WaitForCancel,
        &_P_EVENT_NULL_STRUCT,
        P_STATE_Timer_WaitForReq,
        &P_FUN_Timer_ANON9_STRUCT,
        0U,
        NULL
    }
  };
  PRT_TRANSDECL P_GEND_TRANS_Timer_WaitForReq[] = 
  {
    
    {
        P_STATE_Timer_WaitForReq,
        &P_EVENT_eCancelTimer_STRUCT,
        P_STATE_Timer_WaitForReq,
        &P_FUN_Timer_ANON8_STRUCT,
        0U,
        NULL
    },
    
    {
        P_STATE_Timer_WaitForReq,
        &P_EVENT_eStartTimer_STRUCT,
        P_STATE_Timer_WaitForCancel,
        &P_FUN_Timer_ANON5_STRUCT,
        0U,
        NULL
    }
  };
  PRT_VALUE *P_FUN_CancelTimer_IMPL(PRT_MACHINEINST *context);

  PRT_VALUE *P_FUN_CreateTimer_IMPL(PRT_MACHINEINST *context);

  PRT_VALUE *P_FUN_StartTimer_IMPL(PRT_MACHINEINST *context);

  PRT_DODECL P_GEND_DOS_Timer_WaitForCancel[] = 
  {
    
    {
        P_STATE_Timer_WaitForCancel,
        &P_EVENT_eStartTimer_STRUCT,
        &P_FUN_IGNORE_PUSH_STRUCT,
        0U,
        NULL
    }
  };
  PRT_VALUE *P_FUN_CancelTimer_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      PRT_VALUE *p_tmp_stmt_1;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      if (p_tmp_frame.returnTo == 1U)
      {
        goto L1;
      }
      P_STMT_1(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_stmt_0), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_stmt_0), p_tmp_stmt_1, 0U)), P_EXPR_0(&P_GEND_VALUE_EVENT_eCancelTimer, PRT_FALSE), PRT_FALSE, P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
      L1:
      if (p_tmp_frame.rcase == NULL && !PrtReceive(p_tmp_mach_priv, &p_tmp_frame, 1U))
      {
        return NULL;
      }
      (p_tmp_frame.rcase->fun->implementation)(context);
      if (p_tmp_mach_priv->receive != NULL)
      {
        PrtPushFrame(p_tmp_mach_priv, &p_tmp_frame);
        return NULL;
      }
      if (p_tmp_mach_priv->lastOperation != ReturnStatement)
      {
        goto P_EXIT_FUN;
      }
      p_tmp_frame.rcase = NULL;
      p_tmp_frame.returnTo = 0x0FFFFU;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_VALUE *P_FUN_CreateTimer_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_funstmt_ret;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_EXPR_1(P_SEQ(p_tmp_funstmt_ret = PrtCloneValue(PrtMkInterfaceOrMachine(context, P_IORM_ITimer, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0)->id), NULL), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE);
      PrtSetLocalVarEx(p_tmp_frame.locals, 1U, p_tmp_funstmt_ret, PRT_FALSE);
      P_SEQ(p_tmp_ret = p_tmp_frame.locals[1U], p_tmp_frame.locals[1U] = NULL);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      if (p_tmp_ret == NULL)
      {
        return PrtMkDefaultValue(&P_GEND_TYPE_6);
      }
      else
      {
        return p_tmp_ret;
      }
    }
  }

  PRT_VALUE *P_FUN_StartTimer_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_event;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_machine;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eStartTimer, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, &P_GEND_VALUE_0, PRT_FALSE));
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_CancelTimer_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_CancelTimer_ANON1_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_CancelTimer_ANON2_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      if (p_tmp_frame.returnTo == 0U)
      {
        goto L0;
      }
      L0:
      if (p_tmp_frame.rcase == NULL && !PrtReceive(p_tmp_mach_priv, &p_tmp_frame, 0U))
      {
        return NULL;
      }
      (p_tmp_frame.rcase->fun->implementation)(context);
      if (p_tmp_mach_priv->receive != NULL)
      {
        PrtPushFrame(p_tmp_mach_priv, &p_tmp_frame);
        return NULL;
      }
      if (p_tmp_mach_priv->lastOperation != ReturnStatement)
      {
        goto P_EXIT_FUN;
      }
      p_tmp_frame.rcase = NULL;
      p_tmp_frame.returnTo = 0x0FFFFU;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_BOOLEAN p_tmp_bool;
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_event;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_machine;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      if (P_BOOL_EXPR(P_EXPR_0(PrtMkNondetBoolValue(), PRT_TRUE), PRT_TRUE))
      {
        P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Timer_client], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eCancelSuccess, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
      }
      else
      {
        P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Timer_client], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eCancelFailure, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
        P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Timer_client], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eTimeOut, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
      }
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON10_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_STMT_0(PrtSetGlobalVarEx(p_tmp_mach_priv, P_VAR_Timer_client, p_tmp_stmt_0, !PRT_FALSE), P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
      PrtGoto(p_tmp_mach_priv, P_STATE_Timer_WaitForReq, 0U);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON1_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON2_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON3_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON4_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON5_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON6_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON7_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON8_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_event;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_machine;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Timer_client], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eCancelFailure, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_Timer_ANON9_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_event;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_machine;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_mach_priv->varValues[P_VAR_Timer_client], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_eTimeOut, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE));
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_CASEDECL P_GEND_CASES_P_FUN_CancelTimer_1[] = 
  {
    
    {
        &P_EVENT_eCancelFailure_STRUCT,
        &P_FUN_CancelTimer_ANON2_STRUCT
    },
    
    {
        &P_EVENT_eCancelSuccess_STRUCT,
        &P_FUN_CancelTimer_ANON0_STRUCT
    }
  };
  PRT_CASEDECL P_GEND_CASES_P_FUN_CancelTimer_ANON2_0[] = 
  {
    
    {
        &P_EVENT_eTimeOut_STRUCT,
        &P_FUN_CancelTimer_ANON1_STRUCT
    }
  };
  PRT_RECEIVEDECL P_GEND_RECEIVE_P_FUN_CancelTimer[] = 
  {
    
    {
        1U,
        &P_GEND_EVENTSET_eCancelSuccess_eCancelFailure,
        2U,
        P_GEND_CASES_P_FUN_CancelTimer_1
    }
  };
  PRT_RECEIVEDECL P_GEND_RECEIVE_P_FUN_CancelTimer_ANON2[] = 
  {
    
    {
        0U,
        &P_GEND_EVENTSET_eTimeOut,
        1U,
        P_GEND_CASES_P_FUN_CancelTimer_ANON2_0
    }
  };
  PRT_FUNDECL *P_GEND_FUNS_Timer[] = 
  {
    &P_FUN_Timer_ANON0_STRUCT,
    &P_FUN_Timer_ANON1_STRUCT,
    &P_FUN_Timer_ANON2_STRUCT,
    &P_FUN_Timer_ANON3_STRUCT,
    &P_FUN_Timer_ANON4_STRUCT,
    &P_FUN_Timer_ANON5_STRUCT,
    &P_FUN_Timer_ANON6_STRUCT,
    &P_FUN_Timer_ANON7_STRUCT,
    &P_FUN_Timer_ANON8_STRUCT,
    &P_FUN_Timer_ANON9_STRUCT,
    &P_FUN_Timer_ANON10_STRUCT
  };
  PRT_FUNDECL P_FUN_CancelTimer_ANON0_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_CancelTimer_ANON0_IMPL,
    1U,
    1U,
    2U,
    &P_GEND_TYPE_6,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_CancelTimer_ANON1_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_CancelTimer_ANON1_IMPL,
    1U,
    1U,
    3U,
    &P_GEND_TYPE_6,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_CancelTimer_ANON2_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_CancelTimer_ANON2_IMPL,
    1U,
    2U,
    2U,
    &P_GEND_TYPE_6,
    NULL,
    1U,
    P_GEND_RECEIVE_P_FUN_CancelTimer_ANON2,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_CancelTimer_STRUCT = 
  {
    0U,
    "CancelTimer",
    &P_FUN_CancelTimer_IMPL,
    1U,
    3U,
    0U,
    NULL,
    NULL,
    1U,
    P_GEND_RECEIVE_P_FUN_CancelTimer,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_CreateTimer_STRUCT = 
  {
    0U,
    "CreateTimer",
    &P_FUN_CreateTimer_IMPL,
    1U,
    2U,
    0U,
    NULL,
    &P_GEND_TYPE_7,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_StartTimer_STRUCT = 
  {
    0U,
    "StartTimer",
    &P_FUN_StartTimer_IMPL,
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
  PRT_FUNDECL P_FUN_Timer_ANON0_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON0_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON10_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON10_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_5,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON1_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON1_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON2_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON2_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON3_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON3_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON4_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON4_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON5_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON5_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON6_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON6_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON7_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON7_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON8_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON8_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Timer_ANON9_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_Timer_ANON9_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_4,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_STATEDECL P_GEND_STATES_Timer[] = 
  {
    
    {
        "Init",
        0,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET,
        NULL,
        NULL,
        &P_FUN_Timer_ANON10_STRUCT,
        &P_FUN_Timer_ANON2_STRUCT,
        0U,
        NULL
    },
    
    {
        "WaitForCancel",
        2,
        1,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_null_eCancelTimer,
        &P_GEND_EVENTSET_eStartTimer,
        P_GEND_TRANS_Timer_WaitForCancel,
        P_GEND_DOS_Timer_WaitForCancel,
        &P_FUN_Timer_ANON6_STRUCT,
        &P_FUN_Timer_ANON7_STRUCT,
        0U,
        NULL
    },
    
    {
        "WaitForReq",
        2,
        0,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_eStartTimer_eCancelTimer,
        &P_GEND_EVENTSET,
        P_GEND_TRANS_Timer_WaitForReq,
        NULL,
        &P_FUN_Timer_ANON3_STRUCT,
        &P_FUN_Timer_ANON4_STRUCT,
        0U,
        NULL
    }
  };
  PRT_MACHINEDECL P_MACHINE_Timer_STRUCT = 
  {
    0U,
    "Timer",
    1,
    3,
    11,
    4294967295,
    P_STATE_Timer_Init,
    P_GEND_VARS_Timer,
    P_GEND_STATES_Timer,
    P_GEND_FUNS_Timer,
    0U,
    NULL
  };
  