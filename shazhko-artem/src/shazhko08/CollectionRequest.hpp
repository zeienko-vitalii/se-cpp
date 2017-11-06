#pragma once
/**
* @file CollectionRequest.hpp
* @brief Содержит объявление и реализацию класса CollectionRequest
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ICollection.h"
#include "IDelegateVoid.h"
#include "SimpleList.h"
#include "CarWheel.h"

/**
* Класс запросов для работы с коллекциями
*/
class CollectionRequest {
public:
	/**
	* Функция поиска
	* @param collection коллекция
	* @param functor функтор
	* @param PMethod указатель на функцию, в которую будет передан результат поиска
	*/
	template<typename T, typename item>
	static void Find(Collection::ICollection<item> * collection, T *functor, void(*PMethod)(Collection::ICollection<item>*)) {
		if (!functor) throw "Functor can't be NULL";
		if (!PMethod) throw "Pointer to function cannot be NULL";
		Collection::SimpleList<item> *result = new Collection::SimpleList<item>();
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