#pragma warning disable CS0162, CS0164, CS0168
using P.Runtime;
using System;
using System.Collections.Generic;

namespace P.Program
{
    using P.Runtime;
    using System;
    using System.Collections.Generic;

    public partial class Application : StateImpl
    {
        public partial class Events
        {
            public static PrtEventValue halt = new PrtEventValue(new PrtEvent("halt", new PrtNullType(), 1, false));
            public static PrtEventValue @null = new PrtEventValue(new PrtEvent("null", new PrtNullType(), 1, false));
        }

        public Application(): base ()
        {
        }

        public Application(bool initialize): base ()
        {
            CreateMainMachine();
        }

        public override StateImpl MakeSkeleton()
        {
            return new Application();
        }

        static Application()
        {
            (isSafeMap).Add("POrbMachine", false);
            (renameMap).Add("POrbMachine", "POrbMachine");
            (createMachineMap).Add("POrbMachine", CreateMachine_POrbMachine);
            interfaceMap["POrbInterface"] = new List<PrtEventValue>()
            {(Events).POrbSubscribe, (Events).POrbPublish};
            Dictionary<string, string> _temp;
            _temp = new Dictionary<string, string>();
            (_temp).Add("POrbMachine", "POrbMachine");
            (_temp).Add("POrbInterface", "POrbMachine");
            (linkMap).Add("POrbMachine", _temp);
            Types.Types_POrb();
            Types.Types_POrbInterface();
            Types.Types_POrbTopics();
            Events.Events_POrb();
            Events.Events_POrbInterface();
            Events.Events_POrbTopics();
        }
    }
}
