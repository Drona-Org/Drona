event cmd_local;
event cmd_retry; 

machine CommanderMachine : CommanderInterface
{
	var currCmd: CommandType;
	var timer : machine;
	var retries: int;

	start state Init {
		entry (orb:machine) {
			timer = CreateTimer(this);
			Subscribe(orb, (topic = command_ack_topic, sub = this));
			raise cmd_local;
		}
		on cmd_local goto ProcessCommands;
	}
	
	state ProcessCommands {
		on Command push SendCommand;
		on command_ack do (ack: mavlink_command_ack_t){ 
			print "Extra ack received for command : {0}\n",  ack._command;
		}
		ignore timer_timeout;
	}
	
	state SendCommand {
		defer Command;
		entry (cmd: CommandType){
			currCmd = cmd;
			retries = 0;
			SendWithRetry();
		}

		on timer_timeout do (timer: machine) {
			
			// the timer has weird semantics, it is not periodic, yet we have to cancel it even if it has timed out.
			CancelTimerAndHandleResponse(timer);		

			if (currCmd.confirm) 
			{
				//timeout, so resend.
				SendWithRetry();
			}
		}


		on command_ack do (ack: mavlink_command_ack_t) {
			var id: int;
			id = ack._command;
			if(ack._command == currCmd.cmd)
			{
				if (currCmd.confirm) {
					CancelTimerAndHandleResponse(timer);
				}
				if (ack._result == mav_result_accepted)
				{
					print "CommanderMachine: Received command succeeded ack for command id {0}\n", ack._command;
					send currCmd.caller, CommandSucceeded, id;
				}
				else 
				{
					print "CommanderMachine: Received command failed ack for command id {0}\n", ack._command;
					send currCmd.caller, CommandFailed, id;
				}
				pop;
			}
			else
			{
				print "Unexpected ack received for command : {0}\n",  ack._command;
			}
			
		}
		
	}
	
	model fun SendCommandToPx4(caller:machine, confirm:bool, cmd: int,  a1:any, a2:any, a3:any, a4:any, a5:any, a6:any, a7:any) {}

	fun SendWithRetry(){
	
		retries = retries + 1;
		if (retries < 10) {
			print "CommanderMachine: Sending command {0},{1},{2},{3},{4},{5},{6},{7} ...\n", currCmd.cmd, currCmd.a1, currCmd.a2, currCmd.a3, currCmd.a4, currCmd.a5, currCmd.a6, currCmd.a7;
			SendCommandToPx4(currCmd.caller, currCmd.confirm, currCmd.cmd, currCmd.a1, currCmd.a2, currCmd.a3, currCmd.a4, currCmd.a5, currCmd.a6, currCmd.a7);			
			if (currCmd.confirm) 
			{
				// resend the command every second until we get an ACK back.								
				StartTimer(timer, 1000);				
			} else {
				// pop immediately so we can send the next command.
				pop;
			}
		} 
		else 
		{
			// give up and generate a NAK.
			CancelTimerAndHandleResponse(timer);
			send currCmd.caller, CommandFailed, currCmd.cmd;
			pop;
		}
	}

}
