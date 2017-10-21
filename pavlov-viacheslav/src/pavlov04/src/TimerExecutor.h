/*
 * TimerExecutor.h
 *
 *  Created on: 2 окт. 2017 г.
 *      Author: JR_Rider
 */

#pragma once

#include <windows.h>
using namespace std;

template<class T> class TimerExecutor {
private:
	HANDLE hTimerExecutor;
	LARGE_INTEGER liDueTime;
	int times;
	void (*task)(T);
	T data;

public:
	TimerExecutor(void (*task)(T), T data);
	virtual ~TimerExecutor();
	void count();
	void start();
};

