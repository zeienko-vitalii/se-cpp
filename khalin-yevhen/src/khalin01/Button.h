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
class Button
{
public:
	Button();
	~Button();
	
	/**
	* @param btn a copying object
	**/
	Button(const Button &btn);

	/**
	* @brief State of the button
	*/
	bool state;
};

