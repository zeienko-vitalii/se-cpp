/**
* @file EventListener.cpp
* @brief Contains EventListener class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#include "EventListener.h"

void EventListener::OnEventAction(Sender *sender, EventArgs *args)
{
	handler(sender, args);
}

void EventListener::setOnEventAction(void(*handler)(Sender *sender, EventArgs *args))
{
	this->handler = handler;
}

void * EventListener::getOnEventAction()
{
	return this->handler;
}
