#pragma once
#include "IDelegateVoid.h"
#include <stdlib.h>
namespace Delegate {

	class CStaticDelegateVoid : public IDelegateVoid
	{
	public:
		typedef void(*PtrFunction)();
		CStaticDelegateVoid(PtrFunction _pFunction) { pFunction = _pFunction; }
		virtual void Invoke() { pFunction(); }
		virtual bool Compare(IDelegateVoid* _pDelegate);
	private:
		PtrFunction pFunction;
	};

	bool CStaticDelegateVoid::Compare(IDelegateVoid *pDelegate)
	{
		CStaticDelegateVoid* pStaticDel = dynamic_cast<CStaticDelegateVoid*>(pDelegate);

		if (pStaticDel == NULL || pStaticDel->pFunction != pFunction)
			return false;
		return true;
	}
}