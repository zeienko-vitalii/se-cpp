#include "DelegateVoid.h"

namespace Delegate {
	DelegateVoid & DelegateVoid::operator=(IDelegateVoid * pDelegate)
	{
		RemoveAll();
		Add(pDelegate);
		return *this;
	}
	DelegateVoid & DelegateVoid::operator+=(IDelegateVoid * pDelegate)
	{
		Add(pDelegate);
		return *this;
	}
	DelegateVoid & DelegateVoid::operator-=(IDelegateVoid * pDelegate)
	{
		Remove(pDelegate);
		return *this;
	}
	void DelegateVoid::operator()()
	{
		Invoke();
	}
	void DelegateVoid::Add(IDelegateVoid* pDelegate)
	{
		if (pDelegate != NULL)
			delegateList.push_back(pDelegate);
	}

	void DelegateVoid::Remove(IDelegateVoid* pDelegate)
	{
		std::list<IDelegateVoid*>::iterator it;
		for (it = delegateList.begin(); it != delegateList.end(); ++it)
		{
			if ((*it)->Compare(pDelegate))
			{
				delete (*it);
				delegateList.erase(it);
				break;
			}
		}

		delete pDelegate;
	}
	void DelegateVoid::RemoveAll()
	{
		std::list<IDelegateVoid*>::iterator it;
		for (it = delegateList.begin(); it != delegateList.end(); ++it)
			delete (*it);

		delegateList.clear();
	}

	void DelegateVoid::Invoke()
	{
		std::list<IDelegateVoid*>::const_iterator it;
		for (it = delegateList.begin(); it != delegateList.end(); ++it)
			(*it)->Invoke();
	}
}