/**
 * @file Screen.cpp
 * Screen functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#include<iostream>

#include "Window.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
	// TODO Auto-generated constructor stub

	cout << "Screen default constructor\n";
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub

	cout << "Screen destructor\n";
}

Screen::Screen(Window window): window(window) {
	cout << "Screen constructor with parameters\n";
}

void Screen::viewWindow() {

	cout << "windowId = " << window.getWindowId() << "\n";
	cout << "x1 = " << window.getX1() << " ";
	cout << "y1 = " << window.getY1() << "\n";
	cout << "x2 = " << window.getX2() << " ";
	cout << "y2 = " << window.getY2() << "\n";
}
