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
