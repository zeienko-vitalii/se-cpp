/*
 * @file MouseList.cpp
 * Part of lab06
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Mouse.h"
#include "MouseList.h"

MouseList::MouseList(): lSize(0) {
	// TODO Auto-generated constructor stub
	this->head = new ListNode();
	this->tail = new ListNode();

}

void MouseList::add(Mouse* mouse) {
	if (lSize == 0) {
			head->setData(*mouse);
			head->setNext(this->tail);
			tail->setPrev(this->head);
		}
		if (lSize == 1) {
			head->setNext(this->tail);
			tail->setPrev(this->head);
			tail->setData(*mouse);
		} else {
			ListNode* newL = new ListNode();
			newL->setData(*mouse);
			newL->setPrev(this->tail);
			this->tail->setNext(newL);
			tail = tail->getNext();
		}
		lSize++;
}

void MouseList::remove(int pos) {
	if (pos == 0) {
			ListNode* del = head;
			head = head->getNext();
			delete del;
		} else if (pos == lSize) {
			ListNode* del = tail;
			tail = tail->getPrev();
			delete del;
		} else {
			ListNode* tmp = head;
			for (int i = 0; i < pos; i++)
				tmp = tmp->getNext();
			tmp->getPrev()->setNext(tmp->getNext());
			tmp->getNext()->setPrev(tmp->getPrev());
			delete tmp;

		}
		lSize--;
}

void MouseList::clean() {
	ListNode* tmp = head;
		for (int i = 1; i < lSize; i++) {
			tmp = tmp->getNext();
			delete tmp->getPrev();
		}
		lSize = 0;
}

Mouse MouseList::get(int pos) {
	if (pos < 0 || pos > lSize) {
		cout << "Illegal index: " << to_string(pos) << "\n";
			return *(new Mouse);

		}
		ListNode* tmp = head;
		for (int i = 0; i < pos; i++)
			tmp = tmp->getNext();
		return tmp->getData();
}

int MouseList::size() {
	return this->lSize;
}

MouseList::~MouseList() {
	// TODO Auto-generated destructor stub
}

