/**
* @file Printable.h
* @brief Contains Printable class declaration.
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#pragma once

#include <iostream>

/**
* @brief The objects whose class is extended by this will 
* be able to be printed to the output stream using 'print' method.
* @author Khalin Yevhen
*/
class Printable
{
public:

	/**
	* @brief Prints a state of the current object to the output stream.
	* @param out an output stream
	*/
	virtual void print(std::ostream& out) = 0;
};

