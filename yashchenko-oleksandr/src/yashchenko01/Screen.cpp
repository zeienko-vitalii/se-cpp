/**
 * @file Screen.cpp
 * Implementation of class Screen
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.09.15
 */

#include <Screen.h>
#include <iostream>


using namespace std;

Screen::Screen(Window window) {
	iWindow = window;
}

Screen::~Screen() {
}

void Screen::showInfo() {
	cout << "ID=" << iWindow.iId << endl;
	cout << "X1=" << iWindow.iX1 << endl;
	cout << "Y1=" << iWindow.iY1 << endl;
	cout << "X2=" << iWindow.iX2 << endl;
	cout << "Y2=" << iWindow.iY2 << endl;
}
