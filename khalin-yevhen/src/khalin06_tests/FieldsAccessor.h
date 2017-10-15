/**
* @file FieldsAccessor.h
* @brief Contains FieldsAccessor class
* @author Khalin Yevhen
* @version 0.0.1
* @date 15.10.17
*/
#pragma once
#include "..\khalin06\LinkedList.h"

#ifdef TEST_MODE // look at TEST_MODE macro definition in LinkedList.h

/**
* @brief Class for accessing to LinkedList private fields
*/
template <typename E>
class LinkedListFieldsAccessor {
public:

	/**
	* @param list a list for accessing
	*/
	LinkedListFieldsAccessor(LinkedList<E> *list) : list(list) { }

	/**
	* @return list head
	*/
	auto * getHead() {
		return list->head;
	}

	/**
	* @return list tail
	*/
	auto * getTail() {
		return list->tail;
	}

private:
	LinkedList<E> *list;
};

template <class T> using FieldsAccessor = LinkedListFieldsAccessor<T>;
#endif
