/*
 * @file Timer.cpp
 * Part of lab04
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <windows.h>
#include <iostream>

#include"Manipulator.h"
#include "Timer.h"

using namespace std;

Timer::Timer(void (*task)(Manipulator), Manipulator manip) :
		task(task), manip(manip) {
	this->time = 3;
	this->liDueTime.QuadPart = -10000000LL;
	this->hTimer = NULL;
}

void Timer::start(){
	hTimer = CreateWaitableTimer(NULL, TRUE, "Time");
		if(hTimer == NULL){
			printf("Create timer is faled (%d)\n", GetLastError());
		}

		for(int i = 0; i < Timer::time; i++){
			count();
		}
}

void Timer::count(){
	if(!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)){
		printf("SetTimer failed (%d)\n", GetLastError());
	}

	if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0)
			printf("WaitForSingleObject failed (%d)\n", GetLastError());
		else
			task(manip);
}

Timer::~Timer() {
	// TODO Auto-generated destructor stub
}

