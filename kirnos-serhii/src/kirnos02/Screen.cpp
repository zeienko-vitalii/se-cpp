/**
* @file Screen.cpp
* @brief Хранит реализацию класса Screen
* @author Kirnos Serhii
* @version 0
* @date 22.10.17
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
	cout << "height = " << room.getHeight() << endl;
	cout << "length = " << room.getLength() << endl;
	cout << "width = " << room.getWidth() << endl;
}

Screen::Screen(const Screen& s): room(s.room) {
	cout << "Screen(const Screen&)" << endl;
}

Screen::~Screen() {
	cout << "~Screen()" << endl;
}
