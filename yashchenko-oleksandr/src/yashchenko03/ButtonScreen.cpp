/**
 * @file ButtonScreen.cpp
 * Implementation of class ButtonScreen.
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#include "ButtonScreen.h"
#include <iostream>

using namespace std;

ButtonScreen::ButtonScreen(Button button) :
		iButton(button) {
}

ButtonScreen::~ButtonScreen() {
}

void ButtonScreen::showHeader() {
	cout << "Button info:" << endl;
}

void ButtonScreen::showContent() {
	cout << "ID=" << iButton.getId() << endl;
	cout << "X1=" << iButton.iX1 << endl;
	cout << "Y1=" << iButton.iY1 << endl;
	cout << "X2=" << iButton.iX2 << endl;
	cout << "Y2=" << iButton.iY2 << endl;
	cout << "Width=" << iButton.width() << endl;
	cout << "Height=" << iButton.height() << endl;
	cout << "Button text=" << iButton.getTitle() << endl;
	cout << "Border Color=" << iButton.getBorderColor() << endl;
}

void ButtonScreen::showFooter() {
	cout << "ButtonScreen output..." << endl;
}
