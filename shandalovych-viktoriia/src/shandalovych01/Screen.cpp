/*
 * Screen.cpp
 *
 *  Created on: 10 ����. 2017 �.
 *      Author: Viktotia
 */

#include <iostream>
#include "Wheel.h"
#include "Screen.h"

using namespace std;
Screen::Screen() {
	// TODO Auto-generated constructor stub

}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
}
Screen::Screen(Wheel wheel) {
	this->wheel = wheel;
}

void Screen::ViewWheel() {

	cout << "diameter = " << wheel.getdiameter() << "\n";
	cout << "unit = " << wheel.getunit() << "\n";
	cout << "width = " << wheel.getwidth() << "\n";
}
