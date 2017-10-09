/*
 * TimerExecutor.h
 *
 *  Created on: 2 окт. 2017 г.
 *      Author: JR_Rider
 */

#pragma once

#include <windows.h>
using namespace std;


class TimerExecutor {
private:
	HANDLE hTimerExecutor;
	LARGE_INTEGER liDueTime;
	int times;
	void (*task)(Window);
	Window data;

public:
	TimerExecutor(void (*task)(Window), Window data);
	virtual ~TimerExecutor();
	void count();
	void start();
};

