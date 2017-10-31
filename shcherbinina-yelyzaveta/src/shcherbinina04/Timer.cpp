/*
* @file Timer.cpp
* Містить реалізацію класа Timer
* @date 2017.10.01
* @author shcherbinina
*/
#include "Timer.h"


#include <windows.h>
#include <iostream>

#include"Capacity.h"

using namespace std;

template<class T> Timer<T>::~Timer() {
	// TODO Auto-generated destructor stub
}

template<class T> Timer<T>::Timer(void(*task)(T), T data) :
task(task), data(data) {
	this->times = 4;
	this->liDueTime.QuadPart = -10000000LL;
	this->hTimer = NULL;
}

template<class T> void Timer<T>::start() {

	hTimer = CreateWaitableTimer(NULL, TRUE, L"WaitableTimer");
	if (NULL == hTimer) {
		printf("CreateWaitableTimer failed (%d)\n", GetLastError());
	}
	for (int i = 0; i < Timer::times; i++)
		count();

}

template<class T> void Timer<T>::count() {

	// Set a Timer to wait for 10 seconds.
	if (!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)) {
		printf("SetWaitableTimer failed (%d)\n", GetLastError());

	}

	// Wait for the Timer.
	if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0)
		printf("WaitForSingleObject failed (%d)\n", GetLastError());
	else
		task(data);
}

template Timer <Capacity> ;