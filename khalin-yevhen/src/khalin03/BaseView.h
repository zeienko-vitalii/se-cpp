/**
* @file BaseView.h
* @brief Contains BaseView class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

#include "Button.h"
#include <iostream>

/**
* @brief An abstract class which represents smth for showing data of the object
*/
class BaseView
{
public:

	/**
	* @param btn data source
	* @param out an output stream for printing data source
	*/
	BaseView(Button *btn, std::ostream *out);
	
	/**
	* @brief displays data into set output stream
	*/
	void display();

	virtual ~BaseView();

	void setDataSource(Button *btn);

	Button * getDataSource();

	std::ostream * getOutputStream();

	void setOutputStream(std::ostream * out);

protected:
	virtual void printHeader() = 0;
	virtual void printContent() = 0;
	virtual void printFooter() = 0;
private:
	Button *btn;
	std::ostream *out;
};

