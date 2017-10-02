/**
* @file View1.cpp
* @brief Містить реалізацію класу Screen
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#include "Screen.h"

Screen::Screen(): room() {
	cout << "Screen()" << endl;
}

Screen::Screen(Room R): room(R) {
	cout << "Screen(Room)" << endl;
}

void Screen::ShowContent() {
	cout << "ShowContent()" << endl;
	cout << "height = " << room.height << endl;
	cout << "length = " << room.length << endl;
	cout << "width = " << room.width << endl;
}

Screen::Screen(const Screen& s): room(s.room) {
	cout << "Screen(const Screen&)" << endl;
}

Screen::~Screen() {
	cout << "~Screen()" << endl;
}
