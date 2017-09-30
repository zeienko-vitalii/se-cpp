/**
* @file SimpleTimer.cpp
* @brief Contains SimpleTimer class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/


#include "SimpleTimer.h"


SimpleTimer::SimpleTimer(EventArgs *args, int delayMs) : delay(delayMs), args(args)
{
}

void SimpleTimer::start()
{
	static const short actions = 1;
	start(delay, actions);
}

SimpleTimer::~SimpleTimer()
{
}

Event * SimpleTimer::getOnTimerAction()
{
	return &OnTimerAction;
}

int SimpleTimer::start(int ms, int numCntActions) {
	HANDLE hTimer = NULL;
	LARGE_INTEGER liDueTime;

	liDueTime.QuadPart = -10000 * (ULONGLONG) ms;

	// Create a waitable timer.
	hTimer = CreateWaitableTimer(NULL, TRUE, L"WaitableTimer");
	if (NULL == hTimer) {
		printf("CreateWaitableTimer failed (%lu)\n", GetLastError());
		return 1;
	}

	//printf("Waiting for %d ms...\n", ms);

	while (numCntActions--) {
		// Set a timer to wait for ms milliseconds.
		if (!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)) {
			printf("SetWaitableTimer failed (%lu)\n", GetLastError());
			return 2;
		}

		// Wait for the timer.
		if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0) {
			printf("WaitForSingleObject failed (%lu)\n", GetLastError());
		} else {
			OnTimerAction.notifyAll(this, args);
		}
	}
	return 0;
}
