/**
* @file LinkedList.h
* @brief Contains LinkedList class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 13.10.17
*/

#include "..\khalin01\Printable.h"
#pragma once

/**
* @brief Abstract doubly linked list interface
* @author Khalin Yevhen
*/
template <typename E>
class LinkedList : Printable {
private:

	template <typename T>
	class Entry {
	public:
		T *element;
		Entry<T> *next;
		Entry<T> *prev;
		Entry(T *element, Entry<T> *next, Entry<T> *prev) :
			element(element), next(next), prev(prev) { }
	};

	int elementsAmount;
	Entry<E> *head; // prev = null
public:

	LinkedList() : head(nullptr), elementsAmount(0) {
	}

	virtual std::string toString() = 0;

	/**
	* @return true if there is <b>data</b> element in the list
	*/
	virtual bool containts(E * data) = 0;

	/**
	* @breif Adds <b>e</b> to the end of the list.
	*/
	virtual void addLast(E * e) = 0;

	/**
	* @breif Adds <b>e</b> to the first position of the list.
	*/
	virtual void addFirst(E * e) = 0;

	/**
	* @breif Removes first element of the list.
	*/
	virtual void removeFirst() = 0;

	/**
	* @breif Removes last element of the list.
	*/
	virtual void removeLast() = 0;

	/**
	* @breif Removes an element by index.
	*/
	virtual void remove(unsigned int index) = 0;

	/**
	* @breif If <b>e</b> is contained in the list, it'll be removed.
	*/
	virtual void remove(E * e) = 0;

	/**
	* @return size of the list
	*/
	virtual int size() {
		return elementsAmount;
	}
};
