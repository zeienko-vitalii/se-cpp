/**
* @file GraphScreen.h
* @brief Contains a declaration of the GraphScreen class
* @author Khalin Yevhen
* @version 0
* @date 17.09.17
*/

#pragma once

#include "Button.h"
#include <iostream>

/**
* @brief Represents methods for printing data of the Button object
* @author Khalin Yevhen
*/
class GraphScreen
{
public:

	/**
	* @param btn a pointer to an object that will be held
	*/
	GraphScreen(const Button *btn);

	/**
	* @param btn an object whose data will be printed into a stream
	* @param os a stream for printing object data
	*/
	void printData(const Button *btn, std::ostream &os) const;

	/**
	* @param btn a source object
	*/
	void setDataSource(const Button *btn);

	/**
	* @return a button pointer
	*/
	const Button * getDataSource();


	/**
	* @brief prints data source 
	*/
	void printDataSource(std::ostream& os);

	~GraphScreen();
private:
	const Button* btn;
};

