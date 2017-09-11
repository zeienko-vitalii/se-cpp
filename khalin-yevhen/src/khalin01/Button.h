/**
* @file Button.h
* @brief Contains Button class declaration.
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#pragma once

#include "Printable.h"

/**
* @brief Represents an entity with two states.
* @author Khalin Yevhen
*/
class Button: Printable
{
public:
	Button();
	~Button();
	
	/**
	* @return state
	*/
	bool getState();

	/**
	* @param state a state of the button
	*/
	void setState(bool state);

	void print(std::ostream& out);

private:
	bool state = false;
};

