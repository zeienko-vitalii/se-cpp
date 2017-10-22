#pragma once
#include "DelegateVoid.h"
#include "MethodDelegateVoid.hpp"
#include "StaticDelegateVoid.hpp"

namespace Delegate {
	IDelegateVoid* CreateDelegate(void(*_pFunction)())
	{
		return new StaticDelegateVoid(_pFunction);
	}

	template <class TObject>
	IDelegateVoid* CreateDelegate(TObject* _pObject, void (TObject::*_pMethod)())
	{
		return new MethodDelegateVoid<TObject>(_pObject, _pMethod);
	}
}