/**
* @file Event.h
* @brief Contains Event class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once

#include "EventListener.h"
#include <vector>
using std::vector;

/**
* @brief Contains event listeners for notifying at the specified time.
* @author Khalin Yevhen
*/
class Event abstract {
public:

	/**
	* @brief Adds an event listener to a listeners group.
	*/
	virtual void addListener(EventListener * listener) = 0;
	
	/**
	* @brief Removes an event listener from a listeners group.
	*/
	virtual void removeListener(EventListener * listener) = 0;
	
	/**
	* @brief Notifies all listeners.
	*/
	virtual void notifyAll(Sender *sender, EventArgs *args) = 0;
	
protected:
	vector<EventListener*> listeners; // TODO replace it by a linked list
};