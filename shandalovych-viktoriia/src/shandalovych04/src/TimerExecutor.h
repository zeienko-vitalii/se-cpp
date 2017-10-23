/*
 * TimerExecutor.h
 *
 *  Created on: 22 ���. 2017 �.
 *      Author: Viktotia
 */

#ifndef TIMEREXECUTOR_H_
#define TIMEREXECUTOR_H_
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

#endif /* TIMEREXECUTOR_H_ */
