/**
* @file LinkedList.h
* @brief Contains LinkedList class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 13.10.17
*/

#pragma once

#include "..\khalin01\Printable.h"
#include "StorageInterface.h"
#include "..\khalin03\Utilities.h"

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#ifndef TEST_MODE
#define TEST_MODE 
#endif // !TEST_MODE

/**
* @brief Doubly linked list implementation
* @typename E a keeping data type. This type must extend MStorageInterface class and have
* the default constructor.
*
* @author Khalin Yevhen
*/
template <typename E>
class LinkedList : public Printable, public MStorageInterface {
public:

#ifdef TEST_MODE
	template <class T> friend class LinkedListFieldsAccessor;
#endif 

	LinkedList() :
		head(nullptr), tail(nullptr), elementsAmount(0), elementsWereLoaded(false) { }

	virtual std::string toString() {
		return ""; // TODO implement
	}

	virtual void OnStore(std::ostream& aStream) {
		if (elementsAmount > 0) {
			if (instanceof<MStorageInterface>(get(0))) {
				auto iter = head;
				while (iter != nullptr) {
					MStorageInterface *savableObj = (MStorageInterface*) iter->element;
					savableObj->OnStore(aStream);
					iter = iter->next;
				}
			}
		}
	}

	virtual void OnLoad(std::istream& aStream) {
		// FIXME: rdbuf()->in_avail() doesn't point to the end of the stream
		while (aStream.rdbuf()->in_avail() == 0) {
			cout << "Loaded" << endl;
			auto loadedElem = new E(); // FIXME: clean method won't delete this.
			auto casted = (MStorageInterface*) loadedElem;
			casted->OnLoad(aStream);
			addLast(loadedElem);
			elementsWereLoaded = true;
		}
	}

	/**
	* @breif Adds <b>e</b> to the end of the list.
	*/
	virtual void addLast(E * e) {
		auto newElement = new Entry<E>(e, nullptr, nullptr);
		if (head == nullptr) {
			head = newElement;
		} else {
			tail->next = newElement;
			newElement->prev = tail;
		}
		tail = newElement;
		elementsAmount++;
	}

	/**
	* @breif Adds <b>e</b> to the first position of the list.
	*/
	virtual void addFirst(E * e) {
		auto newElement = new Entry<E>(e, nullptr, nullptr);
		if (head == nullptr) {
			head = newElement;
			tail = head;
		} else {
			head->prev = newElement;
			newElement->next = head;
			head = newElement;
		}
		elementsAmount++;
	}

	/**
	* @breif Removes first element of the list.
	*/
	virtual void removeFirst() {
		if (elementsAmount > 0) {
			if (elementsAmount == 1) {
				delete head;
				head = nullptr;
				tail = nullptr;
			} else { // > 1
				auto afterHead = head->next;
				afterHead->prev = nullptr;
				delete head;
				head = afterHead;
			}
			elementsAmount--;
		}
	}

	/**
	* @breif Removes last element of the list.
	*/
	virtual void removeLast() {
		if (elementsAmount > 0) {
			if (elementsAmount == 1) {
				delete head;
				head = nullptr;
				tail = nullptr;
			} else { // > 1
				auto beforeLast = tail->prev;
				beforeLast->next = nullptr;
				delete tail;
				tail = beforeLast;
			}
			elementsAmount--;
		}
	}

	/**
	* @breif Removes an element by index.
	*/
	virtual void remove(unsigned int index) {
		if (index < elementsAmount) {
			if (index == elementsAmount - 1) {
				removeLast();
			} else if (index == 0) {
				removeFirst();
			} else {
				auto iter = head;
				while (index-- > 0) { // move to necessary position
					iter = iter->next;
				}
				if (iter->next != nullptr) {
					auto afterRemoving = iter->next;
					auto beforeRemoving = iter->prev;

					// link elements after and before corrent position:
					afterRemoving->prev = iter->prev;
					beforeRemoving->next = afterRemoving;

					delete iter;
					elementsAmount--;
				} else {
					removeLast();
				}
			}
		}
	}

	/**
	* @breif If <b>e</b> is contained in the list, it'll be removed.
	*
	* There will be performed pointers comparison to detect element for removing.
	*/
	virtual void remove(E * e) {
		auto iter = head;
		auto index = 0;
		while (index < elementsAmount) {
			iter = iter->next;
			index++;
			if (iter->element == e) {
				remove(index);
				break;
			}
		}
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
		if (elementsAmount != 0) {
			auto iter = head;
			while (head != nullptr) {
				iter = head;
				head = head->next;
				if (elementsWereLoaded) {
					// delete iter->element
					// TODO here are memory leaks
				}
				delete iter;
			}
			tail = nullptr;
			elementsAmount = 0;
		}
	}

	/**
	* @brief Inserts <b>e</b> element to <b>index</b> position in the list.
	* @param index position of inserting
	* @param e inserting element
	*/
	virtual void insert(unsigned int index, E * e) {
		if (index == elementsAmount) {
			addLast(e);
		} else if (index < elementsAmount) {
			if (index == 0) {
				addFirst(e);
			} else {
				auto iter = head;
				for (auto i = 0; i < index; i++, iter = iter->next) { }
				auto beforeIter = iter->prev;
				auto newElement = new Entry<E>(e, iter, beforeIter);
				beforeIter->next = newElement;
				iter->prev = newElement;
				elementsAmount++;
			}
		}
	}

	/**
	* @return A pointer to an element according to <b>index</b>
	*/
	virtual E * get(unsigned int index) {
		if (index >= elementsAmount) {
			return nullptr;
		} else {
			auto iter = head;
			for (auto i = 0; i < index; i++, iter = iter->next) { }
			return iter->element;
		}
	}

	/**
	* @return A pointer to an element according to <b>index</b>
	*/
	virtual E * operator[](int index) {
		return get(index);
	}

	/**
	* @return true if there is <b>e</b> element in the list
	*/
	virtual bool containts(E * e) {
		return false; // TODO implement
	}

	virtual ~LinkedList() {
		clean();
	}

private:

	bool elementsWereLoaded;

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
};
