/**
 * @file Screen.cpp
 * Screen functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#include<iostream>

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

Screen::Screen(Window window) {
	cout << "Screen constructor with parameters\n";
}

void Screen::viewWindow() {

	cout << "windowId = " << data.getWindowId() << "\n";
	cout << "x1 = " << data.getX1() << " ";
	cout << "y1 = " << data.getY1() << "\n";
	cout << "x2 = " << data.getX2() << " ";
	cout << "y2 = " << data.getY2() << "\n";
}

void Screen::showHeader() {
	cout << "\n|--------------------------\n";
	cout << "Screen output\n";
}

void Screen::showContent() {
	viewWindow();
}

void Screen::showFooter() {
	cout << "|--------------------------\n\n";
}

