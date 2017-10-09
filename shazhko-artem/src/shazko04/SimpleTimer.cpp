#include "SimpleTimer.h"
#include <windows.h>
#include <process.h>
#include <thread>
#include <iostream>

SimpleTimer::SimpleTimer(TimerHelper * _attribute, int _numberClick, int _step): attribute(_attribute),numberClick(_numberClick),step(_step), status(Created){}

int SimpleTimer::Start()
{
	hThread=CreateThread(NULL, NULL, &SimpleTimer::Build, (LPVOID)this, NULL, NULL);	
	return 0;
}

int SimpleTimer::Stop()
{
	status = ESatus::Canceled;
	return 0;
}

bool SimpleTimer::GetStatus() const
{
	return false;
}

void SimpleTimer::SetAttribute(TimerHelper * _attribute)
{
	this->attribute = _attribute;
}

TimerHelper * SimpleTimer::GetAttribute() const
{
	return this->attribute;
}

void SimpleTimer::SetNumberClick(const int _numberClick)
{
	this->numberClick = _numberClick;
}

int SimpleTimer::GetNumberClick() const
{
	return this->numberClick;
}

void SimpleTimer::SetStep(const int  _step)
{
	this->step = _step;
}

int SimpleTimer::GetStep() const
{
	return this->step;
}

HANDLE SimpleTimer::GetHandleThread() const
{
	return this->hThread;
}

SimpleTimer::~SimpleTimer()
{
}

int SimpleTimer::StartTimer()
{
	status = ESatus::Running;
	HANDLE hTimer = NULL;
	LARGE_INTEGER liDueTime;
	liDueTime.QuadPart = -10000000 * (ULONGLONG)step;

	// Create a waitable timer.
	hTimer = CreateWaitableTimer(NULL, TRUE,NULL);
	if (NULL == hTimer) {
		printf("CreateWaitableTimer failed (%lu)\n", GetLastError());
		status = ESatus::Faulted;
		return 1;
	}

	//printf("Waiting for %d ms...\n", ms);

	for (int i = numberClick; i != 0 && status == ESatus::Running; i--) {
		// Set a timer to wait for ms milliseconds.
		if (!SetWaitableTimer(hTimer, &liDueTime, 0, NULL, NULL, 0)) {
			printf("SetWaitableTimer failed (%lu)\n", GetLastError());
			status = ESatus::Faulted;
			return 2;
		}

		// Wait for the timer.
		if (WaitForSingleObject(hTimer, INFINITE) != WAIT_OBJECT_0) {
			printf("WaitForSingleObject failed (%lu)\n", GetLastError());
		}
		else {
			this->attribute->OnTimerAction();
		}
	}
	status = ESatus::RanToCompletion;
}

DWORD SimpleTimer::Build(void * pParams)
{
	SimpleTimer *st = (SimpleTimer*)pParams;
	return st->StartTimer();
}