/**
* @file KeyboardButton.h
* @brief Contains KeyboardButton class declaration
* @author Khalin Yevhen
* @version 0.0.2
* @date 28.09.17
*/

#pragma once

#include "..\khalin03\Button.h"
#include <string>
using std::string;

/**
* @brief Represents keyboard button
*/
class KeyboardButton : public Button
{
public:

	/**
	* @param form button form
	* @param code button code
	* @param name button name
	*/
	KeyboardButton(ButtonForm form, int code, string name);

	virtual ~KeyboardButton();

	/**
	* @return button code
	*/
	int getCode();

	/**
	* @return button name
	*/
	string getName();

	/**
	* @brief I don't exactly know why this method exists (according to a task)
	*/
	void setData(int &code); // the task wants this kind of the signature for overloading

	/**
	* @brief Sets fields values
	* @param name a name of the button
	* @param code a button code
	*/
	void setData(string name, int &code);

	/**
	* @param val a value for comparison with 'code' field
	*/
	bool operator==(int val);

	/**
	* @param c removing character from button name
	*/
	void operator-=(char c);
private:
	int code;
	string name;
};

