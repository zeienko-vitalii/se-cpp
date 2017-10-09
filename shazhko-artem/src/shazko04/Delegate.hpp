#pragma once
#include "CDelegateVoid.h"
#include "CMethodDelegateVoid.hpp"
#include "CStaticDelegateVoid.hpp"

namespace Delegate {
	IDelegateVoid* CreateDelegate(void(*_pFunction)())
	{
		return new CStaticDelegateVoid(_pFunction);
	}

	template <class TObject>
	IDelegateVoid* CreateDelegate(TObject* _pObject, void (TObject::*_pMethod)())
	{
		return new CMethodDelegateVoid<TObject>(_pObject, _pMethod);
	}
}