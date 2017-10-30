#pragma once
#include "ICollection.h"
#include "IDelegateVoid.h"
#include "SimpleList.h"
#include "CarWheel.h"

class CollectionRequest {
public:

	template<typename T, typename item>
	static void Find(ICollection<item> * collection, T *functor, void(*PMethod)(ICollection<item>*)) {
		if (!collection) {
			PMethod(NULL);
			return;
		}
		SimpleList<item> *result = new SimpleList<item>();
		auto it = collection->CreateIterator();
		for (it->First(); !it->IsDone(); it->Next()) {
			if((*functor)(it->CurrentItem())){
				result->Push(it->CurrentItem());
			}
		}
		PMethod(result);
		delete it;
		delete result;
	}
protected:
	CollectionRequest(){}
};