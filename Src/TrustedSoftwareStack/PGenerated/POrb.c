
  #include "POrb.h"
  #define P_SEQ
  #define P_STMT_0(s, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U))
  #define P_STMT_1(s, x1, f1, x0, f0) P_SEQ(p_tmp_stmt_0 = (x0), p_tmp_stmt_1 = (x1), (s), ((f0) ? PrtFreeValue(p_tmp_stmt_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_stmt_1) : 0U))
  #define P_BOOL_EXPR(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_bool = PrtPrimGetBool(p_tmp_expr_0), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_bool)
  #define P_EXPR_0(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_0)
  #define P_EXPR_1(x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_expr_1)
  #define P_EXPR_2(x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), p_tmp_expr_2)
  #define P_EXPR_3(x3, f3, x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), p_tmp_expr_3 = (x3), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), ((f2) ? PrtFreeValue(p_tmp_expr_2) : 0U), p_tmp_expr_3)
  #define P_EXPR_4(x4, f4, x3, f3, x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), p_tmp_expr_3 = (x3), p_tmp_expr_4 = (x4), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), ((f2) ? PrtFreeValue(p_tmp_expr_2) : 0U), ((f3) ? PrtFreeValue(p_tmp_expr_3) : 0U), p_tmp_expr_4)
  #define P_EXPR_8(x8, f8, x7, f7, x6, f6, x5, f5, x4, f4, x3, f3, x2, f2, x1, f1, x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_expr_1 = (x1), p_tmp_expr_2 = (x2), p_tmp_expr_3 = (x3), p_tmp_expr_4 = (x4), p_tmp_expr_5 = (x5), p_tmp_expr_6 = (x6), p_tmp_expr_7 = (x7), p_tmp_expr_8 = (x8), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), ((f1) ? PrtFreeValue(p_tmp_expr_1) : 0U), ((f2) ? PrtFreeValue(p_tmp_expr_2) : 0U), ((f3) ? PrtFreeValue(p_tmp_expr_3) : 0U), ((f4) ? PrtFreeValue(p_tmp_expr_4) : 0U), ((f5) ? PrtFreeValue(p_tmp_expr_5) : 0U), ((f6) ? PrtFreeValue(p_tmp_expr_6) : 0U), ((f7) ? PrtFreeValue(p_tmp_expr_7) : 0U), p_tmp_expr_8)
  #define P_TUPLE_0(t, x0) P_SEQ(p_tmp_tuple = PrtMkDefaultValue(t), PrtTupleSet(p_tmp_tuple, 0U, (x0)), p_tmp_tuple)
  #define P_TUPLE_1(t, x0, x1) P_SEQ(p_tmp_tuple = PrtMkDefaultValue(t), PrtTupleSet(p_tmp_tuple, 0U, (x0)), PrtTupleSet(p_tmp_tuple, 1U, (x1)), p_tmp_tuple)
  #define P_TUPLE_2(t, x0, x1, x2) P_SEQ(p_tmp_tuple = PrtMkDefaultValue(t), PrtTupleSet(p_tmp_tuple, 0U, (x0)), PrtTupleSet(p_tmp_tuple, 1U, (x1)), PrtTupleSet(p_tmp_tuple, 2U, (x2)), p_tmp_tuple)
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
    PRT_KIND_INT,
    
    {
        NULL
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_7[] = 
  {
    "index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_7[] = 
  {
    &P_GEND_TYPE_3
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
  static PRT_SEQTYPE P_GEND_TYPE_SEQ_8 = 
  {
    &P_GEND_TYPE_4
  };
  static PRT_TYPE P_GEND_TYPE_8 = 
  {
    PRT_KIND_SEQ,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_8
    }
  };
  static PRT_MAPTYPE P_GEND_TYPE_MAP_9 = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_8
  };
  static PRT_TYPE P_GEND_TYPE_9 = 
  {
    PRT_KIND_MAP,
    
    {
        &P_GEND_TYPE_MAP_9
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_10[] = 
  {
    "list"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_10[] = 
  {
    &P_GEND_TYPE_8
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
    "topic",
    "sub"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_11[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_4
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_11 = 
  {
    2,
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
  static PRT_TYPE *P_GEND_TYPE_TUP_ARR_12[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_4
  };
  static PRT_TUPTYPE P_GEND_TYPE_TUP_12 = 
  {
    2,
    P_GEND_TYPE_TUP_ARR_12
  };
  static PRT_TYPE P_GEND_TYPE_12 = 
  {
    PRT_KIND_TUPLE,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_TUP_12
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_13[] = 
  {
    "topic",
    "ev",
    "payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_13[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_2,
    &P_GEND_TYPE_0
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_13 = 
  {
    3,
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
  static PRT_VALUE P_GEND_VALUE_0 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_altitude_reached_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_1 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_attitude_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_2 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_battery_critical_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_3 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_battery_status_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_4 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_command_ack_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_5 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_extended_sys_state_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_6 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_geofence_reached_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_7 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_global_position_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_8 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_gps_health_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_9 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_gps_raw_int_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_10 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_gps_status_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_11 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_heartbeat_status_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_12 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_heartbeat_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_13 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_local_position_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_14 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_px4status_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_15 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_armed_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_16 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_crashed_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_17 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_disarmed_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_18 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_landed_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_19 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_loitering_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_20 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        Topics_vehicle_ready_topic
    }
  };
  static PRT_VALUE P_GEND_VALUE_21 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        0U
    }
  };
  static PRT_VALUE P_GEND_VALUE_22 = 
  {
    PRT_VALUE_KIND_INT,
    
    {
        1U
    }
  };
  static PRT_VALUE P_GEND_VALUE_23 = 
  {
    PRT_VALUE_KIND_BOOL,
    
    {
        PRT_FALSE
    }
  };
  static PRT_VALUE P_GEND_VALUE_24 = 
  {
    PRT_VALUE_KIND_BOOL,
    
    {
        PRT_TRUE
    }
  };
  PRT_EVENTDECL P_EVENT_POrbPublish_STRUCT = 
  {
    0U,
    "POrbPublish",
    4294967295U,
    &P_GEND_TYPE_13,
    0U,
    NULL
  };
  PRT_EVENTDECL P_EVENT_POrbSubscribe_STRUCT = 
  {
    0U,
    "POrbSubscribe",
    4294967295U,
    &P_GEND_TYPE_11,
    0U,
    NULL
  };
  PRT_TYPE P_GEND_TYPE_POrbPubMsgType = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_POrbSubMsgType = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_11
    }
  };
  PRT_TYPE P_GEND_TYPE_Topics = 
  {
    PRT_KIND_INT,
    
    {
        NULL
    }
  };
  PRT_VARDECL P_GEND_VARS_POrbMachine[] = 
  {
    
    {
        "topicSubscribers",
        &P_GEND_TYPE_9,
        0U,
        NULL
    }
  };
  PRT_VALUE *P_FUN_InitializeListener_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_InitializeListener_FOREIGN(context, &p_tmp_frame.locals[0U]);
    PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
    return retVal;
  }

  PRT_VALUE *P_FUN_POrbMachine_Broadcast_IMPL(PRT_MACHINEINST *context);

  PRT_VALUE *P_FUN_POrbMachine_IsSubscribed_IMPL(PRT_MACHINEINST *context);

  PRT_VALUE *P_FUN_Publish_IMPL(PRT_MACHINEINST *context);

  PRT_VALUE *P_FUN_Subscribe_IMPL(PRT_MACHINEINST *context);

  PRT_DODECL P_GEND_DOS_POrbMachine_ReadMessagesAndPublish[] = 
  {
    
    {
        P_STATE_POrbMachine_ReadMessagesAndPublish,
        &P_EVENT_POrbPublish_STRUCT,
        &P_FUN_POrbMachine_ANON0_STRUCT,
        0U,
        NULL
    },
    
    {
        P_STATE_POrbMachine_ReadMessagesAndPublish,
        &P_EVENT_POrbSubscribe_STRUCT,
        &P_FUN_POrbMachine_ANON6_STRUCT,
        0U,
        NULL
    }
  };
  PRT_VALUE *P_FUN_POrbMachine_Broadcast_IMPL(PRT_MACHINEINST *context)
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
      PRT_VALUE *p_tmp_stmt_0;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_STMT_0(PrtSetLocalVarEx(p_tmp_frame.locals, 3U, p_tmp_stmt_0, !PRT_FALSE), P_EXPR_0(&P_GEND_VALUE_21, PRT_FALSE), PRT_FALSE);
      while (P_BOOL_EXPR(P_EXPR_3(PrtMkBoolValue(PrtPrimGetInt(p_tmp_expr_0) < PrtPrimGetInt(p_tmp_expr_2)), PRT_TRUE, PrtMkIntValue(PrtSeqSizeOf(p_tmp_expr_1)), PRT_TRUE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[3U], PRT_FALSE), PRT_TRUE))
      {
        P_SEQ(p_tmp_machine = P_EXPR_2(PrtSeqGetNC(p_tmp_expr_1, p_tmp_expr_0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[3U], PRT_FALSE), p_tmp_event = P_EXPR_0(p_tmp_frame.locals[1U], PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_frame.locals[2U], PRT_FALSE));
        P_STMT_0(PrtSetLocalVarEx(p_tmp_frame.locals, 3U, p_tmp_stmt_0, !PRT_TRUE), P_EXPR_2(PrtMkIntValue(PrtPrimGetInt(p_tmp_expr_0) + PrtPrimGetInt(p_tmp_expr_1)), PRT_TRUE, &P_GEND_VALUE_22, PRT_FALSE, p_tmp_frame.locals[3U], PRT_FALSE), PRT_FALSE);
      }
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_VALUE *P_FUN_POrbMachine_IsSubscribed_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_BOOLEAN p_tmp_bool;
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_expr_4;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      P_STMT_0(PrtSetLocalVarEx(p_tmp_frame.locals, 2U, p_tmp_stmt_0, !PRT_FALSE), P_EXPR_0(&P_GEND_VALUE_21, PRT_FALSE), PRT_FALSE);
      while (P_BOOL_EXPR(P_EXPR_3(PrtMkBoolValue(PrtPrimGetInt(p_tmp_expr_0) < PrtPrimGetInt(p_tmp_expr_2)), PRT_TRUE, PrtMkIntValue(PrtSeqSizeOf(p_tmp_expr_1)), PRT_TRUE, p_tmp_frame.locals[1U], PRT_FALSE, p_tmp_frame.locals[2U], PRT_FALSE), PRT_TRUE))
      {
        if (P_BOOL_EXPR(P_EXPR_4(PrtMkBoolValue(PrtIsEqualValue(p_tmp_expr_3, p_tmp_expr_2)), PRT_TRUE, PrtSeqGetNC(p_tmp_expr_1, p_tmp_expr_0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[1U], PRT_FALSE, p_tmp_frame.locals[2U], PRT_FALSE), PRT_TRUE))
        {
          p_tmp_ret = PrtCloneValue(P_EXPR_0(&P_GEND_VALUE_24, PRT_FALSE));
          goto P_EXIT_FUN;
        }
        P_STMT_0(PrtSetLocalVarEx(p_tmp_frame.locals, 2U, p_tmp_stmt_0, !PRT_TRUE), P_EXPR_2(PrtMkIntValue(PrtPrimGetInt(p_tmp_expr_0) + PrtPrimGetInt(p_tmp_expr_1)), PRT_TRUE, &P_GEND_VALUE_22, PRT_FALSE, p_tmp_frame.locals[2U], PRT_FALSE), PRT_FALSE);
      }
      p_tmp_ret = PrtCloneValue(P_EXPR_0(&P_GEND_VALUE_23, PRT_FALSE));
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      if (p_tmp_ret == NULL)
      {
        return PrtMkDefaultValue(&P_GEND_TYPE_1);
      }
      else
      {
        return p_tmp_ret;
      }
    }
  }

  PRT_VALUE *P_FUN_Publish_IMPL(PRT_MACHINEINST *context)
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
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_POrbPublish, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_frame.locals[1U], PRT_FALSE));
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_VALUE *P_FUN_Subscribe_IMPL(PRT_MACHINEINST *context)
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
      P_SEQ(p_tmp_machine = P_EXPR_0(p_tmp_frame.locals[0U], PRT_FALSE), p_tmp_event = P_EXPR_0(&P_GEND_VALUE_EVENT_POrbSubscribe, PRT_FALSE), P_EXPR_3(P_SEQ(PrtCheckIsLocalMachineId(context, p_tmp_expr_2), PrtSendInternal(context, PrtGetMachine(context->process, p_tmp_expr_2), p_tmp_expr_1, 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_machine, PRT_FALSE, p_tmp_event, PRT_FALSE, p_tmp_frame.locals[1U], PRT_FALSE));
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_POrbMachine_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_BOOLEAN p_tmp_bool;
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_expr_4;
      PRT_VALUE *p_tmp_expr_5;
      PRT_VALUE *p_tmp_expr_6;
      PRT_VALUE *p_tmp_expr_7;
      PRT_VALUE *p_tmp_expr_8;
      PRT_VALUE *p_tmp_funstmt_ret;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      if (p_tmp_frame.returnTo == 1U)
      {
        goto L1;
      }
      if (P_BOOL_EXPR(P_EXPR_3(PrtMkBoolValue(PrtMapExists(p_tmp_expr_1, p_tmp_expr_2)), PRT_TRUE, PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_TRUE))
      {
        P_EXPR_8(P_SEQ(PrtPushNewFrame(p_tmp_mach_priv, PRT_FALSE, P_FUN_POrbMachine_Broadcast, PRT_FUN_PARAM_CLONE, p_tmp_expr_7, PRT_FUN_PARAM_CLONE, p_tmp_expr_5, PRT_FUN_PARAM_CLONE, p_tmp_expr_6), NULL), PRT_FALSE, PrtMapGetNC(p_tmp_expr_3, p_tmp_expr_4), PRT_FALSE, PrtTupleGetNC(p_tmp_expr_2, 2), PRT_FALSE, PrtTupleGetNC(p_tmp_expr_1, 1), PRT_FALSE, PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE);
        L1:
        p_tmp_funstmt_ret = PrtWrapFunStmt(&p_tmp_frame, 1U, p_tmp_mach_priv, P_FUN_POrbMachine_Broadcast);
        if (p_tmp_mach_priv->receive != NULL)
        {
          return p_tmp_funstmt_ret;
        }
        if (p_tmp_mach_priv->lastOperation != ReturnStatement)
        {
          goto P_EXIT_FUN;
        }
        if (p_tmp_funstmt_ret != NULL)
        {
          PrtFreeValue(p_tmp_funstmt_ret);
        }
      }
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_POrbMachine_ANON1_IMPL(PRT_MACHINEINST *context)
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

  static PRT_VALUE *P_FUN_POrbMachine_ANON2_IMPL(PRT_MACHINEINST *context)
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

  static PRT_VALUE *P_FUN_POrbMachine_ANON3_IMPL(PRT_MACHINEINST *context)
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

  static PRT_VALUE *P_FUN_POrbMachine_ANON4_IMPL(PRT_MACHINEINST *context)
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

  static PRT_VALUE *P_FUN_POrbMachine_ANON5_IMPL(PRT_MACHINEINST *context)
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
      if (p_tmp_frame.returnTo == 0U)
      {
        goto L0;
      }
      P_EXPR_1(P_SEQ(PrtPushNewFrame(p_tmp_mach_priv, PRT_FALSE, P_FUN_InitializeListener, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), NULL), PRT_FALSE, p_tmp_mach_priv->id, PRT_FALSE);
      L0:
      p_tmp_funstmt_ret = PrtWrapFunStmt(&p_tmp_frame, 0U, p_tmp_mach_priv, P_FUN_InitializeListener);
      if (p_tmp_mach_priv->receive != NULL)
      {
        return p_tmp_funstmt_ret;
      }
      if (p_tmp_mach_priv->lastOperation != ReturnStatement)
      {
        goto P_EXIT_FUN;
      }
      if (p_tmp_funstmt_ret != NULL)
      {
        PrtFreeValue(p_tmp_funstmt_ret);
      }
      PrtGoto(p_tmp_mach_priv, P_STATE_POrbMachine_ReadMessagesAndPublish, 0U);
      goto P_EXIT_FUN;
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_POrbMachine_ANON6_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_BOOLEAN p_tmp_bool;
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_expr_0;
      PRT_VALUE *p_tmp_expr_1;
      PRT_VALUE *p_tmp_expr_2;
      PRT_VALUE *p_tmp_expr_3;
      PRT_VALUE *p_tmp_ret;
      PRT_VALUE *p_tmp_stmt_0;
      PRT_VALUE *p_tmp_stmt_1;
      PRT_VALUE *p_tmp_tuple;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      if (P_BOOL_EXPR(P_EXPR_3(PrtMkBoolValue(PrtMapExists(p_tmp_expr_1, p_tmp_expr_2)), PRT_TRUE, PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_TRUE))
      {
        P_STMT_0(PrtSetLocalVarEx(p_tmp_frame.locals, 1U, p_tmp_stmt_0, !PRT_FALSE), P_EXPR_3(PrtMapGetNC(p_tmp_expr_1, p_tmp_expr_2), PRT_FALSE, PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
        if (P_BOOL_EXPR(P_EXPR_3(P_SEQ(PrtPushNewFrame(p_tmp_mach_priv, PRT_TRUE, P_FUN_POrbMachine_IsSubscribed, PRT_FUN_PARAM_CLONE, p_tmp_expr_2, PRT_FUN_PARAM_CLONE, p_tmp_expr_0), PrtWrapFunStmt(&p_tmp_frame, 0U, p_tmp_mach_priv, P_FUN_POrbMachine_IsSubscribed)), PRT_TRUE, PrtTupleGetNC(p_tmp_expr_1, 1), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE, p_tmp_frame.locals[1U], PRT_FALSE), PRT_TRUE))
        {
          P_EXPR_2(P_SEQ(PrtFormatPrintf("Subscriber is already subscribed to event ", 1U, PRT_FUN_PARAM_CLONE, p_tmp_expr_1, 1U, 0U, "\n"), NULL), PRT_FALSE, PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE);
        }
        P_STMT_1(PrtSeqInsertEx(PrtMapGetNC(p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], p_tmp_stmt_1), PrtTupleGetNC(p_tmp_stmt_0, 0U), PrtTupleGetNC(p_tmp_stmt_0, 1U), PRT_FALSE), P_EXPR_1(PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE, P_EXPR_3(P_TUPLE_1(&P_GEND_TYPE_12, p_tmp_expr_1, p_tmp_expr_2), PRT_TRUE, PrtTupleGetNC(p_tmp_expr_0, 1), PRT_FALSE, &P_GEND_VALUE_21, PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
        PrtFree(PrtTupleGetNC(p_tmp_stmt_0, 0U));
        PrtFree(p_tmp_stmt_0->valueUnion.tuple->values);
        PrtFree(p_tmp_stmt_0->valueUnion.tuple);
        PrtFree(p_tmp_stmt_0);
      }
      else
      {
        P_STMT_1(PrtMapUpdateEx(p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], p_tmp_stmt_1, PRT_TRUE, p_tmp_stmt_0, !PRT_TRUE), P_EXPR_1(PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE, P_EXPR_0(PrtMkDefaultValue(&P_GEND_TYPE_8), PRT_TRUE), PRT_FALSE);
        P_STMT_1(PrtSeqInsertEx(PrtMapGetNC(p_tmp_mach_priv->varValues[P_VAR_POrbMachine_topicSubscribers], p_tmp_stmt_1), PrtTupleGetNC(p_tmp_stmt_0, 0U), PrtTupleGetNC(p_tmp_stmt_0, 1U), PRT_FALSE), P_EXPR_1(PrtTupleGetNC(p_tmp_expr_0, 0), PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE, P_EXPR_3(P_TUPLE_1(&P_GEND_TYPE_12, p_tmp_expr_1, p_tmp_expr_2), PRT_TRUE, PrtTupleGetNC(p_tmp_expr_0, 1), PRT_FALSE, &P_GEND_VALUE_21, PRT_FALSE, p_tmp_frame.locals[0U], PRT_FALSE), PRT_FALSE);
        PrtFree(PrtTupleGetNC(p_tmp_stmt_0, 0U));
        PrtFree(p_tmp_stmt_0->valueUnion.tuple->values);
        PrtFree(p_tmp_stmt_0->valueUnion.tuple);
        PrtFree(p_tmp_stmt_0);
      }
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  PRT_FUNDECL *P_GEND_FUNS_POrbMachine[] = 
  {
    &P_FUN_POrbMachine_ANON0_STRUCT,
    &P_FUN_POrbMachine_ANON1_STRUCT,
    &P_FUN_POrbMachine_ANON2_STRUCT,
    &P_FUN_POrbMachine_ANON3_STRUCT,
    &P_FUN_POrbMachine_ANON4_STRUCT,
    &P_FUN_POrbMachine_ANON5_STRUCT,
    &P_FUN_POrbMachine_ANON6_STRUCT,
    &P_FUN_POrbMachine_Broadcast_STRUCT,
    &P_FUN_POrbMachine_IsSubscribed_STRUCT
  };
  PRT_FUNDECL P_FUN_InitializeListener_STRUCT = 
  {
    0U,
    "InitializeListener",
    &P_FUN_InitializeListener_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON0_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON0_IMPL,
    1U,
    1U,
    1U,
    &P_GEND_TYPE_13,
    NULL,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_POrbMachine_ANON1_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON1_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON2_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON2_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON3_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON3_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON4_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON4_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON5_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON5_IMPL,
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
  PRT_FUNDECL P_FUN_POrbMachine_ANON6_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_POrbMachine_ANON6_IMPL,
    1U,
    2U,
    1U,
    &P_GEND_TYPE_11,
    &P_GEND_TYPE_10,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_POrbMachine_Broadcast_STRUCT = 
  {
    0U,
    "Broadcast",
    &P_FUN_POrbMachine_Broadcast_IMPL,
    3U,
    4U,
    0U,
    NULL,
    &P_GEND_TYPE_7,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_POrbMachine_IsSubscribed_STRUCT = 
  {
    0U,
    "IsSubscribed",
    &P_FUN_POrbMachine_IsSubscribed_IMPL,
    2U,
    3U,
    0U,
    NULL,
    &P_GEND_TYPE_7,
    0U,
    NULL,
    0U,
    NULL
  };
  PRT_FUNDECL P_FUN_Publish_STRUCT = 
  {
    0U,
    "Publish",
    &P_FUN_Publish_IMPL,
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
  PRT_FUNDECL P_FUN_Subscribe_STRUCT = 
  {
    0U,
    "Subscribe",
    &P_FUN_Subscribe_IMPL,
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
  PRT_STATEDECL P_GEND_STATES_POrbMachine[] = 
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
        &P_FUN_POrbMachine_ANON5_STRUCT,
        &P_FUN_POrbMachine_ANON2_STRUCT,
        0U,
        NULL
    },
    
    {
        "ReadMessagesAndPublish",
        0,
        2,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET,
        &P_GEND_EVENTSET_POrbSubscribe_POrbPublish,
        NULL,
        P_GEND_DOS_POrbMachine_ReadMessagesAndPublish,
        &P_FUN_POrbMachine_ANON3_STRUCT,
        &P_FUN_POrbMachine_ANON4_STRUCT,
        0U,
        NULL
    }
  };
  PRT_MACHINEDECL P_MACHINE_POrbMachine_STRUCT = 
  {
    0U,
    "POrbMachine",
    1,
    2,
    9,
    4294967295,
    P_STATE_POrbMachine_Init,
    P_GEND_VARS_POrbMachine,
    P_GEND_STATES_POrbMachine,
    P_GEND_FUNS_POrbMachine,
    0U,
    NULL
  };
  