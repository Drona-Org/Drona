# improvisation scheme based on DFA sampling

from collections import defaultdict
import random
import itertools
import time

# abstract class for implicitly or explicitly-represented DFAs
# Convention: the object None must not be used as a state! anything else, such
# as (None, None), is fine; the only place this is used is in ExplicitDFA's
# union method
class DFA(object):
	def getAlphabet(self):
		raise Exception('should be overridden by subclass')

	def isAcceptingState(self, state):
		raise Exception('should be overridden by subclass')

	def getInitialState(self):
		raise Exception('should be overridden by subclass')

	def hasTransition(self, state, symbol):
		raise Exception('should be overridden by subclass')

	# returns the state transitioned to with the given starting state and input symbol
	def transition(self, state, symbol):
		raise Exception('should be overridden by subclass')

	# returns an iterator over (symbol, destination) pairs from the given state
	def transitions(self, state):
		for symbol in self.getAlphabet():
			if self.hasTransition(state, symbol):
				yield (symbol, self.transition(state, symbol))

	def checkString(self, s, trace=False):
		state = self.getInitialState()
		for (index, symbol) in enumerate(s):
			if trace:
				print str(index)+': '+str(state)
			if not self.hasTransition(state, symbol):
				return False
			state = self.transition(state, symbol)
		if trace:
			print state
		return self.isAcceptingState(state)

	def complement(self):
		return ImplicitComplement(self)

	# computes the explicit form of the given DFA, pruned so that every state lies on a path
	# from the initial state to an accepting state; returns the pruned automaton, whether it
	# has a cycle, and a reverse topological sorting of its states if it is acyclic
	@staticmethod
	def explicitPruning(automaton):
		goodStates = set()	# reachable states from which an accepting state can be reached
		orderedGoodStates = []	# good states in reverse topological order
		loopyStates = set()		# reachable states which lie on a cycle
		prunedDelta = defaultdict(dict)
		alphabet = automaton.getAlphabet()
		initialState = automaton.getInitialState()

		# do a DFS from the initial state, identifying all reachable and good states; we
		# unfortunately can't use recursion since the automaton may have a large depth,
		# so we use an explicit stack; each element of the stack stores:
		#  - the current state
		#  - the symbol causing the transition to it
		#  - the set of states known to be reachable from it
		#  - an iterator for its transitions which have not yet been processed
		#  - whether or not it is known to lie on an accepting path
		stack = [(initialState, None, set(), automaton.transitions(initialState), automaton.isAcceptingState(initialState))]
		# the "return value" is the stack tuple for the last processed state
		returnValue = (None, None, set(), None, False)
		visitedStates = set()
		while len(stack) > 0:
			# retrieve current state and "return value"
			(state, symbol, reachableStates, transitionIterator, canAccept) = stack.pop()
			(child, childSymbol, childReachable, childIterator, childCanAccept) = returnValue

			visitedStates.add(state)	# keep track of visited states

			# update information about state
			reachableStates |= childReachable
			canAccept |= childCanAccept
			returnValue = (state, symbol, reachableStates, transitionIterator, canAccept)
			if childCanAccept:	# add transition to the child in the pruned DFA
				prunedDelta[state][childSymbol] = child

			# process next transition, if there is one
			try:
				(childSymbol, child) = transitionIterator.next()	# throws an exception if there are no transitions left

				# there are more transitions; push updated information about state onto stack
				stack.append(returnValue)

				# if child is already visited, do not explore again, but set the "return value"
				# as if we have just returned from it; otherwise "recurse" on child
				if child in visitedStates:
					returnValue = (child, childSymbol, {child}, None, automaton.isAcceptingState(child) or (child in goodStates))
				else:
					stack.append((child, childSymbol, set(), automaton.transitions(child), automaton.isAcceptingState(child)))
					returnValue = (None, None, set(), None, False)
			except StopIteration, e:	# no more children; "return" to parent state
				# check for cycles and goodness
				if state in reachableStates:	# cycle detected
					loopyStates.add(state)
				if canAccept:	# state is good; add it to the pruned DFA
					goodStates.add(state)
					orderedGoodStates.append(state)

		# check for cycles and if there are no accepting paths
		if not goodStates.isdisjoint(loopyStates):
			raise Exception('cyclic automata not yet supported')
		if not canAccept:
			return (None, False, None)

		goodAcceptingStates = set(itertools.ifilter(automaton.isAcceptingState, goodStates))
		prunedDFA = ExplicitDFA(alphabet, goodStates, goodAcceptingStates, initialState, prunedDelta)

		return (prunedDFA, False, orderedGoodStates)

	@staticmethod
	def fullDFA(alphabet):
		return ExplicitDFA(alphabet, {0}, {0}, 0, {0: dict(zip(alphabet, itertools.repeat(0)))})

	@staticmethod
	def emptyDFA(alphabet):
		return ExplicitDFA(alphabet, {0}, set(), 0, {0: dict(zip(alphabet, itertools.repeat(0)))})

# a DFA with an explicit set of states
class ExplicitDFA(DFA):
	def __init__(self, alphabet=None, states=None, acceptingStates=None, initialState=None, delta=None):
		self.alphabet = alphabet if (alphabet != None) else set()
		self.states = states if (states != None) else set()
		self.acceptingStates = acceptingStates if (acceptingStates != None) else set()
		self.initialState = initialState
		self.delta = delta if (delta != None) else defaultdict(dict)	# state -> symbol -> state
		self.counts = None

	def getAlphabet(self):
		return self.alphabet

	def isAcceptingState(self, state):
		return state in self.acceptingStates

	def getInitialState(self):
		return self.initialState

	def hasTransition(self, state, symbol):
		return symbol in self.delta[state]

	def transition(self, state, symbol):
		return self.delta[state][symbol]

	def transitions(self, state):
		return self.delta[state].iteritems()

	def complement(self):
		return ExplicitDFA(self.alphabet, self.states, self.states - self.acceptingStates, self.initialState, self.delta)

	# explicit synchronous product of self with another explicit DFA
	def intersection(self, edfa):
		alphabet = self.alphabet & edfa.alphabet
		newDelta = defaultdict(dict)
		newStates = set()
		newAcceptingStates = set()
		for stateA in self.states:
			for stateB in edfa.states:
				state = (stateA, stateB)
				newStates.add(state)
				if (stateA in self.acceptingStates) and (stateB in edfa.acceptingStates):
					newAcceptingStates.add(state)
				for symbol in alphabet:
					if (symbol in self.delta[stateA]) and (symbol in edfa.delta[stateB]):
						newDelta[state][symbol] = (self.delta[stateA][symbol], edfa.delta[stateB][symbol])
		return ExplicitDFA(alphabet, newStates, newAcceptingStates, (self.initialState, edfa.initialState), newDelta)

	# explicit union of self with another explicit DFA
	def union(self, edfa):
		alphabet = self.alphabet | edfa.alphabet
		newDelta = defaultdict(dict)
		newStates = set()
		newAcceptingStates = set()
		for stateA in self.states | {None}:
			for stateB in edfa.states | {None}:
				state = (stateA, stateB)
				newStates.add(state)
				if (stateA in self.acceptingStates) or (stateB in edfa.acceptingStates):
					newAcceptingStates.add(state)
				for symbol in alphabet:
					destA = self.delta[stateA][symbol] if (symbol in self.delta[stateA]) else None
					destB = edfa.delta[stateB][symbol] if (symbol in edfa.delta[stateB]) else None
					newDelta[state][symbol] = (destA, destB)
		return ExplicitDFA(alphabet, newStates, newAcceptingStates, (self.initialState, edfa.initialState), newDelta)

	# given a reverse topological ordering of the states, returns a function which
	# uniformly samples the accepting paths
	def uniformSampler(self, orderedStates):
		self.computeCounts(orderedStates)
		return (lambda : self.sample())

	# given a reverse topological ordering of the states, computes for each one the
	# number of paths from it to an accepting state
	def computeCounts(self, orderedStates):
		self.counts = {}
		for state in orderedStates:
			count = 1 if (state in self.acceptingStates) else 0
			for symbol in self.delta[state]:
				count = count + self.counts[self.delta[state][symbol]]
			self.counts[state] = count

	# uniformly samples from accepting paths, having run computeCounts
	def sample(self):
		if self.counts == None:
			raise Exception('must run computeCounts before sampling')
		state = self.initialState
		stateCount = self.counts[state]
		word = []
		while True:
			r = random.randint(0, stateCount-1)
			if state in self.acceptingStates:
				if r == 0:
					return word
				r = r - 1
			for symbol in self.alphabet:
				if symbol in self.delta[state]:
					destination = self.delta[state][symbol]
					destCount = self.counts[destination]
					if r < destCount:
						word.append(symbol)
						state = destination
						stateCount = destCount
						break
					else:
						r = r - destCount

	# return a minimal DFA accepting the same language;
	# the input DFA must have transitions for every (state, symbol) pair!
	def minimize(self):
		partition = [frozenset(self.acceptingStates), frozenset(self.states - self.acceptingStates)]
		todo = {frozenset(self.acceptingStates)}

		while len(todo) > 0:
			target = todo.pop()

			for symbol in self.alphabet:
				sources = set()
				for state in self.states:
					if (symbol in self.delta[state]) and (self.delta[state][symbol] in target):
						sources.add(state)
				sources = frozenset(sources)
				newPartition = []
				for component in partition:
					intersection = component & sources
					difference = component - sources
					if len(intersection) > 0 and len(difference) > 0:
						newPartition.append(intersection)
						newPartition.append(difference)
						if component in todo:
							todo.remove(component)
							todo.add(intersection)
							todo.add(difference)
						elif len(intersection) <= len(difference):
							todo.add(intersection)
						else:
							todo.add(difference)
					else:
						newPartition.append(component)
				partition = newPartition

		newStates = set()
		newDelta = defaultdict(dict)
		newAcceptingStates = set()
		newStateForState = {}

		for (index, component) in enumerate(partition):
			for state in component:
				newStateForState[state] = index

		for (index, component) in enumerate(partition):
			newStates.add(index)
			if self.initialState in component:
				newInitialState = index
			for state in component:		# get an arbitrary state
				break
			for symbol in self.alphabet:
				newDelta[index][symbol] = newStateForState[self.delta[state][symbol]]
			if state in self.acceptingStates:
				newAcceptingStates.add(index)

		return ExplicitDFA(self.alphabet, newStates, newAcceptingStates, newInitialState, newDelta)

	# computes an explicit DFA representing a transduction of the given explicit automata;
	# automataAndTransductions should be a list of pairs (automaton, transduction), where
	# automaton is an ExplicitDFA and transduction is a function with args symbol, state
	# where symbol is from the given alphabet and state is the current state of the
	# product automaton (tuple of the individual states of the automata); the return value
	# of transduction is then used as the input to automaton; if transduction == None, the
	# input symbol is passed to automaton without being transformed; as in the ordinary
	# product, if an automaton is passed an input symbol it has no transition for, the
	# transduction will stall (i.e. have no transition for its corresponding input)
	#
	# a concrete example to make what this function does clearer: say you want to drive an
	# automaton A with the output from a Mealy machine B with a given alphabet; let
	# outB((symbol, (stateA, stateB))) compute the output of B in state stateB on input
	# symbol; then transduction([(A, outB), (B, None)], alphabet) is the desired automaton
	@staticmethod
	def transduction(automataAndTransductions, alphabet):
		# replace any blank transductions with one which just forwards the input symbol
		automataAndTransductions = map(
			lambda (automaton, transduction): (automaton, transduction if transduction != None else (lambda symbol, state: symbol)),
			automataAndTransductions)

		(automata, transductions) = zip(*automataAndTransductions)
		stateSets = [automaton.states for automaton in automata]
		initialState = tuple([automaton.initialState for automaton in automata])
		newDelta = defaultdict(dict)
		newStates = set()
		newAcceptingStates = set()
		#statesDone = 0
		for state in itertools.product(*stateSets):
			#statesDone += 1
			#if statesDone % 100000 == 0:
			#	print '%d states processed' % statesDone
			newStates.add(state)
			if all([(subState in automaton.acceptingStates) for (automaton, subState) in itertools.izip(automata, state)]):
				newAcceptingStates.add(state)
			for symbol in alphabet:
				convertedSymbols = [transduction(symbol, state) for transduction in transductions]
				if all([automaton.hasTransition(subState, subSymbol) for (automaton, subState, subSymbol) in itertools.izip(automata, state, convertedSymbols)]):
					newDelta[state][symbol] = tuple([automaton.transition(subState, subSymbol) for (automaton, subState, subSymbol) in itertools.izip(automata, state, convertedSymbols)])

		return ExplicitDFA(set(alphabet), newStates, newAcceptingStates, initialState, newDelta)

class ExplicitIntegerDFA(ExplicitDFA):
	def __init__(self, alphabet=None, states=None, acceptingStates=None, initialState=None, delta=None):
		self.alphabet = alphabet if (alphabet != None) else []
		self.states = states if (states != None) else []
		self.acceptingStates = acceptingStates if (acceptingStates != None) else set()
		self.initialState = initialState
		self.delta = delta
		self.counts = None

	def getAlphabet(self):
		return set(self.alphabet)

	def hasTransition(self, state, symbol):
		return (self.delta[state, symbol] >= 0)

	def transition(self, state, symbol):
		return self.delta[state, symbol]

	def complement(self):
		return ExplicitIntegerDFA(self.alphabet, self.states, set(self.states) - self.acceptingStates, self.initialState, self.delta)

class ImplicitComplement(DFA):
	def __init__(self, automaton):
		self.dfa = automaton

	def getAlphabet(self):
		return self.dfa.getAlphabet()

	def isAcceptingState(self, state):
		return not self.dfa.isAcceptingState(state)

	def getInitialState(self):
		return self.dfa.getInitialState()

	def hasTransition(self, state, symbol):
		return self.dfa.hasTransition(state, symbol)

	def transition(self, state, symbol):
		return self.dfa.transition(state, symbol)

	def transitions(self, state):
		return self.dfa.transitions(state)

class ImplicitProduct(DFA):
	def __init__(self, automata):
		self.automata = list(automata)
		self.alphabet = set.intersection(*[automaton.getAlphabet() for automaton in self.automata])
		self.initialState = tuple([automaton.getInitialState() for automaton in self.automata])

	def getAlphabet(self):
		return self.alphabet

	def isAcceptingState(self, state):
		for (subState, automaton) in itertools.izip(state, self.automata):
			if not automaton.isAcceptingState(subState):
				return False
		return True

	def getInitialState(self):
		return self.initialState

	def hasTransition(self, state, symbol):
		for (subState, automaton) in itertools.izip(state, self.automata):
			if not automaton.hasTransition(subState, symbol):
				return False
		return True

	def transition(self, state, symbol):
		return tuple([automaton.transition(subState, symbol) for (subState, automaton) in itertools.izip(state, self.automata)])

class ImplicitUnion(ImplicitProduct):
	def __init__(self, automata):
		self.automata = list(automata)
		self.alphabet = set.union(*[automaton.getAlphabet() for automaton in self.automata])
		self.initialState = tuple([automaton.getInitialState() for automaton in self.automata])

	def isAcceptingState(self, state):
		for (subState, automaton) in itertools.izip(state, self.automata):
			if automaton.isAcceptingState(subState):
				return True
		return False

def createImproviser(specification, creativityDFA, minLength=0, maxLength=None):
	# add length constraints if necessary
	if maxLength != None:
		specification = ImplicitProduct([specification, minMaxLengthDFA(minLength, maxLength, specification.getAlphabet())])
	elif minLength > 0:
		specification = ImplicitProduct([specification, minLengthDFA(minLength, specification.getAlphabet())])

	# create explicit DFA describing improvisations
	startTime = time.time()
	specDFA = DFA.explicitPruning(specification)[0]
	print 'Spec pruned in %f s' % (time.time() - startTime)

	#(specDFA, stateMap, symbolMap) = specDFA.optimize()
	#(creativityDFA, stateMap, symbolMap) = creativityDFA.optimize(symbolMap)

	# create explicit DFA describing valid improvisations
	(validityDFA, hasCycle, orderedStates) = DFA.explicitPruning(ImplicitProduct([specDFA, creativityDFA]))

	if validityDFA == None:
		return (None, 0, None)
	elif hasCycle:
		raise Exception('pumping improviser not yet implemented')	# create pumping improviser
	else:
		# return uniform sampler of valid improvisations
		return (validityDFA.uniformSampler(orderedStates), specDFA, validityDFA)

# generates a DFA accepting all words with length in the given range
def minMaxLengthDFA(minLength, maxLength, alphabet):
	assert minLength <= maxLength
	dfa = maxLengthDFA(maxLength, alphabet)
	for l in xrange(minLength):
		dfa.acceptingStates.remove(l)
	return dfa

# generates a DFA accepting all words of at most the given length
def maxLengthDFA(maxLength, alphabet):
	return minLengthDFA(maxLength+1, alphabet).complement()

# generates a DFA accepting all words of at least the given length
def minLengthDFA(minLength, alphabet):
	states = set(xrange(minLength+1))
	acceptingStates = set([minLength])
	delta = defaultdict(dict)
	for state in xrange(minLength):
		for symbol in alphabet:
			delta[state][symbol] = state+1
	for symbol in alphabet:
		delta[minLength][symbol] = minLength

	return ExplicitDFA(alphabet, states, acceptingStates, 0, delta)

