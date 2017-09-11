/**
* @file Button.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Button.h"

Button::Button()
{
}

Button::~Button()
{
}

bool Button::getState()
{
	return state;
}

void Button::setState(bool state)
{
	this->state = state;
}

void Button::print(std::ostream& out) {
	char* btnState = state == true ? "ON" : "OFF";
	out << "state: " << btnState << std::endl;
}
