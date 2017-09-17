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

	/**
	* @brief
	* @param form a form of the button
	* @param initState button initial condition
	*/
	Button(ButtonForm form, bool initState);

	~Button();

	/**
	* @return true if button is round and pressed 
	*/
	bool isRoundPressed() const;

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