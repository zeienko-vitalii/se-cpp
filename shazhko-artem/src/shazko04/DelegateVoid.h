#pragma once
/**
* @file DelegateVoid.h
* @brief ����������� ������ DelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include <list>
#include "IDelegateVoid.h"

namespace Delegate {
	/**
	* ����� ��� ������� ������ � ����������
	*/
	class DelegateVoid
	{
	public:
		/**
		* �����������
		* @param pDelegate �������
		*/
		DelegateVoid(IDelegateVoid* pDelegate = NULL) { Add(pDelegate); }
		
		/**
		* ����������
		*/
		~DelegateVoid() {
			RemoveAll(); 
		}

		/**
		* �������� ��������� ����������
		* @return true - ���� ��������� ����
		*/
		bool IsNull() { return (delegateList.size() == 0); }

		/**
		* ��������������� ��������� =
		*/
		DelegateVoid& operator=(IDelegateVoid* pDelegate);
		/**
		* ��������������� ��������� +=
		*/
		DelegateVoid& operator+=(IDelegateVoid* pDelegate);
		/**
		* ��������������� ��������� -=
		*/
		DelegateVoid& operator-=(IDelegateVoid* pDelegate);
		/**
		* ��������������� ��������
		*/
		void operator()();

	private:
		/**
		* ����������
		* @param pDelegate �������
		*/
		void Add(IDelegateVoid* pDelegate);
		/**
		* ��������
		* @param pDelegate �������
		*/
		void Remove(IDelegateVoid* pDelegate);
		/**
		* �������� ���� ���������
		* @param pDelegate �������
		*/
		void RemoveAll();
		/**
		* �����
		*/
		void Invoke();

	private:
		// ���� ���������
		std::list<IDelegateVoid*> delegateList;
	};
}