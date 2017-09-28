/**
* @file KeyboardButton.cpp
* @brief Contains KeyboardButton class implementation
* @author Khalin Yevhen
* @version 0.0.2
* @date 28.09.17
*/

#include "KeyboardButton.h"
#include "..\khalin03\Button.cpp"


KeyboardButton::KeyboardButton(ButtonForm form, int code, string name) :
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

string KeyboardButton::getName()
{
	return name;
}

void KeyboardButton::setData(int & code)
{
	this->code = code;
}

void KeyboardButton::setData(string name, int & code)
{
	this->code = code;
	this->name = name;
}
