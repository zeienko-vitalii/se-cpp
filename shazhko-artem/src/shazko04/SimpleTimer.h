#pragma once
#include <Windows.h>
#include <stdio.h>
#include "TimerHelper.h"
class SimpleTimer
{
public:
	enum ESatus
	{
		Canceled,Created, RanToCompletion,Running, Faulted
	};
	SimpleTimer(TimerHelper *_attribute, int _numberClick, int _step);
	int Start();
	int Stop();
	bool GetStatus()const;
	void SetAttribute(TimerHelper *_attribute);
	TimerHelper * GetAttribute() const;
	void SetNumberClick(const int _numberClick);
	int GetNumberClick() const;
	void SetStep(const int _step);
	int GetStep() const;
	HANDLE GetHandleThread() const;
	virtual ~SimpleTimer();
private:
	int StartTimer();
	static DWORD Build(void *arg);
	TimerHelper *attribute;
	HANDLE hThread;
	ESatus status;
	int numberClick;
	int step;
};