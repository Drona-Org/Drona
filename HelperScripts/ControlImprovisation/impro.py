
import sys
from collections import defaultdict
import itertools
import time
from random import random

from DFAImproviser import DFA, ExplicitDFA, ImplicitProduct, minMaxLengthDFA, minLengthDFA

def visitSpec(numLocs, disallowRevisits=False):
	states = set(itertools.product((False, True), repeat=numLocs-1))
	accepting = set()
	initial = (False,) * (numLocs-1)
	failure = 0
	delta = defaultdict(dict)
	for state in states:
		for loc in range(1, numLocs):
			if disallowRevisits and state[loc-1]:
				dest = failure
			else:
				dest = list(state)
				dest[loc-1] = True
				dest = tuple(dest)
			delta[state][loc] = dest
		delta[state][0] = state		# self-loop on visiting home base
		if all(state):
			accepting.add(state)
	if disallowRevisits:
		for loc in range(numLocs):
			delta[failure][loc] = failure
		states.add(failure)
	return ExplicitDFA(set(range(numLocs)), states, accepting, initial, delta)

def revisitSpec(numLocs):
	states = set(itertools.product((False, True), repeat=numLocs))
	accepting = set()
	initial = (False,) * numLocs
	delta = defaultdict(dict)
	for state in states:
		revisited = state[0]
		visited = state[1:]
		for loc in range(1, numLocs):
			newRevisited = revisited or visited[loc-1]
			newVisited = list(visited)
			newVisited[loc-1] = True
			dest = tuple([newRevisited] + newVisited)
			delta[state][loc] = dest
		delta[state][0] = state		# self-loop on visiting home base
		if revisited and all(visited):
			accepting.add(state)
	return ExplicitDFA(set(range(numLocs)), states, accepting, initial, delta)


def repeatSpec(numLocs):
	failure = numLocs
	states = set(range(numLocs+1))
	initial = 0
	accepting = {initial}
	delta = defaultdict(dict)
	for state in range(numLocs):
		for loc in range(numLocs):
			delta[state][loc] = loc if loc != state else failure
	for loc in range(numLocs):
		delta[failure][loc] = failure
	return ExplicitDFA(set(range(numLocs)), states, accepting, initial, delta)

def rechargeSpec(numLocs, maxStepsWithoutCharging=3):
	fail = maxStepsWithoutCharging + 1
	accepting = set(range(fail))
	states = accepting | {fail}
	initial = 0
	delta = defaultdict(dict)
	for state in accepting:
		for loc in range(1, numLocs):
			delta[state][loc] = state + 1
		delta[state][0] = 0
	for loc in range(numLocs):
		delta[fail][loc] = fail
	return ExplicitDFA(set(range(numLocs)), states, accepting, initial, delta)

def createHardSpec(numLocs):
	return ImplicitProduct([visitSpec(numLocs), repeatSpec(numLocs), rechargeSpec(numLocs)])

def createAdmissibleSpec(numLocs):
	return ImplicitProduct([visitSpec(numLocs, disallowRevisits=True), repeatSpec(numLocs), rechargeSpec(numLocs)])

def createInadmissibleSpec(numLocs):
	return ImplicitProduct([revisitSpec(numLocs), repeatSpec(numLocs), rechargeSpec(numLocs)])

def createImproviser(numLocs, epsilon, minLength=0, maxLength=None):
	locs = set(range(numLocs))

	# Create specs
	admissibleSpec = createAdmissibleSpec(numLocs)
	inadmissibleSpec = createInadmissibleSpec(numLocs)

	# add length constraints if necessary
	lengthConstraint = None
	if maxLength != None:
		lengthConstraint = minMaxLengthDFA(minLength, maxLength, locs)
	elif minLength > 0:
		lengthConstraint = minLengthDFA(minLength, locs)
	if lengthConstraint:
		admissibleSpec = ImplicitProduct([admissibleSpec, lengthConstraint])
		inadmissibleSpec = ImplicitProduct([inadmissibleSpec, lengthConstraint])

	# create explicit DFAs
	#startTime = time.time()
	(admissibleDFA, admissibleHasCycle, admissibleOrder) = DFA.explicitPruning(admissibleSpec)
	(inadmissibleDFA, inadmissibleHasCycle, inadmissibleOrder) = DFA.explicitPruning(inadmissibleSpec)
	assert not admissibleHasCycle
	assert not inadmissibleHasCycle
	#print 'Specs pruned in %f s' % (time.time() - startTime)

	if not admissibleDFA or not inadmissibleDFA:
		return None

	admissibleSampler = admissibleDFA.uniformSampler(admissibleOrder)
	inadmissibleSampler = inadmissibleDFA.uniformSampler(inadmissibleOrder)

	admissibleCount = admissibleDFA.counts[admissibleDFA.initialState]
	inadmissibleCount = inadmissibleDFA.counts[inadmissibleDFA.initialState]
	improvCount = admissibleCount + inadmissibleCount

	#rho = max((1.0 - epsilon) / admissibleCount, 1.0 / improvCount)
	#print 'Best rho is %g' % rho

	#try:
	#	countString = '%g' % float(admissibleCount)
	#except OverflowError, e:
	#	countString = 'a whole bunch [overflow] of'
	#print 'Specification DFAs have %d, %d states' % (len(admissibleDFA.states), len(inadmissibleDFA.states))
	#print 'Improviser generated in %f s, with %s admissible improvisations' % (time.time() - startTime, countString)

	improviser = lambda: inadmissibleSampler() if random() < epsilon else admissibleSampler()

	return improviser

if len(sys.argv) != 3:
	print 'USAGE: python impro.py numLocations numPaths'
	quit()

numLocs = int(sys.argv[1])
numPaths = int(sys.argv[2])

maxLen = 2 * numLocs
improviser = createImproviser(numLocs, 0.2, minLength=0, maxLength=maxLen)

with open('output.txt', 'w') as outFile:
	for i in range(numPaths):
		path = improviser()
		for loc in path:
			outFile.write(str(loc)+' ')
		outFile.write('\n')

