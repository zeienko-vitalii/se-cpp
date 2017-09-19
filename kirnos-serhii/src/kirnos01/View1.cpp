/**
* @file View1.cpp
* @brief Містить реалізацію класу Screen
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#include "View1.h"

Screen::Screen() {
	room = new Room();
	cout << "Screen()" << endl;
}

Screen::Screen(Room r) {
	room = new Room(r);
	cout << "Screen(Room)" << endl;
}

void Screen::ShowContent() {
	cout << "ShowContent()" << endl;
	cout << "field1_data1 = " << *((*room).field1_data1) << endl;
	cout << "field2_data1 = " << *((*room).field2_data1) << endl;
	cout << "field3_data1 = " << *((*room).field3_data1) << endl;
}

Screen::Screen(const Screen& s) {
	room = new Room(*(s.room));
	cout << "Screen(const Screen&)" << endl;
}

Screen::~Screen() {
	delete room;
	cout << "~Screen()" << endl;
}
