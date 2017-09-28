/**
* @file TimeManager.cpp
* @brief Contains TimeManager class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 28.09.17
*/


#include "TimeManager.h"

void TimeManager::OnTimerAction()
{
	action();
}

void TimeManager::setOnTimerAction(void(*act)())
{
	this->action = act;
}

void * TimeManager::getOnTimerAction()
{
	return action;
}
