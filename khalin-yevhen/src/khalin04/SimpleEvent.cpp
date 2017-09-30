/**
* @file SimpleEvent.cpp
* @brief Contains SimpleEvent class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#include "SimpleEvent.h"


void SimpleEvent::addListener(EventListener * listener)
{
	listeners.push_back(listener);
}

void SimpleEvent::removeListener(EventListener * listener)
{
	//listeners.erase(listener); // TODO
}

void SimpleEvent::notifyAll(Sender *sender, EventArgs *args)
{
	for (EventListener * l : listeners) {
		l->OnEventAction(sender, args);
	}
}
