//============================================================================
// Name        : lab06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include "MouseList.h"
#include "ListNode.h"
#include "Mouse.h"
using namespace std;

int main() {

	const int COUNT_MANIP1 = 2;
	const string TYPE_MANIP1 = "Mouse";
	const string CONNECTION1 = "Wireless";
	const string SENSOR_TYPE1 = "Laser";
	Mouse mouse1(COUNT_MANIP1, TYPE_MANIP1, CONNECTION1, SENSOR_TYPE1);

	const int COUNT_MANIP2 = 3;
	const string TYPE_MANIP2 = "Mouse";
	const string CONNECTION2 = "Wire";
	const string SENSOR_TYPE2 = "Laser";
	Mouse mouse2(COUNT_MANIP2, TYPE_MANIP2, CONNECTION2, SENSOR_TYPE2);

	const int COUNT_MANIP3 = 4;
	const string TYPE_MANIP3 = "Mouse";
	const string CONNECTION3 = "Wireless";
	const string SENSOR_TYPE3 = "Ball";
	Mouse mouse3(COUNT_MANIP3, TYPE_MANIP3, CONNECTION3, SENSOR_TYPE3);

	const int COUNT_MANIP4 = 5;
	const string TYPE_MANIP4 = "Mouse";
	const string CONNECTION4 = "Wire";
	const string SENSOR_TYPE4 = "Ball";
	Mouse mouse4(COUNT_MANIP4, TYPE_MANIP4, CONNECTION4, SENSOR_TYPE4);

	MouseList list;

	list.add(&mouse1);
	list.add(&mouse2);
	list.add(&mouse3);
	list.add(&mouse4);

	for (int i = 0; i < list.size(); i++) {
		cout << list.get(i);
	}

	list.remove(2);

	for (int i = 0; i < list.size(); i++) {
		cout << list.get(i);
	}
	return 0;
}
