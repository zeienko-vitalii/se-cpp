/**
* @file SimpleTimer.h
* @brief Содержит реализацию класса  SimpleTimer
* @author Shazhko Artem
* @version 0
* @date 10.09.17
*/
#include "SimpleTimer.h"
#include <windows.h>
#include <process.h>
#include <thread>
#include <iostream>

namespace Timer {
	SimpleTimer::SimpleTimer(int _numberTact, int _step) :numberTact(_numberTact), step(_step), status(Created), hThread(NULL) {}

	int SimpleTimer::Start()
	{
		hThread = CreateThread(NULL, NULL, &SimpleTimer::Build, (LPVOID)this, NULL, NULL);
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

	void SimpleTimer::SetNumberTact(const int _numberTact)
	{
		this->numberTact = _numberTact;
	}

	int SimpleTimer::GetNumberTact() const
	{
		return this->numberTact;
	}

	void SimpleTimer::SetStep(const int  _step)
	{
		this->step = _step;
	}

	int SimpleTimer::GetStep() const
	{
		return this->step;
	}

	BOOL SimpleTimer::Wait(DWORD dwMilliseconds)
	{
		return WaitForSingleObject(this->hThread, INFINITE);
	}

	SimpleTimer::~SimpleTimer()
	{
	}

	int SimpleTimer::StartTimer()
	{
		status = ESatus::Running;
		HANDLE hTimer = NULL;
		LARGE_INTEGER liDueTime;
		liDueTime.QuadPart = -10000 * (ULONGLONG)step;

		// Create a waitable timer.
		hTimer = CreateWaitableTimer(NULL, TRUE, NULL);
		if (NULL == hTimer) {
			printf("CreateWaitableTimer failed (%lu)\n", GetLastError());
			status = ESatus::Faulted;
			return 1;
		}

		//printf("Waiting for %d ms...\n", ms);

		for (int i = numberTact; i != 0 && status == ESatus::Running; i--) {
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
				this->OnTimerTact();
			}
		}
		status = ESatus::RanToCompletion;
		return 0;
	}

	DWORD SimpleTimer::Build(void * pParams)
	{
		SimpleTimer *st = (SimpleTimer*)pParams;
		return st->StartTimer();
	}

}