
  #include "BootMaster.h"
  #define P_SEQ
  #define P_BOOL_EXPR(x0, f0) P_SEQ(p_tmp_expr_0 = (x0), p_tmp_bool = PrtPrimGetBool(p_tmp_expr_0), ((f0) ? PrtFreeValue(p_tmp_expr_0) : 0U), p_tmp_bool)
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
  static PRT_VALUE *P_FUN_BootMaster_ANON0_IMPL(PRT_MACHINEINST *context)
  {
    {
      PRT_FUNSTACK_INFO p_tmp_frame;
      PRT_MACHINEINST_PRIV *p_tmp_mach_priv;
      PRT_VALUE *p_tmp_funstmt_ret;
      PRT_VALUE *p_tmp_ret;
      p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
      p_tmp_ret = NULL;
      PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
      p_tmp_funstmt_ret = PrtCloneValue(PrtMkInterfaceOrMachine(context, P_IORM_POrbMachine, 0U)->id);
      if (p_tmp_funstmt_ret != NULL)
      {
        PrtFreeValue(p_tmp_funstmt_ret);
      }
      goto P_EXIT_FUN;
      P_EXIT_FUN:
      PrtFreeLocals(p_tmp_mach_priv, &p_tmp_frame);
      return p_tmp_ret;
    }
  }

  static PRT_VALUE *P_FUN_BootMaster_ANON1_IMPL(PRT_MACHINEINST *context)
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

  static PRT_VALUE *P_FUN_BootMaster_ANON2_IMPL(PRT_MACHINEINST *context)
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

  PRT_FUNDECL *P_GEND_FUNS_BootMaster[] = 
  {
    &P_FUN_BootMaster_ANON0_STRUCT,
    &P_FUN_BootMaster_ANON1_STRUCT,
    &P_FUN_BootMaster_ANON2_STRUCT
  };
  PRT_FUNDECL P_FUN_BootMaster_ANON0_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_BootMaster_ANON0_IMPL,
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
  PRT_FUNDECL P_FUN_BootMaster_ANON1_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_BootMaster_ANON1_IMPL,
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
  PRT_FUNDECL P_FUN_BootMaster_ANON2_STRUCT = 
  {
    0U,
    NULL,
    &P_FUN_BootMaster_ANON2_IMPL,
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
  PRT_STATEDECL P_GEND_STATES_BootMaster[] = 
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
        &P_FUN_BootMaster_ANON0_STRUCT,
        &P_FUN_BootMaster_ANON2_STRUCT,
        0U,
        NULL
    }
  };
  PRT_MACHINEDECL P_MACHINE_BootMaster_STRUCT = 
  {
    0U,
    "BootMaster",
    0,
    1,
    3,
    4294967295,
    P_STATE_BootMaster_Init,
    NULL,
    P_GEND_STATES_BootMaster,
    P_GEND_FUNS_BootMaster,
    0U,
    NULL
  };
  