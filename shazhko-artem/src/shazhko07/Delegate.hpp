#pragma once
/**
* @file Delegate.hpp
* @brief —одержит вспомогательные методы позвол€ющие создавать делегаты
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
#include "DelegateVoid.h"
#include "MethodDelegateVoid.hpp"
#include "StaticDelegateVoid.hpp"

namespace Delegate {
	/**
	* —оздает делегат на статическую функцию
	* @param _pFunction указатель на функцию
	* @return делегат на функцию
	*/
	IDelegateVoid* CreateDelegate(void(*_pFunction)())
	{
		return new StaticDelegateVoid(_pFunction);
	}

	/**
	* —оздает делегат на функцию в классе
	* @param _pObject указатель на объект
	* @param _pMethod указатель на функцию
	* @return делегат на функцию
	*/
	template <class TObject>
	IDelegateVoid* CreateDelegate(TObject* _pObject, void (TObject::*_pMethod)())
	{
		return new MethodDelegateVoid<TObject>(_pObject, _pMethod);
	}
}