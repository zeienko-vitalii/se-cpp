/*
* @file Timer.h
* Містить опис об'єкту класа Timer
* @date 2017.10.01
* @author shcherbinina
*/
#pragma once

#include <windows.h>
using namespace std;
/**
* Клас, що містить реалізацію таймера
*/
template<class T> class Timer
{
private:
	HANDLE hTimer;
	LARGE_INTEGER liDueTime;
	int times;
	void(*task)(T);
	T data;

public:
	Timer(void(*task)(T), T data) :
		task(task), data(data) {
		this->times = 4;
		this->liDueTime.QuadPart = -10000000LL;
		this->hTimer = NULL;
	}
	virtual ~Timer(){}
	void count(){

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
	void start(){

		hTimer = CreateWaitableTimer(NULL, TRUE, L"WaitableTimer");
		if (NULL == hTimer) {
			printf("CreateWaitableTimer failed (%d)\n", GetLastError());
		}
		for (int i = 0; i < Timer::times; i++)
			count();

	}
};

