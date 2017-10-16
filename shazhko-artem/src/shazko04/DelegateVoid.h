#pragma once
#include <list>
#include "IDelegateVoid.h"
namespace Delegate {
	class DelegateVoid
	{
	public:
		DelegateVoid(IDelegateVoid* pDelegate = NULL) { Add(pDelegate); }
		~DelegateVoid() {
			RemoveAll(); }
		bool IsNull() { return (delegateList.size() == 0); }

		DelegateVoid& operator=(IDelegateVoid* pDelegate);

		DelegateVoid& operator+=(IDelegateVoid* pDelegate);

		DelegateVoid& operator-=(IDelegateVoid* pDelegate);

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