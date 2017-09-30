/**
* @file SimpleEvent.h
* @brief Contains SimpleEvent class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once
#include "Event.h"

/**
* @brief Event simple implementation
* @author Khalin Yevhen
*/
class SimpleEvent : public Event {
public:

	/**
	* @brief Adds an event listener to a listeners group.
	*/
	virtual void addListener(EventListener * listener);

	/**
	* @brief Removes an event listener from a listeners group.
	*/
	virtual void removeListener(EventListener * listener);

	/**
	* @brief Notifies all listeners.
	*/
	virtual void notifyAll(Sender *sender, EventArgs *args);
};