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

bool KeyboardButton::operator==(int val)
{
	return val == code;
}

void KeyboardButton::operator-=(char c)
{
	string newName;
	char iter = name[0];
	int addedCounter = 0;
	for (auto i = 0; i < name.length(); i++) {
		iter = name[i];
		if (iter != c) {
			newName += iter;
		}
	}
	name = newName;
}