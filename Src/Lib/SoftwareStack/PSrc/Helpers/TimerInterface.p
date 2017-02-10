
// TimerInterface

//Functions for interacting with the timer machine
extern fun CreateTimer(owner : machine): machine;
extern fun StartTimer(timer : machine, time: int);
extern fun CancelTimer(timer : machine);
extern fun CancelTimerAndHandleResponse(timer: machine): bool;

// events from client to timer
event timer_start: int;
event timer_cancel;
// events from timer to client
event timer_timeout: machine;
event timer_cancel_success: machine;
event timer_cancel_failure: machine;

type TimerInterface() = {
	timer_start, timer_cancel, timer_timeout, timer_cancel_success, timer_cancel_failure
};
