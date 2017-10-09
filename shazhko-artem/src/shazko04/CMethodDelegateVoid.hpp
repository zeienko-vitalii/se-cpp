#pragma once
#include "IDelegateVoid.h"
namespace Delegate {

	template<class TObject>
	class CMethodDelegateVoid : public IDelegateVoid
	{
	public:
		typedef void (TObject::*PMethod)();
		CMethodDelegateVoid(TObject* _pObject, PMethod _pMethod)
		{
			pObject = _pObject;
			pMethod = _pMethod;
		}
		virtual void Invoke() { (pObject->*pMethod)(); }
		virtual bool Compare(IDelegateVoid* pDelegate);
	private:
		TObject *pObject;
		PMethod pMethod;
	};

	template<class TObject>
	bool CMethodDelegateVoid<TObject>::Compare(IDelegateVoid* pDelegate)
	{
		CMethodDelegateVoid<TObject>* pMethodDel = dynamic_cast<CMethodDelegateVoid<TObject>*>(pDelegate);
		if (pMethodDel == NULL || pMethodDel->pObject != pObject || pMethodDel->pMethod != pMethod)
			return false;
		return true;
	}
}