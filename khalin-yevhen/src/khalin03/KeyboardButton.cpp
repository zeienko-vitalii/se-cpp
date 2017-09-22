/**
* @file KeyboardButton.cpp
* @brief Contains KeyboardButton class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#include "KeyboardButton.h"

KeyboardButton::KeyboardButton(ButtonForm form, int code, char *name):
	Button(form), code(code), name(name)
{
}


KeyboardButton::~KeyboardButton()
{
}


const int KeyboardButton::getCode()
{
	return code;
}


const char * KeyboardButton::getName()
{
	return name;
}
