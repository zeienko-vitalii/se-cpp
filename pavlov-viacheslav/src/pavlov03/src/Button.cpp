/*
 * @file Button.cpp
 * Button functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 **/
#include <iostream>
#include "Button.h"

Button::Button() {
	// TODO Auto-generated constructor stub

}

Button::Button(string label, string borderColor) :
		label(label), borderColor(borderColor) {
	// TODO Auto-generated constructor stub

}

Button::Button(int _windowId, int _x1, int _y1, int _x2, int _y2, string label,
		string borderColor) :
		Window(_windowId, _x1, _y1, _x2, _y2), label(label), borderColor(
				borderColor) {

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
