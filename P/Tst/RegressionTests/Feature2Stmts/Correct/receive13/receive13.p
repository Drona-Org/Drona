// This sample XYZs that a receive statement ignores the event handlers of the enclosing context.
event E;
event F;
event Unit;

machine Main {
	var x: int;
	start state Init {
		entry {
			var b: machine;
		    b = new B();
			send b, F;
		}
	}
}

machine B {
	start state Init {
		entry {
			raise Unit;
		}
		on Unit push X;
		on F do { assert false; }
	}
	
	state X {
		entry {
			receive {
				case F: { pop; }
			}
		}
		on F do { assert false; }
	}
}
