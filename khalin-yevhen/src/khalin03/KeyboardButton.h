/**
* @file KeyboardButton.h
* @brief Contains KeyboardButton class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

#include "Button.h"

/**
* @brief Represents keyboard button
*/
class KeyboardButton : Button
{
public:
	/**
	* @param form button form
	* @param code button code
	* @param name button name
	*/
	KeyboardButton(ButtonForm form, int code, char *name);
	virtual ~KeyboardButton();

	/**
	* @return button code
	*/
	const int getCode();
	
	/**
	* @return button name
	*/
	const char * getName();
private:
	const int code;
	const char *name;
};

