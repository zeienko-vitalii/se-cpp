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
	
	void print(std::ostream& out);

	/**
	* @brief State of the button
	*/
	bool state;
};

