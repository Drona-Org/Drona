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
            public static PrtEventValue event_POrbPublish;
            public static PrtEventValue event_POrbSubscribe;
            public static void Events_porb()
            {
                event_POrbPublish = new PrtEventValue(new PrtEvent("POrbPublish", Types.type_POrbPubMsgType, PrtEvent.DefaultMaxInstances, false));
                event_POrbSubscribe = new PrtEventValue(new PrtEvent("POrbSubscribe", Types.type_POrbSubMsgType, PrtEvent.DefaultMaxInstances, false));
            }
        }

        public partial class Types
        {
            public static PrtType type_1_958407665;
            public static PrtType type_2_958407665;
            public static PrtType type_POrbSubMsgType;
            public static PrtType type_4_958407665;
            public static PrtType type_5_958407665;
            public static PrtType type_POrbPubMsgType;
            public static PrtType type_6_958407665;
            public static PrtType type_7_958407665;
            public static PrtType type_8_958407665;
            public static PrtType type_9_958407665;
            public static PrtType type_10_958407665;
            public static PrtType type_11_958407665;
            public static PrtType type_12_958407665;
            public static PrtType type_13_958407665;
            static public void Types_porb()
            {
                Types.type_1_958407665 = new PrtEnumType("Topics", "heartbeat_topic", 0, "attitude_topic", 1, "global_position_topic", 2, "local_position_topic", 3, "battery_status_topic", 4, "gps_raw_int_topic", 5, "gps_status_topic", 6, "command_ack_topic", 7, "extended_sys_state_topic", 8, "px4status_topic", 9, "altitude_reached_topic", 10, "geofence_reached_topic", 11, "heartbeat_status_topic", 12, "battery_critical_topic", 13, "gps_health_topic", 14, "vehicle_ready_topic", 15, "vehicle_armed_topic", 16, "vehicle_disarmed_topic", 17, "vehicle_landed_topic", 18, "vehicle_loitering_topic", 19, "vehicle_crashed_topic", 20);
                Types.type_2_958407665 = new PrtMachineType();
                Types.type_POrbSubMsgType = new PrtNamedTupleType(new object[]{"topic", Types.type_1_958407665, "sub", Types.type_2_958407665});
                Types.type_4_958407665 = new PrtEventType();
                Types.type_5_958407665 = new PrtAnyType();
                Types.type_POrbPubMsgType = new PrtNamedTupleType(new object[]{"topic", Types.type_1_958407665, "ev", Types.type_4_958407665, "payload", Types.type_5_958407665});
                Types.type_6_958407665 = new PrtIntType();
                Types.type_7_958407665 = new PrtBoolType();
                Types.type_8_958407665 = new PrtNamedTupleType(new object[]{"index", Types.type_6_958407665});
                Types.type_9_958407665 = new PrtSeqType(Types.type_2_958407665);
                Types.type_10_958407665 = new PrtNamedTupleType(new object[]{"list", Types.type_9_958407665});
                Types.type_11_958407665 = new PrtMapType(Types.type_1_958407665, Types.type_9_958407665);
                Types.type_12_958407665 = new PrtTupleType(new PrtType[]{Types.type_6_958407665, Types.type_2_958407665});
                Types.type_13_958407665 = new PrtNullType();
            }
        }

        public static PrtImplMachine CreateMachine_POrbMachine(StateImpl application, PrtValue payload)
        {
            var machine = new POrbMachine(application, PrtImplMachine.DefaultMaxBufferSize, false);
            (application).TraceLine("<CreateLog> Created Machine POrbMachine-{0}", (machine).instanceNumber);
            ((machine).self).permissions = null;
            (machine).sends = null;
            (machine).currentPayload = payload;
            return machine;
        }

        public class POrbMachine : PrtImplMachine
        {
            public override PrtState StartState
            {
                get
                {
                    return POrbMachine_Init;
                }
            }

            public PrtValue var_topicSubscribers
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
                return new POrbMachine();
            }

            public override int NextInstanceNumber(StateImpl app)
            {
                return app.NextMachineInstanceNumber(this.GetType());
            }

            public override string Name
            {
                get
                {
                    return "POrbMachine";
                }
            }

            public POrbMachine(): base ()
            {
            }

            public POrbMachine(StateImpl app, int maxB, bool assume): base (app, maxB, assume)
            {
                (fields).Add(PrtValue.PrtMkDefaultValue(Types.type_11_958407665));
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
                    POrbMachine parent = (POrbMachine)(_parent);
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
            public class InitializeListener_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return false;
                    }
                }

                internal class InitializeListener_StackFrame : PrtFunStackFrame
                {
                    public InitializeListener_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public InitializeListener_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var_payload
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
                    POrbMachine parent = (POrbMachine)(_parent);
                    InitializeListener_StackFrame currFun = (InitializeListener_StackFrame)(parent.PrtPopFunStackFrame());
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
                    return new InitializeListener_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "InitializeListener";
                }
            }

            public static InitializeListener_Class InitializeListener = new InitializeListener_Class();
            public class IsSubscribed_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return false;
                    }
                }

                internal class IsSubscribed_StackFrame : PrtFunStackFrame
                {
                    public IsSubscribed_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public IsSubscribed_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var_sub
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

                    public PrtValue var_machines
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

                    public PrtValue var_index
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

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    POrbMachine parent = (POrbMachine)(_parent);
                    IsSubscribed_StackFrame currFun = (IsSubscribed_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    (currFun).var_index = (new PrtIntValue(0)).Clone();
                    IsSubscribed_loop_start_0:
                        ;
                    if (!((PrtBoolValue)(new PrtBoolValue(((PrtIntValue)((currFun).var_index)).nt < ((PrtIntValue)(new PrtIntValue(((currFun).var_machines).Size()))).nt))).bl)
                        goto IsSubscribed_loop_end_0;
                    if (!((PrtBoolValue)(new PrtBoolValue(((((PrtSeqValue)((currFun).var_machines)).Lookup((currFun).var_index)).Clone()).Equals((currFun).var_sub)))).bl)
                        goto IsSubscribed_if_0_else;
                    (parent).PrtFunContReturnVal(new PrtBoolValue(true), (currFun).locals);
                    return;
                    goto IsSubscribed_if_0_end;
                    IsSubscribed_if_0_else:
                        ;
                    IsSubscribed_if_0_end:
                        ;
                    (currFun).var_index = (new PrtIntValue(((PrtIntValue)((currFun).var_index)).nt + ((PrtIntValue)(new PrtIntValue(1))).nt)).Clone();
                    goto IsSubscribed_loop_start_0;
                    IsSubscribed_loop_end_0:
                        ;
                    (parent).PrtFunContReturnVal(new PrtBoolValue(false), (currFun).locals);
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

                    (locals).Add(PrtValue.PrtMkDefaultValue(Types.type_6_958407665));
                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new IsSubscribed_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "IsSubscribed";
                }
            }

            public static IsSubscribed_Class IsSubscribed = new IsSubscribed_Class();
            public class Broadcast_Class : PrtFun
            {
                public override bool IsAnonFun
                {
                    get
                    {
                        return false;
                    }
                }

                internal class Broadcast_StackFrame : PrtFunStackFrame
                {
                    public Broadcast_StackFrame(PrtFun fun, List<PrtValue> _locals): base (fun, _locals)
                    {
                    }

                    public Broadcast_StackFrame(PrtFun fun, List<PrtValue> _locals, int retLocation): base (fun, _locals, retLocation)
                    {
                    }

                    public override PrtFunStackFrame Clone()
                    {
                        return this.Clone();
                    }

                    public PrtValue var_machines
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

                    public PrtValue var_ev
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

                    public PrtValue var_payload
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

                    public PrtValue var_index
                    {
                        get
                        {
                            return locals[3];
                        }

                        set
                        {
                            locals[3] = value;
                        }
                    }
                }

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    POrbMachine parent = (POrbMachine)(_parent);
                    Broadcast_StackFrame currFun = (Broadcast_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto Broadcast_1;
                    }

                    (currFun).var_index = (new PrtIntValue(0)).Clone();
                    Broadcast_loop_start_0:
                        ;
                    if (!((PrtBoolValue)(new PrtBoolValue(((PrtIntValue)((currFun).var_index)).nt < ((PrtIntValue)(new PrtIntValue(((currFun).var_machines).Size()))).nt))).bl)
                        goto Broadcast_loop_end_0;
                    (((PrtMachineValue)((((PrtSeqValue)((currFun).var_machines)).Lookup((currFun).var_index)).Clone())).mach).PrtEnqueueEvent((PrtEventValue)((currFun).var_ev), (currFun).var_payload, parent, (PrtMachineValue)((((PrtSeqValue)((currFun).var_machines)).Lookup((currFun).var_index)).Clone()));
                    (parent).PrtFunContSend(this, (currFun).locals, 1);
                    return;
                    Broadcast_1:
                        ;
                    (currFun).var_index = (new PrtIntValue(((PrtIntValue)((currFun).var_index)).nt + ((PrtIntValue)(new PrtIntValue(1))).nt)).Clone();
                    goto Broadcast_loop_start_0;
                    Broadcast_loop_end_0:
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

                    (locals).Add(PrtValue.PrtMkDefaultValue(Types.type_6_958407665));
                    return locals;
                }

                public override PrtFunStackFrame CreateFunStackFrame(List<PrtValue> locals, int retLoc)
                {
                    return new Broadcast_StackFrame(this, locals, retLoc);
                }

                public override string ToString()
                {
                    return "Broadcast";
                }
            }

            public static Broadcast_Class Broadcast = new Broadcast_Class();
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
                    POrbMachine parent = (POrbMachine)(_parent);
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
                    POrbMachine parent = (POrbMachine)(_parent);
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
                    POrbMachine parent = (POrbMachine)(_parent);
                    AnonFun2_StackFrame currFun = (AnonFun2_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto AnonFun2_1;
                    }

                    (parent).PrtPushFunStackFrame(InitializeListener, (InitializeListener).CreateLocals(parent.self));
                    AnonFun2_1:
                        ;
                    (InitializeListener).Execute(application, parent);
                    if (((parent).continuation).reason == PrtContinuationReason.Return)
                    {
                    }
                    else
                    {
                        (parent).PrtPushFunStackFrame((currFun).fun, (currFun).locals, 1);
                        return;
                    }

                    (application).TraceLine("<GotoLog> Machine {0}-{1} goes to {2}", (parent).Name, (parent).instanceNumber, (POrbMachine_ReadMessagesAndPublish).name);
                    (parent).currentTrigger = Events.@null;
                    (parent).currentPayload = Events.@null;
                    (parent).destOfGoto = POrbMachine_ReadMessagesAndPublish;
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
                    POrbMachine parent = (POrbMachine)(_parent);
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

                    public PrtValue var_payload
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
                    POrbMachine parent = (POrbMachine)(_parent);
                    AnonFun4_StackFrame currFun = (AnonFun4_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    switch ((currFun).returnToLocation)
                    {
                        case 1:
                            goto AnonFun4_1;
                    }

                    if (!((PrtBoolValue)(new PrtBoolValue(((PrtMapValue)((parent).var_topicSubscribers)).Contains((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone())))).bl)
                        goto AnonFun4_if_0_else;
                    (parent).PrtPushFunStackFrame(Broadcast, (Broadcast).CreateLocals((((PrtMapValue)((parent).var_topicSubscribers)).Lookup((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone())).Clone(), (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone(), (((PrtTupleValue)((currFun).var_payload)).fieldValues[2]).Clone()));
                    AnonFun4_1:
                        ;
                    (Broadcast).Execute(application, parent);
                    if (((parent).continuation).reason == PrtContinuationReason.Return)
                    {
                    }
                    else
                    {
                        (parent).PrtPushFunStackFrame((currFun).fun, (currFun).locals, 1);
                        return;
                    }

                    goto AnonFun4_if_0_end;
                    AnonFun4_if_0_else:
                        ;
                    AnonFun4_if_0_end:
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

                    public PrtValue var_payload
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

                    public PrtValue var_list
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

                public override void Execute(StateImpl application, PrtMachine _parent)
                {
                    POrbMachine parent = (POrbMachine)(_parent);
                    AnonFun5_StackFrame currFun = (AnonFun5_StackFrame)(parent.PrtPopFunStackFrame());
                    PrtValue swap;
                    if (!((PrtBoolValue)(new PrtBoolValue(((PrtMapValue)((parent).var_topicSubscribers)).Contains((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone())))).bl)
                        goto AnonFun5_if_1_else;
                    (currFun).var_list = ((((PrtMapValue)((parent).var_topicSubscribers)).Lookup((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone())).Clone()).Clone();
                    if (!((PrtBoolValue)((IsSubscribed).ExecuteToCompletion(application, parent, (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone(), (currFun).var_list))).bl)
                        goto AnonFun5_if_0_else;
                    (application).Trace("<PrintLog> Subscriber is already subscribed to event ");
                    ((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone()).ToString();
                    (application).Trace("<PrintLog> \\n");
                    goto AnonFun5_if_0_end;
                    AnonFun5_if_0_else:
                        ;
                    AnonFun5_if_0_end:
                        ;
                    ((PrtSeqValue)(((PrtMapValue)((parent).var_topicSubscribers)).Lookup((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone()))).Insert(((PrtTupleValue)(new PrtTupleValue(new PrtIntValue(0), (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone()))).fieldValues[0], ((PrtTupleValue)(new PrtTupleValue(new PrtIntValue(0), (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone()))).fieldValues[1]);
                    goto AnonFun5_if_1_end;
                    AnonFun5_if_1_else:
                        ;
                    ((PrtMapValue)((parent).var_topicSubscribers)).Update((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone(), (PrtValue.PrtMkDefaultValue(Types.type_9_958407665)).Clone());
                    ((PrtSeqValue)(((PrtMapValue)((parent).var_topicSubscribers)).Lookup((((PrtTupleValue)((currFun).var_payload)).fieldValues[0]).Clone()))).Insert(((PrtTupleValue)(new PrtTupleValue(new PrtIntValue(0), (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone()))).fieldValues[0], ((PrtTupleValue)(new PrtTupleValue(new PrtIntValue(0), (((PrtTupleValue)((currFun).var_payload)).fieldValues[1]).Clone()))).fieldValues[1]);
                    AnonFun5_if_1_end:
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

                    (locals).Add(PrtValue.PrtMkDefaultValue(Types.type_9_958407665));
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
                    POrbMachine parent = (POrbMachine)(_parent);
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
            public class POrbMachine_ReadMessagesAndPublish_Class : PrtState
            {
                public POrbMachine_ReadMessagesAndPublish_Class(string name, PrtFun entryFun, PrtFun exitFun, bool hasNullTransition, StateTemperature temperature): base (name, entryFun, exitFun, hasNullTransition, temperature)
                {
                }
            }

            public static POrbMachine_ReadMessagesAndPublish_Class POrbMachine_ReadMessagesAndPublish;
            public class POrbMachine_Init_Class : PrtState
            {
                public POrbMachine_Init_Class(string name, PrtFun entryFun, PrtFun exitFun, bool hasNullTransition, StateTemperature temperature): base (name, entryFun, exitFun, hasNullTransition, temperature)
                {
                }
            }

            public static POrbMachine_Init_Class POrbMachine_Init;
            static POrbMachine()
            {
                POrbMachine_ReadMessagesAndPublish = new POrbMachine_ReadMessagesAndPublish_Class("POrbMachine_ReadMessagesAndPublish", AnonFun0, AnonFun1, false, StateTemperature.Warm);
                POrbMachine_Init = new POrbMachine_Init_Class("POrbMachine_Init", AnonFun2, AnonFun3, false, StateTemperature.Warm);
                POrbMachine_ReadMessagesAndPublish.dos.Add(Events.event_POrbSubscribe, AnonFun5);
                POrbMachine_ReadMessagesAndPublish.dos.Add(Events.event_POrbPublish, AnonFun4);
            }
        }
    }
}
