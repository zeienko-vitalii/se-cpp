#pragma once
#include "IDelegateVoid.h"
#include <stdlib.h>
namespace Delegate {

	class StaticDelegateVoid : public IDelegateVoid
	{
	public:
		typedef void(*PtrFunction)();
		StaticDelegateVoid(PtrFunction _pFunction) { pFunction = _pFunction; }
		virtual void Invoke() { pFunction(); }
		virtual bool Compare(IDelegateVoid* _pDelegate);
	private:
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