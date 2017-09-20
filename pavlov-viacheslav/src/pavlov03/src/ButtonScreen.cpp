/*
 * ButtonScreen.cpp
 *
 *  Created on: 21 сент. 2017 г.
 *      Author: JR_Rider
 */
#include<iostream>
#include"Button.h"
#include "ButtonScreen.h"

ButtonScreen::ButtonScreen() {
	// TODO Auto-generated constructor stub

}

ButtonScreen::~ButtonScreen() {
	// TODO Auto-generated destructor stub
}

void ButtonScreen::setButton(Button button) {

}
void ButtonScreen::viewButton() {
	cout << "Label: " << this->button.getLabel() << endl;
	cout << "Border color: " << this->button.getBorderColor() << endl;
}
