/*
 * @file ListNode.cpp
 * Part of lab06
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

#include "ListNode.h"

ListNode::ListNode() :
		prev(nullptr), next(nullptr) {
	// TODO Auto-generated constructor stub

}

ListNode::ListNode(Mouse data) :
		data(data), prev(nullptr), next(nullptr) {
}

Mouse& ListNode::getData() {
	return data;
}

void ListNode::setData(Mouse& data) {
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

