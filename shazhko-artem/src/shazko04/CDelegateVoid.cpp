#include "CDelegateVoid.h"

namespace Delegate {
	CDelegateVoid & CDelegateVoid::operator=(IDelegateVoid * pDelegate)
	{
		RemoveAll();
		Add(pDelegate);
		return *this;
	}
	CDelegateVoid & CDelegateVoid::operator+=(IDelegateVoid * pDelegate)
	{
		Add(pDelegate);
		return *this;
	}
	CDelegateVoid & CDelegateVoid::operator-=(IDelegateVoid * pDelegate)
	{
		Remove(pDelegate);
		return *this;
	}
	void CDelegateVoid::operator()()
	{
		Invoke();
	}
	void CDelegateVoid::Add(IDelegateVoid* pDelegate)
	{
		if (pDelegate != NULL)
			delegateList.push_back(pDelegate);
	}

	void CDelegateVoid::Remove(IDelegateVoid* pDelegate)
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
	void CDelegateVoid::RemoveAll()
	{
		std::list<IDelegateVoid*>::iterator it;
		for (it = delegateList.begin(); it != delegateList.end(); ++it)
			delete (*it);

		delegateList.clear();
	}

	void CDelegateVoid::Invoke()
	{
		std::list<IDelegateVoid*>::const_iterator it;
		for (it = delegateList.begin(); it != delegateList.end(); ++it)
			(*it)->Invoke();
	}
}