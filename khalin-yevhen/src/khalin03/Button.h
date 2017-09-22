/**
* @file Button.h
* @brief Contains Button class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 17.09.17
*/

#pragma once

#include "ButtonForm.h"

/**
* @brief Represents an entity with a form and condition
* @author Khalin Yevhen
*/
class Button  {
public:

	/**
	* @param form a form of the button
	* @param initState button initial condition
	*/
	Button(ButtonForm form);

	virtual ~Button();

	/**
	* @return button form
	*/
	ButtonForm * getForm();

	/**
	* @param form button form
	*/
	void setForm(ButtonForm form);

	/**
	* @param condition button state
	*/
	void setCondition(bool condition);

	/**
	* @return button state
	*/
	bool getCondition();
private:
	ButtonForm form;
	bool condition;
};