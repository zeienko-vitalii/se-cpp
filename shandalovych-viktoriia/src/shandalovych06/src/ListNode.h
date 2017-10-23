/*
 * ListNode.h
 *
 *  Created on: 22 окт. 2017 г.
 *      Author: JR_Rider
 */

#pragma once
#include"Wheel.h"
class ListNode {

	ListNode* next;
	ListNode* prev;
	Wheel data;

public:
	ListNode();
	ListNode(Wheel data);
	virtual ~ListNode();
	Wheel& getData();
	void setData(Wheel& data);
	ListNode*& getNext();
	void setNext(ListNode*& next);
	ListNode*& getPrev();
	void setPrev(ListNode*& prev);
};
