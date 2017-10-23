//============================================================================
// Name        : shandalovych06.cpp
// Author      : pavlov-viacheslav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ListNode.h"
#include "Wheel.h"
#include "WheelList.h"

using namespace std;

int main() {
	//Константы для инициализации первого объекта.
	const int DIAMETER1 = 10;
	const int WIDTH1 = 10;
	const string UNIT1 = "см1";
	Wheel data1(DIAMETER1, WIDTH1, UNIT1);

	const int DIAMETER2 = 20;
	const int WIDTH2 = 20;
	const string UNIT2 = "см2";
	Wheel data2(DIAMETER2, WIDTH2, UNIT2);

	const int DIAMETER3 = 30;
	const int WIDTH3 = 30;
	const string UNIT3 = "см3";
	Wheel data3(DIAMETER3, WIDTH3, UNIT3);

	const int DIAMETER4 = 40;
	const int WIDTH4 = 40;
	const string UNIT4 = "см4";
	Wheel data4(DIAMETER4, WIDTH4, UNIT4);

	WheelList list;

	list.add(&data1);
	list.add(&data2);
	list.add(&data3);
	list.add(&data4);

	for (int i = 0; i < list.size(); i++) {
		cout << list.get(i);
	}

	list.remove(2);

	for (int i = 0; i < list.size(); i++) {
		cout << list.get(i);
	}
	return 0;
}
