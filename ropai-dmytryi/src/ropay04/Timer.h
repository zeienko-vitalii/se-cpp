/*
 * @file Timer.h
 * Part of lab04
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <windows.h>
#include "Manipulator.h"
#ifndef TIMER_H_
#define TIMER_H_

using namespace std;

class Timer {
private:
	HANDLE hTimer;
	UINT_PTR  nIDEvent;
	LARGE_INTEGER liDueTime;
	int time;
	void (*task)(Manipulator);
	Manipulator manip;


public:
	Timer(void (*task)(Manipulator), Manipulator manip);
	virtual ~Timer();
	void start();
	void count();
};

#endif /* TIMER_H_ */
