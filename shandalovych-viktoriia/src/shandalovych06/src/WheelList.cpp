/*
 * WheelList.cpp
 *
 *  Created on: 22 окт. 2017 г.
 *      Author: JR_Rider
 */
#include "ListNode.h"
#include "Wheel.h"
#include "WheelList.h"

WheelList::WheelList() :
		lSize(0) {
	this->head = new ListNode();
	this->tail = new ListNode();
}

WheelList::~WheelList() {
	// TODO Auto-generated destructor stub
}

void WheelList::add(Wheel* wheel) {
	if (lSize == 0) {
		head->setData(*wheel);
		head->setNext(this->tail);
		tail->setPrev(this->head);
	}
	if (lSize == 1) {
		head->setNext(this->tail);
		tail->setPrev(this->head);
		tail->setData(*wheel);
	} else {
		ListNode* newL = new ListNode();
		newL->setData(*wheel);
		newL->setPrev(this->tail);
		this->tail->setNext(newL);
		tail = tail->getNext();
	}
	lSize++;
}

void WheelList::remove(int pos) {
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

void WheelList::clean() {
	ListNode* tmp = head;
	for (int i = 1; i < lSize; i++) {
		tmp = tmp->getNext();
		delete tmp->getPrev();
	}
	lSize = 0;
}

Wheel WheelList::get(int pos) {
	if (pos < 0 || pos > lSize) {
		cout << "Illegal index: " << to_string(pos) << "\n";
		return *(new Wheel);

	}
	ListNode* tmp = head;
	for (int i = 0; i < pos; i++)
		tmp = tmp->getNext();
	return tmp->getData();
}

int WheelList::size() {
	return this->lSize;
}
