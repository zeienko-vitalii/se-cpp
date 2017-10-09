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

/**
* ��������� ��� ������ � SimpleTimer
*/
namespace Timer {

	__interface  TimerEvent {
public:
	/**
	* �������, ������� ���������� �� ����� ������� ����� �������
	*/
	virtual void OnTimerAction();
	};

	/**
	* ����� SimpleTimer
	*/
	class SimpleTimer
	{
	public:
		/**
		* ������������ ��������� �������
		*/
		enum ESatus
		{
			Canceled, Created, RanToCompletion, Running, Faulted
		};
		/**
		* ����������� � �����������
		*/
		SimpleTimer(TimerEvent *_attribute, int _numberClick, int _step);
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
		void SetAttribute(TimerEvent *_attribute);
		/**
		* ���������� �������
		*/
		TimerEvent * GetAttribute() const;
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
		TimerEvent *attribute;
		// ���������� ������
		HANDLE hThread;
		// ������ �������
		ESatus status;
		// ���������� ������
		int numberTact;
		// ��� �������
		int step;
	};
}