/*
 * TimerExecutor.cpp
 *
 *  Created on: 2 окт. 2017 г.
 *      Author: JR_Rider
 */

#include <windows.h>
#include <iostream>

#include"Window.h"
#include "TimerExecutor.h"

using namespace std;

template<class T> TimerExecutor<T>::~TimerExecutor() {
// TODO Auto-generated destructor stub
}

template<class T> TimerExecutor<T>::TimerExecutor(void (*task)(T), T data) :
		task(task), data(data) {
	this->times = 4;
	this->liDueTime.QuadPart = -10000000LL;
	this->hTimerExecutor = NULL;
}

template<class T> void TimerExecutor<T>::start() {

	hTimerExecutor = CreateWaitableTimer(NULL, TRUE, "WaitableTimerExecutor");
	if (NULL == hTimerExecutor) {
		printf("CreateWaitableTimerExecutor failed (%d)\n", GetLastError());
	}
	for (int i = 0; i < TimerExecutor::times; i++)
		count();

}

template<class T> void TimerExecutor<T>::count() {

// Set a TimerExecutor to wait for 10 seconds.
	if (!SetWaitableTimer(hTimerExecutor, &liDueTime, 0, NULL, NULL, 0)) {
		printf("SetWaitableTimerExecutor failed (%d)\n", GetLastError());

	}

// Wait for the TimerExecutor.
	if (WaitForSingleObject(hTimerExecutor, INFINITE) != WAIT_OBJECT_0)
		printf("WaitForSingleObject failed (%d)\n", GetLastError());
	else
		task(data);
}

template class TimerExecutor<Window> ;
