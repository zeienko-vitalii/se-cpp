#pragma once
/**
* @file Delegate.hpp
* @brief �������� ��������������� ������ ����������� ��������� ��������
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "DelegateVoid.h"
#include "MethodDelegateVoid.hpp"
#include "StaticDelegateVoid.hpp"

namespace Delegate {
	/**
	* ������� ������� �� ����������� �������
	* @param _pFunction ��������� �� �������
	* @return ������� �� �������
	*/
	IDelegateVoid* CreateDelegate(void(*_pFunction)())
	{
		return new StaticDelegateVoid(_pFunction);
	}
 
	/**
	* ������� ������� �� ������� � ������
	* @param _pObject ��������� �� ������
	* @param _pMethod ��������� �� �������
	* @return ������� �� �������
	*/
	template <class TObject>
	IDelegateVoid* CreateDelegate(TObject* _pObject, void (TObject::*_pMethod)())
	{
		return new MethodDelegateVoid<TObject>(_pObject, _pMethod);
	}
}