/**
* @file Button.h
* @brief Contains Button class declaration
* @author Khalin Yevhen
* @version 0
* @date 17.09.17
*/

#pragma once

#include "ButtonForm.h"

/**
* @brief Represents an entity with a form and condition
* @author Khalin Yevhen
*/
class Button {
public:
	Button(ButtonForm form, bool initState);
	~Button();
	bool isRoundPressed() const;
	ButtonForm * getForm();
	void setForm(ButtonForm form);
private:
	ButtonForm form;
	bool condition;
};