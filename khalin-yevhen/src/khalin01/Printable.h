/**
* @file Printable.h
* @brief Contains Printable class declaration.
* @author Khalin Yevhen
* @version 0.0.2
* @date 10.09.17
*/

#pragma once

#include <iostream>

/**
* @brief Gives a chance to each child to be represented in the string.
* @author Khalin Yevhen
*/
class Printable abstract
{
public:

	/**
	* @return string representation of the internal state
	*/
	virtual std::string toString() = 0;
};

