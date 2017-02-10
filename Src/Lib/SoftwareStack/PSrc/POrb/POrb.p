// The POrbMachine implements a pub/sub mechanism so you can have many subscribers 
// receive messages that are published.
 
#include "POrbInterface.p""

fun sealwithRTC()
//[invokescheduler = sealRTC]
{}

fun unsealwithRTC()
//[invokescheduler = unsealRTC]
{}

fun sealwithRR()
//[invokescheduler = sealRR]
{}

fun unsealwithRR()
//[invokescheduler = unsealRR]
{}

event porb_local;

machine POrbMachine : POrbInterface {
	var topicSubscribers: map[Topics, seq[machine]];
	start state Init
	{
		entry {
			InitializeListener(this);
			raise porb_local;
		}
		on porb_local goto ReadMessagesAndPublish;
	}

	model fun InitializeListener(payload: machine) {
		//initialize the listener and start pumping events.
	}

	fun Broadcast(machines: seq[machine], ev: event, payload: any){
		var index: int;
		sealwithRR();
		index = 0;
		while(index < sizeof(machines))
		{
			send machines[index], ev, payload;
		    index = index + 1;
		}
		unsealwithRR();
	}

	fun IsSubscribed(sub: machine, machines: seq[machine]) : bool
	{
		var index: int;
		index = 0;
		while(index < sizeof(machines))
		{
			if (machines[index] == sub) {
				return true;
			}
		    index = index + 1;
		}
		return false;
	}

	state ReadMessagesAndPublish {
		//service messages received from the publisher
		on POrbPublish do (payload: POrbPubMsgType) {
			unsealwithRTC();		    
			if(payload.topic in topicSubscribers)
				Broadcast(topicSubscribers[payload.topic], payload.ev, payload.payload);
		}
		//listen for subscription requests
		on POrbSubscribe do (payload : POrbSubMsgType) {
		    var list:  seq[machine];
			if(payload.topic in topicSubscribers)
			{ 
				list = topicSubscribers[payload.topic];
				if (IsSubscribed(payload.sub, list)) {
					print "Subscriber is already subscribed to event {0}\n", payload.topic;
				} 
				topicSubscribers[payload.topic] += (0, payload.sub);
			}
			else
			{
				topicSubscribers[payload.topic] = default(seq[machine]);
				topicSubscribers[payload.topic] += (0, payload.sub);
			}
		}
	}

}