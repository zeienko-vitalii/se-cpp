#pragma once
/**
* @file CollectionRequest.hpp
* @brief �������� ���������� � ���������� ������ CollectionRequest
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ICollection.h"
#include "IDelegateVoid.h"
#include "SimpleList.h"
#include "CarWheel.h"

/**
* ����� �������� ��� ������ � �����������
*/
class CollectionRequest {
public:
	/**
	* ������� ������
	* @param collection ���������
	* @param functor �������
	* @param PMethod ��������� �� �������, � ������� ����� ������� ��������� ������
	*/
	template<typename T, typename item>
	static void Find(ICollection<item> * collection, T *functor, void(*PMethod)(ICollection<item>*)) {
		if (!functor) throw "Functor can't be NULL";
		if (!PMethod) throw "Pointer to function cannot be NULL";
		SimpleList<item> *result = new SimpleList<item>();
		if (!collection) {
			PMethod(result);
			return;
		}
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