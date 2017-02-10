#include "PX4_API.p"
#include "TimerInterface.p"

// local event for control transfer within timer
event timer_init; 

//Functions for interacting with the timer machine
fun CreateTimer(owner : machine): machine {
	var timer: machine;
	timer = new TimerInterface(owner);
	return timer;
}

model fun StartTimer(timer : machine, time: int) {
	send timer, START;
}

model fun CancelTimer(timer : machine) {
	send timer, CANCEL;
}

fun CancelTimerAndHandleResponse(timer: machine): bool {
	var timerCanceled: bool;
	CancelTimer(timer);
	receive {
		case timer_cancel_success: (payload: machine) 
		{ 
			assert(timer == payload);
			timerCanceled = true; 
		}
		case timer_cancel_failure: (payload: machine) 
		{ 
			assert(timer == payload);
			timerCanceled = false; 
		}
	}
	return timerCanceled;
}

machine Timer : TimerInterface {
  var client: machine;

  start state Init {
    entry (payload: machine) {
      client = payload;
	  // goto WaitForReq
      raise timer_init;
    }
    on timer_init goto WaitForReq;
  }

  state WaitForReq {
    on timer_cancel goto WaitForReq with { 
      send client, timer_cancel_failure, this;
    } 
    on timer_start goto WaitForCancel;
  }

  state WaitForCancel {
    ignore timer_start;
    on null goto WaitForReq with { 
	  send client, timer_timeout, this; 
	}
    on timer_cancel goto WaitForReq with {
      if ($) {
        send client, timer_cancel_success, this;
      } else {
        send client, timer_cancel_failure, this;
        send client, timer_timeout, this;
      }
    }
  }
}
