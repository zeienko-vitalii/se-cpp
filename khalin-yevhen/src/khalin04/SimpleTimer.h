/**
* @file SimpleTimer.h
* @brief Contains SimpleTimer class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once

#include <windows.h>
#include <iostream>
#include "TimeManager.h"
#include "SimpleEvent.h"
#include "Sender.h"

/**
* @brief Allows to subscribe to be responded after specified time.
* Uses Win32 timer for notifying listeners.
* @author Khalin Yevhen
*/
class SimpleTimer : Sender
{
public:

	/**
	* @param args Will be used in notifying listeners to send necessary data
	* @param delayMs response time
	*/
	SimpleTimer(Event *e, EventArgs *args, int delayMs);

	/**
	* @brief Starts timer
	*/
	void start();

	/**
	* First way.
	* @author xone
	* @param ms timer period
	* @param numCntActions number of Timer actions
	* @return error code
	*/
	int start(int numCntActions);

	~SimpleTimer();

	/**
	* @return a triggering event
	*/
	Event * getOnTimerAction();
private:

	
	const int delay;
	Event *OnTimerAction;
	EventArgs *args;
};
