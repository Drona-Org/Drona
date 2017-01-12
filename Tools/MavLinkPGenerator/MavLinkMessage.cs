﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml;
using System.Xml.Serialization;

namespace PTypeGenerator
{
    [XmlRoot(ElementName="mavlink")]
    public class MavLink
    {
        public MavLink() { }

        public string version { get; set; }
        public string dialog { get; set; }

        [XmlArrayItem(ElementName ="enum")]
        public List<MavEnum> enums { get; set; }

        [XmlArrayItem(ElementName = "message")]
        public List<MavMessage> messages { get; set; }
    }

    public class MavEnum
    {
        public MavEnum() { }

        [XmlAttribute]
        public string name { get; set;}

        public string description { get; set; }

        [XmlElement(ElementName = "entry")]
        public List<MavEnumEntry> entries { get; set; }
    }

    public class MavEnumEntry
    {
        public MavEnumEntry() { }

        [XmlAttribute]
        public int value { get; set; }

        [XmlAttribute]
        public string name { get; set; }

        public string description { get; set; }
    }

    public class MavField
    {
        [XmlAttribute]
        public string type { get; set; }

        public string ptype { get; set; }

        public bool isArray { get; set; }

        public int array_length { get; set; }

        [XmlAttribute]
        public string name { get; set; }

        [XmlText]
        public string description { get; set; }

        public int offset { get; set; }

        public MavField() { }
    }

    public class MavMessage
    {
        [XmlAttribute]
        public string id { get; set; }
        [XmlAttribute]
        public string name { get; set; }

        public string description { get; set; }

        [XmlElement(ElementName ="field")]
        public List<MavField> fields { get; set; }

        public MavMessage() { }
    }
}
