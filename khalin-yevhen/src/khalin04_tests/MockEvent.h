/**
* @file MockEvent.h
* @brief Contains MockEvent class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once
#include "..\khalin04\Event.h"

/**
* @brief Mock for testing Event class
* @author Khalin Yevhen
*/
class MockEvent : public Event {
public:

	MockEvent();

	/**
	* @brief own implementation for testing
	*/
	virtual void addListener(EventListener * listener);

	/**
	* @brief own implementation for testing
	*/
	virtual void removeListener(EventListener * listener);

	/**
	* @brief own implementation for testing
	*/
	virtual void notifyAll(Sender *sender, EventArgs *args);

	/**
	* @return true if 'addListener' method was called
	*/
	bool listenerWasAdded();

	/**
	* @return true if 'removeListener' method was called
	*/
	bool listenerWasRemoved();

	/**
	* @return true if 'notifyAll' method was called
	*/
	bool allWereNotified();

private:
	bool wasAdded;
	bool wasRemoved;
	bool wereNotified;
};