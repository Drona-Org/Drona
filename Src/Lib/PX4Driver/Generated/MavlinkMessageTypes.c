
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
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_6[] = 
  {
    "_seq"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_6[] = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_6 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_6,
    P_GEND_TYPE_NMDTUP_TARR_6
  };
  PRT_TYPE P_GEND_TYPE_6 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_6
    }
  };
  static PRT_SEQTYPE P_GEND_TYPE_SEQ_7 = 
  {
    &P_GEND_TYPE_3
  };
  static PRT_TYPE P_GEND_TYPE_7 = 
  {
    PRT_KIND_SEQ,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_7
    }
  };
  static PRT_SEQTYPE P_GEND_TYPE_SEQ_8 = 
  {
    &P_GEND_TYPE_float32
  };
  static PRT_TYPE P_GEND_TYPE_8 = 
  {
    PRT_KIND_SEQ,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_SEQ_8
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_9[] = 
  {
    "_command",
    "_result"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_9[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_9 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_9,
    P_GEND_TYPE_NMDTUP_TARR_9
  };
  PRT_TYPE P_GEND_TYPE_9 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_9
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_10[] = 
  {
    "_interval_us",
    "_message_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_10[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_10 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_10,
    P_GEND_TYPE_NMDTUP_TARR_10
  };
  PRT_TYPE P_GEND_TYPE_10 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_10
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_11[] = 
  {
    "_key"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_11[] = 
  {
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_11 = 
  {
    1,
    P_GEND_TYPE_NMDTUP_NARR_11,
    P_GEND_TYPE_NMDTUP_TARR_11
  };
  PRT_TYPE P_GEND_TYPE_11 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_11
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_12[] = 
  {
    "_lat",
    "_lon"
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
  PRT_TYPE P_GEND_TYPE_12 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_12
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_13[] = 
  {
    "_target_system",
    "_target_component"
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
  PRT_TYPE P_GEND_TYPE_13 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_14[] = 
  {
    "_tc1",
    "_ts1"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_14[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_14 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_14,
    P_GEND_TYPE_NMDTUP_TARR_14
  };
  PRT_TYPE P_GEND_TYPE_14 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_14
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_15[] = 
  {
    "_time_unix_usec",
    "_time_boot_ms"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_15[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_15 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_15,
    P_GEND_TYPE_NMDTUP_TARR_15
  };
  PRT_TYPE P_GEND_TYPE_15 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_15
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_16[] = 
  {
    "_time_usec",
    "_seq"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_16[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_16 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_16,
    P_GEND_TYPE_NMDTUP_TARR_16
  };
  PRT_TYPE P_GEND_TYPE_16 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_16
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_17[] = 
  {
    "_vtol_state",
    "_landed_state"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_17[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_17 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_17,
    P_GEND_TYPE_NMDTUP_TARR_17
  };
  PRT_TYPE P_GEND_TYPE_17 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_17
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_18[] = 
  {
    "_count",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_18[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_18 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_18,
    P_GEND_TYPE_NMDTUP_TARR_18
  };
  PRT_TYPE P_GEND_TYPE_18 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_18
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_19[] = 
  {
    "_custom_mode",
    "_target_system",
    "_base_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_19[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_19 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_19,
    P_GEND_TYPE_NMDTUP_TARR_19
  };
  PRT_TYPE P_GEND_TYPE_19 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_19
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_20[] = 
  {
    "_gcs_system_id",
    "_control_request",
    "_ack"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_20[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_20 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_20,
    P_GEND_TYPE_NMDTUP_TARR_20
  };
  PRT_TYPE P_GEND_TYPE_20 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_20
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_21[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_21[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_21 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_21,
    P_GEND_TYPE_NMDTUP_TARR_21
  };
  PRT_TYPE P_GEND_TYPE_21 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_21
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_22[] = 
  {
    "_message_rate",
    "_stream_id",
    "_on_off"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_22[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_22 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_22,
    P_GEND_TYPE_NMDTUP_TARR_22
  };
  PRT_TYPE P_GEND_TYPE_22 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_22
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_23[] = 
  {
    "_seq",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_23[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_23 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_23,
    P_GEND_TYPE_NMDTUP_TARR_23
  };
  PRT_TYPE P_GEND_TYPE_23 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_23
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_24[] = 
  {
    "_seqnr",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_24[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_24 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_24,
    P_GEND_TYPE_NMDTUP_TARR_24
  };
  PRT_TYPE P_GEND_TYPE_24 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_24
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_25[] = 
  {
    "_severity",
    "_text"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_25[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_25 = 
  {
    2,
    P_GEND_TYPE_NMDTUP_NARR_25,
    P_GEND_TYPE_NMDTUP_TARR_25
  };
  PRT_TYPE P_GEND_TYPE_25 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_25
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_26[] = 
  {
    "_target_system",
    "_target_component",
    "_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_26[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_26 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_26,
    P_GEND_TYPE_NMDTUP_TARR_26
  };
  PRT_TYPE P_GEND_TYPE_26 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_26
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_27[] = 
  {
    "_time_boot_ms",
    "_value",
    "_ind"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_27[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_27 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_27,
    P_GEND_TYPE_NMDTUP_TARR_27
  };
  PRT_TYPE P_GEND_TYPE_27 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_27
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_28[] = 
  {
    "_vcc",
    "_vservo",
    "_flags"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_28[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_28 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_28,
    P_GEND_TYPE_NMDTUP_TARR_28
  };
  PRT_TYPE P_GEND_TYPE_28 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_28
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_29[] = 
  {
    "_flags",
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_29[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_29 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_29,
    P_GEND_TYPE_NMDTUP_TARR_29
  };
  PRT_TYPE P_GEND_TYPE_29 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_29
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_30[] = 
  {
    "_latitude",
    "_longitude",
    "_altitude",
    "_target_system"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_30[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_30 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_30,
    P_GEND_TYPE_NMDTUP_TARR_30
  };
  PRT_TYPE P_GEND_TYPE_30 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_30
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_31[] = 
  {
    "_mask",
    "_lat",
    "_lon",
    "_grid_spacing"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_31[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_31 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_31,
    P_GEND_TYPE_NMDTUP_TARR_31
  };
  PRT_TYPE P_GEND_TYPE_31 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_31
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_32[] = 
  {
    "_start",
    "_end",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_32[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_32 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_32,
    P_GEND_TYPE_NMDTUP_TARR_32
  };
  PRT_TYPE P_GEND_TYPE_32 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_32
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_33[] = 
  {
    "_start_index",
    "_end_index",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_33[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_33 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_33,
    P_GEND_TYPE_NMDTUP_TARR_33
  };
  PRT_TYPE P_GEND_TYPE_33 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_33
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_34[] = 
  {
    "_time_boot_ms",
    "_press_abs",
    "_press_diff",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_34[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_34 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_34,
    P_GEND_TYPE_NMDTUP_TARR_34
  };
  PRT_TYPE P_GEND_TYPE_34 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_34
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_35[] = 
  {
    "_time_boot_ms",
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_35[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_35 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_35,
    P_GEND_TYPE_NMDTUP_TARR_35
  };
  PRT_TYPE P_GEND_TYPE_35 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_35
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_36[] = 
  {
    "_time_boot_ms",
    "_value",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_36[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_36 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_36,
    P_GEND_TYPE_NMDTUP_TARR_36
  };
  PRT_TYPE P_GEND_TYPE_36 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_36
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_37[] = 
  {
    "_time_usec",
    "_controls",
    "_group_mlx"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_37[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_37 = 
  {
    3,
    P_GEND_TYPE_NMDTUP_NARR_37,
    P_GEND_TYPE_NMDTUP_TARR_37
  };
  PRT_TYPE P_GEND_TYPE_37 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_37
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_38[] = 
  {
    "_time_usec",
    "_seq",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_38[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_38 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_38,
    P_GEND_TYPE_NMDTUP_TARR_38
  };
  PRT_TYPE P_GEND_TYPE_38 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_38
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_39[] = 
  {
    "_usec",
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_39[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_39 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_39,
    P_GEND_TYPE_NMDTUP_TARR_39
  };
  PRT_TYPE P_GEND_TYPE_39 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_39
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_40[] = 
  {
    "_address",
    "_ver",
    "_type",
    "_value"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_40[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_40 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_40,
    P_GEND_TYPE_NMDTUP_TARR_40
  };
  PRT_TYPE P_GEND_TYPE_40 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_40
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_41[] = 
  {
    "_ofs",
    "_count",
    "_id",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_41[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_41 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_41,
    P_GEND_TYPE_NMDTUP_TARR_41
  };
  PRT_TYPE P_GEND_TYPE_41 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_41
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_42[] = 
  {
    "_ofs",
    "_id",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_42[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_42 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_42,
    P_GEND_TYPE_NMDTUP_TARR_42
  };
  PRT_TYPE P_GEND_TYPE_42 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_42
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_43[] = 
  {
    "_param_index",
    "_target_system",
    "_target_component",
    "_param_id"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_43[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_43 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_43,
    P_GEND_TYPE_NMDTUP_TARR_43
  };
  PRT_TYPE P_GEND_TYPE_43 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_43
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_44[] = 
  {
    "_req_message_rate",
    "_target_system",
    "_target_component",
    "_req_stream_id",
    "_start_stop"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_44[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_44 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_44,
    P_GEND_TYPE_NMDTUP_TARR_44
  };
  PRT_TYPE P_GEND_TYPE_44 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_44
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_45[] = 
  {
    "_target_network",
    "_target_system",
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_45[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_45 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_45,
    P_GEND_TYPE_NMDTUP_TARR_45
  };
  PRT_TYPE P_GEND_TYPE_45 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_45
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_46[] = 
  {
    "_target_system",
    "_control_request",
    "_version",
    "_passkey"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_46[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_46 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_46,
    P_GEND_TYPE_NMDTUP_TARR_46
  };
  PRT_TYPE P_GEND_TYPE_46 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_46
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_47[] = 
  {
    "_target_system",
    "_target_component",
    "_len",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_47[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_47 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_47,
    P_GEND_TYPE_NMDTUP_TARR_47
  };
  PRT_TYPE P_GEND_TYPE_47 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_47
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_48[] = 
  {
    "_time_usec",
    "_flags",
    "_controls",
    "_mode"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_48[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_48 = 
  {
    4,
    P_GEND_TYPE_NMDTUP_NARR_48,
    P_GEND_TYPE_NMDTUP_TARR_48
  };
  PRT_TYPE P_GEND_TYPE_48 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_48
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_49[] = 
  {
    "_time_usec",
    "_press_abs",
    "_press_diff1",
    "_press_diff2",
    "_temperature"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_49[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_49 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_49,
    P_GEND_TYPE_NMDTUP_TARR_49
  };
  PRT_TYPE P_GEND_TYPE_49 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_49
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_50[] = 
  {
    "_time_utc",
    "_size",
    "_id",
    "_num_logs",
    "_last_log_num"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_50[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_50 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_50,
    P_GEND_TYPE_NMDTUP_TARR_50
  };
  PRT_TYPE P_GEND_TYPE_50 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_50
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_51[] = 
  {
    "_airspeed",
    "_groundspeed",
    "_alt",
    "_climb",
    "_heading",
    "_throttle"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_51[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_51 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_51,
    P_GEND_TYPE_NMDTUP_TARR_51
  };
  PRT_TYPE P_GEND_TYPE_51 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_51
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_52[] = 
  {
    "_custom_mode",
    "_type",
    "_autopilot",
    "_base_mode",
    "_system_status",
    "_mavlink_version"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_52[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_52 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_52,
    P_GEND_TYPE_NMDTUP_TARR_52
  };
  PRT_TYPE P_GEND_TYPE_52 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_52
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_53[] = 
  {
    "_lat",
    "_lon",
    "_grid_spacing",
    "_data",
    "_gridbit"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_53[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_53 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_53,
    P_GEND_TYPE_NMDTUP_TARR_53
  };
  PRT_TYPE P_GEND_TYPE_53 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_53
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_54[] = 
  {
    "_message_type",
    "_target_network",
    "_target_system",
    "_target_component",
    "_payload"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_54[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_54 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_54,
    P_GEND_TYPE_NMDTUP_TARR_54
  };
  PRT_TYPE P_GEND_TYPE_54 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_54
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_55[] = 
  {
    "_param_value",
    "_param_count",
    "_param_index",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_55[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_55 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_55,
    P_GEND_TYPE_NMDTUP_TARR_55
  };
  PRT_TYPE P_GEND_TYPE_55 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_55
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_56[] = 
  {
    "_param_value",
    "_target_system",
    "_target_component",
    "_param_id",
    "_param_type"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_56[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_56 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_56,
    P_GEND_TYPE_NMDTUP_TARR_56
  };
  PRT_TYPE P_GEND_TYPE_56 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_56
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_57[] = 
  {
    "_time_usec",
    "_controls",
    "_group_mlx",
    "_target_system",
    "_target_component"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_57[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_57 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_57,
    P_GEND_TYPE_NMDTUP_TARR_57
  };
  PRT_TYPE P_GEND_TYPE_57 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_57
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_58[] = 
  {
    "_time_usec",
    "_q",
    "_x",
    "_y",
    "_z"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_58[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_58 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_58,
    P_GEND_TYPE_NMDTUP_TARR_58
  };
  PRT_TYPE P_GEND_TYPE_58 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_58
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_59[] = 
  {
    "_time_usec",
    "_x",
    "_y",
    "_z",
    "_name"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_59[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_59 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_59,
    P_GEND_TYPE_NMDTUP_TARR_59
  };
  PRT_TYPE P_GEND_TYPE_59 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_59
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_60[] = 
  {
    "_x",
    "_y",
    "_z",
    "_r",
    "_buttons",
    "_target"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_60[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_60 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_60,
    P_GEND_TYPE_NMDTUP_TARR_60
  };
  PRT_TYPE P_GEND_TYPE_60 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_60
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_61[] = 
  {
    "_baudrate",
    "_timeout",
    "_device",
    "_flags",
    "_count",
    "_data"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_61[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_61 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_61,
    P_GEND_TYPE_NMDTUP_TARR_61
  };
  PRT_TYPE P_GEND_TYPE_61 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_61
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_62[] = 
  {
    "_id",
    "_time_to_minimum_delta",
    "_altitude_minimum_delta",
    "_horizontal_minimum_delta",
    "_src",
    "_action",
    "_threat_level"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_62[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_62 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_62,
    P_GEND_TYPE_NMDTUP_TARR_62
  };
  PRT_TYPE P_GEND_TYPE_62 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_62
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_63[] = 
  {
    "_lat",
    "_lon",
    "_terrain_height",
    "_current_height",
    "_spacing",
    "_pending",
    "_loaded"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_63[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_63 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_63,
    P_GEND_TYPE_NMDTUP_TARR_63
  };
  PRT_TYPE P_GEND_TYPE_63 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_63
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_64[] = 
  {
    "_p1x",
    "_p1y",
    "_p1z",
    "_p2x",
    "_p2y",
    "_p2z",
    "_frame"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_64[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_64 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_64,
    P_GEND_TYPE_NMDTUP_TARR_64
  };
  PRT_TYPE P_GEND_TYPE_64 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_64
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_65[] = 
  {
    "_request_id",
    "_uri_type",
    "_uri",
    "_transfer_type",
    "_storage"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_65[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_65 = 
  {
    5,
    P_GEND_TYPE_NMDTUP_NARR_65,
    P_GEND_TYPE_NMDTUP_TARR_65
  };
  PRT_TYPE P_GEND_TYPE_65 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_65
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_66[] = 
  {
    "_rxerrors",
    "_fixed",
    "_rssi",
    "_remrssi",
    "_txbuf",
    "_noise",
    "_remnoise"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_66[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_66 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_66,
    P_GEND_TYPE_NMDTUP_TARR_66
  };
  PRT_TYPE P_GEND_TYPE_66 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_66
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_67[] = 
  {
    "_size",
    "_width",
    "_height",
    "_packets",
    "_type",
    "_payload",
    "_jpg_quality"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_67[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_67 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_67,
    P_GEND_TYPE_NMDTUP_TARR_67
  };
  PRT_TYPE P_GEND_TYPE_67 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_67
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_68[] = 
  {
    "_time_boot_ms",
    "_roll",
    "_pitch",
    "_yaw",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_68[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_68 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_68,
    P_GEND_TYPE_NMDTUP_TARR_68
  };
  PRT_TYPE P_GEND_TYPE_68 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_68
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_69[] = 
  {
    "_time_boot_ms",
    "_roll",
    "_pitch",
    "_yaw",
    "_thrust",
    "_mode_switch",
    "_manual_override_switch"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_69[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_69 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_69,
    P_GEND_TYPE_NMDTUP_TARR_69
  };
  PRT_TYPE P_GEND_TYPE_69 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_69
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_70[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_70[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_70 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_70,
    P_GEND_TYPE_NMDTUP_TARR_70
  };
  PRT_TYPE P_GEND_TYPE_70 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_70
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_71[] = 
  {
    "_time_boot_ms",
    "_x",
    "_y",
    "_z",
    "_vx",
    "_vy",
    "_vz"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_71[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_71 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_71,
    P_GEND_TYPE_NMDTUP_TARR_71
  };
  PRT_TYPE P_GEND_TYPE_71 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_71
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_72[] = 
  {
    "_time_usec",
    "_altitude_monotonic",
    "_altitude_amsl",
    "_altitude_local",
    "_altitude_relative",
    "_altitude_terrain",
    "_bottom_clearance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_72[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_72 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_72,
    P_GEND_TYPE_NMDTUP_TARR_72
  };
  PRT_TYPE P_GEND_TYPE_72 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_72
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_73[] = 
  {
    "_time_usec",
    "_vibration_x",
    "_vibration_y",
    "_vibration_z",
    "_clipping_0",
    "_clipping_1",
    "_clipping_2"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_73[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_73 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_73,
    P_GEND_TYPE_NMDTUP_TARR_73
  };
  PRT_TYPE P_GEND_TYPE_73 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_73
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_74[] = 
  {
    "_usec",
    "_x",
    "_y",
    "_z",
    "_roll",
    "_pitch",
    "_yaw"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_74[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_74 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_74,
    P_GEND_TYPE_NMDTUP_TARR_74
  };
  PRT_TYPE P_GEND_TYPE_74 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_74
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_75[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_75[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_75 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_75,
    P_GEND_TYPE_NMDTUP_TARR_75
  };
  PRT_TYPE P_GEND_TYPE_75 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_75
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_76[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_76[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_76 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_76,
    P_GEND_TYPE_NMDTUP_TARR_76
  };
  PRT_TYPE P_GEND_TYPE_76 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_76
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_77[] = 
  {
    "_time_boot_ms",
    "_q",
    "_body_roll_rate",
    "_body_pitch_rate",
    "_body_yaw_rate",
    "_thrust",
    "_type_mask"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_77[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_77 = 
  {
    7,
    P_GEND_TYPE_NMDTUP_NARR_77,
    P_GEND_TYPE_NMDTUP_TARR_77
  };
  PRT_TYPE P_GEND_TYPE_77 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_77
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_78[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_78[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_78 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_78,
    P_GEND_TYPE_NMDTUP_TARR_78
  };
  PRT_TYPE P_GEND_TYPE_78 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_78
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_79[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_79[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_79 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_79,
    P_GEND_TYPE_NMDTUP_TARR_79
  };
  PRT_TYPE P_GEND_TYPE_79 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_79
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_80[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_80[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_80 = 
  {
    8,
    P_GEND_TYPE_NMDTUP_NARR_80,
    P_GEND_TYPE_NMDTUP_TARR_80
  };
  PRT_TYPE P_GEND_TYPE_80 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_80
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_81[] = 
  {
    "_time_usec",
    "_q",
    "_rollspeed",
    "_pitchspeed",
    "_yawspeed",
    "_covariance"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_81[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_81 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_81,
    P_GEND_TYPE_NMDTUP_TARR_81
  };
  PRT_TYPE P_GEND_TYPE_81 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_81
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_82[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_82[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_82 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_82,
    P_GEND_TYPE_NMDTUP_TARR_82
  };
  PRT_TYPE P_GEND_TYPE_82 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_82
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_83[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_83[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_83 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_83,
    P_GEND_TYPE_NMDTUP_TARR_83
  };
  PRT_TYPE P_GEND_TYPE_83 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_83
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_84[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_84[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_84 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_84,
    P_GEND_TYPE_NMDTUP_TARR_84
  };
  PRT_TYPE P_GEND_TYPE_84 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_84
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_85[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_85[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_85 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_85,
    P_GEND_TYPE_NMDTUP_TARR_85
  };
  PRT_TYPE P_GEND_TYPE_85 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_85
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_86[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_86[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_86 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_86,
    P_GEND_TYPE_NMDTUP_TARR_86
  };
  PRT_TYPE P_GEND_TYPE_86 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_86
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_87[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_87[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_87 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_87,
    P_GEND_TYPE_NMDTUP_TARR_87
  };
  PRT_TYPE P_GEND_TYPE_87 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_87
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_88[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_88[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_88 = 
  {
    9,
    P_GEND_TYPE_NMDTUP_NARR_88,
    P_GEND_TYPE_NMDTUP_TARR_88
  };
  PRT_TYPE P_GEND_TYPE_88 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_88
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_89[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_89[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_89 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_89,
    P_GEND_TYPE_NMDTUP_TARR_89
  };
  PRT_TYPE P_GEND_TYPE_89 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_89
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_90[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_90[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_90 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_90,
    P_GEND_TYPE_NMDTUP_TARR_90
  };
  PRT_TYPE P_GEND_TYPE_90 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_90
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_91[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_91[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_91 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_91,
    P_GEND_TYPE_NMDTUP_TARR_91
  };
  PRT_TYPE P_GEND_TYPE_91 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_91
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_92[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_92[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_92 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_92,
    P_GEND_TYPE_NMDTUP_TARR_92
  };
  PRT_TYPE P_GEND_TYPE_92 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_92
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_93[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_93[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_93 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_93,
    P_GEND_TYPE_NMDTUP_TARR_93
  };
  PRT_TYPE P_GEND_TYPE_93 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_93
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_94[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_94[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_94 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_94,
    P_GEND_TYPE_NMDTUP_TARR_94
  };
  PRT_TYPE P_GEND_TYPE_94 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_94
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_95[] = 
  {
    "_satellites_visible",
    "_satellite_prn",
    "_satellite_used",
    "_satellite_elevation",
    "_satellite_azimuth",
    "_satellite_snr"
  };
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_95[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_95 = 
  {
    6,
    P_GEND_TYPE_NMDTUP_NARR_95,
    P_GEND_TYPE_NMDTUP_TARR_95
  };
  PRT_TYPE P_GEND_TYPE_95 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_95
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_96[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_96[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_96 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_96,
    P_GEND_TYPE_NMDTUP_TARR_96
  };
  PRT_TYPE P_GEND_TYPE_96 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_96
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_97[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_97[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_97 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_97,
    P_GEND_TYPE_NMDTUP_TARR_97
  };
  PRT_TYPE P_GEND_TYPE_97 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_97
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_98[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_98[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_98 = 
  {
    10,
    P_GEND_TYPE_NMDTUP_NARR_98,
    P_GEND_TYPE_NMDTUP_TARR_98
  };
  PRT_TYPE P_GEND_TYPE_98 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_98
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_99[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_99[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_99 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_99,
    P_GEND_TYPE_NMDTUP_TARR_99
  };
  PRT_TYPE P_GEND_TYPE_99 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_99
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_100[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_100[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_100 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_100,
    P_GEND_TYPE_NMDTUP_TARR_100
  };
  PRT_TYPE P_GEND_TYPE_100 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_100
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_101[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_101[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_101 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_101,
    P_GEND_TYPE_NMDTUP_TARR_101
  };
  PRT_TYPE P_GEND_TYPE_101 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_101
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_102[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_102[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_102 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_102,
    P_GEND_TYPE_NMDTUP_TARR_102
  };
  PRT_TYPE P_GEND_TYPE_102 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_102
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_103[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_103[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_103 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_103,
    P_GEND_TYPE_NMDTUP_TARR_103
  };
  PRT_TYPE P_GEND_TYPE_103 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_103
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_104[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_104[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_104 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_104,
    P_GEND_TYPE_NMDTUP_TARR_104
  };
  PRT_TYPE P_GEND_TYPE_104 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_104
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_105[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_105[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_105 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_105,
    P_GEND_TYPE_NMDTUP_TARR_105
  };
  PRT_TYPE P_GEND_TYPE_105 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_105
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_106[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_106[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_106 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_106,
    P_GEND_TYPE_NMDTUP_TARR_106
  };
  PRT_TYPE P_GEND_TYPE_106 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_106
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_107[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_107[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_107 = 
  {
    12,
    P_GEND_TYPE_NMDTUP_NARR_107,
    P_GEND_TYPE_NMDTUP_TARR_107
  };
  PRT_TYPE P_GEND_TYPE_107 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_107
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_108[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_108[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_7
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_108 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_108,
    P_GEND_TYPE_NMDTUP_TARR_108
  };
  PRT_TYPE P_GEND_TYPE_108 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_108
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_109[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_109[] = 
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
    &P_GEND_TYPE_7,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_109 = 
  {
    13,
    P_GEND_TYPE_NMDTUP_NARR_109,
    P_GEND_TYPE_NMDTUP_TARR_109
  };
  PRT_TYPE P_GEND_TYPE_109 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_109
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_110[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_110[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_110 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_110,
    P_GEND_TYPE_NMDTUP_TARR_110
  };
  PRT_TYPE P_GEND_TYPE_110 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_110
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_111[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_111[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_111 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_111,
    P_GEND_TYPE_NMDTUP_TARR_111
  };
  PRT_TYPE P_GEND_TYPE_111 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_111
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_112[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_112[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_112 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_112,
    P_GEND_TYPE_NMDTUP_TARR_112
  };
  PRT_TYPE P_GEND_TYPE_112 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_112
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_113[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_113[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_113 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_113,
    P_GEND_TYPE_NMDTUP_TARR_113
  };
  PRT_TYPE P_GEND_TYPE_113 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_113
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_114[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_114[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_114 = 
  {
    14,
    P_GEND_TYPE_NMDTUP_NARR_114,
    P_GEND_TYPE_NMDTUP_TARR_114
  };
  PRT_TYPE P_GEND_TYPE_114 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_114
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_115[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_115[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_115 = 
  {
    15,
    P_GEND_TYPE_NMDTUP_NARR_115,
    P_GEND_TYPE_NMDTUP_TARR_115
  };
  PRT_TYPE P_GEND_TYPE_115 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_115
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_116[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_116[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_116 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_116,
    P_GEND_TYPE_NMDTUP_TARR_116
  };
  PRT_TYPE P_GEND_TYPE_116 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_116
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_117[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_117[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_117 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_117,
    P_GEND_TYPE_NMDTUP_TARR_117
  };
  PRT_TYPE P_GEND_TYPE_117 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_117
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_118[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_118[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_118 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_118,
    P_GEND_TYPE_NMDTUP_TARR_118
  };
  PRT_TYPE P_GEND_TYPE_118 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_118
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_119[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_119[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_119 = 
  {
    11,
    P_GEND_TYPE_NMDTUP_NARR_119,
    P_GEND_TYPE_NMDTUP_TARR_119
  };
  PRT_TYPE P_GEND_TYPE_119 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_119
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_120[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_120[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_120 = 
  {
    16,
    P_GEND_TYPE_NMDTUP_NARR_120,
    P_GEND_TYPE_NMDTUP_TARR_120
  };
  PRT_TYPE P_GEND_TYPE_120 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_120
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_121[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_121[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_121 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_121,
    P_GEND_TYPE_NMDTUP_TARR_121
  };
  PRT_TYPE P_GEND_TYPE_121 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_121
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_122[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_122[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_3
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_122 = 
  {
    18,
    P_GEND_TYPE_NMDTUP_NARR_122,
    P_GEND_TYPE_NMDTUP_TARR_122
  };
  PRT_TYPE P_GEND_TYPE_122 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_122
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_123[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_123[] = 
  {
    &P_GEND_TYPE_3,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_8,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_123 = 
  {
    17,
    P_GEND_TYPE_NMDTUP_NARR_123,
    P_GEND_TYPE_NMDTUP_TARR_123
  };
  PRT_TYPE P_GEND_TYPE_123 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_123
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_124[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_124[] = 
  {
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32,
    &P_GEND_TYPE_float32
  };
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_124 = 
  {
    21,
    P_GEND_TYPE_NMDTUP_NARR_124,
    P_GEND_TYPE_NMDTUP_TARR_124
  };
  PRT_TYPE P_GEND_TYPE_124 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_124
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_125[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_125[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_125 = 
  {
    21,
    P_GEND_TYPE_NMDTUP_NARR_125,
    P_GEND_TYPE_NMDTUP_TARR_125
  };
  PRT_TYPE P_GEND_TYPE_125 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_125
    }
  };
  static PRT_STRING P_GEND_TYPE_NMDTUP_NARR_126[] = 
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
  static PRT_TYPE *P_GEND_TYPE_NMDTUP_TARR_126[] = 
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
  static PRT_NMDTUPTYPE P_GEND_TYPE_NMDTUP_126 = 
  {
    24,
    P_GEND_TYPE_NMDTUP_NARR_126,
    P_GEND_TYPE_NMDTUP_TARR_126
  };
  PRT_TYPE P_GEND_TYPE_126 = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_126
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
  PRT_TYPE P_GEND_TYPE_mavlink_actuator_control_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_37
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_adsb_vehicle_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_109
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_altitude_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_72
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_att_pos_mocap_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_58
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_attitude_quaternion_cov_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_81
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_attitude_quaternion_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_78
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_attitude_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_68
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_attitude_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_77
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_auth_key_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_11
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_autopilot_version_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_108
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_battery_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_86
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_camera_trigger_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_16
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_ack_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_20
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_change_operator_control_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_46
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_collision_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_62
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_command_ack_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_9
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_command_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_104
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_command_long_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_94
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_control_system_state_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_123
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_data_stream_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_22
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_data_transmission_handshake_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_67
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_debug_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_27
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_debug_vect_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_59
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_distance_sensor_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_76
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_encapsulated_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_24
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_estimator_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_91
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_extended_sys_state_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_17
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_file_transfer_protocol_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_45
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_follow_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_119
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_global_position_int_cov_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_98
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_global_position_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_83
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_global_vision_position_estimate_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_74
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps2_raw_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_102
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps2_rtk_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_105
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_global_origin_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_21
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_inject_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_47
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_input_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_122
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_raw_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_90
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_rtcm_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_29
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_rtk_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_105
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_gps_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_95
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_heartbeat_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_52
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_high_latency_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_126
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_highres_imu_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_115
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_actuator_controls_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_48
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_controls_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_99
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_gps_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_106
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_optical_flow_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_101
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_rc_inputs_raw_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_114
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_sensor_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_115
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_state_quaternion_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_120
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_hil_state_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_118
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_home_position_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_93
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_landing_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_79
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_cov_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_107
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_system_global_offset_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_70
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_local_position_ned_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_71
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_42
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_entry_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_50
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_erase_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_request_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_41
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_request_end_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_log_request_list_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_32
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_manual_control_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_60
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_manual_setpoint_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_69
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_memory_vect_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_40
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_message_interval_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_10
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_ack_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_26
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_clear_all_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_count_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_18
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_current_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_6
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_item_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_110
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_item_reached_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_6
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_item_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_111
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_request_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_23
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_request_list_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_request_partial_list_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_33
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_request_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_23
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_set_current_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_23
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_mission_write_partial_list_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_33
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_named_value_float_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_36
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_named_value_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_35
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_nav_controller_output_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_75
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_optical_flow_rad_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_101
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_optical_flow_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_80
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_param_map_rc_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_87
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_param_request_list_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_13
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_param_request_read_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_43
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_param_set_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_56
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_param_value_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_55
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_ping_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_38
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_position_target_global_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_112
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_position_target_local_ned_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_113
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_power_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_28
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_radio_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_66
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_raw_imu_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_92
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_raw_pressure_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_49
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_override_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_85
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_raw_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_96
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_scaled_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_97
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_rc_channels_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_125
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_request_data_stream_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_44
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_resource_request_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_65
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_safety_allowed_area_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_64
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_safety_set_allowed_area_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_82
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu2_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_89
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu3_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_89
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_imu_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_89
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure2_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_34
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure3_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_34
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_scaled_pressure_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_34
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_serial_control_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_61
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_servo_output_raw_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_121
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_actuator_control_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_57
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_attitude_target_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_88
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_gps_global_origin_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_30
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_home_position_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_100
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_mode_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_19
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_position_target_global_int_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_116
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_set_position_target_local_ned_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_117
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_sim_state_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_124
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_statustext_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_25
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_sys_status_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_103
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_system_time_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_15
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_terrain_check_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_12
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_terrain_data_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_53
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_terrain_report_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_63
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_terrain_request_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_31
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_timesync_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_14
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_v2_extension_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_54
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_vfr_hud_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_51
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_vibration_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_73
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_vicon_position_estimate_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_74
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_vision_position_estimate_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_74
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_vision_speed_estimate_t =
  {
    PRT_KIND_NMDTUP,

    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_39
    }
  };
  PRT_TYPE P_GEND_TYPE_mavlink_wind_cov_t = 
  {
    PRT_KIND_NMDTUP,
    
    {
        (PRT_MAPTYPE *)&P_GEND_TYPE_NMDTUP_84
    }
  };
