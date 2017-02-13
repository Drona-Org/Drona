
  #ifndef P_PORBINTERFACE_H_
    #define P_PORBINTERFACE_H_
    #include "linker.h"
    #ifdef __cplusplus
      extern "C"{
    #endif
    enum P_FIELD_INDEX_POrbPubMsgType
    {
      P_FIELD_INDEX_POrbPubMsgType_topic = 0,
      P_FIELD_INDEX_POrbPubMsgType_ev = 1,
      P_FIELD_INDEX_POrbPubMsgType_payload = 2,
      _P_FIELD_INDEX_POrbPubMsgType_COUNT = 3
    };

    enum P_FIELD_INDEX_POrbSubMsgType
    {
      P_FIELD_INDEX_POrbSubMsgType_topic = 0,
      P_FIELD_INDEX_POrbSubMsgType_sub = 1,
      _P_FIELD_INDEX_POrbSubMsgType_COUNT = 2
    };

    extern PRT_TYPE P_GEND_TYPE_POrbInterface;
    extern PRT_TYPE P_GEND_TYPE_POrbPubMsgType;
    extern PRT_TYPE P_GEND_TYPE_POrbSubMsgType;
    extern PRT_TYPE P_GEND_TYPE_Topics;
    #ifdef __cplusplus
      }
    #endif
  #endif
  