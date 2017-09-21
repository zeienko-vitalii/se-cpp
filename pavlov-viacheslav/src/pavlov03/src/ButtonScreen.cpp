/**
 * @file ButtonScreen.cpp
 * ButtonScreen functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#include<iostream>

#include "ButtonScreen.h"

ButtonScreen::ButtonScreen() {
	// TODO Auto-generated constructor stub

}

ButtonScreen::~ButtonScreen() {
	// TODO Auto-generated destructor stub
}

ButtonScreen::ButtonScreen(Button button) :
		data(button) {
	// TODO Auto-generated constructor stub

}

void ButtonScreen::setButton(Button button) {

}
void ButtonScreen::viewButton() {
	cout << "Label: " << this->data.getLabel() << endl;
	cout << "Border color: " << this->data.getBorderColor() << endl;
}

void ButtonScreen::showHeader() {
	cout << "\n|--------------------------\n";
	cout << "ButtonScreen output\n";
}

void ButtonScreen::showContent() {
	viewWindow();
	viewButton();
}

void ButtonScreen::showFooter() {
	cout << "|--------------------------\n\n";
}
