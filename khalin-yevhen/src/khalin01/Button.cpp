/**
* @file Button.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Button.h"

Button::Button(): state(false)
{
}

Button::~Button()
{
}

void Button::print(std::ostream& out) {
	char* btnState = state == true ? "ON" : "OFF";
	out << "state: " << btnState << std::endl;
}
