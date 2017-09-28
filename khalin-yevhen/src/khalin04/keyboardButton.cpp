/**
* @file KeyboardButton.cpp
* @brief Contains KeyboardButton class implementation
* @author Khalin Yevhen
* @version 0.0.2
* @date 28.09.17
*/

#include "KeyboardButton.h"

KeyboardButton::KeyboardButton(ButtonForm form, int code, char *name) :
	Button(form), code(code), name(name)
{
}


KeyboardButton::~KeyboardButton()
{
}


int KeyboardButton::getCode()
{
	return code;
}


char * KeyboardButton::getName()
{
	return name;
}

void KeyboardButton::setData(int & code)
{
	this->code = code;
}

void KeyboardButton::setData(char * name, int & code)
{
	this->code = code;
	this->name = name;
}
