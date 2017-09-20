/*
 * Button.cpp
 *
 *  Created on: 20 сент. 2017 г.
 *      Author: JR_Rider
 */
#include <iostream>
#include "Window.h"
#include "Button.h"

Button::Button() {
	// TODO Auto-generated constructor stub

}

Button::~Button() {
	// TODO Auto-generated destructor stub
}

void Button::setLabel(string label) {
	this->label = label;
}
string Button::getLabel() {
	return this->label;
}

void Button::setBorderColor(string borderColor) {
	this->borderColor = borderColor;
}
string Button::getBorderColor() {
	return this->borderColor;
}
