using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PTypeGenerator
{
    class AllTemplates
    {
        //0:description
        //1:message name
        //2:fields
        public static string typeFormat =
@"
/*{0}*/
type mavlink_{1}_t =
(
{2}
);";
        //0: field name
        //1: type name
        //2: , or nothing
        //3: description
        public static string fieldTypeFormat = @"_{0} : {1}{2} /*{3}*/";

        //0: mess_name_lower
        //1: mess_name_upper
        //2: all the field assignments
        public static string encodeFunctionFormat =
@"
static inline uint16_t p_mavlink_msg_{0}_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, PRT_VALUE* {0})
{{
int count = 0;
PRT_VALUE* seqVal;
char buf[MAVLINK_MSG_ID_{1}_LEN];
{2}
memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_{1}_LEN);
msg->msgid = MAVLINK_MSG_ID_{1};
return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_{1}_MIN_LEN, MAVLINK_MSG_ID_{1}_LEN, MAVLINK_MSG_ID_{1}_CRC);

}}          
";

        //0: lower message name
        //1: field assignments string when message is null
        //2: field assignments string when message is null
        public static string decodeFunctionFormat =
@"
static inline void p_mavlink_msg_{0}_decode(const mavlink_message_t* msg, PRT_VALUE** {0})
{{
PRT_VALUE* tmpVal;
PRT_VALUE* seqVal;
int count = 0;
if(*{0} == NULL)
{{
*{0} = PrtMkDefaultValue(&P_GEND_TYPE_mavlink_{0}_t);
{1}
}}
else
{{
{2}
}}

}}         
";
        //0: message name lower
        //1: field index
        //2: ctype
        //3: offset
        public static string UpdatePrimIntVal =
        @"PrtPrimSetInt(PrtTupleGetNC(*{0}, {1}), _MAV_RETURN_{2}(msg, {3}));" + "\n";
        //0: message name lower
        //1: field index
        //2: ctype
        //3: offset
        public static string UpdateFloat32Val =
        @"PrtPrimSetFloat(PrtTupleGetNC(*{0}, {1}), _MAV_RETURN_{2}(msg, {3}));" + "\n";
        //0: message name lower
        //1: field index
        //2: ctype
        //3: offset
        public static string UpdateFloat64Val =
        @"PrtPrimSetFloat(PrtTupleGetNC(*{0}, {1}), _MAV_RETURN_{2}(msg, {3}));" + "\n";
        //0: ctype
        //1: offset
        public static string createPrimIntVal = @"tmpVal = PrtMkIntValue(_MAV_RETURN_{0}(msg, {1}));" + "\n";
        //0: ctype
        //1: offset
        public static string createFloat32Val = @"
tmpVal = PrtMkFloatValue(_MAV_RETURN_{0}(msg, {1}));
" + "\n";
        //0: ctype
        //1: offset
        public static string createFloat64Val = @"tmpVal = PrtMkFloatValue(_MAV_RETURN_{0}(msg, {1}));" + "\n";

        public static string InsertInSeq = @"PrtSeqInsertExIntIndex(seqVal, count, tmpVal, PRT_FALSE);" + "\n";

        //0: ctype
        //1: offset
        public static string UpdateIntInSeq =
        @"PrtPrimSetInt(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_{0}(msg, {1}));" + "\n";
        //0: ctype
        //1: offset
        public static string UpdateFloat32InSeq =
        @"PrtPrimSetFloat(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_{0}(msg, {1}));" + "\n";
        //0: ctype
        //1: offset
        public static string UpdateFloat64InSeq =
        @"PrtPrimSetFloat(PrtSeqGetNCIntIndex(seqVal, count), _MAV_RETURN_{0}(msg, {1}));" + "\n";

        //0: array_length
        //1: statements
        //2: seq index
        //3: message name
        public static string seqLoop = 
@"
count = 0;
seqVal = PrtTupleGetNC({3}, {2});
while(count < {0})
{{
    {1}
    count++;
}}  
";
        //0: ctype
        //1: offset
        //2: message field index
        //3: message name
        public static string getIntFormat = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetInt(PrtTupleGetNC({3}, {2})));" + "\n";
        public static string getFloat32Format = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetFloat(PrtTupleGetNC({3}, {2})));" + "\n";
        public static string getFloat64Format = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetFloat(PrtTupleGetNC({3}, {2})));" + "\n";
        public static string getIntInSeqFormat = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetInt(PrtSeqGetNCIntIndex(seqVal, count)));" + "\n";
        public static string getFloat32InSeqFormat = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetFloat(PrtSeqGetNCIntIndex(seqVal, count)));" + "\n";
        public static string getFloat64InSeqFormat = @"_mav_put_{0}(buf, {1}, ({0})PrtPrimGetFloat(PrtSeqGetNCIntIndex(seqVal, count)));" + "\n";

        //hearder
        public static string headers = @"
#pragma once
#include ""mavlink.h""
#include ""PrtValues.h""
#include ""MavlinkMessageTypes.h""
";
    }
}
