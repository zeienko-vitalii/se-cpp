/**
* @file Button.cpp
* @brief Contains Button class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 17.09.17
*/

#include "Button.h"

Button::Button(ButtonForm form) : form(form), condition(false) {
}

Button::~Button() {

}

ButtonForm * Button::getForm() {
	return &form;
}

void Button::setForm(ButtonForm form) {
	this->form = form;
}

void Button::setCondition(bool condition)
{
	this->condition = condition;
}

bool Button::getCondition()
{
	return condition;
}
