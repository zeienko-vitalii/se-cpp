/*
 * @file ListNode.h
 * Part of lab06
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Mouse.h"
#ifndef LISTNODE_H_
#define LISTNODE_H_

class ListNode {

	ListNode* next;

	ListNode* prev;

	Mouse data;

public:
	ListNode();

	ListNode(Mouse data);

	Mouse& getData();

	void setData(Mouse& data);

	ListNode*& getNext();

	void setNext(ListNode*& next);

	ListNode*& getPrev();

	void setPrev(ListNode*& prev);

	virtual ~ListNode();
};

#endif /* LISTNODE_H_ */
