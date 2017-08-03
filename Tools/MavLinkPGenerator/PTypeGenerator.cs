using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Xml.Linq;
using System.Xml;
using System.Xml.Serialization;

namespace PTypeGenerator
{
    class PTypeGenerator
    {
        static void Main(string[] args)
        {
            string xmlInput = null;
            string outputFolder = null;
            if (args.Length == 0)
            {
                Console.WriteLine("USAGE: -xml:<pathToXML> -out:<pathToOutDir>");
                return;
            }

            for (int i = 0; i < args.Length; i++)
            {
                string arg = args[i];
                string colonArg = null;
                if (arg.StartsWith("/") || arg.StartsWith("-"))
                {
                    var colonIndex = arg.IndexOf(':');
                    if (colonIndex >= 0)
                    {
                        arg = args[i].Substring(1, colonIndex - 1);
                        colonArg = args[i].Substring(colonIndex + 1);
                    }

                    switch (arg)
                    {
                        case "xml":
                            xmlInput = colonArg;
                            break;
                        case "out":
                            outputFolder = colonArg;
                            break;

                        default:
                            Console.WriteLine("USAGE: -xml:<pathToXML> -out:<pathToOutDir>");
                            return;
                    }
                }

            }
            if (!File.Exists(xmlInput))
            {
                Console.WriteLine("File not found: {0}", xmlInput);
                return;
            }
            if (!Directory.Exists(outputFolder))
            {
                Console.WriteLine("Output directory not found: {0}", outputFolder);
                return;
            }

            string pTypeFileName = String.Format("\\P_{0}_MessageTypes.p", Path.GetFileNameWithoutExtension(xmlInput));
            string pTypeFunctionsFileName = String.Format("\\P_{0}_MessageTypeFunctions.h", Path.GetFileNameWithoutExtension(xmlInput));
            string pEnumsFileName = String.Format("\\P_{0}_Enums.p", Path.GetFileNameWithoutExtension(xmlInput));

            //parse the XML
            var parser = new MavXMLParser();
            MavLink mavlink = parser.Parse(xmlInput);

            //generate the P type for each message
            var generator = new PCodeGenerator();
            generator.GeneratePTypes(mavlink, outputFolder + pTypeFileName);

            generator.GeneratePEnums(mavlink, outputFolder + pEnumsFileName, outputFolder);

            //generate the two functions for encoding and decoding P Message types
            generator.GeneratePTypeHelperFun(mavlink.messages, outputFolder + pTypeFunctionsFileName);
        }


    }

    class PCodeGenerator
    {
        const string NewLine = "\n";

        public void GeneratePEnums(MavLink mavlink, string outputFile, string tablesFile)
        {
            using (StreamWriter sw = new StreamWriter(outputFile, false))
            {
                sw.Write("// MAVLINK message ids");
                sw.Write(NewLine);

                sw.Write("enum mavlink_messages {");
                sw.Write(NewLine);
                bool first = true;
                // generate enum for message ids.
                foreach (var en in mavlink.messages)
                {
                    if (!first)
                    {
                        sw.Write(',');
                        sw.Write(NewLine);
                    }
                    sw.Write("    msg_" + en.name.ToLowerInvariant() + " = " + en.id);
                    first = false;
                }
                sw.Write(NewLine);
                sw.Write("}");
                sw.Write(NewLine);

                foreach (var en in mavlink.enums)
                {
                    sw.Write(NewLine);
                    sw.Write("// " + ("" + en.description).Replace('\n', ' ').Replace("\r", ""));
                    sw.Write(NewLine);
                    sw.Write("enum {0} {{", en.name.ToLowerInvariant());
                    sw.Write(NewLine);
                    first = true;

                    bool hasZero = false;
                    bool allZero = true;
                    foreach (var e in en.entries)
                    {
                        if (e.value != 0)
                        {
                            allZero = false;
                            break;
                        }
                        else
                        {
                            hasZero = true;
                        }
                    }
                    if (!hasZero && !allZero)
                    {
                        // P enums require one item to be equal to zero
                        first = false;
                        sw.Write("    " + en.name.ToLowerInvariant() + "_none = 0");
                    }

                    foreach (var e in en.entries)
                    {
                        if (!first)
                        {
                            sw.Write(',');
                            sw.Write(NewLine);
                        }
                        first = false;
                        sw.Write("    " + e.name.ToLowerInvariant());
                        if (!allZero)
                        {
                            sw.Write(" = " + e.value);
                        }
                    }
                    sw.Write(NewLine);
                    sw.Write("}");
                }
                sw.Write(NewLine);
            }
        }

        public void GeneratePTypes(MavLink mavlink, string outputFile)
        {
            using (StreamWriter sw = new StreamWriter(outputFile, false))
            {

                foreach (var message in mavlink.messages)
                {
                    string fieldsStr = NewLine;

                    if (message.name == "setup_signing")
                    {
                        // something odd is going on with this one, the Python "C" generator is not generating it.
                        continue;
                    }

                    int count = 0;
                    while (count < message.fields.Count())
                    {
                        if (count < message.fields.Count() - 1)
                        {
                            var f = message.fields.ElementAt(count);
                            fieldsStr = fieldsStr + String.Format(AllTemplates.fieldTypeFormat, f.name, f.ptype, ", ", f.description) + NewLine;
                        }
                        else
                        {
                            var f = message.fields.ElementAt(count);
                            fieldsStr = fieldsStr + String.Format(AllTemplates.fieldTypeFormat, f.name, f.ptype, " ", f.description) + NewLine;
                        }
                        count++;

                    }

                    string messagePType = String.Format(AllTemplates.typeFormat, message.description, message.name, fieldsStr);
                    sw.Write(messagePType + NewLine);
                }
            }
        }

        public void GeneratePTypeHelperFun(List<MavMessage> allMessages, string outputFile)
        {
            using (StreamWriter sw = new StreamWriter(outputFile, false))
            {
                //dump headers
                sw.Write(AllTemplates.headers);
                sw.Write(NewLine);

                foreach (var mess in allMessages)
                {
                    if (mess.name == "setup_signing")
                    {
                        // something odd is going on with this one, the Python "C" generator is not generating it.
                        continue;
                    }

                    #region Generate Function for Packing
                    string fieldAssignStr = NewLine;
                    //populate all the field assignments
                    int index = 0;
                    foreach (var f in mess.fields)
                    {
                        if (!f.isArray)
                        {
                            if (MavXMLParser.intTypes.Contains(f.type))
                            {
                                fieldAssignStr += String.Format(AllTemplates.getIntFormat, f.type, f.offset, index, mess.name);
                            }
                            else if (f.type == "float")
                            {
                                fieldAssignStr += String.Format(AllTemplates.getFloat32Format, f.type, f.offset, index, mess.name);
                            }
                            else if (f.type == "double")
                            {
                                fieldAssignStr += String.Format(AllTemplates.getFloat64Format, f.type, f.offset, index, mess.name);
                            }
                            else
                            {
                                throw new NotImplementedException();
                            }
                        }
                        else
                        {
                            string offsetStr = String.Format("{0} + count * {1}", f.offset, MavXMLParser.typeSize[f.type]);
                            string loopInst = NewLine;
                            if (MavXMLParser.intTypes.Contains(f.type))
                            {
                                loopInst = String.Format(AllTemplates.getIntInSeqFormat, f.type, offsetStr, index);

                            }
                            else if (f.type == "float")
                            {
                                loopInst += String.Format(AllTemplates.getFloat32InSeqFormat, f.type, offsetStr, index);
                            }
                            else if (f.type == "double")
                            {
                                loopInst += String.Format(AllTemplates.getFloat64InSeqFormat, f.type, offsetStr, index);
                            }
                            else
                            {
                                throw new NotImplementedException();
                            }
                            fieldAssignStr += String.Format(AllTemplates.seqLoop, f.array_length, loopInst, index, mess.name);

                        }
                        index++;
                    }

                    sw.Write(AllTemplates.encodeFunctionFormat, mess.name, mess.name.ToUpper(), fieldAssignStr);
                    sw.Write(NewLine);
                    #endregion



                    #region Generate Decode function

                    string fieldAssignStrForNull = NewLine;
                    string fieldAssignStrForNonNull = NewLine;
                    index = 0;
                    foreach (var f in mess.fields)
                    {
                        //add code for initializing tmpVal
                        if (!f.isArray)
                        {
                            if (MavXMLParser.intTypes.Contains(f.type))
                            {
                                fieldAssignStrForNull += String.Format(AllTemplates.UpdatePrimIntVal, mess.name, index, f.type, f.offset);
                                fieldAssignStrForNonNull += String.Format(AllTemplates.UpdatePrimIntVal, mess.name, index, f.type, f.offset);
                            }
                            else if (f.type == "float")
                            {
                                fieldAssignStrForNull += String.Format(AllTemplates.UpdateFloat32Val, mess.name, index, f.type, f.offset);
                                fieldAssignStrForNonNull += String.Format(AllTemplates.UpdateFloat32Val, mess.name, index, f.type, f.offset);
                            }
                            else if (f.type == "double")
                            {
                                fieldAssignStrForNull += String.Format(AllTemplates.UpdateFloat64Val, mess.name, index, f.type, f.offset);
                                fieldAssignStrForNonNull += String.Format(AllTemplates.UpdateFloat64Val, mess.name, index, f.type, f.offset);
                            }
                            else
                            {
                                throw new NotImplementedException();
                            }
                        }
                        else
                        {
                            string offsetStr = String.Format("{0} + count * {1}", f.offset, MavXMLParser.typeSize[f.type]);
                            string loopInstForNull = NewLine;
                            string loopInstForNonNull = NewLine;
                            if (MavXMLParser.intTypes.Contains(f.type))
                            {
                                loopInstForNull += String.Format(AllTemplates.createPrimIntVal, f.type, offsetStr);
                                loopInstForNull += AllTemplates.InsertInSeq;
                                loopInstForNonNull += String.Format(AllTemplates.UpdateIntInSeq, f.type, offsetStr);
                            }
                            else if (f.type == "float")
                            {
                                loopInstForNull += String.Format(AllTemplates.createFloat32Val, f.type, offsetStr);
                                loopInstForNull += AllTemplates.InsertInSeq;
                                loopInstForNonNull += String.Format(AllTemplates.UpdateFloat32InSeq, f.type, offsetStr);
                            }
                            else if (f.type == "double")
                            {
                                loopInstForNull += String.Format(AllTemplates.createFloat64Val, f.type, offsetStr);
                                loopInstForNull += AllTemplates.InsertInSeq;
                                loopInstForNonNull += String.Format(AllTemplates.UpdateFloat64InSeq, f.type, offsetStr);
                            }
                            else
                            {
                                throw new NotImplementedException();
                            }
                            fieldAssignStrForNull += String.Format(AllTemplates.seqLoop, f.array_length, loopInstForNull, index, "*" + mess.name);
                            fieldAssignStrForNonNull += String.Format(AllTemplates.seqLoop, f.array_length, loopInstForNonNull, index, "*" + mess.name);
                        }

                        index++;
                    }


                    sw.Write(AllTemplates.decodeFunctionFormat, mess.name, fieldAssignStrForNull, fieldAssignStrForNonNull);
                    sw.Write(NewLine);
                    #endregion
                }
            }
        }
    }
    class MavXMLParser
    {

        public static Dictionary<string, int> typeSize = new Dictionary<string, int>()
        {
            { "float"    , 4},
            {"double"   , 8 },
            {"char"     , 1},
            {"int8_t"   , 1},
            {"uint8_t"  , 1},
            {"uint8_t_mavlink_version"  , 1 },
            {"int16_t"  , 2 },
            {"uint16_t" , 2 },
            {"int32_t"  , 4 },
            {"uint32_t" , 4 },
            {"int64_t"  , 8 },
            {"uint64_t" , 8 }
        };
        public static List<string> intTypes = new List<string>()
        {
            "char",
            "int8_t",
            "uint8_t",
            "uint8_t_mavlink_version",
            "int16_t",
            "uint16_t",
            "int32_t",
            "uint32_t",
            "int64_t",
            "uint64_t"
        };

        List<MavMessage> mavMessages;
        public MavXMLParser()
        {
            mavMessages = new List<MavMessage>();
        }

        public void ComputePtype(MavMessage mess)
        {

            foreach (var field in mess.fields)
            {
                if (intTypes.Contains(field.type))
                {
                    field.ptype = "int";
                    if (field.type == "uint8_t_mavlink_version")
                    {
                        field.type = "uint8_t";
                    }
                }
                else if (field.type == "float")
                {
                    field.ptype = "float";
                }
                else if (field.type == "double")
                {
                    field.ptype = "float";
                }
                else if (field.type.Contains("["))
                {
                    var sindex = field.type.IndexOf('[');
                    var eindex = field.type.IndexOf(']');
                    field.array_length = int.Parse(field.type.Substring(sindex + 1, (eindex - sindex - 1)));
                    field.isArray = true;
                    field.type = field.type.Substring(0, sindex);
                    if (intTypes.Contains(field.type))
                    {
                        field.ptype = "seq[int]";
                    }
                    else if (field.type == "float")
                    {
                        field.ptype = "seq[float]";
                    }
                    else if (field.type == "double")
                    {
                        field.ptype = "seq[float]";
                    }
                }

            }
        }

        public void ComputeOffsetForFields(MavMessage mess)
        {
            int offset = 0;
            foreach (var field in mess.fields)
            {
                field.offset = offset;
                //compute next offset
                if (field.isArray)
                {
                    int size = field.array_length * typeSize[field.type];
                    offset = offset + size;
                }
                else
                {
                    offset = offset + typeSize[field.type];
                }
            }
        }
        public MavLink Parse(string xmlFile)
        {
            using (var fs = new FileStream(xmlFile, FileMode.Open, FileAccess.Read))
            {
                XmlSerializer s = new XmlSerializer(typeof(MavLink));
                MavLink mavlink = (MavLink)s.Deserialize(fs);

                foreach (var mavMess in mavlink.messages)
                {
                    // convert names to lower case.
                    mavMess.name = mavMess.name.ToLowerInvariant();
                    foreach (var field in mavMess.fields)
                    {
                        field.name = field.name.ToLowerInvariant();
                    }

                    //compute the correct types
                    ComputePtype(mavMess);
                    mavMess.fields = mavMess.fields.OrderByDescending(x => typeSize[x.type]).ToList();

                    //compute offset for all the fields
                    ComputeOffsetForFields(mavMess);
                }

                return mavlink;
            }

        }
    }
}
