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
* @brief Doubly linked list
* @author Khalin Yevhen
* @typename E a keeping data type
*/
template <typename E>
class LinkedList : Printable {
private:

	/**
	* @brief An internal data type which represents a list element
	* @typename T a keeping data type
	*/
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
	Entry<E> *tail; // next = null
public:

	LinkedList() :
		head(nullptr), tail(nullptr), elementsAmount(0) { }

	virtual std::string toString() {
		return ""; // TODO implement
	}

	/**
	* @breif Adds <b>e</b> to the end of the list.
	*/
	virtual void addLast(E * e) {
		// TODO implement
	}

	/**
	* @breif Adds <b>e</b> to the first position of the list.
	*/
	virtual void addFirst(E * e) {
		// TODO implement
	}

	/**
	* @breif Removes first element of the list.
	*/
	virtual void removeFirst() {
		// TODO implement
	}

	/**
	* @breif Removes last element of the list.
	*/
	virtual void removeLast() {
		// TODO implement
	}

	/**
	* @breif Removes an element by index.
	*/
	virtual void remove(unsigned int index) {
		// TODO implement
	}

	/**
	* @breif If <b>e</b> is contained in the list, it'll be removed.
	*/
	virtual void remove(E * e) {
		// TODO implement
	}

	/**
	* @return size of the list
	*/
	virtual int size() {
		return elementsAmount;
	}
	
	/**
	* @brief Removes all elements from the list.
	*/
	virtual void clean() {
		// TODO implement
	}

	/**
	* @brief Inserts <b>e</b> element to <b>index</b> position in the list.
	* @param index position of inserting
	* @param e inserting element
	*/
	virtual void insert(unsigned int index, E * e) {
		// TODO implement
	}

	/**
	* @return A pointer to an element according to <b>index</b>
	*/
	virtual E * get(unsigned int index) {
		return nullptr; // TODO implement
	}

	/**
	* @return true if there is <b>e</b> element in the list
	*/
	virtual bool containts(E * e) {
		return false; // TODO implement
	}

	virtual ~LinkedList() { }
};
