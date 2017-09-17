/**
* @file Button.cpp
* @brief Contains Button class implementation
* @author Khalin Yevhen
* @version 0
* @date 17.09.17
*/

#include "Button.h"

Button::Button(ButtonForm form, bool initState) : form(form), condition(initState) {
}

Button::~Button() {

}

bool Button::isRoundPressed() const {
	return condition && form == ButtonForm::ROUND;
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
