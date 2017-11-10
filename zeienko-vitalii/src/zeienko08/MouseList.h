/**
* @file MouseList.h
* Declaration and implementation of the MouseList class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.25
*/
#ifndef _MOUSE_LIST_H_
#define _MOUSE_LIST_H_
#include "StorageInterface.h"
#include "Functor.h"
#include <crtdbg.h>

/**
This class represents a container of class Manipulator or ComputerManipulator.
It is expanding dynamically.
*/
template<typename T = MStorageInterface>
class MouseList : public MStorageInterface {
private:
	/**
	It keeps pointers to the next and previous elements of the container.
	Also it contains Manipulator's pointer.
	*/
	struct Element {
		T* data;
		Element* next;
		Element* prev;
	}
	*current; /// It's a current element

	int amountOfElements; /// It's a size of container
	int lastSizeOfContainer;	/// Keeps the  size of the container after it's clearing.

	inline void reset() { amountOfElements = 0, lastSizeOfContainer = 0, current = nullptr; }
public:

	/**
	Initialize MouseList's fields with a default values amountOfElemts and current.
	*/
	MouseList() : amountOfElements(0), lastSizeOfContainer(0), current(nullptr) {
	};

	/**
	It pushes back of the container a Manipulator's object.
	@param newobj is a pointer on Manipulator's object
	*/
	void push_back(T* newObj) {
		if (current == nullptr) {
			current = new Element;
			current->prev = nullptr;
			current->next = nullptr;
			current->data = newObj;
			amountOfElements++;
		}
		else {
			Element* temp = new Element;
			temp->data = newObj;
			temp->next = nullptr;
			temp->prev = current;
			current->next = temp;
			current = temp;
			current->next = nullptr;
			//delete temp;
			amountOfElements++;
		}
	};

	/**
	It insert's initialized Manipulator's object to the container by an index
	@param data is a pointer on Manipulator's object
	@param index is an index where to insert
	@return true in case if inserting was succesful
	*/
	bool insert(T* data, int index) {
		int last_index = amountOfElements - 1;
		if (current != nullptr &&
			index <= last_index &&
			index >= 0) {

			if (index == last_index) {
				push_back(data);
				amountOfElements++;
				return true;
			}
			else {
				Element* prevElement = find(index);
				Element* nextElement = prevElement->next;
				Element* temp = new Element;
				temp->data = data;
				temp->prev = prevElement;
				temp->next = nextElement;
				prevElement->next = temp;
				nextElement->prev = temp;
				amountOfElements++;
				//delete temp;
				return true;
			}
		}
		else return false;
	};

	/**
	Deletes each of the container's element.
	*/
	void clear() {
		lastSizeOfContainer = amountOfElements;
		while (current) {
			Element* temp = current->prev;
			delete current;
			current = temp;
			amountOfElements--;
		}
		reset();
	};

	/**
	Removes an element by an index.
	@return true  in case if removing was succesful
	*/
	bool remove_element(int index) {
		_ASSERT_EXPR((current != nullptr ||
			index <= amountOfElements - 1 || index >= 0), "Error deleteting element: Wrong Index");
		if (current != nullptr &&
			index <= amountOfElements - 1 && index >= 0) {
			Element* temp = find(index);
			if (temp != nullptr) {		// the start of the list 
				if (temp->prev == nullptr) {
					Element* temp1 = temp;
					temp1 = temp1->next;
					temp1->prev = nullptr;
					amountOfElements--;
				}
				else if (temp->next == nullptr) {	// the end of the list 
					Element* temp1 = find(amountOfElements - 1);
					temp1 = temp1->prev;
					temp1->next = nullptr;
					amountOfElements--;
				}
				else { // If the middle 
					temp->prev->next = temp->next;
					temp->next->prev = temp->prev;
					amountOfElements--;
				}
				delete temp;
				return true;
			}
		}
		else {
			return false;
		}
	};

	/**
	@return amountOfElements
	*/
	int getSize() {
		if (current != nullptr) {
			return amountOfElements;
		}
		else {
			return -1;
		}

	};

	/**
	* Finds an object in the list by index
	* @param index is an index of the searching object
	* @return Eelement's
	* */
	Element* find(int index) throw (std::invalid_argument) {
		
		if (index > amountOfElements - 1 || index < 0) {
			throw std::invalid_argument("Invalid Argument");
			return nullptr;
		}
		int cnt = amountOfElements - 1;
		Element* temp = current;
		if (current != nullptr &&
			index <= amountOfElements - 1 && index >= 0) {
			while (temp) {
				if (index == cnt) return temp;
				temp = temp->prev;
				cnt--;
			}
		}
		

	};

	/**
	It gets an object of Manipulator by index
	* @param index is an index of the container
	* @return  pointer on the Manipulator's object
	*/

	T* getDataByIndex(int index) {

		Element* temp = find(index);
		return temp->data;
	}
	/**
	* Overloaded []operator
	* @param index is an index of the container
	*/
	T* operator [] (const int index) {

		Element* element = nullptr;
		try {
			element = find(index);
		}
		catch (std::invalid_argument& e) {
			printf("Error: %s \n", e.what());
			printf("Accessed to first element\n");
			element = find(0);
		}

		return element->data;
	}

	void OnStore(std::ostream& aStream) {
		if (current != nullptr) {
			Element* temp = current;
			aStream.write((const char*)&amountOfElements, sizeof(amountOfElements));
			for (int counter = 0; counter < amountOfElements; counter++) {
				temp->data->OnStore(aStream);
				temp = temp->prev;
			}
		}

	}

	void OnLoad(std::istream& aStream) {
		this->clear();
		int size = 0;
		aStream.read((char*)&size, sizeof(size));

		for (int i = 0; i < size; i++) {
			T* tempManip = new T;
			tempManip->OnLoad(aStream);
			this->push_back(tempManip);
		}
	}

	/**
	* Clears all allocated memory of the created objects if there are such.
	*/
	~MouseList() {
		clear();
	};

	int count(MouseList<T>& q, Functor& functor) {
		int count = 0;
		for (int i = 0; i < q.getSize(); i++) {
			if (functor(*q.getDataByIndex(i))) count++;
		}
		return count;
	};

};
#endif