#pragma once
/**
* @file MethodDelegateVoid.hpp
* @brief ����������� � ���������� ������ MethodDelegateVoid
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "IDelegateVoid.h"
namespace Delegate {
	/**
	* ����� ����������� ��������� IDelegateVoid
	*/
	template<class TObject>
	class MethodDelegateVoid : public IDelegateVoid
	{
	public:
		/**
		* �����������
		* @param _pObject ��������� �� ������ ������
		* @param _pMethod ��������� �� ������� ������
		*/
		typedef void (TObject::*PMethod)();
		MethodDelegateVoid(TObject* _pObject, PMethod _pMethod)
		{
			pObject = _pObject;
			pMethod = _pMethod;
		}
		/**
		* ����� �������
		*/
		virtual void Invoke() { (pObject->*pMethod)(); }
		/**
		* ��������� ���������
		* @return true - ���� �����
		*/
		virtual bool Compare(IDelegateVoid* pDelegate);
	private:
		// ��������� �� ������ ������
		TObject *pObject;
		// ��������� �� ������� ������
		PMethod pMethod;
	};

	template<class TObject>
	bool MethodDelegateVoid<TObject>::Compare(IDelegateVoid* pDelegate)
	{
		MethodDelegateVoid<TObject>* pMethodDel = dynamic_cast<MethodDelegateVoid<TObject>*>(pDelegate);
		if (pMethodDel == NULL || pMethodDel->pObject != pObject || pMethodDel->pMethod != pMethod)
			return false;
		return true;
	}
}