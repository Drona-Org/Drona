// To subscribe to a particular topic you pass the topic id and the machine you want
// to receive the messages that are published to that topic.
type POrbSubMsgType = (topic: Topics, sub: machine);
event POrbSubscribe: POrbSubMsgType;

// To publish a particular topic you pass the topic id, the event to publish and the
// payload required for that type of event.
type POrbPubMsgType = (topic: Topics, ev: event, payload: any);
event POrbPublish: POrbPubMsgType;

