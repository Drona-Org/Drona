#pragma warning disable CS0162, CS0164, CS0168, CS0649
namespace P.Program
{
    using P.Runtime;
    using System;
    using System.Collections.Generic;

    public partial class Application : StateImpl
    {
        public partial class Events
        {
            public static PrtEventValue event_eCancelFailure;
            public static PrtEventValue event_eCancelSuccess;
            public static PrtEventValue event_eTimeOut;
            public static PrtEventValue event_eCancelTimer;
            public static PrtEventValue event_eStartTimer;
            public static void Events_timer()
            {
                event_eCancelFailure = new PrtEventValue(new PrtEvent("eCancelFailure", Types.type_ITimer, PrtEvent.DefaultMaxInstances, false));
                event_eCancelSuccess = new PrtEventValue(new PrtEvent("eCancelSuccess", Types.type_ITimer, PrtEvent.DefaultMaxInstances, false));
                event_eTimeOut = new PrtEventValue(new PrtEvent("eTimeOut", Types.type_ITimer, PrtEvent.DefaultMaxInstances, false));
                event_eCancelTimer = new PrtEventValue(new PrtEvent("eCancelTimer", Types.type_6_649887333, PrtEvent.DefaultMaxInstances, false));
                event_eStartTimer = new PrtEventValue(new PrtEvent("eStartTimer", Types.type_4_649887333, PrtEvent.DefaultMaxInstances, false));
            }
        }

        public partial class Types
        {
            public static PrtType type_ITimer;
            public static PrtType type_ITimerClient;
            public static PrtType type_2_649887333;
            public static PrtType type_3_649887333;
            public static PrtType type_4_649887333;
            public static PrtType type_5_649887333;
            public static PrtType type_6_649887333;
            public static PrtType type_7_649887333;
            public static PrtType type_TimerPtr;
            static public void Types_timer()
            {
                Types.type_ITimer = new PrtInterfaceType("ITimer");
                Types.type_ITimerClient = new PrtInterfaceType("ITimerClient");
                Types.type_2_649887333 = new PrtMachineType();
                Types.type_3_649887333 = new PrtEventType();
                Types.type_4_649887333 = new PrtIntType();
                Types.type_5_649887333 = new PrtBoolType();
                Types.type_6_649887333 = new PrtNullType();
                Types.type_7_649887333 = new PrtNamedTupleType(new object[]{"m", Types.type_ITimer});
                Types.type_TimerPtr = Types.type_ITimer;
            }
        }

        public class CancelTimer_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return false;
                }
            }

            internal class CancelTimer_StackFrame : PrtFunStackFrame
            {
                public CancelTimer_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public CancelTimer_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_timer
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                CancelTimer_StackFrame currFun = (CancelTimer_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                switch ((currFun).returnToLocation)
                {
                    case 1:
                        goto CancelTimer_1;
                    case 2:
                        goto CancelTimer_2;
                    case 3:
                        goto CancelTimer_3;
                    case 4:
                        goto CancelTimer_4;
                    case 5:
                        goto CancelTimer_5;
                }

                (((PrtMachineValue)((currFun).var_timer)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eCancelTimer), Events.@null, parent, (PrtMachineValue)((currFun).var_timer));
                (parent).PrtFunContSend(this, (currFun).locals, 1);
                return;
                CancelTimer_1:
                    ;
                (((PrtImplMachine)(parent)).receiveSet).Add(Events.event_eCancelFailure);
                (((PrtImplMachine)(parent)).receiveSet).Add(Events.event_eCancelSuccess);
                (parent).PrtFunContReceive(this, (currFun).locals, 2);
                return;
                CancelTimer_2:
                    ;
                if ((parent).currentTrigger == Events.event_eCancelFailure)
                {
                    (currFun).locals[1] = ((parent).currentPayload).Clone();
                    (parent).PrtPushFunStackFrame(AnonFunStatic1, (currFun).locals);
                    goto CancelTimer_4;
                }

                if ((parent).currentTrigger == Events.event_eCancelSuccess)
                {
                    (currFun).locals[1] = ((parent).currentPayload).Clone();
                    (parent).PrtPushFunStackFrame(AnonFunStatic2, (currFun).locals);
                    goto CancelTimer_5;
                }

                if (!false)
                    throw new PrtAssertFailureException("Internal error");
                CancelTimer_4:
                    ;
                (AnonFunStatic1).Execute(application, parent);
                if (((parent).continuation).reason == PrtContinuationReason.Return)
                    goto CancelTimer_3;
                else
                {
                    (parent).PrtPushFunStackFrame((currFun).fun, (currFun).locals, 4);
                    return;
                }

                CancelTimer_5:
                    ;
                (AnonFunStatic2).Execute(application, parent);
                if (((parent).continuation).reason == PrtContinuationReason.Return)
                    goto CancelTimer_3;
                else
                {
                    (parent).PrtPushFunStackFrame((currFun).fun, (currFun).locals, 5);
                    return;
                }

                CancelTimer_3:
                    ;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                (locals).Add(PrtValue.@null);
                (locals).Add(PrtValue.@null);
                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new CancelTimer_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "CancelTimer";
            }
        }

        public static CancelTimer_Class CancelTimer = new CancelTimer_Class();
        public class StartTimer_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return false;
                }
            }

            internal class StartTimer_StackFrame : PrtFunStackFrame
            {
                public StartTimer_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public StartTimer_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_timer
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }

                public PrtValue var_time
                {
                    get
                    {
                        return locals[1];
                    }

                    set
                    {
                        locals[1] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                StartTimer_StackFrame currFun = (StartTimer_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                switch ((currFun).returnToLocation)
                {
                    case 1:
                        goto StartTimer_1;
                }

                (((PrtMachineValue)((currFun).var_timer)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eStartTimer), new PrtIntValue(100), parent, (PrtMachineValue)((currFun).var_timer));
                (parent).PrtFunContSend(this, (currFun).locals, 1);
                return;
                StartTimer_1:
                    ;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new StartTimer_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "StartTimer";
            }
        }

        public static StartTimer_Class StartTimer = new StartTimer_Class();
        public class CreateTimer_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return false;
                }
            }

            internal class CreateTimer_StackFrame : PrtFunStackFrame
            {
                public CreateTimer_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public CreateTimer_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_owner
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }

                public PrtValue var_m
                {
                    get
                    {
                        return locals[1];
                    }

                    set
                    {
                        locals[1] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                CreateTimer_StackFrame currFun = (CreateTimer_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                switch ((currFun).returnToLocation)
                {
                    case 1:
                        goto CreateTimer_1;
                }

                (currFun).var_m = (application).CreateInterfaceOrMachine((parent).renamedName, "ITimer", (currFun).var_owner);
                (parent).PrtFunContNewMachine(this, (currFun).locals, 1);
                return;
                CreateTimer_1:
                    ;
                (parent).PrtFunContReturnVal((currFun).var_m, (currFun).locals);
                return;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                (locals).Add(PrtValue.PrtMkDefaultValue(Types.type_ITimer));
                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new CreateTimer_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "CreateTimer";
            }
        }

        public static CreateTimer_Class CreateTimer = new CreateTimer_Class();
        public class AnonFunStatic0_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return true;
                }
            }

            internal class AnonFunStatic0_StackFrame : PrtFunStackFrame
            {
                public AnonFunStatic0_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public AnonFunStatic0_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_timer
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }

                public PrtValue var_payload
                {
                    get
                    {
                        return locals[1];
                    }

                    set
                    {
                        locals[1] = value;
                    }
                }

                public PrtValue var_payload1
                {
                    get
                    {
                        return locals[2];
                    }

                    set
                    {
                        locals[2] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                AnonFunStatic0_StackFrame currFun = (AnonFunStatic0_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new AnonFunStatic0_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "AnonFunStatic0";
            }
        }

        public static AnonFunStatic0_Class AnonFunStatic0 = new AnonFunStatic0_Class();
        public class AnonFunStatic1_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return true;
                }
            }

            internal class AnonFunStatic1_StackFrame : PrtFunStackFrame
            {
                public AnonFunStatic1_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public AnonFunStatic1_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_timer
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }

                public PrtValue var_payload
                {
                    get
                    {
                        return locals[1];
                    }

                    set
                    {
                        locals[1] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                AnonFunStatic1_StackFrame currFun = (AnonFunStatic1_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                switch ((currFun).returnToLocation)
                {
                    case 1:
                        goto AnonFunStatic1_1;
                    case 2:
                        goto AnonFunStatic1_2;
                    case 3:
                        goto AnonFunStatic1_3;
                }

                (((PrtImplMachine)(parent)).receiveSet).Add(Events.event_eTimeOut);
                (parent).PrtFunContReceive(this, (currFun).locals, 1);
                return;
                AnonFunStatic1_1:
                    ;
                if ((parent).currentTrigger == Events.event_eTimeOut)
                {
                    (currFun).locals[2] = ((parent).currentPayload).Clone();
                    (parent).PrtPushFunStackFrame(AnonFunStatic0, (currFun).locals);
                    goto AnonFunStatic1_3;
                }

                if (!false)
                    throw new PrtAssertFailureException("Internal error");
                AnonFunStatic1_3:
                    ;
                (AnonFunStatic0).Execute(application, parent);
                if (((parent).continuation).reason == PrtContinuationReason.Return)
                    goto AnonFunStatic1_2;
                else
                {
                    (parent).PrtPushFunStackFrame((currFun).fun, (currFun).locals, 3);
                    return;
                }

                AnonFunStatic1_2:
                    ;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new AnonFunStatic1_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "AnonFunStatic1";
            }
        }

        public static AnonFunStatic1_Class AnonFunStatic1 = new AnonFunStatic1_Class();
        public class AnonFunStatic2_Class : PrtFun
        {
            public override bool IsAnonFun
            {
                get
                {
                    return true;
                }
            }

            internal class AnonFunStatic2_StackFrame : PrtFunStackFrame
            {
                public AnonFunStatic2_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                {
                }

                public AnonFunStatic2_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                {
                }

                public override PrtFunStackFrame Clone()
                {
                    return this.Clone();
                }

                public PrtValue var_timer
                {
                    get
                    {
                        return locals[0];
                    }

                    set
                    {
                        locals[0] = value;
                    }
                }

                public PrtValue var_payload
                {
                    get
                    {
                        return locals[1];
                    }

                    set
                    {
                        locals[1] = value;
                    }
                }
            }

            public override void Execute(StateImpl application, PrtMachine parent)
            {
                AnonFunStatic2_StackFrame currFun = (AnonFunStatic2_StackFrame)(parent.PrtPopFunStackFrame());
                PrtValue swap;
                parent.PrtFunContReturn((currFun).locals);
            }

            public override List<PrtValue> CreateLocals(params PrtValue[] args)
            {
                var locals = new List<PrtValue>();
                foreach (var item in args)
                {
                    locals.Add(item.Clone());
                }

                return locals;
            }

            public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
            {
                return new AnonFunStatic2_StackFrame(this, locals, retLoc);
            }

            public override string ToString()
            {
                return "AnonFunStatic2";
            }
        }

        public static AnonFunStatic2_Class AnonFunStatic2 = new AnonFunStatic2_Class();
        public static PrtImplMachine CreateMachine_Timer(StateImpl application, PrtValue payload)
        {
            var machine = new Timer(application, PrtImplMachine.DefaultMaxBufferSize, false);
            (application).TraceLine("<CreateLog> Created Machine Timer-{0}", (machine).instanceNumber);
            (((machine).self).permissions).Add(Events.event_eCancelTimer);
            (((machine).self).permissions).Add(Events.event_eStartTimer);
            ((machine).sends).Add(Events.event_eCancelFailure);
            ((machine).sends).Add(Events.event_eCancelSuccess);
            ((machine).sends).Add(Events.event_eTimeOut);
            (machine).currentPayload = payload;
            return machine;
        }

        public class Timer : PrtImplMachine
        {
            public override PrtState StartState
            {
                get
                {
                    return Timer_Init;
                }
            }

            public PrtValue var_client
            {
                get
                {
                    return fields[0];
                }

                set
                {
                    fields[0] = value;
                }
            }

            public override PrtImplMachine MakeSkeleton()
            {
                return new Timer();
            }

            public override int NextInstanceNumber(StateImpl app)
            {
                return app.NextMachineInstanceNumber(this.GetType());
            }

            public override string Name
            {
                get
                {
                    return "Timer";
                }
            }

            public Timer(): base ()
            {
            }

            public Timer(StateImpl app, int maxB, bool assume): base (app, maxB, assume)
            {
                (fields).Add(PrtValue.PrtMkDefaultValue(Types.type_ITimerClient));
            }

            public class ignore_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return false;
                    }
                }

                internal class ignore_StackFrame : PrtFunStackFrame
                {
                    public ignore_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public ignore_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    ignore_StackFrame currFun = (ignore_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new ignore_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "ignore";
                }
            }

            public static ignore_Class ignore = new ignore_Class();
            public class AnonFun0_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun0_StackFrame : PrtFunStackFrame
                {
                    public AnonFun0_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun0_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun0_StackFrame currFun = (AnonFun0_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun0_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun0";
                }
            }

            public static AnonFun0_Class AnonFun0 = new AnonFun0_Class();
            public class AnonFun1_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun1_StackFrame : PrtFunStackFrame
                {
                    public AnonFun1_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun1_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun1_StackFrame currFun = (AnonFun1_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun1_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun1";
                }
            }

            public static AnonFun1_Class AnonFun1 = new AnonFun1_Class();
            public class AnonFun2_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun2_StackFrame : PrtFunStackFrame
                {
                    public AnonFun2_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun2_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_0
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun2_StackFrame currFun = (AnonFun2_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto AnonFun2_1;
                    }

                    (((PrtMachineValue)((parent).var_client)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eCancelFailure), parent.self, parent, (PrtMachineValue)((parent).var_client));
                    (parent).PrtFunContSend(this, (currFun).locals, 1);
                    return;
                    AnonFun2_1:
                        ;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun2_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun2";
                }
            }

            public static AnonFun2_Class AnonFun2 = new AnonFun2_Class();
            public class AnonFun3_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun3_StackFrame : PrtFunStackFrame
                {
                    public AnonFun3_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun3_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun3_StackFrame currFun = (AnonFun3_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun3_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun3";
                }
            }

            public static AnonFun3_Class AnonFun3 = new AnonFun3_Class();
            public class AnonFun4_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun4_StackFrame : PrtFunStackFrame
                {
                    public AnonFun4_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun4_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_1
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun4_StackFrame currFun = (AnonFun4_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto AnonFun4_1;
                    }

                    (((PrtMachineValue)((parent).var_client)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eTimeOut), parent.self, parent, (PrtMachineValue)((parent).var_client));
                    (parent).PrtFunContSend(this, (currFun).locals, 1);
                    return;
                    AnonFun4_1:
                        ;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun4_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun4";
                }
            }

            public static AnonFun4_Class AnonFun4 = new AnonFun4_Class();
            public class AnonFun5_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun5_StackFrame : PrtFunStackFrame
                {
                    public AnonFun5_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun5_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun5_StackFrame currFun = (AnonFun5_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun5_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun5";
                }
            }

            public static AnonFun5_Class AnonFun5 = new AnonFun5_Class();
            public class AnonFun6_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun6_StackFrame : PrtFunStackFrame
                {
                    public AnonFun6_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun6_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun6_StackFrame currFun = (AnonFun6_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun6_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun6";
                }
            }

            public static AnonFun6_Class AnonFun6 = new AnonFun6_Class();
            public class AnonFun7_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun7_StackFrame : PrtFunStackFrame
                {
                    public AnonFun7_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun7_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun7_StackFrame currFun = (AnonFun7_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun7_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun7";
                }
            }

            public static AnonFun7_Class AnonFun7 = new AnonFun7_Class();
            public class AnonFun8_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun8_StackFrame : PrtFunStackFrame
                {
                    public AnonFun8_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun8_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_skip
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun8_StackFrame currFun = (AnonFun8_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun8_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun8";
                }
            }

            public static AnonFun8_Class AnonFun8 = new AnonFun8_Class();
            public class AnonFun9_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun9_StackFrame : PrtFunStackFrame
                {
                    public AnonFun9_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun9_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var__payload_2
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun9_StackFrame currFun = (AnonFun9_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto AnonFun9_1;
                        case 2:
                            goto AnonFun9_2;
                        case 3:
                            goto AnonFun9_3;
                    }

                    if (!((PrtBoolValue)(new PrtBoolValue((application).GetSelectedChoiceValue((PrtImplMachine)(parent))))).bl)
                        goto AnonFun9_if_0_else;
                    (((PrtMachineValue)((parent).var_client)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eCancelSuccess), parent.self, parent, (PrtMachineValue)((parent).var_client));
                    (parent).PrtFunContSend(this, (currFun).locals, 1);
                    return;
                    AnonFun9_1:
                        ;
                    goto AnonFun9_if_0_end;
                    AnonFun9_if_0_else:
                        ;
                    (((PrtMachineValue)((parent).var_client)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eCancelFailure), parent.self, parent, (PrtMachineValue)((parent).var_client));
                    (parent).PrtFunContSend(this, (currFun).locals, 2);
                    return;
                    AnonFun9_2:
                        ;
                    (((PrtMachineValue)((parent).var_client)).mach).PrtEnqueueEvent((PrtEventValue)(Events.event_eTimeOut), parent.self, parent, (PrtMachineValue)((parent).var_client));
                    (parent).PrtFunContSend(this, (currFun).locals, 3);
                    return;
                    AnonFun9_3:
                        ;
                    AnonFun9_if_0_end:
                        ;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun9_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun9";
                }
            }

            public static AnonFun9_Class AnonFun9 = new AnonFun9_Class();
            public class AnonFun10_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return true;
                    }
                }

                internal class AnonFun10_StackFrame : PrtFunStackFrame
                {
                    public AnonFun10_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public AnonFun10_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var_m
                    {
                        get
                        {
                            return locals[0];
                        }

                        set
                        {
                            locals[0] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    Timer parent = (Timer)(_parent);
                    AnonFun10_StackFrame currFun = (AnonFun10_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    (parent).var_client = ((currFun).var_m).Clone();
                    (application).TraceLine("<GotoLog> Machine {0}-{1} goes to {2}", (parent).Name, (parent).instanceNumber, (Timer_WaitForReq).name);
                    (parent).currentTrigger = Events.@null;
                    (parent).currentPayload = Events.@null;
                    (parent).destOfGoto = Timer_WaitForReq;
                    (parent).PrtFunContGoto();
                    return;
                    parent.PrtFunContReturn((currFun).locals);
                }

                public override List<PrtValue> CreateLocals(params PrtValue[] args)
                {
                    var locals = new List<PrtValue>();
                    foreach (var item in args)
                    {
                        locals.Add(item.Clone());
                    }

                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new AnonFun10_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "AnonFun10";
                }
            }

            public static AnonFun10_Class AnonFun10 = new AnonFun10_Class();
            public class Timer_WaitForCancel_Class : PrtState
            {
                public Timer_WaitForCancel_Class(string name, PrtFun entryFun, PrtFun exitFun, bool hasNullTransition, StateTemperature temperature): base (name, entryFun, exitFun, hasNullTransition, temperature)
                {
                }
            }

            public static Timer_WaitForCancel_Class Timer_WaitForCancel;
            public class Timer_WaitForReq_Class : PrtState
            {
                public Timer_WaitForReq_Class(string name, PrtFun entryFun, PrtFun exitFun, bool hasNullTransition, StateTemperature temperature): base (name, entryFun, exitFun, hasNullTransition, temperature)
                {
                }
            }

            public static Timer_WaitForReq_Class Timer_WaitForReq;
            public class Timer_Init_Class : PrtState
            {
                public Timer_Init_Class(string name, PrtFun entryFun, PrtFun exitFun, bool hasNullTransition, StateTemperature temperature): base (name, entryFun, exitFun, hasNullTransition, temperature)
                {
                }
            }

            public static Timer_Init_Class Timer_Init;
            static Timer()
            {
                Timer_WaitForCancel = new Timer_WaitForCancel_Class("Timer_WaitForCancel", AnonFun5, AnonFun1, true, StateTemperature.Warm);
                Timer_WaitForReq = new Timer_WaitForReq_Class("Timer_WaitForReq", AnonFun7, AnonFun8, false, StateTemperature.Warm);
                Timer_Init = new Timer_Init_Class("Timer_Init", AnonFun10, AnonFun6, false, StateTemperature.Warm);
                Timer_WaitForCancel.dos.Add(Events.event_eStartTimer, PrtFun.IgnoreFun);
                PrtTransition transition_1 = new PrtTransition(AnonFun9, Timer_WaitForReq, false);
                Timer_WaitForCancel.transitions.Add(Events.event_eCancelTimer, transition_1);
                PrtTransition transition_2 = new PrtTransition(AnonFun4, Timer_WaitForReq, false);
                Timer_WaitForCancel.transitions.Add(Events.@null, transition_2);
                PrtTransition transition_3 = new PrtTransition(AnonFun0, Timer_WaitForCancel, false);
                Timer_WaitForReq.transitions.Add(Events.event_eStartTimer, transition_3);
                PrtTransition transition_4 = new PrtTransition(AnonFun2, Timer_WaitForReq, false);
                Timer_WaitForReq.transitions.Add(Events.event_eCancelTimer, transition_4);
            }
        }
    }
}
