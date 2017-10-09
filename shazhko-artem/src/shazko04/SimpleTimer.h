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
#include "CDelegateVoid.h"
/**
* ��������� ��� ������ � SimpleTimer
*/
namespace Timer {

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
		SimpleTimer(int _numberClick, int _step);
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
		* �������� ���������� �������
		*/
		BOOL Wait(DWORD dwMilliseconds);
		/**
		* ����������
		*/
		virtual ~SimpleTimer();
		Delegate::CDelegateVoid OnTimerTact;

	private:
		// ��� ������
		int StartTimer();
		/**
		* ��������� ��� ���������� ������ � ��������
		*/
		static DWORD Build(void *arg);

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