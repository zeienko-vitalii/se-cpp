#pragma once
#include <list>
#include "IDelegateVoid.h"
namespace Delegate {
	class CDelegateVoid
	{
	public:
		CDelegateVoid(IDelegateVoid* pDelegate = NULL) { Add(pDelegate); }
		~CDelegateVoid() {
			RemoveAll(); }
		bool IsNull() { return (delegateList.size() == 0); }

		CDelegateVoid& operator=(IDelegateVoid* pDelegate);

		CDelegateVoid& operator+=(IDelegateVoid* pDelegate);

		CDelegateVoid& operator-=(IDelegateVoid* pDelegate);

		void operator()();

	private:
		void Add(IDelegateVoid* pDelegate);
		void Remove(IDelegateVoid* pDelegate);
		void RemoveAll();
		void Invoke();

	private:
		std::list<IDelegateVoid*> delegateList;
	};
}