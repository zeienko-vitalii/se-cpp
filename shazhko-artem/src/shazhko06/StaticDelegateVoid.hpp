#pragma once
/**
* @file StaticDelegateVoid.hpp
* @brief ����������� � ���������� ������ StaticDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "IDelegateVoid.h"
#include <stdlib.h>
namespace Delegate {
	/**
	* ����� ����������� ��������� IDelegateVoid, ��� ������ �� ������������ ���������
	*/
	class StaticDelegateVoid : public IDelegateVoid
	{
	public:
		/**
		* �����������
		* @param _pFunction ��������� �� ������� ������
		*/
		typedef void(*PtrFunction)();
		StaticDelegateVoid(PtrFunction _pFunction) { pFunction = _pFunction; }
		/**
		* ����� �������
		*/
		virtual void Invoke() { pFunction(); }
		/**
		* ��������� ���������
		* @return true - ���� �����
		*/
		virtual bool Compare(IDelegateVoid* _pDelegate);
		/**
		* ����������
		*/
		virtual ~StaticDelegateVoid(){}
	private:
		// ��������� �� ������� ������
		PtrFunction pFunction;
	};

	bool StaticDelegateVoid::Compare(IDelegateVoid *pDelegate)
	{
		StaticDelegateVoid* pStaticDel = dynamic_cast<StaticDelegateVoid*>(pDelegate);

		if (pStaticDel == NULL || pStaticDel->pFunction != pFunction)
			return false;
		return true;
	}
}