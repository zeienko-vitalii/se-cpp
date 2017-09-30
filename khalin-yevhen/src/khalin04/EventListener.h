/**
* @file EventListener.h
* @brief Contains EventListener class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once
#include <iostream>
#include <string>
#include "EventArgs.h"
#include "Sender.h"

/**
* @brief Represents a simple event handler
* @author Khalin Yevhen
*/
class EventListener {
public:

	/**
	* @brief This method is called when event has happened
	*/
	void OnEventAction(Sender *sender, EventArgs *args);

	/**
	* @brief Sets event handler
	* @param act handle method
	*/
	void setOnEventAction(void(*handler)(Sender *sender, EventArgs *args));

	/**
	* @return event handler
	*/
	void * getOnEventAction();

private:
	void(*handler)(Sender *sender, EventArgs *args);
};