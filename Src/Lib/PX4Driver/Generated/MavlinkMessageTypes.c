
  #include "MavlinkMessageTypes.h"
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
    "_ack"
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
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_8[] = 
  {
    "_altitude"
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
    "_approach_z"
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
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_10[] = 
  {
    &P_GEND_TYPE_3
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
    "_base_mode"
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
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_12[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_12 = 
  {
    1,
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
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_13[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_13 = 
  {
    1,
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
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_14[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_14 = 
  {
    1,
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
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_15[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_15 = 
  {
    1,
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
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_16[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_16 = 
  {
    1,
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
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_17[] = 
  {
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_17[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_17 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_17,
    P_GEND_TYPE_NMDTUP_TARR_17
  };
  static PRT_TYPE P_GEND_TYPE_17 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_17
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_18[] = 
  {
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_18[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_18 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_18,
    P_GEND_TYPE_NMDTUP_TARR_18
  };
  static PRT_TYPE P_GEND_TYPE_18 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_18
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_19[] = 
  {
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_19[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_19 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_19,
    P_GEND_TYPE_NMDTUP_TARR_19
  };
  static PRT_TYPE P_GEND_TYPE_19 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_19
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_20[] = 
  {
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_20[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_20 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_20,
    P_GEND_TYPE_NMDTUP_TARR_20
  };
  static PRT_TYPE P_GEND_TYPE_20 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_20
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_21[] = 
  {
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_21[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_21 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_21,
    P_GEND_TYPE_NMDTUP_TARR_21
  };
  static PRT_TYPE P_GEND_TYPE_21 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_21
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_22[] = 
  {
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_22[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_22 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_22,
    P_GEND_TYPE_NMDTUP_TARR_22
  };
  static PRT_TYPE P_GEND_TYPE_22 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_22
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_23[] = 
  {
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_23[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_23 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_23,
    P_GEND_TYPE_NMDTUP_TARR_23
  };
  static PRT_TYPE P_GEND_TYPE_23 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_23
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_24[] = 
  {
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_24[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_24 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_24,
    P_GEND_TYPE_NMDTUP_TARR_24
  };
  static PRT_TYPE P_GEND_TYPE_24 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_24
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_25[] = 
  {
    "_grid_spacing"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_25[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_25 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_25,
    P_GEND_TYPE_NMDTUP_TARR_25
  };
  static PRT_TYPE P_GEND_TYPE_25 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_25
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_26[] = 
  {
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_26[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_26 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_26,
    P_GEND_TYPE_NMDTUP_TARR_26
  };
  static PRT_TYPE P_GEND_TYPE_26 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_26
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_27[] = 
  {
    "_group_mlx"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_27[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_27 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_27,
    P_GEND_TYPE_NMDTUP_TARR_27
  };
  static PRT_TYPE P_GEND_TYPE_27 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_27
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_28[] = 
  {
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_28[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_28 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_28,
    P_GEND_TYPE_NMDTUP_TARR_28
  };
  static PRT_TYPE P_GEND_TYPE_28 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_28
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_29[] = 
  {
    "_ind"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_29[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_29 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_29,
    P_GEND_TYPE_NMDTUP_TARR_29
  };
  static PRT_TYPE P_GEND_TYPE_29 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_29
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_30[] = 
  {
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_30[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_30 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_30,
    P_GEND_TYPE_NMDTUP_TARR_30
  };
  static PRT_TYPE P_GEND_TYPE_30 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_30
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_31[] = 
  {
    "_landed_state"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_31[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_31 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_31,
    P_GEND_TYPE_NMDTUP_TARR_31
  };
  static PRT_TYPE P_GEND_TYPE_31 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_31
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_32[] = 
  {
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_32[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_32 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_32,
    P_GEND_TYPE_NMDTUP_TARR_32
  };
  static PRT_TYPE P_GEND_TYPE_32 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_32
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_33[] = 
  {
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_33[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_33 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_33,
    P_GEND_TYPE_NMDTUP_TARR_33
  };
  static PRT_TYPE P_GEND_TYPE_33 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_33
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_34[] = 
  {
    "_lon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_34[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_34 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_34,
    P_GEND_TYPE_NMDTUP_TARR_34
  };
  static PRT_TYPE P_GEND_TYPE_34 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_34
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_35[] = 
  {
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_35[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_35 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_35,
    P_GEND_TYPE_NMDTUP_TARR_35
  };
  static PRT_TYPE P_GEND_TYPE_35 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_35
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_36[] = 
  {
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_36[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_36 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_36,
    P_GEND_TYPE_NMDTUP_TARR_36
  };
  static PRT_TYPE P_GEND_TYPE_36 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_36
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_37[] = 
  {
    "_message_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_37[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_37 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_37,
    P_GEND_TYPE_NMDTUP_TARR_37
  };
  static PRT_TYPE P_GEND_TYPE_37 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_37
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_38[] = 
  {
    "_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_38[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_38 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_38,
    P_GEND_TYPE_NMDTUP_TARR_38
  };
  static PRT_TYPE P_GEND_TYPE_38 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_38
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_39[] = 
  {
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_39[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_39 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_39,
    P_GEND_TYPE_NMDTUP_TARR_39
  };
  static PRT_TYPE P_GEND_TYPE_39 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_39
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_40[] = 
  {
    "_on_off"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_40[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_40 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_40,
    P_GEND_TYPE_NMDTUP_TARR_40
  };
  static PRT_TYPE P_GEND_TYPE_40 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_40
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_41[] = 
  {
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_41[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_41 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_41,
    P_GEND_TYPE_NMDTUP_TARR_41
  };
  static PRT_TYPE P_GEND_TYPE_41 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_41
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_42[] = 
  {
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_42[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_42 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_42,
    P_GEND_TYPE_NMDTUP_TARR_42
  };
  static PRT_TYPE P_GEND_TYPE_42 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_42
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_43[] = 
  {
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_43[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_43 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_43,
    P_GEND_TYPE_NMDTUP_TARR_43
  };
  static PRT_TYPE P_GEND_TYPE_43 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_43
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_44[] = 
  {
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_44[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_44 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_44,
    P_GEND_TYPE_NMDTUP_TARR_44
  };
  static PRT_TYPE P_GEND_TYPE_44 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_44
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_45[] = 
  {
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_45[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_45 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_45,
    P_GEND_TYPE_NMDTUP_TARR_45
  };
  static PRT_TYPE P_GEND_TYPE_45 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_45
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_46[] = 
  {
    "_result"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_46[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_46 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_46,
    P_GEND_TYPE_NMDTUP_TARR_46
  };
  static PRT_TYPE P_GEND_TYPE_46 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_46
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_47[] = 
  {
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_47[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_47 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_47,
    P_GEND_TYPE_NMDTUP_TARR_47
  };
  static PRT_TYPE P_GEND_TYPE_47 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_47
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_48[] = 
  {
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_48[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_48 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_48,
    P_GEND_TYPE_NMDTUP_TARR_48
  };
  static PRT_TYPE P_GEND_TYPE_48 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_48
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_49[] = 
  {
    "_seq"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_49[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_49 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_49,
    P_GEND_TYPE_NMDTUP_TARR_49
  };
  static PRT_TYPE P_GEND_TYPE_49 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_49
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_50[] = 
  {
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_50[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_50 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_50,
    P_GEND_TYPE_NMDTUP_TARR_50
  };
  static PRT_TYPE P_GEND_TYPE_50 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_50
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_51[] = 
  {
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_51[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_51 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_51,
    P_GEND_TYPE_NMDTUP_TARR_51
  };
  static PRT_TYPE P_GEND_TYPE_51 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_51
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_52[] = 
  {
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_52[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_52 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_52,
    P_GEND_TYPE_NMDTUP_TARR_52
  };
  static PRT_TYPE P_GEND_TYPE_52 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_52
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_53[] = 
  {
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_53[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_53 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_53,
    P_GEND_TYPE_NMDTUP_TARR_53
  };
  static PRT_TYPE P_GEND_TYPE_53 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_53
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_54[] = 
  {
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_54[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_54 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_54,
    P_GEND_TYPE_NMDTUP_TARR_54
  };
  static PRT_TYPE P_GEND_TYPE_54 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_54
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_55[] = 
  {
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_55[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_55 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_55,
    P_GEND_TYPE_NMDTUP_TARR_55
  };
  static PRT_TYPE P_GEND_TYPE_55 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_55
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_56[] = 
  {
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_56[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_56 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_56,
    P_GEND_TYPE_NMDTUP_TARR_56
  };
  static PRT_TYPE P_GEND_TYPE_56 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_56
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_57[] = 
  {
    "_time_boot_ms"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_57[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_57 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_57,
    P_GEND_TYPE_NMDTUP_TARR_57
  };
  static PRT_TYPE P_GEND_TYPE_57 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_57
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_58[] = 
  {
    "_ts1"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_58[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_58 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_58,
    P_GEND_TYPE_NMDTUP_TARR_58
  };
  static PRT_TYPE P_GEND_TYPE_58 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_58
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_59[] = 
  {
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_59[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_59 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_59,
    P_GEND_TYPE_NMDTUP_TARR_59
  };
  static PRT_TYPE P_GEND_TYPE_59 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_59
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_60[] = 
  {
    "_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_60[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_60 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_60,
    P_GEND_TYPE_NMDTUP_TARR_60
  };
  static PRT_TYPE P_GEND_TYPE_60 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_60
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_61[] = 
  {
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_61[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_61 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_61,
    P_GEND_TYPE_NMDTUP_TARR_61
  };
  static PRT_TYPE P_GEND_TYPE_61 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_61
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_62[] = 
  {
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_62[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_62 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_62,
    P_GEND_TYPE_NMDTUP_TARR_62
  };
  static PRT_TYPE P_GEND_TYPE_62 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_62
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_63[] = 
  {
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_63[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_63 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_63,
    P_GEND_TYPE_NMDTUP_TARR_63
  };
  static PRT_TYPE P_GEND_TYPE_63 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_63
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_64[] = 
  {
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_64[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_64 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_64,
    P_GEND_TYPE_NMDTUP_TARR_64
  };
  static PRT_TYPE P_GEND_TYPE_64 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_64
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_65[] = 
  {
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_65[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_65 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_65,
    P_GEND_TYPE_NMDTUP_TARR_65
  };
  static PRT_TYPE P_GEND_TYPE_65 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_65
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_66[] = 
  {
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_66[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_66 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_66,
    P_GEND_TYPE_NMDTUP_TARR_66
  };
  static PRT_TYPE P_GEND_TYPE_66 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_66
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_67[] = 
  {
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_67[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_67 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_67,
    P_GEND_TYPE_NMDTUP_TARR_67
  };
  static PRT_TYPE P_GEND_TYPE_67 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_67
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_68[] = 
  {
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_68[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_68 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_68,
    P_GEND_TYPE_NMDTUP_TARR_68
  };
  static PRT_TYPE P_GEND_TYPE_68 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_68
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_69[] = 
  {
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_69[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_69 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_69,
    P_GEND_TYPE_NMDTUP_TARR_69
  };
  static PRT_TYPE P_GEND_TYPE_69 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_69
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_70[] = 
  {
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_70[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_70 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_70,
    P_GEND_TYPE_NMDTUP_TARR_70
  };
  static PRT_TYPE P_GEND_TYPE_70 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_70
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_71[] = 
  {
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_71[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_71 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_71,
    P_GEND_TYPE_NMDTUP_TARR_71
  };
  static PRT_TYPE P_GEND_TYPE_71 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_71
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_72[] = 
  {
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_72[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_72 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_72,
    P_GEND_TYPE_NMDTUP_TARR_72
  };
  static PRT_TYPE P_GEND_TYPE_72 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_72
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_73[] = 
  {
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_73[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_73 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_73,
    P_GEND_TYPE_NMDTUP_TARR_73
  };
  static PRT_TYPE P_GEND_TYPE_73 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_73
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_74[] = 
  {
    "exp"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_74[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_74 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_74,
    P_GEND_TYPE_NMDTUP_TARR_74
  };
  static PRT_TYPE P_GEND_TYPE_74 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_74
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_75[] = 
  {
    "op1"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_75[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_75 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_75,
    P_GEND_TYPE_NMDTUP_TARR_75
  };
  static PRT_TYPE P_GEND_TYPE_75 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_75
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_76[] = 
  {
    "op2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_76[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_76 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_76,
    P_GEND_TYPE_NMDTUP_TARR_76
  };
  static PRT_TYPE P_GEND_TYPE_76 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_76
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_77[] = 
  {
    "rhs"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_77[] = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_77 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_77,
    P_GEND_TYPE_NMDTUP_TARR_77
  };
  static PRT_TYPE P_GEND_TYPE_77 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_77
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_78[] = 
  {
    "val"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_78[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_78 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_78,
    P_GEND_TYPE_NMDTUP_TARR_78
  };
  static PRT_TYPE P_GEND_TYPE_78 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_78
    }
  };
  static PRT_SEQTYPE P_GEND_TYPE_SEQ_79 = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_TYPE P_GEND_TYPE_79 = 
  {
    PRT_KIND_SEQ,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_79
    }
  };
  static PRT_SEQTYPE P_GEND_TYPE_SEQ_80 = 
  {
    &P_GEND_TYPE_6
  };
  static PRT_TYPE P_GEND_TYPE_80 = 
  {
    PRT_KIND_SEQ,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_80
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_81[] = 
  {
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_81[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_81 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_81,
    P_GEND_TYPE_NMDTUP_TARR_81
  };
  static PRT_TYPE P_GEND_TYPE_81 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_81
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_82[] = 
  {
    "_altitude",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_82[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_82 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_82,
    P_GEND_TYPE_NMDTUP_TARR_82
  };
  static PRT_TYPE P_GEND_TYPE_82 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_82
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_83[] = 
  {
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_83[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_83 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_83,
    P_GEND_TYPE_NMDTUP_TARR_83
  };
  static PRT_TYPE P_GEND_TYPE_83 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_83
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_84[] = 
  {
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_84[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_84 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_84,
    P_GEND_TYPE_NMDTUP_TARR_84
  };
  static PRT_TYPE P_GEND_TYPE_84 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_84
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_85[] = 
  {
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_85[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_85 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_85,
    P_GEND_TYPE_NMDTUP_TARR_85
  };
  static PRT_TYPE P_GEND_TYPE_85 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_85
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_86[] = 
  {
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_86[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_86 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_86,
    P_GEND_TYPE_NMDTUP_TARR_86
  };
  static PRT_TYPE P_GEND_TYPE_86 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_86
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_87[] = 
  {
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_87[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_87 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_87,
    P_GEND_TYPE_NMDTUP_TARR_87
  };
  static PRT_TYPE P_GEND_TYPE_87 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_87
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_88[] = 
  {
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_88[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_88 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_88,
    P_GEND_TYPE_NMDTUP_TARR_88
  };
  static PRT_TYPE P_GEND_TYPE_88 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_88
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_89[] = 
  {
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_89[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_89 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_89,
    P_GEND_TYPE_NMDTUP_TARR_89
  };
  static PRT_TYPE P_GEND_TYPE_89 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_89
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_90[] = 
  {
    "_command",
    "_result"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_90[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_90 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_90,
    P_GEND_TYPE_NMDTUP_TARR_90
  };
  static PRT_TYPE P_GEND_TYPE_90 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_90
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_91[] = 
  {
    "_control_request",
    "_ack"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_91[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_91 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_91,
    P_GEND_TYPE_NMDTUP_TARR_91
  };
  static PRT_TYPE P_GEND_TYPE_91 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_91
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_92[] = 
  {
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_92[] = 
  {
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_92 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_92,
    P_GEND_TYPE_NMDTUP_TARR_92
  };
  static PRT_TYPE P_GEND_TYPE_92 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_92
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_93[] = 
  {
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_93[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_93 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_93,
    P_GEND_TYPE_NMDTUP_TARR_93
  };
  static PRT_TYPE P_GEND_TYPE_93 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_93
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_94[] = 
  {
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_94[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_94 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_94,
    P_GEND_TYPE_NMDTUP_TARR_94
  };
  static PRT_TYPE P_GEND_TYPE_94 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_94
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_95[] = 
  {
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_95[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_95 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_95,
    P_GEND_TYPE_NMDTUP_TARR_95
  };
  static PRT_TYPE P_GEND_TYPE_95 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_95
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_96[] = 
  {
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_96[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_96 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_96,
    P_GEND_TYPE_NMDTUP_TARR_96
  };
  static PRT_TYPE P_GEND_TYPE_96 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_96
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_97[] = 
  {
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_97[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_97 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_97,
    P_GEND_TYPE_NMDTUP_TARR_97
  };
  static PRT_TYPE P_GEND_TYPE_97 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_97
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_98[] = 
  {
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_98[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_98 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_98,
    P_GEND_TYPE_NMDTUP_TARR_98
  };
  static PRT_TYPE P_GEND_TYPE_98 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_98
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_99[] = 
  {
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_99[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_99 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_99,
    P_GEND_TYPE_NMDTUP_TARR_99
  };
  static PRT_TYPE P_GEND_TYPE_99 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_99
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_100[] = 
  {
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_100[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_100 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_100,
    P_GEND_TYPE_NMDTUP_TARR_100
  };
  static PRT_TYPE P_GEND_TYPE_100 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_100
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_101[] = 
  {
    "_interval_us",
    "_message_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_101[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_101 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_101,
    P_GEND_TYPE_NMDTUP_TARR_101
  };
  static PRT_TYPE P_GEND_TYPE_101 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_101
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_102[] = 
  {
    "_key"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_102[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_102 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_102,
    P_GEND_TYPE_NMDTUP_TARR_102
  };
  static PRT_TYPE P_GEND_TYPE_102 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_102
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_103[] = 
  {
    "_lat",
    "_lon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_103[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_103 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_103,
    P_GEND_TYPE_NMDTUP_TARR_103
  };
  static PRT_TYPE P_GEND_TYPE_103 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_103
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_104[] = 
  {
    "_lon",
    "_grid_spacing"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_104[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_104 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_104,
    P_GEND_TYPE_NMDTUP_TARR_104
  };
  static PRT_TYPE P_GEND_TYPE_104 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_104
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_105[] = 
  {
    "_longitude",
    "_altitude"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_105[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_105 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_105,
    P_GEND_TYPE_NMDTUP_TARR_105
  };
  static PRT_TYPE P_GEND_TYPE_105 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_105
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_106[] = 
  {
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_106[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_106 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_106,
    P_GEND_TYPE_NMDTUP_TARR_106
  };
  static PRT_TYPE P_GEND_TYPE_106 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_106
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_107[] = 
  {
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_107[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_107 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_107,
    P_GEND_TYPE_NMDTUP_TARR_107
  };
  static PRT_TYPE P_GEND_TYPE_107 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_107
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_108[] = 
  {
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_108[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_108 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_108,
    P_GEND_TYPE_NMDTUP_TARR_108
  };
  static PRT_TYPE P_GEND_TYPE_108 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_108
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_109[] = 
  {
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_109[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_109 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_109,
    P_GEND_TYPE_NMDTUP_TARR_109
  };
  static PRT_TYPE P_GEND_TYPE_109 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_109
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_110[] = 
  {
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_110[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_110 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_110,
    P_GEND_TYPE_NMDTUP_TARR_110
  };
  static PRT_TYPE P_GEND_TYPE_110 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_110
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_111[] = 
  {
    "_num_logs",
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_111[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_111 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_111,
    P_GEND_TYPE_NMDTUP_TARR_111
  };
  static PRT_TYPE P_GEND_TYPE_111 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_111
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_112[] = 
  {
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_112[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_112 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_112,
    P_GEND_TYPE_NMDTUP_TARR_112
  };
  static PRT_TYPE P_GEND_TYPE_112 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_112
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_113[] = 
  {
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_113[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_113 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_113,
    P_GEND_TYPE_NMDTUP_TARR_113
  };
  static PRT_TYPE P_GEND_TYPE_113 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_113
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_114[] = 
  {
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_114[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_114 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_114,
    P_GEND_TYPE_NMDTUP_TARR_114
  };
  static PRT_TYPE P_GEND_TYPE_114 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_114
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_115[] = 
  {
    "_param_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_115[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_115 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_115,
    P_GEND_TYPE_NMDTUP_TARR_115
  };
  static PRT_TYPE P_GEND_TYPE_115 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_115
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_116[] = 
  {
    "_passkey"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_116[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_116 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_116,
    P_GEND_TYPE_NMDTUP_TARR_116
  };
  static PRT_TYPE P_GEND_TYPE_116 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_116
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_117[] = 
  {
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_117[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_117 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_117,
    P_GEND_TYPE_NMDTUP_TARR_117
  };
  static PRT_TYPE P_GEND_TYPE_117 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_117
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_118[] = 
  {
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_118[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_118 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_118,
    P_GEND_TYPE_NMDTUP_TARR_118
  };
  static PRT_TYPE P_GEND_TYPE_118 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_118
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_119[] = 
  {
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_119[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_119 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_119,
    P_GEND_TYPE_NMDTUP_TARR_119
  };
  static PRT_TYPE P_GEND_TYPE_119 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_119
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_120[] = 
  {
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_120[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_120 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_120,
    P_GEND_TYPE_NMDTUP_TARR_120
  };
  static PRT_TYPE P_GEND_TYPE_120 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_120
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_121[] = 
  {
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_121[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_121 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_121,
    P_GEND_TYPE_NMDTUP_TARR_121
  };
  static PRT_TYPE P_GEND_TYPE_121 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_121
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_122[] = 
  {
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_122[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_122 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_122,
    P_GEND_TYPE_NMDTUP_TARR_122
  };
  static PRT_TYPE P_GEND_TYPE_122 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_122
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_123[] = 
  {
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_123[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_123 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_123,
    P_GEND_TYPE_NMDTUP_TARR_123
  };
  static PRT_TYPE P_GEND_TYPE_123 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_123
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_124[] = 
  {
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_124[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_124 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_124,
    P_GEND_TYPE_NMDTUP_TARR_124
  };
  static PRT_TYPE P_GEND_TYPE_124 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_124
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_125[] = 
  {
    "_press_diff",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_125[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_125 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_125,
    P_GEND_TYPE_NMDTUP_TARR_125
  };
  static PRT_TYPE P_GEND_TYPE_125 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_125
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_126[] = 
  {
    "_press_diff2",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_126[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_126 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_126,
    P_GEND_TYPE_NMDTUP_TARR_126
  };
  static PRT_TYPE P_GEND_TYPE_126 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_126
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_127[] = 
  {
    "_req_stream_id",
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_127[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_127 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_127,
    P_GEND_TYPE_NMDTUP_TARR_127
  };
  static PRT_TYPE P_GEND_TYPE_127 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_127
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_128[] = 
  {
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_128[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_128 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_128,
    P_GEND_TYPE_NMDTUP_TARR_128
  };
  static PRT_TYPE P_GEND_TYPE_128 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_128
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_129[] = 
  {
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_129[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_129 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_129,
    P_GEND_TYPE_NMDTUP_TARR_129
  };
  static PRT_TYPE P_GEND_TYPE_129 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_129
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_130[] = 
  {
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_130[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_130 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_130,
    P_GEND_TYPE_NMDTUP_TARR_130
  };
  static PRT_TYPE P_GEND_TYPE_130 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_130
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_131[] = 
  {
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_131[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_131 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_131,
    P_GEND_TYPE_NMDTUP_TARR_131
  };
  static PRT_TYPE P_GEND_TYPE_131 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_131
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_132[] = 
  {
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_132[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_132 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_132,
    P_GEND_TYPE_NMDTUP_TARR_132
  };
  static PRT_TYPE P_GEND_TYPE_132 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_132
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_133[] = 
  {
    "_stream_id",
    "_on_off"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_133[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_133 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_133,
    P_GEND_TYPE_NMDTUP_TARR_133
  };
  static PRT_TYPE P_GEND_TYPE_133 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_133
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_134[] = 
  {
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_134[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_134 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_134,
    P_GEND_TYPE_NMDTUP_TARR_134
  };
  static PRT_TYPE P_GEND_TYPE_134 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_134
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_135[] = 
  {
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_135[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_135 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_135,
    P_GEND_TYPE_NMDTUP_TARR_135
  };
  static PRT_TYPE P_GEND_TYPE_135 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_135
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_136[] = 
  {
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_136[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_136 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_136,
    P_GEND_TYPE_NMDTUP_TARR_136
  };
  static PRT_TYPE P_GEND_TYPE_136 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_136
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_137[] = 
  {
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_137[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_137 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_137,
    P_GEND_TYPE_NMDTUP_TARR_137
  };
  static PRT_TYPE P_GEND_TYPE_137 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_137
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_138[] = 
  {
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_138[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_138 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_138,
    P_GEND_TYPE_NMDTUP_TARR_138
  };
  static PRT_TYPE P_GEND_TYPE_138 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_138
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_139[] = 
  {
    "_target_component",
    "_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_139[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_139 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_139,
    P_GEND_TYPE_NMDTUP_TARR_139
  };
  static PRT_TYPE P_GEND_TYPE_139 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_139
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_140[] = 
  {
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_140[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_140 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_140,
    P_GEND_TYPE_NMDTUP_TARR_140
  };
  static PRT_TYPE P_GEND_TYPE_140 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_140
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_141[] = 
  {
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_141[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_141 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_141,
    P_GEND_TYPE_NMDTUP_TARR_141
  };
  static PRT_TYPE P_GEND_TYPE_141 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_141
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_142[] = 
  {
    "_target_system",
    "_base_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_142[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_142 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_142,
    P_GEND_TYPE_NMDTUP_TARR_142
  };
  static PRT_TYPE P_GEND_TYPE_142 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_142
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_143[] = 
  {
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_143[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_143 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_143,
    P_GEND_TYPE_NMDTUP_TARR_143
  };
  static PRT_TYPE P_GEND_TYPE_143 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_143
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_144[] = 
  {
    "_tc1",
    "_ts1"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_144[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_144 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_144,
    P_GEND_TYPE_NMDTUP_TARR_144
  };
  static PRT_TYPE P_GEND_TYPE_144 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_144
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_145[] = 
  {
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_145[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_145 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_145,
    P_GEND_TYPE_NMDTUP_TARR_145
  };
  static PRT_TYPE P_GEND_TYPE_145 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_145
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_146[] = 
  {
    "_text"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_146[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_146 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_146,
    P_GEND_TYPE_NMDTUP_TARR_146
  };
  static PRT_TYPE P_GEND_TYPE_146 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_146
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_147[] = 
  {
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_147[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_147 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_147,
    P_GEND_TYPE_NMDTUP_TARR_147
  };
  static PRT_TYPE P_GEND_TYPE_147 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_147
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_148[] = 
  {
    "_time_unix_usec",
    "_time_boot_ms"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_148[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_148 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_148,
    P_GEND_TYPE_NMDTUP_TARR_148
  };
  static PRT_TYPE P_GEND_TYPE_148 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_148
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_149[] = 
  {
    "_time_usec",
    "_seq"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_149[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_149 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_149,
    P_GEND_TYPE_NMDTUP_TARR_149
  };
  static PRT_TYPE P_GEND_TYPE_149 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_149
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_150[] = 
  {
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_150[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_150 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_150,
    P_GEND_TYPE_NMDTUP_TARR_150
  };
  static PRT_TYPE P_GEND_TYPE_150 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_150
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_151[] = 
  {
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_151[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_151 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_151,
    P_GEND_TYPE_NMDTUP_TARR_151
  };
  static PRT_TYPE P_GEND_TYPE_151 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_151
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_152[] = 
  {
    "_value",
    "_ind"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_152[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_152 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_152,
    P_GEND_TYPE_NMDTUP_TARR_152
  };
  static PRT_TYPE P_GEND_TYPE_152 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_152
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_153[] = 
  {
    "_value"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_153[] = 
  {
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_153 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_153,
    P_GEND_TYPE_NMDTUP_TARR_153
  };
  static PRT_TYPE P_GEND_TYPE_153 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_153
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_154[] = 
  {
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_154[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_154 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_154,
    P_GEND_TYPE_NMDTUP_TARR_154
  };
  static PRT_TYPE P_GEND_TYPE_154 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_154
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_155[] = 
  {
    "_vservo",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_155[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_155 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_155,
    P_GEND_TYPE_NMDTUP_TARR_155
  };
  static PRT_TYPE P_GEND_TYPE_155 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_155
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_156[] = 
  {
    "_vtol_state",
    "_landed_state"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_156[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_156 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_156,
    P_GEND_TYPE_NMDTUP_TARR_156
  };
  static PRT_TYPE P_GEND_TYPE_156 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_156
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_157[] = 
  {
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_157[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_157 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_157,
    P_GEND_TYPE_NMDTUP_TARR_157
  };
  static PRT_TYPE P_GEND_TYPE_157 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_157
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_158[] = 
  {
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_158[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_158 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_158,
    P_GEND_TYPE_NMDTUP_TARR_158
  };
  static PRT_TYPE P_GEND_TYPE_158 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_158
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_159[] = 
  {
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_159[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_159 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_159,
    P_GEND_TYPE_NMDTUP_TARR_159
  };
  static PRT_TYPE P_GEND_TYPE_159 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_159
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_160[] = 
  {
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_160[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_160 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_160,
    P_GEND_TYPE_NMDTUP_TARR_160
  };
  static PRT_TYPE P_GEND_TYPE_160 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_160
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_161[] = 
  {
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_161[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_161 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_161,
    P_GEND_TYPE_NMDTUP_TARR_161
  };
  static PRT_TYPE P_GEND_TYPE_161 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_161
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_162[] = 
  {
    "index",
    "val"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_162[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_162 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_162,
    P_GEND_TYPE_NMDTUP_TARR_162
  };
  static PRT_TYPE P_GEND_TYPE_162 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_162
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_163[] = 
  {
    "lhs",
    "rhs"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_163[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_163 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_163,
    P_GEND_TYPE_NMDTUP_TARR_163
  };
  static PRT_TYPE P_GEND_TYPE_163 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_163
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_164[] = 
  {
    "mantissa",
    "exp"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_164[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_164 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_164,
    P_GEND_TYPE_NMDTUP_TARR_164
  };
  static PRT_TYPE P_GEND_TYPE_164 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_164
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_165[] = 
  {
    "op1",
    "op2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_165[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_165 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_165,
    P_GEND_TYPE_NMDTUP_TARR_165
  };
  static PRT_TYPE P_GEND_TYPE_165 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_165
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_166[] = 
  {
    "op2",
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_166[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_166 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_166,
    P_GEND_TYPE_NMDTUP_TARR_166
  };
  static PRT_TYPE P_GEND_TYPE_166 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_166
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_167[] = 
  {
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_167[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_167 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_167,
    P_GEND_TYPE_NMDTUP_TARR_167
  };
  static PRT_TYPE P_GEND_TYPE_167 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_167
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_168[] = 
  {
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_168[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_168 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_168,
    P_GEND_TYPE_NMDTUP_TARR_168
  };
  static PRT_TYPE P_GEND_TYPE_168 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_168
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_169[] = 
  {
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_169[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_169 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_169,
    P_GEND_TYPE_NMDTUP_TARR_169
  };
  static PRT_TYPE P_GEND_TYPE_169 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_169
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_170[] = 
  {
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_170[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_170 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_170,
    P_GEND_TYPE_NMDTUP_TARR_170
  };
  static PRT_TYPE P_GEND_TYPE_170 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_170
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_171[] = 
  {
    "_base_mode",
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_171[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_171 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_171,
    P_GEND_TYPE_NMDTUP_TARR_171
  };
  static PRT_TYPE P_GEND_TYPE_171 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_171
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_172[] = 
  {
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_172[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_172 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_172,
    P_GEND_TYPE_NMDTUP_TARR_172
  };
  static PRT_TYPE P_GEND_TYPE_172 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_172
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_173[] = 
  {
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_173[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_173 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_173,
    P_GEND_TYPE_NMDTUP_TARR_173
  };
  static PRT_TYPE P_GEND_TYPE_173 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_173
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_174[] = 
  {
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_174[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_174 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_174,
    P_GEND_TYPE_NMDTUP_TARR_174
  };
  static PRT_TYPE P_GEND_TYPE_174 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_174
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_175[] = 
  {
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_175[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_175 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_175,
    P_GEND_TYPE_NMDTUP_TARR_175
  };
  static PRT_TYPE P_GEND_TYPE_175 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_175
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_176[] = 
  {
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_176[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_176 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_176,
    P_GEND_TYPE_NMDTUP_TARR_176
  };
  static PRT_TYPE P_GEND_TYPE_176 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_176
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_177[] = 
  {
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_177[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_177 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_177,
    P_GEND_TYPE_NMDTUP_TARR_177
  };
  static PRT_TYPE P_GEND_TYPE_177 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_177
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_178[] = 
  {
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_178[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_178 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_178,
    P_GEND_TYPE_NMDTUP_TARR_178
  };
  static PRT_TYPE P_GEND_TYPE_178 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_178
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_179[] = 
  {
    "_climb",
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_179[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_179 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_179,
    P_GEND_TYPE_NMDTUP_TARR_179
  };
  static PRT_TYPE P_GEND_TYPE_179 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_179
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_180[] = 
  {
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_180[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_180 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_180,
    P_GEND_TYPE_NMDTUP_TARR_180
  };
  static PRT_TYPE P_GEND_TYPE_180 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_180
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_181[] = 
  {
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_181[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_181 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_181,
    P_GEND_TYPE_NMDTUP_TARR_181
  };
  static PRT_TYPE P_GEND_TYPE_181 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_181
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_182[] = 
  {
    "_controls",
    "_group_mlx"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_182[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_182 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_182,
    P_GEND_TYPE_NMDTUP_TARR_182
  };
  static PRT_TYPE P_GEND_TYPE_182 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_182
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_183[] = 
  {
    "_controls",
    "_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_183[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_183 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_183,
    P_GEND_TYPE_NMDTUP_TARR_183
  };
  static PRT_TYPE P_GEND_TYPE_183 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_183
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_184[] = 
  {
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_184[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_184 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_184,
    P_GEND_TYPE_NMDTUP_TARR_184
  };
  static PRT_TYPE P_GEND_TYPE_184 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_184
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_185[] = 
  {
    "_count",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_185[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_185 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_185,
    P_GEND_TYPE_NMDTUP_TARR_185
  };
  static PRT_TYPE P_GEND_TYPE_185 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_185
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_186[] = 
  {
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_186[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_186 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_186,
    P_GEND_TYPE_NMDTUP_TARR_186
  };
  static PRT_TYPE P_GEND_TYPE_186 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_186
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_187[] = 
  {
    "_custom_mode",
    "_target_system",
    "_base_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_187[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_187 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_187,
    P_GEND_TYPE_NMDTUP_TARR_187
  };
  static PRT_TYPE P_GEND_TYPE_187 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_187
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_188[] = 
  {
    "_data",
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_188[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_188 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_188,
    P_GEND_TYPE_NMDTUP_TARR_188
  };
  static PRT_TYPE P_GEND_TYPE_188 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_188
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_189[] = 
  {
    "_end",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_189[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_189 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_189,
    P_GEND_TYPE_NMDTUP_TARR_189
  };
  static PRT_TYPE P_GEND_TYPE_189 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_189
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_190[] = 
  {
    "_end_index",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_190[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_190 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_190,
    P_GEND_TYPE_NMDTUP_TARR_190
  };
  static PRT_TYPE P_GEND_TYPE_190 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_190
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_191[] = 
  {
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_191[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_191 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_191,
    P_GEND_TYPE_NMDTUP_TARR_191
  };
  static PRT_TYPE P_GEND_TYPE_191 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_191
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_192[] = 
  {
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_192[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_192 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_192,
    P_GEND_TYPE_NMDTUP_TARR_192
  };
  static PRT_TYPE P_GEND_TYPE_192 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_192
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_193[] = 
  {
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_193[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_193 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_193,
    P_GEND_TYPE_NMDTUP_TARR_193
  };
  static PRT_TYPE P_GEND_TYPE_193 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_193
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_194[] = 
  {
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_194[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_194 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_194,
    P_GEND_TYPE_NMDTUP_TARR_194
  };
  static PRT_TYPE P_GEND_TYPE_194 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_194
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_195[] = 
  {
    "_gcs_system_id",
    "_control_request",
    "_ack"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_195[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_195 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_195,
    P_GEND_TYPE_NMDTUP_TARR_195
  };
  static PRT_TYPE P_GEND_TYPE_195 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_195
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_196[] = 
  {
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_196[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_196 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_196,
    P_GEND_TYPE_NMDTUP_TARR_196
  };
  static PRT_TYPE P_GEND_TYPE_196 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_196
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_197[] = 
  {
    "_group_mlx",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_197[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_197 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_197,
    P_GEND_TYPE_NMDTUP_TARR_197
  };
  static PRT_TYPE P_GEND_TYPE_197 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_197
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_198[] = 
  {
    "_id",
    "_num_logs",
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_198[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_198 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_198,
    P_GEND_TYPE_NMDTUP_TARR_198
  };
  static PRT_TYPE P_GEND_TYPE_198 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_198
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_199[] = 
  {
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_199[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_199 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_199,
    P_GEND_TYPE_NMDTUP_TARR_199
  };
  static PRT_TYPE P_GEND_TYPE_199 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_199
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_200[] = 
  {
    "_id",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_200[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_200 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_200,
    P_GEND_TYPE_NMDTUP_TARR_200
  };
  static PRT_TYPE P_GEND_TYPE_200 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_200
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_201[] = 
  {
    "_lat",
    "_lon",
    "_grid_spacing"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_201[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_201 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_201,
    P_GEND_TYPE_NMDTUP_TARR_201
  };
  static PRT_TYPE P_GEND_TYPE_201 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_201
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_202[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_202[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_202 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_202,
    P_GEND_TYPE_NMDTUP_TARR_202
  };
  static PRT_TYPE P_GEND_TYPE_202 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_202
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_203[] = 
  {
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_203[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_203 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_203,
    P_GEND_TYPE_NMDTUP_TARR_203
  };
  static PRT_TYPE P_GEND_TYPE_203 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_203
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_204[] = 
  {
    "_longitude",
    "_altitude",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_204[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_204 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_204,
    P_GEND_TYPE_NMDTUP_TARR_204
  };
  static PRT_TYPE P_GEND_TYPE_204 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_204
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_205[] = 
  {
    "_message_rate",
    "_stream_id",
    "_on_off"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_205[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_205 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_205,
    P_GEND_TYPE_NMDTUP_TARR_205
  };
  static PRT_TYPE P_GEND_TYPE_205 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_205
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_206[] = 
  {
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_206[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_206 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_206,
    P_GEND_TYPE_NMDTUP_TARR_206
  };
  static PRT_TYPE P_GEND_TYPE_206 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_206
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_207[] = 
  {
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_207[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_207 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_207,
    P_GEND_TYPE_NMDTUP_TARR_207
  };
  static PRT_TYPE P_GEND_TYPE_207 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_207
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_208[] = 
  {
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_208[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_208 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_208,
    P_GEND_TYPE_NMDTUP_TARR_208
  };
  static PRT_TYPE P_GEND_TYPE_208 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_208
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_209[] = 
  {
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_209[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_209 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_209,
    P_GEND_TYPE_NMDTUP_TARR_209
  };
  static PRT_TYPE P_GEND_TYPE_209 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_209
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_210[] = 
  {
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_210[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_210 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_210,
    P_GEND_TYPE_NMDTUP_TARR_210
  };
  static PRT_TYPE P_GEND_TYPE_210 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_210
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_211[] = 
  {
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_211[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_211 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_211,
    P_GEND_TYPE_NMDTUP_TARR_211
  };
  static PRT_TYPE P_GEND_TYPE_211 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_211
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_212[] = 
  {
    "_press_abs",
    "_press_diff",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_212[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_212 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_212,
    P_GEND_TYPE_NMDTUP_TARR_212
  };
  static PRT_TYPE P_GEND_TYPE_212 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_212
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_213[] = 
  {
    "_press_diff1",
    "_press_diff2",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_213[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_213 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_213,
    P_GEND_TYPE_NMDTUP_TARR_213
  };
  static PRT_TYPE P_GEND_TYPE_213 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_213
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_214[] = 
  {
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_214[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_214 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_214,
    P_GEND_TYPE_NMDTUP_TARR_214
  };
  static PRT_TYPE P_GEND_TYPE_214 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_214
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_215[] = 
  {
    "_r",
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_215[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_215 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_215,
    P_GEND_TYPE_NMDTUP_TARR_215
  };
  static PRT_TYPE P_GEND_TYPE_215 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_215
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_216[] = 
  {
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_216[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_216 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_216,
    P_GEND_TYPE_NMDTUP_TARR_216
  };
  static PRT_TYPE P_GEND_TYPE_216 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_216
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_217[] = 
  {
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_217[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_217 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_217,
    P_GEND_TYPE_NMDTUP_TARR_217
  };
  static PRT_TYPE P_GEND_TYPE_217 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_217
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_218[] = 
  {
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_218[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_218 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_218,
    P_GEND_TYPE_NMDTUP_TARR_218
  };
  static PRT_TYPE P_GEND_TYPE_218 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_218
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_219[] = 
  {
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_219[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_219 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_219,
    P_GEND_TYPE_NMDTUP_TARR_219
  };
  static PRT_TYPE P_GEND_TYPE_219 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_219
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_220[] = 
  {
    "_seq",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_220[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_220 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_220,
    P_GEND_TYPE_NMDTUP_TARR_220
  };
  static PRT_TYPE P_GEND_TYPE_220 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_220
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_221[] = 
  {
    "_seqnr",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_221[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_221 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_221,
    P_GEND_TYPE_NMDTUP_TARR_221
  };
  static PRT_TYPE P_GEND_TYPE_221 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_221
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_222[] = 
  {
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_222[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_222 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_222,
    P_GEND_TYPE_NMDTUP_TARR_222
  };
  static PRT_TYPE P_GEND_TYPE_222 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_222
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_223[] = 
  {
    "_severity",
    "_text"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_223[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_223 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_223,
    P_GEND_TYPE_NMDTUP_TARR_223
  };
  static PRT_TYPE P_GEND_TYPE_223 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_223
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_224[] = 
  {
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_224[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_224 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_224,
    P_GEND_TYPE_NMDTUP_TARR_224
  };
  static PRT_TYPE P_GEND_TYPE_224 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_224
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_225[] = 
  {
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_225[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_225 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_225,
    P_GEND_TYPE_NMDTUP_TARR_225
  };
  static PRT_TYPE P_GEND_TYPE_225 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_225
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_226[] = 
  {
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_226[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_226 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_226,
    P_GEND_TYPE_NMDTUP_TARR_226
  };
  static PRT_TYPE P_GEND_TYPE_226 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_226
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_227[] = 
  {
    "_target_component",
    "_param_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_227[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_227 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_227,
    P_GEND_TYPE_NMDTUP_TARR_227
  };
  static PRT_TYPE P_GEND_TYPE_227 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_227
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_228[] = 
  {
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_228[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_228 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_228,
    P_GEND_TYPE_NMDTUP_TARR_228
  };
  static PRT_TYPE P_GEND_TYPE_228 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_228
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_229[] = 
  {
    "_target_component",
    "_req_stream_id",
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_229[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_229 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_229,
    P_GEND_TYPE_NMDTUP_TARR_229
  };
  static PRT_TYPE P_GEND_TYPE_229 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_229
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_230[] = 
  {
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_230[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_230 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_230,
    P_GEND_TYPE_NMDTUP_TARR_230
  };
  static PRT_TYPE P_GEND_TYPE_230 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_230
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_231[] = 
  {
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_231[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_231 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_231,
    P_GEND_TYPE_NMDTUP_TARR_231
  };
  static PRT_TYPE P_GEND_TYPE_231 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_231
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_232[] = 
  {
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_232[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_232 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_232,
    P_GEND_TYPE_NMDTUP_TARR_232
  };
  static PRT_TYPE P_GEND_TYPE_232 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_232
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_233[] = 
  {
    "_target_system",
    "_target_component",
    "_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_233[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_233 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_233,
    P_GEND_TYPE_NMDTUP_TARR_233
  };
  static PRT_TYPE P_GEND_TYPE_233 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_233
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_234[] = 
  {
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_234[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_234 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_234,
    P_GEND_TYPE_NMDTUP_TARR_234
  };
  static PRT_TYPE P_GEND_TYPE_234 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_234
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_235[] = 
  {
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_235[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_235 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_235,
    P_GEND_TYPE_NMDTUP_TARR_235
  };
  static PRT_TYPE P_GEND_TYPE_235 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_235
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_236[] = 
  {
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_236[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_236 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_236,
    P_GEND_TYPE_NMDTUP_TARR_236
  };
  static PRT_TYPE P_GEND_TYPE_236 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_236
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_237[] = 
  {
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_237[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_237 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_237,
    P_GEND_TYPE_NMDTUP_TARR_237
  };
  static PRT_TYPE P_GEND_TYPE_237 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_237
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_238[] = 
  {
    "_time_boot_ms",
    "_value",
    "_ind"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_238[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_238 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_238,
    P_GEND_TYPE_NMDTUP_TARR_238
  };
  static PRT_TYPE P_GEND_TYPE_238 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_238
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_239[] = 
  {
    "_transfer_type",
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_239[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_239 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_239,
    P_GEND_TYPE_NMDTUP_TARR_239
  };
  static PRT_TYPE P_GEND_TYPE_239 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_239
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_240[] = 
  {
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_240[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_240 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_240,
    P_GEND_TYPE_NMDTUP_TARR_240
  };
  static PRT_TYPE P_GEND_TYPE_240 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_240
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_241[] = 
  {
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_241[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_241 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_241,
    P_GEND_TYPE_NMDTUP_TARR_241
  };
  static PRT_TYPE P_GEND_TYPE_241 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_241
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_242[] = 
  {
    "_type",
    "_value"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_242[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_242 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_242,
    P_GEND_TYPE_NMDTUP_TARR_242
  };
  static PRT_TYPE P_GEND_TYPE_242 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_242
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_243[] = 
  {
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_243[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_243 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_243,
    P_GEND_TYPE_NMDTUP_TARR_243
  };
  static PRT_TYPE P_GEND_TYPE_243 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_243
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_244[] = 
  {
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_244[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_244 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_244,
    P_GEND_TYPE_NMDTUP_TARR_244
  };
  static PRT_TYPE P_GEND_TYPE_244 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_244
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_245[] = 
  {
    "_vcc",
    "_vservo",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_245[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_245 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_245,
    P_GEND_TYPE_NMDTUP_TARR_245
  };
  static PRT_TYPE P_GEND_TYPE_245 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_245
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_246[] = 
  {
    "_version",
    "_passkey"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_246[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_246 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_246,
    P_GEND_TYPE_NMDTUP_TARR_246
  };
  static PRT_TYPE P_GEND_TYPE_246 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_246
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_247[] = 
  {
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_247[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_247 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_247,
    P_GEND_TYPE_NMDTUP_TARR_247
  };
  static PRT_TYPE P_GEND_TYPE_247 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_247
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_248[] = 
  {
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_248[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_248 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_248,
    P_GEND_TYPE_NMDTUP_TARR_248
  };
  static PRT_TYPE P_GEND_TYPE_248 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_248
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_249[] = 
  {
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_249[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_249 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_249,
    P_GEND_TYPE_NMDTUP_TARR_249
  };
  static PRT_TYPE P_GEND_TYPE_249 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_249
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_250[] = 
  {
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_250[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_250 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_250,
    P_GEND_TYPE_NMDTUP_TARR_250
  };
  static PRT_TYPE P_GEND_TYPE_250 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_250
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_251[] = 
  {
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_251[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_251 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_251,
    P_GEND_TYPE_NMDTUP_TARR_251
  };
  static PRT_TYPE P_GEND_TYPE_251 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_251
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_252[] = 
  {
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_252[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_252 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_252,
    P_GEND_TYPE_NMDTUP_TARR_252
  };
  static PRT_TYPE P_GEND_TYPE_252 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_252
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_253[] = 
  {
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_253[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_253 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_253,
    P_GEND_TYPE_NMDTUP_TARR_253
  };
  static PRT_TYPE P_GEND_TYPE_253 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_253
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_254[] = 
  {
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_254[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_254 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_254,
    P_GEND_TYPE_NMDTUP_TARR_254
  };
  static PRT_TYPE P_GEND_TYPE_254 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_254
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_255[] = 
  {
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_255[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_255 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_255,
    P_GEND_TYPE_NMDTUP_TARR_255
  };
  static PRT_TYPE P_GEND_TYPE_255 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_255
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_256[] = 
  {
    "_z",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_256[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_256 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_256,
    P_GEND_TYPE_NMDTUP_TARR_256
  };
  static PRT_TYPE P_GEND_TYPE_256 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_256
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_257[] = 
  {
    "op1",
    "op2",
    "epsilon"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_257[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_257 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_257,
    P_GEND_TYPE_NMDTUP_TARR_257
  };
  static PRT_TYPE P_GEND_TYPE_257 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_257
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_258[] = 
  {
    "_alt",
    "_climb",
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_258[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_258 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_258,
    P_GEND_TYPE_NMDTUP_TARR_258
  };
  static PRT_TYPE P_GEND_TYPE_258 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_258
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_259[] = 
  {
    "_altitude_local",
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_259[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_259 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_259,
    P_GEND_TYPE_NMDTUP_TARR_259
  };
  static PRT_TYPE P_GEND_TYPE_259 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_259
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_260[] = 
  {
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_260[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_260 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_260,
    P_GEND_TYPE_NMDTUP_TARR_260
  };
  static PRT_TYPE P_GEND_TYPE_260 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_260
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_261[] = 
  {
    "_autopilot",
    "_base_mode",
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_261[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_261 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_261,
    P_GEND_TYPE_NMDTUP_TARR_261
  };
  static PRT_TYPE P_GEND_TYPE_261 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_261
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_262[] = 
  {
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_262[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_262 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_262,
    P_GEND_TYPE_NMDTUP_TARR_262
  };
  static PRT_TYPE P_GEND_TYPE_262 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_262
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_263[] = 
  {
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_263[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_263 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_263,
    P_GEND_TYPE_NMDTUP_TARR_263
  };
  static PRT_TYPE P_GEND_TYPE_263 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_263
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_264[] = 
  {
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_264[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_264 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_264,
    P_GEND_TYPE_NMDTUP_TARR_264
  };
  static PRT_TYPE P_GEND_TYPE_264 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_264
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_265[] = 
  {
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_265[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_265 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_265,
    P_GEND_TYPE_NMDTUP_TARR_265
  };
  static PRT_TYPE P_GEND_TYPE_265 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_265
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_266[] = 
  {
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_266[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_266 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_266,
    P_GEND_TYPE_NMDTUP_TARR_266
  };
  static PRT_TYPE P_GEND_TYPE_266 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_266
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_267[] = 
  {
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_267[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_267 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_267,
    P_GEND_TYPE_NMDTUP_TARR_267
  };
  static PRT_TYPE P_GEND_TYPE_267 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_267
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_268[] = 
  {
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_268[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_268 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_268,
    P_GEND_TYPE_NMDTUP_TARR_268
  };
  static PRT_TYPE P_GEND_TYPE_268 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_268
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_269[] = 
  {
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_269[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_269 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_269,
    P_GEND_TYPE_NMDTUP_TARR_269
  };
  static PRT_TYPE P_GEND_TYPE_269 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_269
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_270[] = 
  {
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_270[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_270 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_270,
    P_GEND_TYPE_NMDTUP_TARR_270
  };
  static PRT_TYPE P_GEND_TYPE_270 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_270
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_271[] = 
  {
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_271[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_271 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_271,
    P_GEND_TYPE_NMDTUP_TARR_271
  };
  static PRT_TYPE P_GEND_TYPE_271 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_271
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_272[] = 
  {
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_272[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_272 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_272,
    P_GEND_TYPE_NMDTUP_TARR_272
  };
  static PRT_TYPE P_GEND_TYPE_272 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_272
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_273[] = 
  {
    "_control_request",
    "_version",
    "_passkey"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_273[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_273 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_273,
    P_GEND_TYPE_NMDTUP_TARR_273
  };
  static PRT_TYPE P_GEND_TYPE_273 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_273
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_274[] = 
  {
    "_count",
    "_id",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_274[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_274 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_274,
    P_GEND_TYPE_NMDTUP_TARR_274
  };
  static PRT_TYPE P_GEND_TYPE_274 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_274
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_275[] = 
  {
    "_current_height",
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_275[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_275 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_275,
    P_GEND_TYPE_NMDTUP_TARR_275
  };
  static PRT_TYPE P_GEND_TYPE_275 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_275
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_276[] = 
  {
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_276[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_276 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_276,
    P_GEND_TYPE_NMDTUP_TARR_276
  };
  static PRT_TYPE P_GEND_TYPE_276 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_276
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_277[] = 
  {
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_277[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_277 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_277,
    P_GEND_TYPE_NMDTUP_TARR_277
  };
  static PRT_TYPE P_GEND_TYPE_277 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_277
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_278[] = 
  {
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_278[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_278 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_278,
    P_GEND_TYPE_NMDTUP_TARR_278
  };
  static PRT_TYPE P_GEND_TYPE_278 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_278
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_279[] = 
  {
    "_flags",
    "_controls",
    "_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_279[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_279 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_279,
    P_GEND_TYPE_NMDTUP_TARR_279
  };
  static PRT_TYPE P_GEND_TYPE_279 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_279
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_280[] = 
  {
    "_flags",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_280[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_280 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_280,
    P_GEND_TYPE_NMDTUP_TARR_280
  };
  static PRT_TYPE P_GEND_TYPE_280 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_280
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_281[] = 
  {
    "_flags",
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_281[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_281 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_281,
    P_GEND_TYPE_NMDTUP_TARR_281
  };
  static PRT_TYPE P_GEND_TYPE_281 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_281
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_282[] = 
  {
    "_flow_x",
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_282[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_282 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_282,
    P_GEND_TYPE_NMDTUP_TARR_282
  };
  static PRT_TYPE P_GEND_TYPE_282 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_282
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_283[] = 
  {
    "_grid_spacing",
    "_data",
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_283[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_283 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_283,
    P_GEND_TYPE_NMDTUP_TARR_283
  };
  static PRT_TYPE P_GEND_TYPE_283 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_283
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_284[] = 
  {
    "_horizontal_minimum_delta",
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_284[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_284 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_284,
    P_GEND_TYPE_NMDTUP_TARR_284
  };
  static PRT_TYPE P_GEND_TYPE_284 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_284
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_285[] = 
  {
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_285[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_285 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_285,
    P_GEND_TYPE_NMDTUP_TARR_285
  };
  static PRT_TYPE P_GEND_TYPE_285 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_285
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_286[] = 
  {
    "_id",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_286[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_286 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_286,
    P_GEND_TYPE_NMDTUP_TARR_286
  };
  static PRT_TYPE P_GEND_TYPE_286 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_286
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_287[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_287[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_287 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_287,
    P_GEND_TYPE_NMDTUP_TARR_287
  };
  static PRT_TYPE P_GEND_TYPE_287 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_287
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_288[] = 
  {
    "_mask",
    "_lat",
    "_lon",
    "_grid_spacing"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_288[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_288 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_288,
    P_GEND_TYPE_NMDTUP_TARR_288
  };
  static PRT_TYPE P_GEND_TYPE_288 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_288
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_289[] = 
  {
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_289[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_289 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_289,
    P_GEND_TYPE_NMDTUP_TARR_289
  };
  static PRT_TYPE P_GEND_TYPE_289 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_289
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_290[] = 
  {
    "_p2x",
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_290[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_290 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_290,
    P_GEND_TYPE_NMDTUP_TARR_290
  };
  static PRT_TYPE P_GEND_TYPE_290 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_290
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_291[] = 
  {
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_291[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_291 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_291,
    P_GEND_TYPE_NMDTUP_TARR_291
  };
  static PRT_TYPE P_GEND_TYPE_291 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_291
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_292[] = 
  {
    "_packets",
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_292[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_292 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_292,
    P_GEND_TYPE_NMDTUP_TARR_292
  };
  static PRT_TYPE P_GEND_TYPE_292 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_292
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_293[] = 
  {
    "_param_index",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_293[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_293 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_293,
    P_GEND_TYPE_NMDTUP_TARR_293
  };
  static PRT_TYPE P_GEND_TYPE_293 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_293
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_294[] = 
  {
    "_pitchspeed",
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_294[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_294 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_294,
    P_GEND_TYPE_NMDTUP_TARR_294
  };
  static PRT_TYPE P_GEND_TYPE_294 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_294
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_295[] = 
  {
    "_press_abs",
    "_press_diff1",
    "_press_diff2",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_295[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_295 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_295,
    P_GEND_TYPE_NMDTUP_TARR_295
  };
  static PRT_TYPE P_GEND_TYPE_295 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_295
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_296[] = 
  {
    "_q4",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_296[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_296 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_296,
    P_GEND_TYPE_NMDTUP_TARR_296
  };
  static PRT_TYPE P_GEND_TYPE_296 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_296
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_297[] = 
  {
    "_remrssi",
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_297[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_297 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_297,
    P_GEND_TYPE_NMDTUP_TARR_297
  };
  static PRT_TYPE P_GEND_TYPE_297 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_297
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_298[] = 
  {
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_298[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_298 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_298,
    P_GEND_TYPE_NMDTUP_TARR_298
  };
  static PRT_TYPE P_GEND_TYPE_298 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_298
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_299[] = 
  {
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_299[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_299 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_299,
    P_GEND_TYPE_NMDTUP_TARR_299
  };
  static PRT_TYPE P_GEND_TYPE_299 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_299
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_300[] = 
  {
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_300[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_300 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_300,
    P_GEND_TYPE_NMDTUP_TARR_300
  };
  static PRT_TYPE P_GEND_TYPE_300 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_300
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_301[] = 
  {
    "_size",
    "_id",
    "_num_logs",
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_301[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_301 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_301,
    P_GEND_TYPE_NMDTUP_TARR_301
  };
  static PRT_TYPE P_GEND_TYPE_301 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_301
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_302[] = 
  {
    "_size_x",
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_302[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_302 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_302,
    P_GEND_TYPE_NMDTUP_TARR_302
  };
  static PRT_TYPE P_GEND_TYPE_302 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_302
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_303[] = 
  {
    "_start",
    "_end",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_303[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_303 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_303,
    P_GEND_TYPE_NMDTUP_TARR_303
  };
  static PRT_TYPE P_GEND_TYPE_303 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_303
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_304[] = 
  {
    "_start_index",
    "_end_index",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_304[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_304 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_304,
    P_GEND_TYPE_NMDTUP_TARR_304
  };
  static PRT_TYPE P_GEND_TYPE_304 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_304
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_305[] = 
  {
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_305[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_305 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_305,
    P_GEND_TYPE_NMDTUP_TARR_305
  };
  static PRT_TYPE P_GEND_TYPE_305 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_305
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_306[] = 
  {
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_306[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_306 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_306,
    P_GEND_TYPE_NMDTUP_TARR_306
  };
  static PRT_TYPE P_GEND_TYPE_306 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_306
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_307[] = 
  {
    "_target_component",
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_307[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_307 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_307,
    P_GEND_TYPE_NMDTUP_TARR_307
  };
  static PRT_TYPE P_GEND_TYPE_307 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_307
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_308[] = 
  {
    "_target_component",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_308[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_308 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_308,
    P_GEND_TYPE_NMDTUP_TARR_308
  };
  static PRT_TYPE P_GEND_TYPE_308 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_308
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_309[] = 
  {
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_309[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_309 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_309,
    P_GEND_TYPE_NMDTUP_TARR_309
  };
  static PRT_TYPE P_GEND_TYPE_309 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_309
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_310[] = 
  {
    "_target_system",
    "_target_component",
    "_param_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_310[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_310 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_310,
    P_GEND_TYPE_NMDTUP_TARR_310
  };
  static PRT_TYPE P_GEND_TYPE_310 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_310
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_311[] = 
  {
    "_target_system",
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_311[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_311 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_311,
    P_GEND_TYPE_NMDTUP_TARR_311
  };
  static PRT_TYPE P_GEND_TYPE_311 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_311
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_312[] = 
  {
    "_target_system",
    "_target_component",
    "_req_stream_id",
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_312[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_312 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_312,
    P_GEND_TYPE_NMDTUP_TARR_312
  };
  static PRT_TYPE P_GEND_TYPE_312 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_312
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_313[] = 
  {
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_313[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_313 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_313,
    P_GEND_TYPE_NMDTUP_TARR_313
  };
  static PRT_TYPE P_GEND_TYPE_313 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_313
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_314[] = 
  {
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_314[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_314 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_314,
    P_GEND_TYPE_NMDTUP_TARR_314
  };
  static PRT_TYPE P_GEND_TYPE_314 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_314
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_315[] = 
  {
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_315[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_315 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_315,
    P_GEND_TYPE_NMDTUP_TARR_315
  };
  static PRT_TYPE P_GEND_TYPE_315 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_315
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_316[] = 
  {
    "_time_boot_ms",
    "_press_abs",
    "_press_diff",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_316[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_316 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_316,
    P_GEND_TYPE_NMDTUP_TARR_316
  };
  static PRT_TYPE P_GEND_TYPE_316 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_316
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_317[] = 
  {
    "_time_boot_ms",
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_317[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_317 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_317,
    P_GEND_TYPE_NMDTUP_TARR_317
  };
  static PRT_TYPE P_GEND_TYPE_317 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_317
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_318[] = 
  {
    "_time_boot_ms",
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_318[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_318 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_318,
    P_GEND_TYPE_NMDTUP_TARR_318
  };
  static PRT_TYPE P_GEND_TYPE_318 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_318
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_319[] = 
  {
    "_time_usec",
    "_controls",
    "_group_mlx"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_319[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_319 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_319,
    P_GEND_TYPE_NMDTUP_TARR_319
  };
  static PRT_TYPE P_GEND_TYPE_319 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_319
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_320[] = 
  {
    "_time_usec",
    "_seq",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_320[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_320 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_320,
    P_GEND_TYPE_NMDTUP_TARR_320
  };
  static PRT_TYPE P_GEND_TYPE_320 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_320
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_321[] = 
  {
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_321[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_321 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_321,
    P_GEND_TYPE_NMDTUP_TARR_321
  };
  static PRT_TYPE P_GEND_TYPE_321 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_321
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_322[] = 
  {
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_322[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_322 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_322,
    P_GEND_TYPE_NMDTUP_TARR_322
  };
  static PRT_TYPE P_GEND_TYPE_322 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_322
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_323[] = 
  {
    "_type",
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_323[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_323 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_323,
    P_GEND_TYPE_NMDTUP_TARR_323
  };
  static PRT_TYPE P_GEND_TYPE_323 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_323
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_324[] = 
  {
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_324[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_324 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_324,
    P_GEND_TYPE_NMDTUP_TARR_324
  };
  static PRT_TYPE P_GEND_TYPE_324 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_324
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_325[] = 
  {
    "_usec",
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_325[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_325 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_325,
    P_GEND_TYPE_NMDTUP_TARR_325
  };
  static PRT_TYPE P_GEND_TYPE_325 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_325
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_326[] = 
  {
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_326[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_326 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_326,
    P_GEND_TYPE_NMDTUP_TARR_326
  };
  static PRT_TYPE P_GEND_TYPE_326 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_326
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_327[] = 
  {
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_327[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_327 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_327,
    P_GEND_TYPE_NMDTUP_TARR_327
  };
  static PRT_TYPE P_GEND_TYPE_327 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_327
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_328[] = 
  {
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_328[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_328 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_328,
    P_GEND_TYPE_NMDTUP_TARR_328
  };
  static PRT_TYPE P_GEND_TYPE_328 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_328
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_329[] = 
  {
    "_ver",
    "_type",
    "_value"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_329[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_329 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_329,
    P_GEND_TYPE_NMDTUP_TARR_329
  };
  static PRT_TYPE P_GEND_TYPE_329 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_329
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_330[] = 
  {
    "_vibration_z",
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_330[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_330 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_330,
    P_GEND_TYPE_NMDTUP_TARR_330
  };
  static PRT_TYPE P_GEND_TYPE_330 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_330
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_331[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_331[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_331 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_331,
    P_GEND_TYPE_NMDTUP_TARR_331
  };
  static PRT_TYPE P_GEND_TYPE_331 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_331
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_332[] = 
  {
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_332[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_332 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_332,
    P_GEND_TYPE_NMDTUP_TARR_332
  };
  static PRT_TYPE P_GEND_TYPE_332 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_332
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_333[] = 
  {
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_333[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_333 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_333,
    P_GEND_TYPE_NMDTUP_TARR_333
  };
  static PRT_TYPE P_GEND_TYPE_333 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_333
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_334[] = 
  {
    "_xtrack_error",
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_334[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_334 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_334,
    P_GEND_TYPE_NMDTUP_TARR_334
  };
  static PRT_TYPE P_GEND_TYPE_334 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_334
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_335[] = 
  {
    "_y",
    "_z",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_335[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_335 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_335,
    P_GEND_TYPE_NMDTUP_TARR_335
  };
  static PRT_TYPE P_GEND_TYPE_335 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_335
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_336[] = 
  {
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_336[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_336 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_336,
    P_GEND_TYPE_NMDTUP_TARR_336
  };
  static PRT_TYPE P_GEND_TYPE_336 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_336
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_337[] = 
  {
    "_yaw",
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_337[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_337 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_337,
    P_GEND_TYPE_NMDTUP_TARR_337
  };
  static PRT_TYPE P_GEND_TYPE_337 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_337
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_338[] = 
  {
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_338[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_338 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_338,
    P_GEND_TYPE_NMDTUP_TARR_338
  };
  static PRT_TYPE P_GEND_TYPE_338 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_338
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_339[] = 
  {
    "_z",
    "_r",
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_339[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_339 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_339,
    P_GEND_TYPE_NMDTUP_TARR_339
  };
  static PRT_TYPE P_GEND_TYPE_339 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_339
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_340[] = 
  {
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_340[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_340 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_340,
    P_GEND_TYPE_NMDTUP_TARR_340
  };
  static PRT_TYPE P_GEND_TYPE_340 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_340
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_341[] = 
  {
    "_z",
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_341[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_341 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_341,
    P_GEND_TYPE_NMDTUP_TARR_341
  };
  static PRT_TYPE P_GEND_TYPE_341 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_341
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_342[] = 
  {
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_342[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_342 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_342,
    P_GEND_TYPE_NMDTUP_TARR_342
  };
  static PRT_TYPE P_GEND_TYPE_342 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_342
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_343[] = 
  {
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_343[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_343 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_343,
    P_GEND_TYPE_NMDTUP_TARR_343
  };
  static PRT_TYPE P_GEND_TYPE_343 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_343
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_344[] = 
  {
    "_address",
    "_ver",
    "_type",
    "_value"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_344[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_344 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_344,
    P_GEND_TYPE_NMDTUP_TARR_344
  };
  static PRT_TYPE P_GEND_TYPE_344 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_344
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_345[] = 
  {
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_345[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_345 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_345,
    P_GEND_TYPE_NMDTUP_TARR_345
  };
  static PRT_TYPE P_GEND_TYPE_345 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_345
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_346[] = 
  {
    "_altitude_amsl",
    "_altitude_local",
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_346[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_346 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_346,
    P_GEND_TYPE_NMDTUP_TARR_346
  };
  static PRT_TYPE P_GEND_TYPE_346 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_346
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_347[] = 
  {
    "_altitude_minimum_delta",
    "_horizontal_minimum_delta",
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_347[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_347 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_347,
    P_GEND_TYPE_NMDTUP_TARR_347
  };
  static PRT_TYPE P_GEND_TYPE_347 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_347
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_348[] = 
  {
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_348[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_348 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_348,
    P_GEND_TYPE_NMDTUP_TARR_348
  };
  static PRT_TYPE P_GEND_TYPE_348 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_348
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_349[] = 
  {
    "_aspd_error",
    "_xtrack_error",
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_349[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_349 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_349,
    P_GEND_TYPE_NMDTUP_TARR_349
  };
  static PRT_TYPE P_GEND_TYPE_349 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_349
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_350[] = 
  {
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_350[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_350 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_350,
    P_GEND_TYPE_NMDTUP_TARR_350
  };
  static PRT_TYPE P_GEND_TYPE_350 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_350
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_351[] = 
  {
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_351[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_351 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_351,
    P_GEND_TYPE_NMDTUP_TARR_351
  };
  static PRT_TYPE P_GEND_TYPE_351 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_351
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_352[] = 
  {
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_352[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_352 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_352,
    P_GEND_TYPE_NMDTUP_TARR_352
  };
  static PRT_TYPE P_GEND_TYPE_352 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_352
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_353[] = 
  {
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_353[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_353 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_353,
    P_GEND_TYPE_NMDTUP_TARR_353
  };
  static PRT_TYPE P_GEND_TYPE_353 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_353
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_354[] = 
  {
    "_body_yaw_rate",
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_354[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_354 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_354,
    P_GEND_TYPE_NMDTUP_TARR_354
  };
  static PRT_TYPE P_GEND_TYPE_354 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_354
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_355[] = 
  {
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_355[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_355 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_355,
    P_GEND_TYPE_NMDTUP_TARR_355
  };
  static PRT_TYPE P_GEND_TYPE_355 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_355
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_356[] = 
  {
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_356[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_356 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_356,
    P_GEND_TYPE_NMDTUP_TARR_356
  };
  static PRT_TYPE P_GEND_TYPE_356 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_356
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_357[] = 
  {
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_357[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_357 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_357,
    P_GEND_TYPE_NMDTUP_TARR_357
  };
  static PRT_TYPE P_GEND_TYPE_357 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_357
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_358[] = 
  {
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_358[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_358 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_358,
    P_GEND_TYPE_NMDTUP_TARR_358
  };
  static PRT_TYPE P_GEND_TYPE_358 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_358
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_359[] = 
  {
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_359[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_359 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_359,
    P_GEND_TYPE_NMDTUP_TARR_359
  };
  static PRT_TYPE P_GEND_TYPE_359 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_359
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_360[] = 
  {
    "_controls",
    "_group_mlx",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_360[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_360 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_360,
    P_GEND_TYPE_NMDTUP_TARR_360
  };
  static PRT_TYPE P_GEND_TYPE_360 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_360
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_361[] = 
  {
    "_current_battery",
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_361[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_361 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_361,
    P_GEND_TYPE_NMDTUP_TARR_361
  };
  static PRT_TYPE P_GEND_TYPE_361 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_361
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_362[] = 
  {
    "_current_distance",
    "_type",
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_362[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_362 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_362,
    P_GEND_TYPE_NMDTUP_TARR_362
  };
  static PRT_TYPE P_GEND_TYPE_362 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_362
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_363[] = 
  {
    "_device",
    "_flags",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_363[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_363 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_363,
    P_GEND_TYPE_NMDTUP_TARR_363
  };
  static PRT_TYPE P_GEND_TYPE_363 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_363
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_364[] = 
  {
    "_distance",
    "_size_x",
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_364[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_364 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_364,
    P_GEND_TYPE_NMDTUP_TARR_364
  };
  static PRT_TYPE P_GEND_TYPE_364 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_364
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_365[] = 
  {
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_365[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_365 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_365,
    P_GEND_TYPE_NMDTUP_TARR_365
  };
  static PRT_TYPE P_GEND_TYPE_365 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_365
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_366[] = 
  {
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_366[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_366 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_366,
    P_GEND_TYPE_NMDTUP_TARR_366
  };
  static PRT_TYPE P_GEND_TYPE_366 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_366
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_367[] = 
  {
    "_ground_distance",
    "_flow_x",
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_367[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_367 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_367,
    P_GEND_TYPE_NMDTUP_TARR_367
  };
  static PRT_TYPE P_GEND_TYPE_367 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_367
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_368[] = 
  {
    "_groundspeed",
    "_alt",
    "_climb",
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_368[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_368 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_368,
    P_GEND_TYPE_NMDTUP_TARR_368
  };
  static PRT_TYPE P_GEND_TYPE_368 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_368
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_369[] = 
  {
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_369[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_369 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_369,
    P_GEND_TYPE_NMDTUP_TARR_369
  };
  static PRT_TYPE P_GEND_TYPE_369 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_369
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_370[] = 
  {
    "_height",
    "_packets",
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_370[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_370 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_370,
    P_GEND_TYPE_NMDTUP_TARR_370
  };
  static PRT_TYPE P_GEND_TYPE_370 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_370
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_371[] = 
  {
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_371[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_371 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_371,
    P_GEND_TYPE_NMDTUP_TARR_371
  };
  static PRT_TYPE P_GEND_TYPE_371 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_371
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_372[] = 
  {
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_372[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_372 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_372,
    P_GEND_TYPE_NMDTUP_TARR_372
  };
  static PRT_TYPE P_GEND_TYPE_372 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_372
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_373[] = 
  {
    "_lon",
    "_grid_spacing",
    "_data",
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_373[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_373 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_373,
    P_GEND_TYPE_NMDTUP_TARR_373
  };
  static PRT_TYPE P_GEND_TYPE_373 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_373
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_374[] = 
  {
    "_ofs",
    "_count",
    "_id",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_374[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_374 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_374,
    P_GEND_TYPE_NMDTUP_TARR_374
  };
  static PRT_TYPE P_GEND_TYPE_374 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_374
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_375[] = 
  {
    "_ofs",
    "_id",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_375[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_375 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_375,
    P_GEND_TYPE_NMDTUP_TARR_375
  };
  static PRT_TYPE P_GEND_TYPE_375 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_375
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_376[] = 
  {
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_376[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_376 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_376,
    P_GEND_TYPE_NMDTUP_TARR_376
  };
  static PRT_TYPE P_GEND_TYPE_376 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_376
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_377[] = 
  {
    "_p2y",
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_377[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_377 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_377,
    P_GEND_TYPE_NMDTUP_TARR_377
  };
  static PRT_TYPE P_GEND_TYPE_377 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_377
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_378[] = 
  {
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_378[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_378 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_378,
    P_GEND_TYPE_NMDTUP_TARR_378
  };
  static PRT_TYPE P_GEND_TYPE_378 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_378
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_379[] = 
  {
    "_param_count",
    "_param_index",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_379[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_379 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_379,
    P_GEND_TYPE_NMDTUP_TARR_379
  };
  static PRT_TYPE P_GEND_TYPE_379 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_379
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_380[] = 
  {
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_380[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_380 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_380,
    P_GEND_TYPE_NMDTUP_TARR_380
  };
  static PRT_TYPE P_GEND_TYPE_380 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_380
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_381[] = 
  {
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_381[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_381 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_381,
    P_GEND_TYPE_NMDTUP_TARR_381
  };
  static PRT_TYPE P_GEND_TYPE_381 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_381
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_382[] = 
  {
    "_pitch",
    "_yaw",
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_382[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_382 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_382,
    P_GEND_TYPE_NMDTUP_TARR_382
  };
  static PRT_TYPE P_GEND_TYPE_382 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_382
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_383[] = 
  {
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_383[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_383 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_383,
    P_GEND_TYPE_NMDTUP_TARR_383
  };
  static PRT_TYPE P_GEND_TYPE_383 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_383
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_384[] = 
  {
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_384[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_384 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_384,
    P_GEND_TYPE_NMDTUP_TARR_384
  };
  static PRT_TYPE P_GEND_TYPE_384 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_384
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_385[] = 
  {
    "_q",
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_385[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_385 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_385,
    P_GEND_TYPE_NMDTUP_TARR_385
  };
  static PRT_TYPE P_GEND_TYPE_385 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_385
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_386[] = 
  {
    "_q3",
    "_q4",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_386[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_386 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_386,
    P_GEND_TYPE_NMDTUP_TARR_386
  };
  static PRT_TYPE P_GEND_TYPE_386 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_386
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_387[] = 
  {
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_387[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_387 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_387,
    P_GEND_TYPE_NMDTUP_TARR_387
  };
  static PRT_TYPE P_GEND_TYPE_387 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_387
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_388[] = 
  {
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_388[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_388 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_388,
    P_GEND_TYPE_NMDTUP_TARR_388
  };
  static PRT_TYPE P_GEND_TYPE_388 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_388
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_389[] = 
  {
    "_req_message_rate",
    "_target_system",
    "_target_component",
    "_req_stream_id",
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_389[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_389 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_389,
    P_GEND_TYPE_NMDTUP_TARR_389
  };
  static PRT_TYPE P_GEND_TYPE_389 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_389
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_390[] = 
  {
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_390[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_390 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_390,
    P_GEND_TYPE_NMDTUP_TARR_390
  };
  static PRT_TYPE P_GEND_TYPE_390 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_390
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_391[] = 
  {
    "_rssi",
    "_remrssi",
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_391[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_391 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_391,
    P_GEND_TYPE_NMDTUP_TARR_391
  };
  static PRT_TYPE P_GEND_TYPE_391 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_391
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_392[] = 
  {
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_392[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_392 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_392,
    P_GEND_TYPE_NMDTUP_TARR_392
  };
  static PRT_TYPE P_GEND_TYPE_392 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_392
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_393[] = 
  {
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_393[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_393 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_393,
    P_GEND_TYPE_NMDTUP_TARR_393
  };
  static PRT_TYPE P_GEND_TYPE_393 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_393
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_394[] = 
  {
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_394[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_394 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_394,
    P_GEND_TYPE_NMDTUP_TARR_394
  };
  static PRT_TYPE P_GEND_TYPE_394 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_394
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_395[] = 
  {
    "_target_network",
    "_target_system",
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_395[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_395 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_395,
    P_GEND_TYPE_NMDTUP_TARR_395
  };
  static PRT_TYPE P_GEND_TYPE_395 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_395
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_396[] = 
  {
    "_target_system",
    "_control_request",
    "_version",
    "_passkey"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_396[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_396 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_396,
    P_GEND_TYPE_NMDTUP_TARR_396
  };
  static PRT_TYPE P_GEND_TYPE_396 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_396
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_397[] = 
  {
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_397[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_397 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_397,
    P_GEND_TYPE_NMDTUP_TARR_397
  };
  static PRT_TYPE P_GEND_TYPE_397 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_397
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_398[] = 
  {
    "_target_system",
    "_target_component",
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_398[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_398 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_398,
    P_GEND_TYPE_NMDTUP_TARR_398
  };
  static PRT_TYPE P_GEND_TYPE_398 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_398
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_399[] = 
  {
    "_target_system",
    "_target_component",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_399[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_399 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_399,
    P_GEND_TYPE_NMDTUP_TARR_399
  };
  static PRT_TYPE P_GEND_TYPE_399 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_399
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_400[] = 
  {
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_400[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_400 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_400,
    P_GEND_TYPE_NMDTUP_TARR_400
  };
  static PRT_TYPE P_GEND_TYPE_400 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_400
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_401[] = 
  {
    "_terrain_height",
    "_current_height",
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_401[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_401 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_401,
    P_GEND_TYPE_NMDTUP_TARR_401
  };
  static PRT_TYPE P_GEND_TYPE_401 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_401
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_402[] = 
  {
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_402[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_402 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_402,
    P_GEND_TYPE_NMDTUP_TARR_402
  };
  static PRT_TYPE P_GEND_TYPE_402 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_402
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_403[] = 
  {
    "_time_usec",
    "_flags",
    "_controls",
    "_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_403[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_403 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_403,
    P_GEND_TYPE_NMDTUP_TARR_403
  };
  static PRT_TYPE P_GEND_TYPE_403 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_403
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_404[] = 
  {
    "_time_usec",
    "_press_abs",
    "_press_diff1",
    "_press_diff2",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_404[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_404 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_404,
    P_GEND_TYPE_NMDTUP_TARR_404
  };
  static PRT_TYPE P_GEND_TYPE_404 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_404
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_405[] = 
  {
    "_time_utc",
    "_size",
    "_id",
    "_num_logs",
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_405[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_405 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_405,
    P_GEND_TYPE_NMDTUP_TARR_405
  };
  static PRT_TYPE P_GEND_TYPE_405 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_405
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_406[] = 
  {
    "_type",
    "_autopilot",
    "_base_mode",
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_406[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_406 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_406,
    P_GEND_TYPE_NMDTUP_TARR_406
  };
  static PRT_TYPE P_GEND_TYPE_406 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_406
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_407[] = 
  {
    "_uri",
    "_transfer_type",
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_407[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_407 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_407,
    P_GEND_TYPE_NMDTUP_TARR_407
  };
  static PRT_TYPE P_GEND_TYPE_407 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_407
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_408[] = 
  {
    "_var_horiz",
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_408[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_408 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_408,
    P_GEND_TYPE_NMDTUP_TARR_408
  };
  static PRT_TYPE P_GEND_TYPE_408 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_408
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_409[] = 
  {
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_409[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_409 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_409,
    P_GEND_TYPE_NMDTUP_TARR_409
  };
  static PRT_TYPE P_GEND_TYPE_409 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_409
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_410[] = 
  {
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_410[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_410 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_410,
    P_GEND_TYPE_NMDTUP_TARR_410
  };
  static PRT_TYPE P_GEND_TYPE_410 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_410
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_411[] = 
  {
    "_vibration_y",
    "_vibration_z",
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_411[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_411 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_411,
    P_GEND_TYPE_NMDTUP_TARR_411
  };
  static PRT_TYPE P_GEND_TYPE_411 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_411
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_412[] = 
  {
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_412[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_412 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_412,
    P_GEND_TYPE_NMDTUP_TARR_412
  };
  static PRT_TYPE P_GEND_TYPE_412 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_412
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_413[] = 
  {
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_413[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_413 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_413,
    P_GEND_TYPE_NMDTUP_TARR_413
  };
  static PRT_TYPE P_GEND_TYPE_413 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_413
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_414[] = 
  {
    "_x",
    "_y",
    "_z",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_414[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_414 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_414,
    P_GEND_TYPE_NMDTUP_TARR_414
  };
  static PRT_TYPE P_GEND_TYPE_414 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_414
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_415[] = 
  {
    "_y",
    "_z",
    "_r",
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_415[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_415 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_415,
    P_GEND_TYPE_NMDTUP_TARR_415
  };
  static PRT_TYPE P_GEND_TYPE_415 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_415
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_416[] = 
  {
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_416[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_416 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_416,
    P_GEND_TYPE_NMDTUP_TARR_416
  };
  static PRT_TYPE P_GEND_TYPE_416 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_416
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_417[] = 
  {
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_417[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_417 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_417,
    P_GEND_TYPE_NMDTUP_TARR_417
  };
  static PRT_TYPE P_GEND_TYPE_417 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_417
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_418[] = 
  {
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_418[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_418 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_418,
    P_GEND_TYPE_NMDTUP_TARR_418
  };
  static PRT_TYPE P_GEND_TYPE_418 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_418
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_419[] = 
  {
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_419[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_419 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_419,
    P_GEND_TYPE_NMDTUP_TARR_419
  };
  static PRT_TYPE P_GEND_TYPE_419 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_419
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_420[] = 
  {
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_420[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_420 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_420,
    P_GEND_TYPE_NMDTUP_TARR_420
  };
  static PRT_TYPE P_GEND_TYPE_420 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_420
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_421[] = 
  {
    "_airspeed",
    "_groundspeed",
    "_alt",
    "_climb",
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_421[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_421 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_421,
    P_GEND_TYPE_NMDTUP_TARR_421
  };
  static PRT_TYPE P_GEND_TYPE_421 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_421
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_422[] = 
  {
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_422[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_422 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_422,
    P_GEND_TYPE_NMDTUP_TARR_422
  };
  static PRT_TYPE P_GEND_TYPE_422 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_422
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_423[] = 
  {
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_423[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_423 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_423,
    P_GEND_TYPE_NMDTUP_TARR_423
  };
  static PRT_TYPE P_GEND_TYPE_423 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_423
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_424[] = 
  {
    "_alt_error",
    "_aspd_error",
    "_xtrack_error",
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_424[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_424 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_424,
    P_GEND_TYPE_NMDTUP_TARR_424
  };
  static PRT_TYPE P_GEND_TYPE_424 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_424
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_425[] = 
  {
    "_altitude_monotonic",
    "_altitude_amsl",
    "_altitude_local",
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_425[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_425 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_425,
    P_GEND_TYPE_NMDTUP_TARR_425
  };
  static PRT_TYPE P_GEND_TYPE_425 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_425
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_426[] = 
  {
    "_angle_y",
    "_distance",
    "_size_x",
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_426[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_426 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_426,
    P_GEND_TYPE_NMDTUP_TARR_426
  };
  static PRT_TYPE P_GEND_TYPE_426 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_426
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_427[] = 
  {
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_427[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_427 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_427,
    P_GEND_TYPE_NMDTUP_TARR_427
  };
  static PRT_TYPE P_GEND_TYPE_427 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_427
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_428[] = 
  {
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_428[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_428 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_428,
    P_GEND_TYPE_NMDTUP_TARR_428
  };
  static PRT_TYPE P_GEND_TYPE_428 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_428
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_429[] = 
  {
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_429[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_429 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_429,
    P_GEND_TYPE_NMDTUP_TARR_429
  };
  static PRT_TYPE P_GEND_TYPE_429 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_429
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_430[] = 
  {
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_430[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_430 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_430,
    P_GEND_TYPE_NMDTUP_TARR_430
  };
  static PRT_TYPE P_GEND_TYPE_430 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_430
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_431[] = 
  {
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_431[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_431 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_431,
    P_GEND_TYPE_NMDTUP_TARR_431
  };
  static PRT_TYPE P_GEND_TYPE_431 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_431
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_432[] = 
  {
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_432[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_432 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_432,
    P_GEND_TYPE_NMDTUP_TARR_432
  };
  static PRT_TYPE P_GEND_TYPE_432 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_432
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_433[] = 
  {
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_433[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_433 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_433,
    P_GEND_TYPE_NMDTUP_TARR_433
  };
  static PRT_TYPE P_GEND_TYPE_433 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_433
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_434[] = 
  {
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_434[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_434 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_434,
    P_GEND_TYPE_NMDTUP_TARR_434
  };
  static PRT_TYPE P_GEND_TYPE_434 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_434
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_435[] = 
  {
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_435[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_435 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_435,
    P_GEND_TYPE_NMDTUP_TARR_435
  };
  static PRT_TYPE P_GEND_TYPE_435 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_435
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_436[] = 
  {
    "_custom_mode",
    "_type",
    "_autopilot",
    "_base_mode",
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_436[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_436 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_436,
    P_GEND_TYPE_NMDTUP_TARR_436
  };
  static PRT_TYPE P_GEND_TYPE_436 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_436
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_437[] = 
  {
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_437[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_437 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_437,
    P_GEND_TYPE_NMDTUP_TARR_437
  };
  static PRT_TYPE P_GEND_TYPE_437 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_437
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_438[] = 
  {
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_438[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_438 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_438,
    P_GEND_TYPE_NMDTUP_TARR_438
  };
  static PRT_TYPE P_GEND_TYPE_438 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_438
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_439[] = 
  {
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_439[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_439 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_439,
    P_GEND_TYPE_NMDTUP_TARR_439
  };
  static PRT_TYPE P_GEND_TYPE_439 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_439
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_440[] = 
  {
    "_fixed",
    "_rssi",
    "_remrssi",
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_440[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_440 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_440,
    P_GEND_TYPE_NMDTUP_TARR_440
  };
  static PRT_TYPE P_GEND_TYPE_440 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_440
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_441[] = 
  {
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_441[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_441 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_441,
    P_GEND_TYPE_NMDTUP_TARR_441
  };
  static PRT_TYPE P_GEND_TYPE_441 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_441
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_442[] = 
  {
    "_flow_comp_m_y",
    "_ground_distance",
    "_flow_x",
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_442[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_442 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_442,
    P_GEND_TYPE_NMDTUP_TARR_442
  };
  static PRT_TYPE P_GEND_TYPE_442 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_442
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_443[] = 
  {
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_443[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_443 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_443,
    P_GEND_TYPE_NMDTUP_TARR_443
  };
  static PRT_TYPE P_GEND_TYPE_443 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_443
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_444[] = 
  {
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_444[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_444 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_444,
    P_GEND_TYPE_NMDTUP_TARR_444
  };
  static PRT_TYPE P_GEND_TYPE_444 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_444
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_445[] = 
  {
    "_lat",
    "_lon",
    "_grid_spacing",
    "_data",
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_445[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_445 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_445,
    P_GEND_TYPE_NMDTUP_TARR_445
  };
  static PRT_TYPE P_GEND_TYPE_445 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_445
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_446[] = 
  {
    "_lon",
    "_terrain_height",
    "_current_height",
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_446[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_446 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_446,
    P_GEND_TYPE_NMDTUP_TARR_446
  };
  static PRT_TYPE P_GEND_TYPE_446 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_446
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_447[] = 
  {
    "_mag_ratio",
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_447[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_447 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_447,
    P_GEND_TYPE_NMDTUP_TARR_447
  };
  static PRT_TYPE P_GEND_TYPE_447 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_447
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_448[] = 
  {
    "_max_distance",
    "_current_distance",
    "_type",
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_448[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_448 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_448,
    P_GEND_TYPE_NMDTUP_TARR_448
  };
  static PRT_TYPE P_GEND_TYPE_448 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_448
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_449[] = 
  {
    "_message_type",
    "_target_network",
    "_target_system",
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_449[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_449 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_449,
    P_GEND_TYPE_NMDTUP_TARR_449
  };
  static PRT_TYPE P_GEND_TYPE_449 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_449
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_450[] = 
  {
    "_p1y",
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_450[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_450 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_450,
    P_GEND_TYPE_NMDTUP_TARR_450
  };
  static PRT_TYPE P_GEND_TYPE_450 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_450
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_451[] = 
  {
    "_p2x",
    "_p2y",
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_451[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_451 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_451,
    P_GEND_TYPE_NMDTUP_TARR_451
  };
  static PRT_TYPE P_GEND_TYPE_451 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_451
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_452[] = 
  {
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_452[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_452 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_452,
    P_GEND_TYPE_NMDTUP_TARR_452
  };
  static PRT_TYPE P_GEND_TYPE_452 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_452
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_453[] = 
  {
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_453[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_453 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_453,
    P_GEND_TYPE_NMDTUP_TARR_453
  };
  static PRT_TYPE P_GEND_TYPE_453 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_453
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_454[] = 
  {
    "_param_value",
    "_param_count",
    "_param_index",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_454[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_454 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_454,
    P_GEND_TYPE_NMDTUP_TARR_454
  };
  static PRT_TYPE P_GEND_TYPE_454 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_454
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_455[] = 
  {
    "_param_value",
    "_target_system",
    "_target_component",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_455[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_455 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_455,
    P_GEND_TYPE_NMDTUP_TARR_455
  };
  static PRT_TYPE P_GEND_TYPE_455 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_455
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_456[] = 
  {
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_456[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_456 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_456,
    P_GEND_TYPE_NMDTUP_TARR_456
  };
  static PRT_TYPE P_GEND_TYPE_456 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_456
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_457[] = 
  {
    "_q2",
    "_q3",
    "_q4",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_457[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_457 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_457,
    P_GEND_TYPE_NMDTUP_TARR_457
  };
  static PRT_TYPE P_GEND_TYPE_457 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_457
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_458[] = 
  {
    "_roll",
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_458[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_458 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_458,
    P_GEND_TYPE_NMDTUP_TARR_458
  };
  static PRT_TYPE P_GEND_TYPE_458 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_458
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_459[] = 
  {
    "_roll",
    "_pitch",
    "_yaw",
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_459[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_459 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_459,
    P_GEND_TYPE_NMDTUP_TARR_459
  };
  static PRT_TYPE P_GEND_TYPE_459 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_459
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_460[] = 
  {
    "_satellite_elevation",
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_460[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_460 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_460,
    P_GEND_TYPE_NMDTUP_TARR_460
  };
  static PRT_TYPE P_GEND_TYPE_460 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_460
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_461[] = 
  {
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_461[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_461 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_461,
    P_GEND_TYPE_NMDTUP_TARR_461
  };
  static PRT_TYPE P_GEND_TYPE_461 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_461
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_462[] = 
  {
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_462[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_462 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_462,
    P_GEND_TYPE_NMDTUP_TARR_462
  };
  static PRT_TYPE P_GEND_TYPE_462 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_462
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_463[] = 
  {
    "_time_to_minimum_delta",
    "_altitude_minimum_delta",
    "_horizontal_minimum_delta",
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_463[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_463 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_463,
    P_GEND_TYPE_NMDTUP_TARR_463
  };
  static PRT_TYPE P_GEND_TYPE_463 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_463
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_464[] = 
  {
    "_time_usec",
    "_controls",
    "_group_mlx",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_464[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_464 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_464,
    P_GEND_TYPE_NMDTUP_TARR_464
  };
  static PRT_TYPE P_GEND_TYPE_464 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_464
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_465[] = 
  {
    "_time_usec",
    "_q",
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_465[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_465 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_465,
    P_GEND_TYPE_NMDTUP_TARR_465
  };
  static PRT_TYPE P_GEND_TYPE_465 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_465
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_466[] = 
  {
    "_time_usec",
    "_x",
    "_y",
    "_z",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_466[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_466 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_466,
    P_GEND_TYPE_NMDTUP_TARR_466
  };
  static PRT_TYPE P_GEND_TYPE_466 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_466
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_467[] = 
  {
    "_timeout",
    "_device",
    "_flags",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_467[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_467 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_467,
    P_GEND_TYPE_NMDTUP_TARR_467
  };
  static PRT_TYPE P_GEND_TYPE_467 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_467
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_468[] = 
  {
    "_uri_type",
    "_uri",
    "_transfer_type",
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_468[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_468 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_468,
    P_GEND_TYPE_NMDTUP_TARR_468
  };
  static PRT_TYPE P_GEND_TYPE_468 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_468
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_469[] = 
  {
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_469[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_469 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_469,
    P_GEND_TYPE_NMDTUP_TARR_469
  };
  static PRT_TYPE P_GEND_TYPE_469 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_469
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_470[] = 
  {
    "_vibration_x",
    "_vibration_y",
    "_vibration_z",
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_470[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_470 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_470,
    P_GEND_TYPE_NMDTUP_TARR_470
  };
  static PRT_TYPE P_GEND_TYPE_470 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_470
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_471[] = 
  {
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_471[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_471 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_471,
    P_GEND_TYPE_NMDTUP_TARR_471
  };
  static PRT_TYPE P_GEND_TYPE_471 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_471
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_472[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_472[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_472 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_472,
    P_GEND_TYPE_NMDTUP_TARR_472
  };
  static PRT_TYPE P_GEND_TYPE_472 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_472
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_473[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_473[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_473 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_473,
    P_GEND_TYPE_NMDTUP_TARR_473
  };
  static PRT_TYPE P_GEND_TYPE_473 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_473
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_474[] = 
  {
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_474[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_474 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_474,
    P_GEND_TYPE_NMDTUP_TARR_474
  };
  static PRT_TYPE P_GEND_TYPE_474 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_474
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_475[] = 
  {
    "_width",
    "_height",
    "_packets",
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_475[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_475 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_475,
    P_GEND_TYPE_NMDTUP_TARR_475
  };
  static PRT_TYPE P_GEND_TYPE_475 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_475
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_476[] = 
  {
    "_wind_z",
    "_var_horiz",
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_476[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_476 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_476,
    P_GEND_TYPE_NMDTUP_TARR_476
  };
  static PRT_TYPE P_GEND_TYPE_476 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_476
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_477[] = 
  {
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_477[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_477 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_477,
    P_GEND_TYPE_NMDTUP_TARR_477
  };
  static PRT_TYPE P_GEND_TYPE_477 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_477
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_478[] = 
  {
    "_x",
    "_y",
    "_z",
    "_r",
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_478[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_478 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_478,
    P_GEND_TYPE_NMDTUP_TARR_478
  };
  static PRT_TYPE P_GEND_TYPE_478 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_478
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_479[] = 
  {
    "_x",
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_479[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_479 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_479,
    P_GEND_TYPE_NMDTUP_TARR_479
  };
  static PRT_TYPE P_GEND_TYPE_479 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_479
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_480[] = 
  {
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_480[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_480 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_480,
    P_GEND_TYPE_NMDTUP_TARR_480
  };
  static PRT_TYPE P_GEND_TYPE_480 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_480
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_481[] = 
  {
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_481[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_481 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_481,
    P_GEND_TYPE_NMDTUP_TARR_481
  };
  static PRT_TYPE P_GEND_TYPE_481 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_481
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_482[] = 
  {
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_482[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_482 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_482,
    P_GEND_TYPE_NMDTUP_TARR_482
  };
  static PRT_TYPE P_GEND_TYPE_482 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_482
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_483[] = 
  {
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_483[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_483 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_483,
    P_GEND_TYPE_NMDTUP_TARR_483
  };
  static PRT_TYPE P_GEND_TYPE_483 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_483
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_484[] = 
  {
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_484[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_484 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_484,
    P_GEND_TYPE_NMDTUP_TARR_484
  };
  static PRT_TYPE P_GEND_TYPE_484 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_484
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_485[] = 
  {
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_485[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_485 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_485,
    P_GEND_TYPE_NMDTUP_TARR_485
  };
  static PRT_TYPE P_GEND_TYPE_485 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_485
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_486[] = 
  {
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_486[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_486 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_486,
    P_GEND_TYPE_NMDTUP_TARR_486
  };
  static PRT_TYPE P_GEND_TYPE_486 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_486
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_487[] = 
  {
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_487[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_487 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_487,
    P_GEND_TYPE_NMDTUP_TARR_487
  };
  static PRT_TYPE P_GEND_TYPE_487 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_487
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_488[] = 
  {
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_488[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_488 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_488,
    P_GEND_TYPE_NMDTUP_TARR_488
  };
  static PRT_TYPE P_GEND_TYPE_488 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_488
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_489[] = 
  {
    "_angle_x",
    "_angle_y",
    "_distance",
    "_size_x",
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_489[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_489 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_489,
    P_GEND_TYPE_NMDTUP_TARR_489
  };
  static PRT_TYPE P_GEND_TYPE_489 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_489
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_490[] = 
  {
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_490[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_490 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_490,
    P_GEND_TYPE_NMDTUP_TARR_490
  };
  static PRT_TYPE P_GEND_TYPE_490 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_490
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_491[] = 
  {
    "_baudrate",
    "_timeout",
    "_device",
    "_flags",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_491[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_491 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_491,
    P_GEND_TYPE_NMDTUP_TARR_491
  };
  static PRT_TYPE P_GEND_TYPE_491 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_491
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_492[] = 
  {
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_492[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_492 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_492,
    P_GEND_TYPE_NMDTUP_TARR_492
  };
  static PRT_TYPE P_GEND_TYPE_492 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_492
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_493[] = 
  {
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_493[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_493 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_493,
    P_GEND_TYPE_NMDTUP_TARR_493
  };
  static PRT_TYPE P_GEND_TYPE_493 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_493
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_494[] = 
  {
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_494[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_494 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_494,
    P_GEND_TYPE_NMDTUP_TARR_494
  };
  static PRT_TYPE P_GEND_TYPE_494 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_494
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_495[] = 
  {
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_495[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_495 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_495,
    P_GEND_TYPE_NMDTUP_TARR_495
  };
  static PRT_TYPE P_GEND_TYPE_495 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_495
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_496[] = 
  {
    "_chan4_scaled",
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_496[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_496 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_496,
    P_GEND_TYPE_NMDTUP_TARR_496
  };
  static PRT_TYPE P_GEND_TYPE_496 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_496
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_497[] = 
  {
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_497[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_497 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_497,
    P_GEND_TYPE_NMDTUP_TARR_497
  };
  static PRT_TYPE P_GEND_TYPE_497 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_497
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_498[] = 
  {
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_498[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_498 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_498,
    P_GEND_TYPE_NMDTUP_TARR_498
  };
  static PRT_TYPE P_GEND_TYPE_498 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_498
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_499[] = 
  {
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_499[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_499 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_499,
    P_GEND_TYPE_NMDTUP_TARR_499
  };
  static PRT_TYPE P_GEND_TYPE_499 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_499
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_500[] = 
  {
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_500[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_500 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_500,
    P_GEND_TYPE_NMDTUP_TARR_500
  };
  static PRT_TYPE P_GEND_TYPE_500 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_500
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_501[] = 
  {
    "_flow_comp_m_x",
    "_flow_comp_m_y",
    "_ground_distance",
    "_flow_x",
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_501[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_501 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_501,
    P_GEND_TYPE_NMDTUP_TARR_501
  };
  static PRT_TYPE P_GEND_TYPE_501 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_501
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_502[] = 
  {
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_502[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_502 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_502,
    P_GEND_TYPE_NMDTUP_TARR_502
  };
  static PRT_TYPE P_GEND_TYPE_502 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_502
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_503[] = 
  {
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_503[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_503 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_503,
    P_GEND_TYPE_NMDTUP_TARR_503
  };
  static PRT_TYPE P_GEND_TYPE_503 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_503
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_504[] = 
  {
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_504[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_504 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_504,
    P_GEND_TYPE_NMDTUP_TARR_504
  };
  static PRT_TYPE P_GEND_TYPE_504 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_504
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_505[] = 
  {
    "_id",
    "_time_to_minimum_delta",
    "_altitude_minimum_delta",
    "_horizontal_minimum_delta",
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_505[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_505 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_505,
    P_GEND_TYPE_NMDTUP_TARR_505
  };
  static PRT_TYPE P_GEND_TYPE_505 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_505
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_506[] = 
  {
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_506[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_506 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_506,
    P_GEND_TYPE_NMDTUP_TARR_506
  };
  static PRT_TYPE P_GEND_TYPE_506 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_506
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_507[] = 
  {
    "_lat",
    "_lon",
    "_terrain_height",
    "_current_height",
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_507[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_507 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_507,
    P_GEND_TYPE_NMDTUP_TARR_507
  };
  static PRT_TYPE P_GEND_TYPE_507 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_507
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_508[] = 
  {
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_508[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_508 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_508,
    P_GEND_TYPE_NMDTUP_TARR_508
  };
  static PRT_TYPE P_GEND_TYPE_508 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_508
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_509[] = 
  {
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_509[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_509 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_509,
    P_GEND_TYPE_NMDTUP_TARR_509
  };
  static PRT_TYPE P_GEND_TYPE_509 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_509
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_510[] = 
  {
    "_min_distance",
    "_max_distance",
    "_current_distance",
    "_type",
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_510[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_510 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_510,
    P_GEND_TYPE_NMDTUP_TARR_510
  };
  static PRT_TYPE P_GEND_TYPE_510 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_510
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_511[] = 
  {
    "_nav_pitch",
    "_alt_error",
    "_aspd_error",
    "_xtrack_error",
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_511[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_511 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_511,
    P_GEND_TYPE_NMDTUP_TARR_511
  };
  static PRT_TYPE P_GEND_TYPE_511 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_511
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_512[] = 
  {
    "_p1x",
    "_p1y",
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_512[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_512 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_512,
    P_GEND_TYPE_NMDTUP_TARR_512
  };
  static PRT_TYPE P_GEND_TYPE_512 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_512
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_513[] = 
  {
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_513[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_513 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_513,
    P_GEND_TYPE_NMDTUP_TARR_513
  };
  static PRT_TYPE P_GEND_TYPE_513 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_513
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_514[] = 
  {
    "_param5",
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_514[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_514 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_514,
    P_GEND_TYPE_NMDTUP_TARR_514
  };
  static PRT_TYPE P_GEND_TYPE_514 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_514
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_515[] = 
  {
    "_param_value_max",
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_515[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_515 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_515,
    P_GEND_TYPE_NMDTUP_TARR_515
  };
  static PRT_TYPE P_GEND_TYPE_515 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_515
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_516[] = 
  {
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_516[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_516 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_516,
    P_GEND_TYPE_NMDTUP_TARR_516
  };
  static PRT_TYPE P_GEND_TYPE_516 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_516
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_517[] = 
  {
    "_pos_vert_ratio",
    "_mag_ratio",
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_517[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_517 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_517,
    P_GEND_TYPE_NMDTUP_TARR_517
  };
  static PRT_TYPE P_GEND_TYPE_517 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_517
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_518[] = 
  {
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_518[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_518 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_518,
    P_GEND_TYPE_NMDTUP_TARR_518
  };
  static PRT_TYPE P_GEND_TYPE_518 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_518
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_519[] = 
  {
    "_q",
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_519[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_519 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_519,
    P_GEND_TYPE_NMDTUP_TARR_519
  };
  static PRT_TYPE P_GEND_TYPE_519 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_519
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_520[] = 
  {
    "_q",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_520[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_520 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_520,
    P_GEND_TYPE_NMDTUP_TARR_520
  };
  static PRT_TYPE P_GEND_TYPE_520 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_520
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_521[] = 
  {
    "_q1",
    "_q2",
    "_q3",
    "_q4",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_521[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_521 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_521,
    P_GEND_TYPE_NMDTUP_TARR_521
  };
  static PRT_TYPE P_GEND_TYPE_521 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_521
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_522[] = 
  {
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_522[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_522 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_522,
    P_GEND_TYPE_NMDTUP_TARR_522
  };
  static PRT_TYPE P_GEND_TYPE_522 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_522
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_523[] = 
  {
    "_request_id",
    "_uri_type",
    "_uri",
    "_transfer_type",
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_523[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_523 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_523,
    P_GEND_TYPE_NMDTUP_TARR_523
  };
  static PRT_TYPE P_GEND_TYPE_523 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_523
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_524[] = 
  {
    "_rxerrors",
    "_fixed",
    "_rssi",
    "_remrssi",
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_524[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_524 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_524,
    P_GEND_TYPE_NMDTUP_TARR_524
  };
  static PRT_TYPE P_GEND_TYPE_524 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_524
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_525[] = 
  {
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_525[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_525 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_525,
    P_GEND_TYPE_NMDTUP_TARR_525
  };
  static PRT_TYPE P_GEND_TYPE_525 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_525
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_526[] = 
  {
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_526[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_526 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_526,
    P_GEND_TYPE_NMDTUP_TARR_526
  };
  static PRT_TYPE P_GEND_TYPE_526 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_526
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_527[] = 
  {
    "_size",
    "_width",
    "_height",
    "_packets",
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_527[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_527 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_527,
    P_GEND_TYPE_NMDTUP_TARR_527
  };
  static PRT_TYPE P_GEND_TYPE_527 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_527
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_528[] = 
  {
    "_throttle",
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_528[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_528 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_528,
    P_GEND_TYPE_NMDTUP_TARR_528
  };
  static PRT_TYPE P_GEND_TYPE_528 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_528
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_529[] = 
  {
    "_time_boot_ms",
    "_roll",
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_529[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_529 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_529,
    P_GEND_TYPE_NMDTUP_TARR_529
  };
  static PRT_TYPE P_GEND_TYPE_529 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_529
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_530[] = 
  {
    "_time_boot_ms",
    "_roll",
    "_pitch",
    "_yaw",
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_530[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_530 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_530,
    P_GEND_TYPE_NMDTUP_TARR_530
  };
  static PRT_TYPE P_GEND_TYPE_530 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_530
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_531[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_531[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_531 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_531,
    P_GEND_TYPE_NMDTUP_TARR_531
  };
  static PRT_TYPE P_GEND_TYPE_531 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_531
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_532[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_532[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_532 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_532,
    P_GEND_TYPE_NMDTUP_TARR_532
  };
  static PRT_TYPE P_GEND_TYPE_532 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_532
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_533[] = 
  {
    "_time_usec",
    "_altitude_monotonic",
    "_altitude_amsl",
    "_altitude_local",
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_533[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_533 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_533,
    P_GEND_TYPE_NMDTUP_TARR_533
  };
  static PRT_TYPE P_GEND_TYPE_533 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_533
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_534[] = 
  {
    "_time_usec",
    "_vibration_x",
    "_vibration_y",
    "_vibration_z",
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_534[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_534 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_534,
    P_GEND_TYPE_NMDTUP_TARR_534
  };
  static PRT_TYPE P_GEND_TYPE_534 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_534
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_535[] = 
  {
    "_usec",
    "_x",
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_535[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_535 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_535,
    P_GEND_TYPE_NMDTUP_TARR_535
  };
  static PRT_TYPE P_GEND_TYPE_535 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_535
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_536[] = 
  {
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_536[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_536 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_536,
    P_GEND_TYPE_NMDTUP_TARR_536
  };
  static PRT_TYPE P_GEND_TYPE_536 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_536
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_537[] = 
  {
    "_voltages",
    "_current_battery",
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_537[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_537 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_537,
    P_GEND_TYPE_NMDTUP_TARR_537
  };
  static PRT_TYPE P_GEND_TYPE_537 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_537
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_538[] = 
  {
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_538[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_538 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_538,
    P_GEND_TYPE_NMDTUP_TARR_538
  };
  static PRT_TYPE P_GEND_TYPE_538 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_538
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_539[] = 
  {
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_539[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_539 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_539,
    P_GEND_TYPE_NMDTUP_TARR_539
  };
  static PRT_TYPE P_GEND_TYPE_539 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_539
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_540[] = 
  {
    "_wind_y",
    "_wind_z",
    "_var_horiz",
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_540[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_540 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_540,
    P_GEND_TYPE_NMDTUP_TARR_540
  };
  static PRT_TYPE P_GEND_TYPE_540 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_540
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_541[] = 
  {
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_541[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_541 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_541,
    P_GEND_TYPE_NMDTUP_TARR_541
  };
  static PRT_TYPE P_GEND_TYPE_541 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_541
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_542[] = 
  {
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_542[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_542 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_542,
    P_GEND_TYPE_NMDTUP_TARR_542
  };
  static PRT_TYPE P_GEND_TYPE_542 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_542
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_543[] = 
  {
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_543[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_543 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_543,
    P_GEND_TYPE_NMDTUP_TARR_543
  };
  static PRT_TYPE P_GEND_TYPE_543 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_543
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_544[] = 
  {
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_544[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_544 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_544,
    P_GEND_TYPE_NMDTUP_TARR_544
  };
  static PRT_TYPE P_GEND_TYPE_544 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_544
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_545[] = 
  {
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_545[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_545 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_545,
    P_GEND_TYPE_NMDTUP_TARR_545
  };
  static PRT_TYPE P_GEND_TYPE_545 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_545
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_546[] = 
  {
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_546[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_546 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_546,
    P_GEND_TYPE_NMDTUP_TARR_546
  };
  static PRT_TYPE P_GEND_TYPE_546 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_546
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_547[] = 
  {
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_547[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_547 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_547,
    P_GEND_TYPE_NMDTUP_TARR_547
  };
  static PRT_TYPE P_GEND_TYPE_547 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_547
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_548[] = 
  {
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_548[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_548 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_548,
    P_GEND_TYPE_NMDTUP_TARR_548
  };
  static PRT_TYPE P_GEND_TYPE_548 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_548
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_549[] = 
  {
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_549[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_549 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_549,
    P_GEND_TYPE_NMDTUP_TARR_549
  };
  static PRT_TYPE P_GEND_TYPE_549 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_549
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_550[] = 
  {
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_550[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_550 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_550,
    P_GEND_TYPE_NMDTUP_TARR_550
  };
  static PRT_TYPE P_GEND_TYPE_550 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_550
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_551[] = 
  {
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_551[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_551 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_551,
    P_GEND_TYPE_NMDTUP_TARR_551
  };
  static PRT_TYPE P_GEND_TYPE_551 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_551
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_552[] = 
  {
    "_chan3_scaled",
    "_chan4_scaled",
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_552[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_552 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_552,
    P_GEND_TYPE_NMDTUP_TARR_552
  };
  static PRT_TYPE P_GEND_TYPE_552 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_552
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_553[] = 
  {
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_553[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_553 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_553,
    P_GEND_TYPE_NMDTUP_TARR_553
  };
  static PRT_TYPE P_GEND_TYPE_553 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_553
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_554[] = 
  {
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_554[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_554 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_554,
    P_GEND_TYPE_NMDTUP_TARR_554
  };
  static PRT_TYPE P_GEND_TYPE_554 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_554
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_555[] = 
  {
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_555[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_555 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_555,
    P_GEND_TYPE_NMDTUP_TARR_555
  };
  static PRT_TYPE P_GEND_TYPE_555 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_555
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_556[] = 
  {
    "_dgps_age",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_556[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_556 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_556,
    P_GEND_TYPE_NMDTUP_TARR_556
  };
  static PRT_TYPE P_GEND_TYPE_556 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_556
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_557[] = 
  {
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_557[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_557 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_557,
    P_GEND_TYPE_NMDTUP_TARR_557
  };
  static PRT_TYPE P_GEND_TYPE_557 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_557
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_558[] = 
  {
    "_integrated_xgyro",
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_558[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_558 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_558,
    P_GEND_TYPE_NMDTUP_TARR_558
  };
  static PRT_TYPE P_GEND_TYPE_558 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_558
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_559[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_559[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_559 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_559,
    P_GEND_TYPE_NMDTUP_TARR_559
  };
  static PRT_TYPE P_GEND_TYPE_559 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_559
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_560[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_560[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_560 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_560,
    P_GEND_TYPE_NMDTUP_TARR_560
  };
  static PRT_TYPE P_GEND_TYPE_560 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_560
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_561[] = 
  {
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_561[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_561 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_561,
    P_GEND_TYPE_NMDTUP_TARR_561
  };
  static PRT_TYPE P_GEND_TYPE_561 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_561
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_562[] = 
  {
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_562[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_562 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_562,
    P_GEND_TYPE_NMDTUP_TARR_562
  };
  static PRT_TYPE P_GEND_TYPE_562 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_562
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_563[] = 
  {
    "_nav_roll",
    "_nav_pitch",
    "_alt_error",
    "_aspd_error",
    "_xtrack_error",
    "_nav_bearing",
    "_target_bearing",
    "_wp_dist"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_563[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_563 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_563,
    P_GEND_TYPE_NMDTUP_TARR_563
  };
  static PRT_TYPE P_GEND_TYPE_563 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_563
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_564[] = 
  {
    "_p1y",
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_564[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_564 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_564,
    P_GEND_TYPE_NMDTUP_TARR_564
  };
  static PRT_TYPE P_GEND_TYPE_564 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_564
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_565[] = 
  {
    "_param4",
    "_param5",
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_565[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_565 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_565,
    P_GEND_TYPE_NMDTUP_TARR_565
  };
  static PRT_TYPE P_GEND_TYPE_565 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_565
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_566[] = 
  {
    "_param_value_min",
    "_param_value_max",
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_566[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_566 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_566,
    P_GEND_TYPE_NMDTUP_TARR_566
  };
  static PRT_TYPE P_GEND_TYPE_566 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_566
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_567[] = 
  {
    "_pos_horiz_ratio",
    "_pos_vert_ratio",
    "_mag_ratio",
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_567[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_567 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_567,
    P_GEND_TYPE_NMDTUP_TARR_567
  };
  static PRT_TYPE P_GEND_TYPE_567 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_567
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_568[] = 
  {
    "_satellite_used",
    "_satellite_elevation",
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_568[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_568 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_568,
    P_GEND_TYPE_NMDTUP_TARR_568
  };
  static PRT_TYPE P_GEND_TYPE_568 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_568
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_569[] = 
  {
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_569[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_569 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_569,
    P_GEND_TYPE_NMDTUP_TARR_569
  };
  static PRT_TYPE P_GEND_TYPE_569 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_569
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_570[] = 
  {
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_570[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_570 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_570,
    P_GEND_TYPE_NMDTUP_TARR_570
  };
  static PRT_TYPE P_GEND_TYPE_570 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_570
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_571[] = 
  {
    "_temperature",
    "_voltages",
    "_current_battery",
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_571[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_571 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_571,
    P_GEND_TYPE_NMDTUP_TARR_571
  };
  static PRT_TYPE P_GEND_TYPE_571 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_571
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_572[] = 
  {
    "_time_boot_ms",
    "_min_distance",
    "_max_distance",
    "_current_distance",
    "_type",
    "_id",
    "_orientation",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_572[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_572 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_572,
    P_GEND_TYPE_NMDTUP_TARR_572
  };
  static PRT_TYPE P_GEND_TYPE_572 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_572
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_573[] = 
  {
    "_time_boot_ms",
    "_q",
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_573[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_573 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_573,
    P_GEND_TYPE_NMDTUP_TARR_573
  };
  static PRT_TYPE P_GEND_TYPE_573 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_573
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_574[] = 
  {
    "_time_boot_ms",
    "_q1",
    "_q2",
    "_q3",
    "_q4",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_574[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_574 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_574,
    P_GEND_TYPE_NMDTUP_TARR_574
  };
  static PRT_TYPE P_GEND_TYPE_574 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_574
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_575[] = 
  {
    "_time_usec",
    "_angle_x",
    "_angle_y",
    "_distance",
    "_size_x",
    "_size_y",
    "_target_num",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_575[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_575 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_575,
    P_GEND_TYPE_NMDTUP_TARR_575
  };
  static PRT_TYPE P_GEND_TYPE_575 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_575
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_576[] = 
  {
    "_time_usec",
    "_flow_comp_m_x",
    "_flow_comp_m_y",
    "_ground_distance",
    "_flow_x",
    "_flow_y",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_576[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_576 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_576,
    P_GEND_TYPE_NMDTUP_TARR_576
  };
  static PRT_TYPE P_GEND_TYPE_576 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_576
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_577[] = 
  {
    "_time_usec",
    "_q",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_577[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_577 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_577,
    P_GEND_TYPE_NMDTUP_TARR_577
  };
  static PRT_TYPE P_GEND_TYPE_577 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_577
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_578[] = 
  {
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_578[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_578 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_578,
    P_GEND_TYPE_NMDTUP_TARR_578
  };
  static PRT_TYPE P_GEND_TYPE_578 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_578
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_579[] = 
  {
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_579[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_579 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_579,
    P_GEND_TYPE_NMDTUP_TARR_579
  };
  static PRT_TYPE P_GEND_TYPE_579 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_579
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_580[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_580[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_580 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_580,
    P_GEND_TYPE_NMDTUP_TARR_580
  };
  static PRT_TYPE P_GEND_TYPE_580 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_580
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_581[] = 
  {
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_581[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_581 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_581,
    P_GEND_TYPE_NMDTUP_TARR_581
  };
  static PRT_TYPE P_GEND_TYPE_581 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_581
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_582[] = 
  {
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_582[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_582 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_582,
    P_GEND_TYPE_NMDTUP_TARR_582
  };
  static PRT_TYPE P_GEND_TYPE_582 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_582
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_583[] = 
  {
    "_wind_x",
    "_wind_y",
    "_wind_z",
    "_var_horiz",
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_583[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_583 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_583,
    P_GEND_TYPE_NMDTUP_TARR_583
  };
  static PRT_TYPE P_GEND_TYPE_583 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_583
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_584[] = 
  {
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_584[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_584 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_584,
    P_GEND_TYPE_NMDTUP_TARR_584
  };
  static PRT_TYPE P_GEND_TYPE_584 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_584
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_585[] = 
  {
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_585[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_585 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_585,
    P_GEND_TYPE_NMDTUP_TARR_585
  };
  static PRT_TYPE P_GEND_TYPE_585 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_585
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_586[] = 
  {
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_586[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_586 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_586,
    P_GEND_TYPE_NMDTUP_TARR_586
  };
  static PRT_TYPE P_GEND_TYPE_586 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_586
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_587[] = 
  {
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_587[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_587 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_587,
    P_GEND_TYPE_NMDTUP_TARR_587
  };
  static PRT_TYPE P_GEND_TYPE_587 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_587
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_588[] = 
  {
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_588[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_588 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_588,
    P_GEND_TYPE_NMDTUP_TARR_588
  };
  static PRT_TYPE P_GEND_TYPE_588 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_588
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_589[] = 
  {
    "_yaw_rudder",
    "_throttle",
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_589[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_589 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_589,
    P_GEND_TYPE_NMDTUP_TARR_589
  };
  static PRT_TYPE P_GEND_TYPE_589 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_589
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_590[] = 
  {
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_590[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_590 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_590,
    P_GEND_TYPE_NMDTUP_TARR_590
  };
  static PRT_TYPE P_GEND_TYPE_590 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_590
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_591[] = 
  {
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_591[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_591 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_591,
    P_GEND_TYPE_NMDTUP_TARR_591
  };
  static PRT_TYPE P_GEND_TYPE_591 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_591
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_592[] = 
  {
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_592[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_592 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_592,
    P_GEND_TYPE_NMDTUP_TARR_592
  };
  static PRT_TYPE P_GEND_TYPE_592 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_592
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_593[] = 
  {
    "_alt",
    "_dgps_age",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_593[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_593 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_593,
    P_GEND_TYPE_NMDTUP_TARR_593
  };
  static PRT_TYPE P_GEND_TYPE_593 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_593
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_594[] = 
  {
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_594[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_594 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_594,
    P_GEND_TYPE_NMDTUP_TARR_594
  };
  static PRT_TYPE P_GEND_TYPE_594 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_594
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_595[] = 
  {
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_595[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_595 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_595,
    P_GEND_TYPE_NMDTUP_TARR_595
  };
  static PRT_TYPE P_GEND_TYPE_595 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_595
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_596[] = 
  {
    "_baseline_c_mm",
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_596[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_596 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_596,
    P_GEND_TYPE_NMDTUP_TARR_596
  };
  static PRT_TYPE P_GEND_TYPE_596 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_596
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_597[] = 
  {
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_597[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_597 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_597,
    P_GEND_TYPE_NMDTUP_TARR_597
  };
  static PRT_TYPE P_GEND_TYPE_597 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_597
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_598[] = 
  {
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_598[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_598 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_598,
    P_GEND_TYPE_NMDTUP_TARR_598
  };
  static PRT_TYPE P_GEND_TYPE_598 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_598
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_599[] = 
  {
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_599[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_599 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_599,
    P_GEND_TYPE_NMDTUP_TARR_599
  };
  static PRT_TYPE P_GEND_TYPE_599 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_599
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_600[] = 
  {
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_600[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_600 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_600,
    P_GEND_TYPE_NMDTUP_TARR_600
  };
  static PRT_TYPE P_GEND_TYPE_600 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_600
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_601[] = 
  {
    "_chan2_scaled",
    "_chan3_scaled",
    "_chan4_scaled",
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_601[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_601 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_601,
    P_GEND_TYPE_NMDTUP_TARR_601
  };
  static PRT_TYPE P_GEND_TYPE_601 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_601
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_602[] = 
  {
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_602[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_602 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_602,
    P_GEND_TYPE_NMDTUP_TARR_602
  };
  static PRT_TYPE P_GEND_TYPE_602 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_602
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_603[] = 
  {
    "_energy_consumed",
    "_temperature",
    "_voltages",
    "_current_battery",
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_603[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_603 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_603,
    P_GEND_TYPE_NMDTUP_TARR_603
  };
  static PRT_TYPE P_GEND_TYPE_603 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_603
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_604[] = 
  {
    "_eph",
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_604[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_604 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_604,
    P_GEND_TYPE_NMDTUP_TARR_604
  };
  static PRT_TYPE P_GEND_TYPE_604 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_604
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_605[] = 
  {
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_605[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_605 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_605,
    P_GEND_TYPE_NMDTUP_TARR_605
  };
  static PRT_TYPE P_GEND_TYPE_605 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_605
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_606[] = 
  {
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_606[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_606 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_606,
    P_GEND_TYPE_NMDTUP_TARR_606
  };
  static PRT_TYPE P_GEND_TYPE_606 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_606
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_607[] = 
  {
    "_integrated_y",
    "_integrated_xgyro",
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_607[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_607 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_607,
    P_GEND_TYPE_NMDTUP_TARR_607
  };
  static PRT_TYPE P_GEND_TYPE_607 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_607
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_608[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_608[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_608 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_608,
    P_GEND_TYPE_NMDTUP_TARR_608
  };
  static PRT_TYPE P_GEND_TYPE_608 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_608
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_609[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_609[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_609 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_609,
    P_GEND_TYPE_NMDTUP_TARR_609
  };
  static PRT_TYPE P_GEND_TYPE_609 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_609
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_610[] = 
  {
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_610[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_610 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_610,
    P_GEND_TYPE_NMDTUP_TARR_610
  };
  static PRT_TYPE P_GEND_TYPE_610 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_610
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_611[] = 
  {
    "_p1x",
    "_p1y",
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_target_system",
    "_target_component",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_611[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_611 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_611,
    P_GEND_TYPE_NMDTUP_TARR_611
  };
  static PRT_TYPE P_GEND_TYPE_611 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_611
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_612[] = 
  {
    "_param3",
    "_param4",
    "_param5",
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_612[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_612 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_612,
    P_GEND_TYPE_NMDTUP_TARR_612
  };
  static PRT_TYPE P_GEND_TYPE_612 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_612
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_613[] = 
  {
    "_pitch_elevator",
    "_yaw_rudder",
    "_throttle",
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_613[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_613 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_613,
    P_GEND_TYPE_NMDTUP_TARR_613
  };
  static PRT_TYPE P_GEND_TYPE_613 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_613
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_614[] = 
  {
    "_q",
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_614[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_614 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_614,
    P_GEND_TYPE_NMDTUP_TARR_614
  };
  static PRT_TYPE P_GEND_TYPE_614 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_614
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_615[] = 
  {
    "_scale",
    "_param_value_min",
    "_param_value_max",
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_615[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_615 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_615,
    P_GEND_TYPE_NMDTUP_TARR_615
  };
  static PRT_TYPE P_GEND_TYPE_615 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_615
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_616[] = 
  {
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_616[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_616 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_616,
    P_GEND_TYPE_NMDTUP_TARR_616
  };
  static PRT_TYPE P_GEND_TYPE_616 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_616
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_617[] = 
  {
    "_time_boot_ms",
    "_lat",
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_hdg"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_617[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_617 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_617,
    P_GEND_TYPE_NMDTUP_TARR_617
  };
  static PRT_TYPE P_GEND_TYPE_617 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_617
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_618[] = 
  {
    "_time_usec",
    "_wind_x",
    "_wind_y",
    "_wind_z",
    "_var_horiz",
    "_var_vert",
    "_wind_alt",
    "_horiz_accuracy",
    "_vert_accuracy"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_618[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_618 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_618,
    P_GEND_TYPE_NMDTUP_TARR_618
  };
  static PRT_TYPE P_GEND_TYPE_618 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_618
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_619[] = 
  {
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_619[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_619 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_619,
    P_GEND_TYPE_NMDTUP_TARR_619
  };
  static PRT_TYPE P_GEND_TYPE_619 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_619
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_620[] = 
  {
    "_vel_ratio",
    "_pos_horiz_ratio",
    "_pos_vert_ratio",
    "_mag_ratio",
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_620[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_620 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_620,
    P_GEND_TYPE_NMDTUP_TARR_620
  };
  static PRT_TYPE P_GEND_TYPE_620 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_620
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_621[] = 
  {
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_621[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_621 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_621,
    P_GEND_TYPE_NMDTUP_TARR_621
  };
  static PRT_TYPE P_GEND_TYPE_621 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_621
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_622[] = 
  {
    "_voltage_battery",
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_622[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_622 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_622,
    P_GEND_TYPE_NMDTUP_TARR_622
  };
  static PRT_TYPE P_GEND_TYPE_622 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_622
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_623[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_623[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_623 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_623,
    P_GEND_TYPE_NMDTUP_TARR_623
  };
  static PRT_TYPE P_GEND_TYPE_623 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_623
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_624[] = 
  {
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_624[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_624 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_624,
    P_GEND_TYPE_NMDTUP_TARR_624
  };
  static PRT_TYPE P_GEND_TYPE_624 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_624
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_625[] = 
  {
    "_x",
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_625[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_625 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_625,
    P_GEND_TYPE_NMDTUP_TARR_625
  };
  static PRT_TYPE P_GEND_TYPE_625 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_625
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_626[] = 
  {
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_626[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_626 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_626,
    P_GEND_TYPE_NMDTUP_TARR_626
  };
  static PRT_TYPE P_GEND_TYPE_626 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_626
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_627[] = 
  {
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_627[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_627 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_627,
    P_GEND_TYPE_NMDTUP_TARR_627
  };
  static PRT_TYPE P_GEND_TYPE_627 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_627
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_628[] = 
  {
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_628[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_628 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_628,
    P_GEND_TYPE_NMDTUP_TARR_628
  };
  static PRT_TYPE P_GEND_TYPE_628 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_628
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_629[] = 
  {
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_629[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_629 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_629,
    P_GEND_TYPE_NMDTUP_TARR_629
  };
  static PRT_TYPE P_GEND_TYPE_629 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_629
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_630[] = 
  {
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_630[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_630 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_630,
    P_GEND_TYPE_NMDTUP_TARR_630
  };
  static PRT_TYPE P_GEND_TYPE_630 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_630
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_631[] = 
  {
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_631[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_631 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_631,
    P_GEND_TYPE_NMDTUP_TARR_631
  };
  static PRT_TYPE P_GEND_TYPE_631 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_631
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_632[] = 
  {
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_632[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_632 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_632,
    P_GEND_TYPE_NMDTUP_TARR_632
  };
  static PRT_TYPE P_GEND_TYPE_632 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_632
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_633[] = 
  {
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_633[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_633 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_633,
    P_GEND_TYPE_NMDTUP_TARR_633
  };
  static PRT_TYPE P_GEND_TYPE_633 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_633
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_634[] = 
  {
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_634[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_634 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_634,
    P_GEND_TYPE_NMDTUP_TARR_634
  };
  static PRT_TYPE P_GEND_TYPE_634 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_634
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_635[] = 
  {
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_635[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_635 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_635,
    P_GEND_TYPE_NMDTUP_TARR_635
  };
  static PRT_TYPE P_GEND_TYPE_635 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_635
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_636[] = 
  {
    "_baseline_b_mm",
    "_baseline_c_mm",
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_636[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_636 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_636,
    P_GEND_TYPE_NMDTUP_TARR_636
  };
  static PRT_TYPE P_GEND_TYPE_636 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_636
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_637[] = 
  {
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_637[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_637 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_637,
    P_GEND_TYPE_NMDTUP_TARR_637
  };
  static PRT_TYPE P_GEND_TYPE_637 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_637
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_638[] = 
  {
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_638[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_638 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_638,
    P_GEND_TYPE_NMDTUP_TARR_638
  };
  static PRT_TYPE P_GEND_TYPE_638 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_638
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_639[] = 
  {
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_639[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_639 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_639,
    P_GEND_TYPE_NMDTUP_TARR_639
  };
  static PRT_TYPE P_GEND_TYPE_639 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_639
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_640[] = 
  {
    "_chan1_scaled",
    "_chan2_scaled",
    "_chan3_scaled",
    "_chan4_scaled",
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_640[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_640 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_640,
    P_GEND_TYPE_NMDTUP_TARR_640
  };
  static PRT_TYPE P_GEND_TYPE_640 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_640
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_641[] = 
  {
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_641[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_641 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_641,
    P_GEND_TYPE_NMDTUP_TARR_641
  };
  static PRT_TYPE P_GEND_TYPE_641 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_641
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_642[] = 
  {
    "_current_consumed",
    "_energy_consumed",
    "_temperature",
    "_voltages",
    "_current_battery",
    "_id",
    "_battery_function",
    "_type",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_642[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_642 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_642,
    P_GEND_TYPE_NMDTUP_TARR_642
  };
  static PRT_TYPE P_GEND_TYPE_642 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_642
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_643[] = 
  {
    "_heading",
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_643[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_643 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_643,
    P_GEND_TYPE_NMDTUP_TARR_643
  };
  static PRT_TYPE P_GEND_TYPE_643 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_643
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_644[] = 
  {
    "_integrated_x",
    "_integrated_y",
    "_integrated_xgyro",
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_644[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_644 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_644,
    P_GEND_TYPE_NMDTUP_TARR_644
  };
  static PRT_TYPE P_GEND_TYPE_644 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_644
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_645[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_645[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_645 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_645,
    P_GEND_TYPE_NMDTUP_TARR_645
  };
  static PRT_TYPE P_GEND_TYPE_645 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_645
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_646[] = 
  {
    "_load",
    "_voltage_battery",
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_646[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_646 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_646,
    P_GEND_TYPE_NMDTUP_TARR_646
  };
  static PRT_TYPE P_GEND_TYPE_646 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_646
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_647[] = 
  {
    "_lon",
    "_alt",
    "_dgps_age",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_647[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_647 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_647,
    P_GEND_TYPE_NMDTUP_TARR_647
  };
  static PRT_TYPE P_GEND_TYPE_647 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_647
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_648[] = 
  {
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_648[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_648 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_648,
    P_GEND_TYPE_NMDTUP_TARR_648
  };
  static PRT_TYPE P_GEND_TYPE_648 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_648
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_649[] = 
  {
    "_longitude",
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_649[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_649 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_649,
    P_GEND_TYPE_NMDTUP_TARR_649
  };
  static PRT_TYPE P_GEND_TYPE_649 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_649
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_650[] = 
  {
    "_os_sw_version",
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_650[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_650 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_650,
    P_GEND_TYPE_NMDTUP_TARR_650
  };
  static PRT_TYPE P_GEND_TYPE_650 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_650
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_651[] = 
  {
    "_param2",
    "_param3",
    "_param4",
    "_param5",
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_651[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_651 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_651,
    P_GEND_TYPE_NMDTUP_TARR_651
  };
  static PRT_TYPE P_GEND_TYPE_651 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_651
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_652[] = 
  {
    "_param4",
    "_x",
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_652[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_652 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_652,
    P_GEND_TYPE_NMDTUP_TARR_652
  };
  static PRT_TYPE P_GEND_TYPE_652 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_652
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_653[] = 
  {
    "_param_value0",
    "_scale",
    "_param_value_min",
    "_param_value_max",
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id",
    "_parameter_rc_channel_index"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_653[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_653 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_653,
    P_GEND_TYPE_NMDTUP_TARR_653
  };
  static PRT_TYPE P_GEND_TYPE_653 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_653
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_654[] = 
  {
    "_roll_ailerons",
    "_pitch_elevator",
    "_yaw_rudder",
    "_throttle",
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_654[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_654 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_654,
    P_GEND_TYPE_NMDTUP_TARR_654
  };
  static PRT_TYPE P_GEND_TYPE_654 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_654
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_655[] = 
  {
    "_satellite_prn",
    "_satellite_used",
    "_satellite_elevation",
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_655[] = 
  {
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_655 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_655,
    P_GEND_TYPE_NMDTUP_TARR_655
  };
  static PRT_TYPE P_GEND_TYPE_655 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_655
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_656[] = 
  {
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_656[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_656 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_656,
    P_GEND_TYPE_NMDTUP_TARR_656
  };
  static PRT_TYPE P_GEND_TYPE_656 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_656
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_657[] = 
  {
    "_time_boot_ms",
    "_q",
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_target_system",
    "_target_component",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_657[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_657 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_657,
    P_GEND_TYPE_NMDTUP_TARR_657
  };
  static PRT_TYPE P_GEND_TYPE_657 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_657
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_658[] = 
  {
    "_time_boot_ms",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_658[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_658 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_658,
    P_GEND_TYPE_NMDTUP_TARR_658
  };
  static PRT_TYPE P_GEND_TYPE_658 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_658
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_659[] = 
  {
    "_time_usec",
    "_lat",
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_659[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_659 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_659,
    P_GEND_TYPE_NMDTUP_TARR_659
  };
  static PRT_TYPE P_GEND_TYPE_659 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_659
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_660[] = 
  {
    "_time_usec",
    "_vel_ratio",
    "_pos_horiz_ratio",
    "_pos_vert_ratio",
    "_mag_ratio",
    "_hagl_ratio",
    "_tas_ratio",
    "_pos_horiz_accuracy",
    "_pos_vert_accuracy",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_660[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_660 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_660,
    P_GEND_TYPE_NMDTUP_TARR_660
  };
  static PRT_TYPE P_GEND_TYPE_660 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_660
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_661[] = 
  {
    "_time_usec",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_661[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_661 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_661,
    P_GEND_TYPE_NMDTUP_TARR_661
  };
  static PRT_TYPE P_GEND_TYPE_661 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_661
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_662[] = 
  {
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_662[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_662 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_662,
    P_GEND_TYPE_NMDTUP_TARR_662
  };
  static PRT_TYPE P_GEND_TYPE_662 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_662
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_663[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_663[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_663 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_663,
    P_GEND_TYPE_NMDTUP_TARR_663
  };
  static PRT_TYPE P_GEND_TYPE_663 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_663
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_664[] = 
  {
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_664[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_664 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_664,
    P_GEND_TYPE_NMDTUP_TARR_664
  };
  static PRT_TYPE P_GEND_TYPE_664 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_664
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_665[] = 
  {
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_665[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_665 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_665,
    P_GEND_TYPE_NMDTUP_TARR_665
  };
  static PRT_TYPE P_GEND_TYPE_665 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_665
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_666[] = 
  {
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_666[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_666 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_666,
    P_GEND_TYPE_NMDTUP_TARR_666
  };
  static PRT_TYPE P_GEND_TYPE_666 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_666
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_667[] = 
  {
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_667[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_667 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_667,
    P_GEND_TYPE_NMDTUP_TARR_667
  };
  static PRT_TYPE P_GEND_TYPE_667 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_667
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_668[] = 
  {
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_668[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_668 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_668,
    P_GEND_TYPE_NMDTUP_TARR_668
  };
  static PRT_TYPE P_GEND_TYPE_668 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_668
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_669[] = 
  {
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_669[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_669 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_669,
    P_GEND_TYPE_NMDTUP_TARR_669
  };
  static PRT_TYPE P_GEND_TYPE_669 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_669
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_670[] = 
  {
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_670[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_670 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_670,
    P_GEND_TYPE_NMDTUP_TARR_670
  };
  static PRT_TYPE P_GEND_TYPE_670 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_670
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_671[] = 
  {
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_671[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_671 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_671,
    P_GEND_TYPE_NMDTUP_TARR_671
  };
  static PRT_TYPE P_GEND_TYPE_671 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_671
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_672[] = 
  {
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_672[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_672 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_672,
    P_GEND_TYPE_NMDTUP_TARR_672
  };
  static PRT_TYPE P_GEND_TYPE_672 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_672
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_673[] = 
  {
    "_altitude",
    "_heading",
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_673[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_673 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_673,
    P_GEND_TYPE_NMDTUP_TARR_673
  };
  static PRT_TYPE P_GEND_TYPE_673 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_673
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_674[] = 
  {
    "_baseline_a_mm",
    "_baseline_b_mm",
    "_baseline_c_mm",
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_674[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_674 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_674,
    P_GEND_TYPE_NMDTUP_TARR_674
  };
  static PRT_TYPE P_GEND_TYPE_674 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_674
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_675[] = 
  {
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_675[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_675 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_675,
    P_GEND_TYPE_NMDTUP_TARR_675
  };
  static PRT_TYPE P_GEND_TYPE_675 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_675
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_676[] = 
  {
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_676[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_676 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_676,
    P_GEND_TYPE_NMDTUP_TARR_676
  };
  static PRT_TYPE P_GEND_TYPE_676 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_676
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_677[] = 
  {
    "_integration_time_us",
    "_integrated_x",
    "_integrated_y",
    "_integrated_xgyro",
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_677[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_677 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_677,
    P_GEND_TYPE_NMDTUP_TARR_677
  };
  static PRT_TYPE P_GEND_TYPE_677 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_677
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_678[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_dgps_age",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_678[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_678 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_678,
    P_GEND_TYPE_NMDTUP_TARR_678
  };
  static PRT_TYPE P_GEND_TYPE_678 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_678
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_679[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_679[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_679 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_679,
    P_GEND_TYPE_NMDTUP_TARR_679
  };
  static PRT_TYPE P_GEND_TYPE_679 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_679
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_680[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_680[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_680 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_680,
    P_GEND_TYPE_NMDTUP_TARR_680
  };
  static PRT_TYPE P_GEND_TYPE_680 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_680
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_681[] = 
  {
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_681[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_681 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_681,
    P_GEND_TYPE_NMDTUP_TARR_681
  };
  static PRT_TYPE P_GEND_TYPE_681 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_681
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_682[] = 
  {
    "_longitude",
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_682[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_682 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_682,
    P_GEND_TYPE_NMDTUP_TARR_682
  };
  static PRT_TYPE P_GEND_TYPE_682 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_682
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_683[] = 
  {
    "_middleware_sw_version",
    "_os_sw_version",
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_683[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_683 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_683,
    P_GEND_TYPE_NMDTUP_TARR_683
  };
  static PRT_TYPE P_GEND_TYPE_683 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_683
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_684[] = 
  {
    "_onboard_control_sensors_health",
    "_load",
    "_voltage_battery",
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_684[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_684 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_684,
    P_GEND_TYPE_NMDTUP_TARR_684
  };
  static PRT_TYPE P_GEND_TYPE_684 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_684
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_685[] = 
  {
    "_param1",
    "_param2",
    "_param3",
    "_param4",
    "_param5",
    "_param6",
    "_param7",
    "_command",
    "_target_system",
    "_target_component",
    "_confirmation"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_685[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_685 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_685,
    P_GEND_TYPE_NMDTUP_TARR_685
  };
  static PRT_TYPE P_GEND_TYPE_685 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_685
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_686[] = 
  {
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_686[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_686 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_686,
    P_GEND_TYPE_NMDTUP_TARR_686
  };
  static PRT_TYPE P_GEND_TYPE_686 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_686
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_687[] = 
  {
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_687[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_687 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_687,
    P_GEND_TYPE_NMDTUP_TARR_687
  };
  static PRT_TYPE P_GEND_TYPE_687 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_687
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_688[] = 
  {
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_688[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_688 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_688,
    P_GEND_TYPE_NMDTUP_TARR_688
  };
  static PRT_TYPE P_GEND_TYPE_688 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_688
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_689[] = 
  {
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_689[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_689 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_689,
    P_GEND_TYPE_NMDTUP_TARR_689
  };
  static PRT_TYPE P_GEND_TYPE_689 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_689
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_690[] = 
  {
    "_satellites_visible",
    "_satellite_prn",
    "_satellite_used",
    "_satellite_elevation",
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_690[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_690 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_690,
    P_GEND_TYPE_NMDTUP_TARR_690
  };
  static PRT_TYPE P_GEND_TYPE_690 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_690
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_691[] = 
  {
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_691[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_691 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_691,
    P_GEND_TYPE_NMDTUP_TARR_691
  };
  static PRT_TYPE P_GEND_TYPE_691 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_691
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_692[] = 
  {
    "_time_boot_ms",
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_692[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_692 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_692,
    P_GEND_TYPE_NMDTUP_TARR_692
  };
  static PRT_TYPE P_GEND_TYPE_692 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_692
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_693[] = 
  {
    "_time_boot_ms",
    "_chan1_scaled",
    "_chan2_scaled",
    "_chan3_scaled",
    "_chan4_scaled",
    "_chan5_scaled",
    "_chan6_scaled",
    "_chan7_scaled",
    "_chan8_scaled",
    "_port",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_693[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_693 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_693,
    P_GEND_TYPE_NMDTUP_TARR_693
  };
  static PRT_TYPE P_GEND_TYPE_693 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_693
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_694[] = 
  {
    "_time_usec",
    "_lat",
    "_lon",
    "_alt",
    "_relative_alt",
    "_vx",
    "_vy",
    "_vz",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_694[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_694 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_694,
    P_GEND_TYPE_NMDTUP_TARR_694
  };
  static PRT_TYPE P_GEND_TYPE_694 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_694
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_695[] = 
  {
    "_time_usec",
    "_roll_ailerons",
    "_pitch_elevator",
    "_yaw_rudder",
    "_throttle",
    "_aux1",
    "_aux2",
    "_aux3",
    "_aux4",
    "_mode",
    "_nav_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_695[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_695 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_695,
    P_GEND_TYPE_NMDTUP_TARR_695
  };
  static PRT_TYPE P_GEND_TYPE_695 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_695
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_696[] = 
  {
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_696[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_696 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_696,
    P_GEND_TYPE_NMDTUP_TARR_696
  };
  static PRT_TYPE P_GEND_TYPE_696 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_696
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_697[] = 
  {
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_697[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_697 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_697,
    P_GEND_TYPE_NMDTUP_TARR_697
  };
  static PRT_TYPE P_GEND_TYPE_697 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_697
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_698[] = 
  {
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_698[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_698 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_698,
    P_GEND_TYPE_NMDTUP_TARR_698
  };
  static PRT_TYPE P_GEND_TYPE_698 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_698
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_699[] = 
  {
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_699[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_699 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_699,
    P_GEND_TYPE_NMDTUP_TARR_699
  };
  static PRT_TYPE P_GEND_TYPE_699 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_699
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_700[] = 
  {
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_700[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_700 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_700,
    P_GEND_TYPE_NMDTUP_TARR_700
  };
  static PRT_TYPE P_GEND_TYPE_700 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_700
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_701[] = 
  {
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_701[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_701 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_701,
    P_GEND_TYPE_NMDTUP_TARR_701
  };
  static PRT_TYPE P_GEND_TYPE_701 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_701
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_702[] = 
  {
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_702[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_702 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_702,
    P_GEND_TYPE_NMDTUP_TARR_702
  };
  static PRT_TYPE P_GEND_TYPE_702 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_702
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_703[] = 
  {
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_703[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_703 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_703,
    P_GEND_TYPE_NMDTUP_TARR_703
  };
  static PRT_TYPE P_GEND_TYPE_703 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_703
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_704[] = 
  {
    "_alt",
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_704[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_704 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_704,
    P_GEND_TYPE_NMDTUP_TARR_704
  };
  static PRT_TYPE P_GEND_TYPE_704 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_704
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_705[] = 
  {
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_705[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_705 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_705,
    P_GEND_TYPE_NMDTUP_TARR_705
  };
  static PRT_TYPE P_GEND_TYPE_705 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_705
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_706[] = 
  {
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_706[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_706 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_706,
    P_GEND_TYPE_NMDTUP_TARR_706
  };
  static PRT_TYPE P_GEND_TYPE_706 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_706
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_707[] = 
  {
    "_flight_sw_version",
    "_middleware_sw_version",
    "_os_sw_version",
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_707[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_707 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_707,
    P_GEND_TYPE_NMDTUP_TARR_707
  };
  static PRT_TYPE P_GEND_TYPE_707 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_707
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_708[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_708[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_708 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_708,
    P_GEND_TYPE_NMDTUP_TARR_708
  };
  static PRT_TYPE P_GEND_TYPE_708 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_708
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_709[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude",
    "_x",
    "_y",
    "_z",
    "_q",
    "_approach_x",
    "_approach_y",
    "_approach_z",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_709[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_709 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_709,
    P_GEND_TYPE_NMDTUP_TARR_709
  };
  static PRT_TYPE P_GEND_TYPE_709 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_709
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_710[] = 
  {
    "_lon",
    "_altitude",
    "_heading",
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_710[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_710 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_710,
    P_GEND_TYPE_NMDTUP_TARR_710
  };
  static PRT_TYPE P_GEND_TYPE_710 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_710
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_711[] = 
  {
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_711[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_711 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_711,
    P_GEND_TYPE_NMDTUP_TARR_711
  };
  static PRT_TYPE P_GEND_TYPE_711 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_711
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_712[] = 
  {
    "_onboard_control_sensors_enabled",
    "_onboard_control_sensors_health",
    "_load",
    "_voltage_battery",
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_712[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_712 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_712,
    P_GEND_TYPE_NMDTUP_TARR_712
  };
  static PRT_TYPE P_GEND_TYPE_712 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_712
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_713[] = 
  {
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_713[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_713 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_713,
    P_GEND_TYPE_NMDTUP_TARR_713
  };
  static PRT_TYPE P_GEND_TYPE_713 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_713
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_714[] = 
  {
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_714[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_714 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_714,
    P_GEND_TYPE_NMDTUP_TARR_714
  };
  static PRT_TYPE P_GEND_TYPE_714 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_714
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_715[] = 
  {
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_715[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_715 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_715,
    P_GEND_TYPE_NMDTUP_TARR_715
  };
  static PRT_TYPE P_GEND_TYPE_715 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_715
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_716[] = 
  {
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_716[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_716 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_716,
    P_GEND_TYPE_NMDTUP_TARR_716
  };
  static PRT_TYPE P_GEND_TYPE_716 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_716
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_717[] = 
  {
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_717[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_717 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_717,
    P_GEND_TYPE_NMDTUP_TARR_717
  };
  static PRT_TYPE P_GEND_TYPE_717 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_717
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_718[] = 
  {
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_718[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_718 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_718,
    P_GEND_TYPE_NMDTUP_TARR_718
  };
  static PRT_TYPE P_GEND_TYPE_718 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_718
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_719[] = 
  {
    "_time_usec",
    "_integration_time_us",
    "_integrated_x",
    "_integrated_y",
    "_integrated_xgyro",
    "_integrated_ygyro",
    "_integrated_zgyro",
    "_time_delta_distance_us",
    "_distance",
    "_temperature",
    "_sensor_id",
    "_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_719[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_719 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_719,
    P_GEND_TYPE_NMDTUP_TARR_719
  };
  static PRT_TYPE P_GEND_TYPE_719 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_719
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_720[] = 
  {
    "_time_usec",
    "_lat",
    "_lon",
    "_alt",
    "_dgps_age",
    "_eph",
    "_epv",
    "_vel",
    "_cog",
    "_fix_type",
    "_satellites_visible",
    "_dgps_numch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_720[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_720 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_720,
    P_GEND_TYPE_NMDTUP_TARR_720
  };
  static PRT_TYPE P_GEND_TYPE_720 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_720
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_721[] = 
  {
    "_tow",
    "_baseline_a_mm",
    "_baseline_b_mm",
    "_baseline_c_mm",
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_721[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_721 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_721,
    P_GEND_TYPE_NMDTUP_TARR_721
  };
  static PRT_TYPE P_GEND_TYPE_721 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_721
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_722[] = 
  {
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_722[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_722 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_722,
    P_GEND_TYPE_NMDTUP_TARR_722
  };
  static PRT_TYPE P_GEND_TYPE_722 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_722
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_723[] = 
  {
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_723[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_723 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_723,
    P_GEND_TYPE_NMDTUP_TARR_723
  };
  static PRT_TYPE P_GEND_TYPE_723 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_723
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_724[] = 
  {
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_724[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_724 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_724,
    P_GEND_TYPE_NMDTUP_TARR_724
  };
  static PRT_TYPE P_GEND_TYPE_724 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_724
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_725[] = 
  {
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_725[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_725 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_725,
    P_GEND_TYPE_NMDTUP_TARR_725
  };
  static PRT_TYPE P_GEND_TYPE_725 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_725
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_726[] = 
  {
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_726[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_726 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_726,
    P_GEND_TYPE_NMDTUP_TARR_726
  };
  static PRT_TYPE P_GEND_TYPE_726 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_726
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_727[] = 
  {
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_727[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_727 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_727,
    P_GEND_TYPE_NMDTUP_TARR_727
  };
  static PRT_TYPE P_GEND_TYPE_727 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_727
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_728[] = 
  {
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_728[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_728 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_728,
    P_GEND_TYPE_NMDTUP_TARR_728
  };
  static PRT_TYPE P_GEND_TYPE_728 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_728
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_729[] = 
  {
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_729[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_729 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_729,
    P_GEND_TYPE_NMDTUP_TARR_729
  };
  static PRT_TYPE P_GEND_TYPE_729 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_729
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_730[] = 
  {
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_730[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_730 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_730,
    P_GEND_TYPE_NMDTUP_TARR_730
  };
  static PRT_TYPE P_GEND_TYPE_730 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_730
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_731[] = 
  {
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_731[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_731 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_731,
    P_GEND_TYPE_NMDTUP_TARR_731
  };
  static PRT_TYPE P_GEND_TYPE_731 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_731
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_732[] = 
  {
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_732[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_732 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_732,
    P_GEND_TYPE_NMDTUP_TARR_732
  };
  static PRT_TYPE P_GEND_TYPE_732 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_732
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_733[] = 
  {
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_733[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_733 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_733,
    P_GEND_TYPE_NMDTUP_TARR_733
  };
  static PRT_TYPE P_GEND_TYPE_733 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_733
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_734[] = 
  {
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_734[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_734 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_734,
    P_GEND_TYPE_NMDTUP_TARR_734
  };
  static PRT_TYPE P_GEND_TYPE_734 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_734
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_735[] = 
  {
    "_lat",
    "_lon",
    "_altitude",
    "_heading",
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_735[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_735 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_735,
    P_GEND_TYPE_NMDTUP_TARR_735
  };
  static PRT_TYPE P_GEND_TYPE_735 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_735
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_736[] = 
  {
    "_lat_int",
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_736[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_736 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_736,
    P_GEND_TYPE_NMDTUP_TARR_736
  };
  static PRT_TYPE P_GEND_TYPE_736 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_736
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_737[] = 
  {
    "_lon",
    "_alt",
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_737[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_737 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_737,
    P_GEND_TYPE_NMDTUP_TARR_737
  };
  static PRT_TYPE P_GEND_TYPE_737 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_737
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_738[] = 
  {
    "_onboard_control_sensors_present",
    "_onboard_control_sensors_enabled",
    "_onboard_control_sensors_health",
    "_load",
    "_voltage_battery",
    "_current_battery",
    "_drop_rate_comm",
    "_errors_comm",
    "_errors_count1",
    "_errors_count2",
    "_errors_count3",
    "_errors_count4",
    "_battery_remaining"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_738[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_738 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_738,
    P_GEND_TYPE_NMDTUP_TARR_738
  };
  static PRT_TYPE P_GEND_TYPE_738 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_738
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_739[] = 
  {
    "_param1",
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_739[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_739 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_739,
    P_GEND_TYPE_NMDTUP_TARR_739
  };
  static PRT_TYPE P_GEND_TYPE_739 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_739
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_740[] = 
  {
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_740[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_740 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_740,
    P_GEND_TYPE_NMDTUP_TARR_740
  };
  static PRT_TYPE P_GEND_TYPE_740 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_740
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_741[] = 
  {
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_741[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_741 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_741,
    P_GEND_TYPE_NMDTUP_TARR_741
  };
  static PRT_TYPE P_GEND_TYPE_741 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_741
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_742[] = 
  {
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_742[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_742 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_742,
    P_GEND_TYPE_NMDTUP_TARR_742
  };
  static PRT_TYPE P_GEND_TYPE_742 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_742
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_743[] = 
  {
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_743[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_743 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_743,
    P_GEND_TYPE_NMDTUP_TARR_743
  };
  static PRT_TYPE P_GEND_TYPE_743 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_743
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_744[] = 
  {
    "_time_last_baseline_ms",
    "_tow",
    "_baseline_a_mm",
    "_baseline_b_mm",
    "_baseline_c_mm",
    "_accuracy",
    "_iar_num_hypotheses",
    "_wn",
    "_rtk_receiver_id",
    "_rtk_health",
    "_rtk_rate",
    "_nsats",
    "_baseline_coords_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_744[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_744 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_744,
    P_GEND_TYPE_NMDTUP_TARR_744
  };
  static PRT_TYPE P_GEND_TYPE_744 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_744
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_745[] = 
  {
    "_time_usec",
    "_lat",
    "_lon",
    "_alt",
    "_eph",
    "_epv",
    "_vel",
    "_vn",
    "_ve",
    "_vd",
    "_cog",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_745[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_745 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_745,
    P_GEND_TYPE_NMDTUP_TARR_745
  };
  static PRT_TYPE P_GEND_TYPE_745 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_745
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_746[] = 
  {
    "_time_usec",
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_ax",
    "_ay",
    "_az",
    "_covariance",
    "_estimator_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_746[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_746 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_746,
    P_GEND_TYPE_NMDTUP_TARR_746
  };
  static PRT_TYPE P_GEND_TYPE_746 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_746
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_747[] = 
  {
    "_uid",
    "_flight_sw_version",
    "_middleware_sw_version",
    "_os_sw_version",
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_747[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_747 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_747,
    P_GEND_TYPE_NMDTUP_TARR_747
  };
  static PRT_TYPE P_GEND_TYPE_747 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_747
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_748[] = 
  {
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_748[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_748 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_748,
    P_GEND_TYPE_NMDTUP_TARR_748
  };
  static PRT_TYPE P_GEND_TYPE_748 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_748
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_749[] = 
  {
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_749[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_749 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_749,
    P_GEND_TYPE_NMDTUP_TARR_749
  };
  static PRT_TYPE P_GEND_TYPE_749 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_749
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_750[] = 
  {
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_750[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_750 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_750,
    P_GEND_TYPE_NMDTUP_TARR_750
  };
  static PRT_TYPE P_GEND_TYPE_750 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_750
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_751[] = 
  {
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_751[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_751 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_751,
    P_GEND_TYPE_NMDTUP_TARR_751
  };
  static PRT_TYPE P_GEND_TYPE_751 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_751
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_752[] = 
  {
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_752[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_752 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_752,
    P_GEND_TYPE_NMDTUP_TARR_752
  };
  static PRT_TYPE P_GEND_TYPE_752 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_752
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_753[] = 
  {
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_753[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_753 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_753,
    P_GEND_TYPE_NMDTUP_TARR_753
  };
  static PRT_TYPE P_GEND_TYPE_753 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_753
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_754[] = 
  {
    "_alt",
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_754[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_754 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_754,
    P_GEND_TYPE_NMDTUP_TARR_754
  };
  static PRT_TYPE P_GEND_TYPE_754 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_754
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_755[] = 
  {
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_755[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_755 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_755,
    P_GEND_TYPE_NMDTUP_TARR_755
  };
  static PRT_TYPE P_GEND_TYPE_755 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_755
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_756[] = 
  {
    "_capabilities",
    "_uid",
    "_flight_sw_version",
    "_middleware_sw_version",
    "_os_sw_version",
    "_board_version",
    "_vendor_id",
    "_product_id",
    "_flight_custom_version",
    "_middleware_custom_version",
    "_os_custom_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_756[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_79
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_756 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_756,
    P_GEND_TYPE_NMDTUP_TARR_756
  };
  static PRT_TYPE P_GEND_TYPE_756 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_756
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_757[] = 
  {
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_757[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_757 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_757,
    P_GEND_TYPE_NMDTUP_TARR_757
  };
  static PRT_TYPE P_GEND_TYPE_757 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_757
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_758[] = 
  {
    "_icao_address",
    "_lat",
    "_lon",
    "_altitude",
    "_heading",
    "_hor_velocity",
    "_ver_velocity",
    "_flags",
    "_squawk",
    "_altitude_type",
    "_callsign",
    "_emitter_type",
    "_tslc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_758[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_79,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_758 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_758,
    P_GEND_TYPE_NMDTUP_TARR_758
  };
  static PRT_TYPE P_GEND_TYPE_758 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_758
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_759[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_759[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_759 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_759,
    P_GEND_TYPE_NMDTUP_TARR_759
  };
  static PRT_TYPE P_GEND_TYPE_759 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_759
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_760[] = 
  {
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_760[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_760 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_760,
    P_GEND_TYPE_NMDTUP_TARR_760
  };
  static PRT_TYPE P_GEND_TYPE_760 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_760
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_761[] = 
  {
    "_param1",
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_761[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_761 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_761,
    P_GEND_TYPE_NMDTUP_TARR_761
  };
  static PRT_TYPE P_GEND_TYPE_761 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_761
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_762[] = 
  {
    "_param1",
    "_param2",
    "_param3",
    "_param4",
    "_x",
    "_y",
    "_z",
    "_seq",
    "_command",
    "_target_system",
    "_target_component",
    "_frame",
    "_current",
    "_autocontinue"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_762[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_762 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_762,
    P_GEND_TYPE_NMDTUP_TARR_762
  };
  static PRT_TYPE P_GEND_TYPE_762 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_762
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_763[] = 
  {
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_763[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_763 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_763,
    P_GEND_TYPE_NMDTUP_TARR_763
  };
  static PRT_TYPE P_GEND_TYPE_763 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_763
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_764[] = 
  {
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_764[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_764 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_764,
    P_GEND_TYPE_NMDTUP_TARR_764
  };
  static PRT_TYPE P_GEND_TYPE_764 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_764
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_765[] = 
  {
    "_servo4_raw",
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_765[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_765 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_765,
    P_GEND_TYPE_NMDTUP_TARR_765
  };
  static PRT_TYPE P_GEND_TYPE_765 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_765
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_766[] = 
  {
    "_time_boot_ms",
    "_lat_int",
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_766[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_766 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_766,
    P_GEND_TYPE_NMDTUP_TARR_766
  };
  static PRT_TYPE P_GEND_TYPE_766 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_766
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_767[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_767[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_767 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_767,
    P_GEND_TYPE_NMDTUP_TARR_767
  };
  static PRT_TYPE P_GEND_TYPE_767 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_767
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_768[] = 
  {
    "_time_usec",
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_768[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_768 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_768,
    P_GEND_TYPE_NMDTUP_TARR_768
  };
  static PRT_TYPE P_GEND_TYPE_768 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_768
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_769[] = 
  {
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_769[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_769 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_769,
    P_GEND_TYPE_NMDTUP_TARR_769
  };
  static PRT_TYPE P_GEND_TYPE_769 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_769
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_770[] = 
  {
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_770[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_770 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_770,
    P_GEND_TYPE_NMDTUP_TARR_770
  };
  static PRT_TYPE P_GEND_TYPE_770 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_770
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_771[] = 
  {
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_771[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_771 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_771,
    P_GEND_TYPE_NMDTUP_TARR_771
  };
  static PRT_TYPE P_GEND_TYPE_771 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_771
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_772[] = 
  {
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_772[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_772 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_772,
    P_GEND_TYPE_NMDTUP_TARR_772
  };
  static PRT_TYPE P_GEND_TYPE_772 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_772
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_773[] = 
  {
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_773[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_773 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_773,
    P_GEND_TYPE_NMDTUP_TARR_773
  };
  static PRT_TYPE P_GEND_TYPE_773 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_773
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_774[] = 
  {
    "_custom_state",
    "_lat",
    "_lon",
    "_alt",
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_774[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_774 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_774,
    P_GEND_TYPE_NMDTUP_TARR_774
  };
  static PRT_TYPE P_GEND_TYPE_774 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_774
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_775[] = 
  {
    "_lat_int",
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_775[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_775 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_775,
    P_GEND_TYPE_NMDTUP_TARR_775
  };
  static PRT_TYPE P_GEND_TYPE_775 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_775
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_776[] = 
  {
    "_lon",
    "_alt",
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_776[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_776 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_776,
    P_GEND_TYPE_NMDTUP_TARR_776
  };
  static PRT_TYPE P_GEND_TYPE_776 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_776
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_777[] = 
  {
    "_roll",
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_777[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_777 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_777,
    P_GEND_TYPE_NMDTUP_TARR_777
  };
  static PRT_TYPE P_GEND_TYPE_777 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_777
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_778[] = 
  {
    "_servo3_raw",
    "_servo4_raw",
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_778[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_778 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_778,
    P_GEND_TYPE_NMDTUP_TARR_778
  };
  static PRT_TYPE P_GEND_TYPE_778 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_778
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_779[] = 
  {
    "_time_usec",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_xmag",
    "_ymag",
    "_zmag",
    "_abs_pressure",
    "_diff_pressure",
    "_pressure_alt",
    "_temperature",
    "_fields_updated"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_779[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_779 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_779,
    P_GEND_TYPE_NMDTUP_TARR_779
  };
  static PRT_TYPE P_GEND_TYPE_779 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_779
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_780[] = 
  {
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_780[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_780 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_780,
    P_GEND_TYPE_NMDTUP_TARR_780
  };
  static PRT_TYPE P_GEND_TYPE_780 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_780
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_781[] = 
  {
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_781[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_781 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_781,
    P_GEND_TYPE_NMDTUP_TARR_781
  };
  static PRT_TYPE P_GEND_TYPE_781 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_781
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_782[] = 
  {
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_782[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_782 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_782,
    P_GEND_TYPE_NMDTUP_TARR_782
  };
  static PRT_TYPE P_GEND_TYPE_782 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_782
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_783[] = 
  {
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_783[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_783 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_783,
    P_GEND_TYPE_NMDTUP_TARR_783
  };
  static PRT_TYPE P_GEND_TYPE_783 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_783
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_784[] = 
  {
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_784[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_784 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_784,
    P_GEND_TYPE_NMDTUP_TARR_784
  };
  static PRT_TYPE P_GEND_TYPE_784 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_784
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_785[] = 
  {
    "_attitude_quaternion",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_785[] = 
  {
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_785 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_785,
    P_GEND_TYPE_NMDTUP_TARR_785
  };
  static PRT_TYPE P_GEND_TYPE_785 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_785
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_786[] = 
  {
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_786[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_786 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_786,
    P_GEND_TYPE_NMDTUP_TARR_786
  };
  static PRT_TYPE P_GEND_TYPE_786 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_786
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_787[] = 
  {
    "_lat",
    "_lon",
    "_alt",
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_787[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_787 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_787,
    P_GEND_TYPE_NMDTUP_TARR_787
  };
  static PRT_TYPE P_GEND_TYPE_787 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_787
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_788[] = 
  {
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_788[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_788 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_788,
    P_GEND_TYPE_NMDTUP_TARR_788
  };
  static PRT_TYPE P_GEND_TYPE_788 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_788
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_789[] = 
  {
    "_servo2_raw",
    "_servo3_raw",
    "_servo4_raw",
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_789[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_789 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_789,
    P_GEND_TYPE_NMDTUP_TARR_789
  };
  static PRT_TYPE P_GEND_TYPE_789 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_789
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_790[] = 
  {
    "_time_boot_ms",
    "_lat_int",
    "_lon_int",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_790[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_790 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_790,
    P_GEND_TYPE_NMDTUP_TARR_790
  };
  static PRT_TYPE P_GEND_TYPE_790 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_790
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_791[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz",
    "_afx",
    "_afy",
    "_afz",
    "_yaw",
    "_yaw_rate",
    "_type_mask",
    "_target_system",
    "_target_component",
    "_coordinate_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_791[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_791 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_791,
    P_GEND_TYPE_NMDTUP_TARR_791
  };
  static PRT_TYPE P_GEND_TYPE_791 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_791
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_792[] = 
  {
    "_time_usec",
    "_roll",
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_792[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_792 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_792,
    P_GEND_TYPE_NMDTUP_TARR_792
  };
  static PRT_TYPE P_GEND_TYPE_792 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_792
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_793[] = 
  {
    "_timestamp",
    "_custom_state",
    "_lat",
    "_lon",
    "_alt",
    "_vel",
    "_acc",
    "_attitude_q",
    "_rates",
    "_position_cov",
    "_est_capabilities"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_793[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_793 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_793,
    P_GEND_TYPE_NMDTUP_TARR_793
  };
  static PRT_TYPE P_GEND_TYPE_793 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_793
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_794[] = 
  {
    "_x_vel",
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_794[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_794 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_794,
    P_GEND_TYPE_NMDTUP_TARR_794
  };
  static PRT_TYPE P_GEND_TYPE_794 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_794
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_795[] = 
  {
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_795[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_795 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_795,
    P_GEND_TYPE_NMDTUP_TARR_795
  };
  static PRT_TYPE P_GEND_TYPE_795 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_795
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_796[] = 
  {
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_796[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_796 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_796,
    P_GEND_TYPE_NMDTUP_TARR_796
  };
  static PRT_TYPE P_GEND_TYPE_796 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_796
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_797[] = 
  {
    "_roll",
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_797[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_797 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_797,
    P_GEND_TYPE_NMDTUP_TARR_797
  };
  static PRT_TYPE P_GEND_TYPE_797 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_797
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_798[] = 
  {
    "_servo1_raw",
    "_servo2_raw",
    "_servo3_raw",
    "_servo4_raw",
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_798[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_798 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_798,
    P_GEND_TYPE_NMDTUP_TARR_798
  };
  static PRT_TYPE P_GEND_TYPE_798 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_798
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_799[] = 
  {
    "_time_usec",
    "_attitude_quaternion",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_lat",
    "_lon",
    "_alt",
    "_vx",
    "_vy",
    "_vz",
    "_ind_airspeed",
    "_true_airspeed",
    "_xacc",
    "_yacc",
    "_zacc"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_799[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_799 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_799,
    P_GEND_TYPE_NMDTUP_TARR_799
  };
  static PRT_TYPE P_GEND_TYPE_799 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_799
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_800[] = 
  {
    "_time_week_ms",
    "_lat",
    "_lon",
    "_alt",
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_800[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_800 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_800,
    P_GEND_TYPE_NMDTUP_TARR_800
  };
  static PRT_TYPE P_GEND_TYPE_800 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_800
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_801[] = 
  {
    "_z_acc",
    "_x_vel",
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_801[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_801 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_801,
    P_GEND_TYPE_NMDTUP_TARR_801
  };
  static PRT_TYPE P_GEND_TYPE_801 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_801
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_802[] = 
  {
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_802[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_802 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_802,
    P_GEND_TYPE_NMDTUP_TARR_802
  };
  static PRT_TYPE P_GEND_TYPE_802 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_802
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_803[] = 
  {
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_803[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_803 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_803,
    P_GEND_TYPE_NMDTUP_TARR_803
  };
  static PRT_TYPE P_GEND_TYPE_803 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_803
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_804[] = 
  {
    "_q4",
    "_roll",
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_804[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_804 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_804,
    P_GEND_TYPE_NMDTUP_TARR_804
  };
  static PRT_TYPE P_GEND_TYPE_804 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_804
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_805[] = 
  {
    "_time_usec",
    "_servo1_raw",
    "_servo2_raw",
    "_servo3_raw",
    "_servo4_raw",
    "_servo5_raw",
    "_servo6_raw",
    "_servo7_raw",
    "_servo8_raw",
    "_servo9_raw",
    "_servo10_raw",
    "_servo11_raw",
    "_servo12_raw",
    "_servo13_raw",
    "_servo14_raw",
    "_servo15_raw",
    "_servo16_raw",
    "_port"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_805[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_805 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_805,
    P_GEND_TYPE_NMDTUP_TARR_805
  };
  static PRT_TYPE P_GEND_TYPE_805 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_805
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_806[] = 
  {
    "_time_usec",
    "_time_week_ms",
    "_lat",
    "_lon",
    "_alt",
    "_hdop",
    "_vdop",
    "_vn",
    "_ve",
    "_vd",
    "_speed_accuracy",
    "_horiz_accuracy",
    "_vert_accuracy",
    "_ignore_flags",
    "_time_week",
    "_gps_id",
    "_fix_type",
    "_satellites_visible"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_806[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_806 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_806,
    P_GEND_TYPE_NMDTUP_TARR_806
  };
  static PRT_TYPE P_GEND_TYPE_806 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_806
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_807[] = 
  {
    "_y_acc",
    "_z_acc",
    "_x_vel",
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_807[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_807 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_807,
    P_GEND_TYPE_NMDTUP_TARR_807
  };
  static PRT_TYPE P_GEND_TYPE_807 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_807
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_808[] = 
  {
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_808[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_808 = 
  {
    19,
    P_GEND_TYPE_NMDTUP_NARR_808,
    P_GEND_TYPE_NMDTUP_TARR_808
  };
  static PRT_TYPE P_GEND_TYPE_808 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_808
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_809[] = 
  {
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_809[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_809 = 
  {
    19,
    P_GEND_TYPE_NMDTUP_NARR_809,
    P_GEND_TYPE_NMDTUP_TARR_809
  };
  static PRT_TYPE P_GEND_TYPE_809 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_809
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_810[] = 
  {
    "_q3",
    "_q4",
    "_roll",
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_810[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_810 = 
  {
    19,
    P_GEND_TYPE_NMDTUP_NARR_810,
    P_GEND_TYPE_NMDTUP_TARR_810
  };
  static PRT_TYPE P_GEND_TYPE_810 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_810
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_811[] = 
  {
    "_x_acc",
    "_y_acc",
    "_z_acc",
    "_x_vel",
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_811[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_811 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_811,
    P_GEND_TYPE_NMDTUP_TARR_811
  };
  static PRT_TYPE P_GEND_TYPE_811 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_811
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_812[] = 
  {
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_812[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_812 = 
  {
    20,
    P_GEND_TYPE_NMDTUP_NARR_812,
    P_GEND_TYPE_NMDTUP_TARR_812
  };
  static PRT_TYPE P_GEND_TYPE_812 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_812
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_813[] = 
  {
    "_pitch",
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_813[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_813 = 
  {
    20,
    P_GEND_TYPE_NMDTUP_NARR_813,
    P_GEND_TYPE_NMDTUP_TARR_813
  };
  static PRT_TYPE P_GEND_TYPE_813 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_813
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_814[] = 
  {
    "_q2",
    "_q3",
    "_q4",
    "_roll",
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_814[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_814 = 
  {
    20,
    P_GEND_TYPE_NMDTUP_NARR_814,
    P_GEND_TYPE_NMDTUP_TARR_814
  };
  static PRT_TYPE P_GEND_TYPE_814 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_814
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_815[] = 
  {
    "_time_usec",
    "_x_acc",
    "_y_acc",
    "_z_acc",
    "_x_vel",
    "_y_vel",
    "_z_vel",
    "_x_pos",
    "_y_pos",
    "_z_pos",
    "_airspeed",
    "_vel_variance",
    "_pos_variance",
    "_q",
    "_roll_rate",
    "_pitch_rate",
    "_yaw_rate"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_815[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_80,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_815 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_815,
    P_GEND_TYPE_NMDTUP_TARR_815
  };
  static PRT_TYPE P_GEND_TYPE_815 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_815
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_816[] = 
  {
    "_q1",
    "_q2",
    "_q3",
    "_q4",
    "_roll",
    "_pitch",
    "_yaw",
    "_xacc",
    "_yacc",
    "_zacc",
    "_xgyro",
    "_ygyro",
    "_zgyro",
    "_lat",
    "_lon",
    "_alt",
    "_std_dev_horz",
    "_std_dev_vert",
    "_vn",
    "_ve",
    "_vd"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_816[] = 
  {
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6,
    &P_GEND_TYPE_6
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_816 = 
  {
    21,
    P_GEND_TYPE_NMDTUP_NARR_816,
    P_GEND_TYPE_NMDTUP_TARR_816
  };
  static PRT_TYPE P_GEND_TYPE_816 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_816
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_817[] = 
  {
    "_roll",
    "_pitch",
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_817[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_817 = 
  {
    21,
    P_GEND_TYPE_NMDTUP_NARR_817,
    P_GEND_TYPE_NMDTUP_TARR_817
  };
  static PRT_TYPE P_GEND_TYPE_817 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_817
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_818[] = 
  {
    "_time_boot_ms",
    "_chan1_raw",
    "_chan2_raw",
    "_chan3_raw",
    "_chan4_raw",
    "_chan5_raw",
    "_chan6_raw",
    "_chan7_raw",
    "_chan8_raw",
    "_chan9_raw",
    "_chan10_raw",
    "_chan11_raw",
    "_chan12_raw",
    "_chan13_raw",
    "_chan14_raw",
    "_chan15_raw",
    "_chan16_raw",
    "_chan17_raw",
    "_chan18_raw",
    "_chancount",
    "_rssi"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_818[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_818 = 
  {
    21,
    P_GEND_TYPE_NMDTUP_NARR_818,
    P_GEND_TYPE_NMDTUP_TARR_818
  };
  static PRT_TYPE P_GEND_TYPE_818 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_818
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_819[] = 
  {
    "_longitude",
    "_roll",
    "_pitch",
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_819[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_819 = 
  {
    22,
    P_GEND_TYPE_NMDTUP_NARR_819,
    P_GEND_TYPE_NMDTUP_TARR_819
  };
  static PRT_TYPE P_GEND_TYPE_819 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_819
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_820[] = 
  {
    "_latitude",
    "_longitude",
    "_roll",
    "_pitch",
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_820[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_820 = 
  {
    23,
    P_GEND_TYPE_NMDTUP_NARR_820,
    P_GEND_TYPE_NMDTUP_TARR_820
  };
  static PRT_TYPE P_GEND_TYPE_820 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_820
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_821[] = 
  {
    "_custom_mode",
    "_latitude",
    "_longitude",
    "_roll",
    "_pitch",
    "_heading",
    "_heading_sp",
    "_altitude_amsl",
    "_altitude_sp",
    "_wp_distance",
    "_base_mode",
    "_landed_state",
    "_throttle",
    "_airspeed",
    "_airspeed_sp",
    "_groundspeed",
    "_climb_rate",
    "_gps_nsat",
    "_gps_fix_type",
    "_battery_remaining",
    "_temperature",
    "_temperature_air",
    "_failsafe",
    "_wp_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_821[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_821 = 
  {
    24,
    P_GEND_TYPE_NMDTUP_NARR_821,
    P_GEND_TYPE_NMDTUP_TARR_821
  };
  static PRT_TYPE P_GEND_TYPE_821 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_821
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

  PRT_VALUE *P_FUN_AssignFloat32_IMPL(PRT_MACHINEINST *context)
  {
    PRT_MACHINEINST_PRIV *p_tmp_mach_priv = (PRT_MACHINEINST_PRIV *)context;
    PRT_FUNSTACK_INFO p_tmp_frame;
    PRT_VALUE *retVal;
    PrtPopFrame(p_tmp_mach_priv, &p_tmp_frame);
    retVal = P_FUN_AssignFloat32_FOREIGN(context, p_tmp_frame.locals[0U], p_tmp_frame.locals[1U]);
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
  PRT_FUNDECL P_FUN_AssignFloat32_STRUCT = 
  {
    P_FUN_AssignFloat32,
    0U,
    "AssignFloat32",
    &P_FUN_AssignFloat32_IMPL,
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
    &P_GEND_TYPE_162,
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
  