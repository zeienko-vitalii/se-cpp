/**
* @file Button.h
* @brief Contains Button class declaration
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#pragma once

#include "Button.h"

/**
* @brief Displays state of the passed button
* @author Khalin Yevhen
*/
class Screen
{
public:

	/**
	* @brief State of this field will be printed into output stream using printButtonState method
	*/
	Button button;

	/**
	* @param btn a button whose state will be printed
	*/
	Screen(Button btn);

	~Screen();

	/**
	* @brief prints button state into an output stream
	* @param out an output stream
	*/
	void printButtonState(std::ostream &out);
};

