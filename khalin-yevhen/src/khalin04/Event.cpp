/**
* @file Event.cpp
* @brief Contains Event class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#include "Event.h"

void Event::addListener(EventListener * listener)
{
	listeners.push_back(listener);
}

void Event::removeListener(EventListener * listener)
{
	//listeners.erase(listener);
}

void Event::notifyAll(Sender *sender, EventArgs *args)
{
	for (EventListener * l : listeners) {
		l->OnEventAction(sender, args);
	}
}
