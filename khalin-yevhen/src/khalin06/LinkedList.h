/**
* @file LinkedList.h
* @brief Contains LinkedList class declaration
* @author Khalin Yevhen
* @version 0.0.2
* @date 13.10.17
*/

#pragma once

#include "..\khalin01\Printable.h"
#include "StorageInterface.h"
#include "..\khalin03\Utilities.h"
#include "Functors.h"

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

	/**
	* @brief A class for accessing private fields during testing.
	*
	* @author Khalin Yevhen
	*/
	template <class T> friend class LinkedListFieldsAccessor;
#endif

	LinkedList() :
		head(nullptr), tail(nullptr), elementsAmount(0) { }

	/**
	* @brief Repeats an action <b>action</b> for each element.
	*
	* @param action an action that will be used in each iteration.
	*/
	void forEach(functors::Action<E> *action) {
		auto iter = head;
		while (iter != nullptr) {
			action->act(iter->element);
			iter = iter->next;
		}
	}

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
		clean();
		while (!aStream.eof()) {
			auto loadedElem = new E();
			auto newEntry = new Entry<E>(loadedElem, nullptr, nullptr);
			newEntry->isUsedHeapMemForElem = true;
			auto casted = (MStorageInterface*) loadedElem;
			casted->OnLoad(aStream);
			addLast(newEntry);
		}
		removeLast(); // TODO: It's always adding nullptr as the last elem
	}

	/**
	* @breif Adds <b>e</b> to the end of the list.
	*/
	virtual void addLast(E * e) {
		auto newEntry = new Entry<E>(e, nullptr, nullptr);
		addLast(newEntry);
	}

	/**
	* @breif Adds <b>e</b> to the first position of the list.
	*/
	virtual void addFirst(E * e) {
		auto newEntry = new Entry<E>(e, nullptr, nullptr);
		addFirst(newEntry);
	}

	/**
	* @breif Removes first element of the list.
	*/
	virtual void removeFirst() {
		if (elementsAmount > 0) {
			if (elementsAmount == 1) {
				releaseMemory(head);
				head = nullptr;
				tail = nullptr;
			} else { // > 1
				auto afterHead = head->next;
				afterHead->prev = nullptr;
				releaseMemory(head);
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
				releaseMemory(head);
				head = nullptr;
				tail = nullptr;
			} else { // > 1
				auto beforeLast = tail->prev;
				beforeLast->next = nullptr;
				releaseMemory(tail);
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

					releaseMemory(iter);
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
				releaseMemory(iter);
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
				Entry<E> *iter = head;
				for (auto i = 0; i < index; i++, iter = iter->next) { }
				auto beforeIter = iter->prev;
				auto newEntry = new Entry<E>(e, iter, beforeIter);
				beforeIter->next = newEntry;
				iter->prev = newEntry;
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

		/*
		* It switches to 'true' in 'OnLoad' method for each loaded entry.
		*/
		bool isUsedHeapMemForElem;

		Entry(T *element, Entry<T> *next, Entry<T> *prev) :
			element(element), next(next), prev(prev), isUsedHeapMemForElem(false) { }
	};

	int elementsAmount;
	Entry<E> *head; // prev = null
	Entry<E> *tail; // next = null

	void addFirst(Entry<E> * e) {
		if (head == nullptr) {
			head = e;
			tail = head;
		} else {
			head->prev = e;
			e->next = head;
			head = e;
		}
		elementsAmount++;
	}

	void addLast(Entry<E> * e) {
		if (head == nullptr) {
			head = e;
		} else {
			tail->next = e;
			e->prev = tail;
		}
		tail = e;
		elementsAmount++;
	}

	void releaseMemory(Entry<E> *e) {
		if (e->isUsedHeapMemForElem) {
			delete e->element;
			//cout << "removed element" << endl;
		}
		delete e;
		//cout << "removed entry" << endl;
	}
};
