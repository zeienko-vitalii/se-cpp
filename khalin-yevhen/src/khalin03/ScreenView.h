/**
* @file ScreenView.h
* @brief Contains ScreenView class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

#include "BaseView.h"

/**
* @brief Prints features of the data source into an output stream
*/
class ScreenView : BaseView
{
public:
	/**
	* @param btn data source
	* @param out an output stream for printing data source
	*/
	ScreenView(Button *btn, std::ostream *out);

	virtual ~ScreenView();
protected:
	virtual void printHeader();
	virtual void printContent();
	virtual void printFooter();
};