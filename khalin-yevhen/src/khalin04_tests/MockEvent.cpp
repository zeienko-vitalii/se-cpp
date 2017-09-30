/**
* @file MockEvent.cpp
* @brief Contains MockEvent class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#include "MockEvent.h"

MockEvent::MockEvent() : wasAdded(false), wasRemoved(false), wereNotified(false) {

}

void MockEvent::addListener(EventListener * listener) {
	wasAdded = true;
}

void MockEvent::removeListener(EventListener * listener) {
	wasRemoved = true;
}

void MockEvent::notifyAll(Sender * sender, EventArgs * args) {
	wereNotified = true;
}

bool MockEvent::listenerWasAdded() {
	return wasAdded;
}

bool MockEvent::listenerWasRemoved() {
	return wasRemoved;
}

bool MockEvent::allWereNotified() {
	return wereNotified;
}
