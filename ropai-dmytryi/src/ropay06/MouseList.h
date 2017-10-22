/*
 * @file MouseList.h
 * Part of lab06
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Mouse.h"
#include "ListNode.h"
#ifndef MOUSELIST_H_
#define MOUSELIST_H_

class MouseList {

	ListNode* head;

	ListNode* tail;

	int lSize;

public:
	MouseList();

	void add(Mouse* mouse);

	void remove(int pos);

	void clean();

	Mouse get(int pos);

	int size();

	virtual ~MouseList();
};

#endif /* MOUSELIST_H_ */
