/**
 * @file Screen.cpp
 * Реализация функций Screen
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.18
 */
#include <iostream>
#include <string>
#include <locale.h>
#include "Room.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
	cout << "Default constructor Screen" << endl;
}

Screen::Screen(Room room): room(room){
	cout << "Constructor with parameters Screen" << endl;
}

void Screen::dataOutput(){
	cout << "Information about room:" << endl;
	cout << " Length: " << room.getLength() << endl;
	cout << " Width: " << room.getWidth() << endl;
	cout << " Height: " << room.getHeight() << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "Destructor Screen"<< endl;
}
