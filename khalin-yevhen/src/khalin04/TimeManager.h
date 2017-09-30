/**
* @file TimeManager.h
* @brief Contains TimeManager class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 28.09.17
*/

#pragma once
#include <iostream>
#include <string>

/**
* @brief Represents a simple event handler
* @deprecated use Event and EventArgs classes.
*/
class TimeManager {
public:

	/**
	* @brief This method is called when event has happened
	*/
	void OnTimerAction();

	/**
	* @brief Sets event handler
	* @param act handle method 
	*/
	void setOnTimerAction(void(*act)());

	/**
	* @return event handler
	*/
	void * getOnTimerAction();

private:
	void(*action)();
};