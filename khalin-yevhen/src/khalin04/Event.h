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
class Event {
public:

	/**
	* @brief Adds an event listener to a listeners group.
	*/
	void addListener(EventListener * listener);
	
	/**
	* @brief Removes an event listener from a listeners group.
	*/
	void removeListener(EventListener * listener); // TODO 
	
	/**
	* @brief Notifies all listeners.
	*/
	void notifyAll(Sender *sender, EventArgs *args);
	
private:
	vector<EventListener*> listeners; // TODO replace it by a linked list
};