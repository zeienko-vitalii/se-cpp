/**
* @file SimpleTimer.h
* @brief �������� ���������� ������  SimpleTimer
* @author Shazhko Artem
* @version 0
* @date 10.09.17
*/
#pragma once
#include <Windows.h>
#include <stdio.h>

class SimpleTimer
{
public:
	/**
	* ������������ ��������� �������
	*/
	enum ESatus
	{
		Canceled,Created, RanToCompletion,Running, Faulted
	};
	/**
	* ����������� �����, ������� ����� ����������� ������ ��� ������������� ������� �������
	*/
	class TimerHelper abstract{
	public:
		/**
		* �������, ������� ���������� �� ����� ������� ����� �������
		*/
		virtual void OnTimerAction();
		virtual ~TimerHelper();
	};
	/**
	* ����������� � �����������
	*/
	SimpleTimer(TimerHelper *_attribute, int _numberClick, int _step);
	/**
	* ��� ������� �������
	*/
	int Start();
	/**
	* ��� ��������� �������
	*/
	int Stop();
	/**
	* ���������� ��������� �������
	*/
	bool GetStatus()const;
	/**
	* ������ �� ���������� ������� �������
	*/
	void SetAttribute(TimerHelper *_attribute);
	/**
	* ���������� �������
	*/
	TimerHelper * GetAttribute() const;
	/**
	* ������ ���������� ������ ��� �������
	*/
	void SetNumberTact(const int _numberClick);
	/**
	* ��������� ��������� ���������� ������ ��� �������
	*/
	int GetNumberTact() const;
	/**
	* ������ ���
	*/
	void SetStep(const int _step);
	/**
	* �������� �������� ���
	*/
	int GetStep() const;
	/**
	* ���������� ���������� ������
	*/
	HANDLE GetHandleThread() const;
	/**
	* �������� ���������� �������
	*/
	BOOL Wait(DWORD dwMilliseconds);
	/**
	* ����������
	*/
	virtual ~SimpleTimer();
private:
	// ��� ������
	int StartTimer();
	/**
	* ��������� ��� ���������� ������ � ��������
	*/
	static DWORD Build(void *arg);
	// ��������� �� ������ � ������� ����� �������� ������� "OnTimerAction" � ������ ����� �������
	TimerHelper *attribute;
	// ���������� ������
	HANDLE hThread;
	// ������ �������
	ESatus status;
	// ���������� ������
	int numberTact;
	// ��� �������
	int step;
};