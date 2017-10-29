/**
 * @file Screen.cpp
 * Implementation of class Screen
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#include "Screen.h"
#include <iostream>

using namespace std;

Screen::Screen(Window window) :
		iWindow(window) {
}

Screen::~Screen() {
}

void Screen::showHeader() {
	cout << "Window info:" << endl;
}

void Screen::showContent() {
	cout << "ID=" << iWindow.getId() << endl;
	cout << "X1=" << iWindow.iX1 << endl;
	cout << "Y1=" << iWindow.iY1 << endl;
	cout << "X2=" << iWindow.iX2 << endl;
	cout << "Y2=" << iWindow.iY2 << endl;
	cout << "Width=" << iWindow.width() << endl;
	cout << "Height=" << iWindow.height() << endl;
}

void Screen::showFooter() {
	cout << "Screen output..." << endl;
}
