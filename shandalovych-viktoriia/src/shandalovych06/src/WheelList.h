/*
 * WheelList.h
 *
 *  Created on: 22 ���. 2017 �.
 *      Author: JR_Rider
 */

#pragma once

#include "ListNode.h"
#include "Wheel.h"

class WheelList {
	ListNode* head;
	ListNode* tail;
	int lSize;

public:
	WheelList();
	virtual ~WheelList();
	void add(Wheel* wheel);
	void remove(int pos);
	void clean();
	Wheel get(int pos);
	int size();
};

