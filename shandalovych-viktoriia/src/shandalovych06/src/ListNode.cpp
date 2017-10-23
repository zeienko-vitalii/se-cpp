/*
 * ListNode.cpp
 *
 *  Created on: 22 окт. 2017 г.
 *      Author: JR_Rider
 */

#include "ListNode.h"

ListNode::ListNode() :
		prev(nullptr), next(nullptr) {
	// TODO Auto-generated constructor stub

}

ListNode::ListNode(Wheel data) :
		data(data), prev(nullptr), next(nullptr) {
}

Wheel& ListNode::getData() {
	return data;
}

void ListNode::setData(Wheel& data) {
	this->data = data;
}

ListNode*& ListNode::getNext() {
	return next;
}

void ListNode::setNext(ListNode*& next) {
	this->next = next;
}

ListNode*& ListNode::getPrev() {
	return prev;
}

void ListNode::setPrev(ListNode*& prev) {
	this->prev = prev;
}

ListNode::~ListNode() {
	// TODO Auto-generated destructor stub
}

