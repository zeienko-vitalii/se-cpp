/**
* @file SpecView.h
* @brief Contains SpecView class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

#include "BaseView.h"

/**
* @brief Prints data source features into an output stream if the source
* is an instance of the KeyboardButton class, otherwise works with incoming object
* like ScreenView class.
*/
class SpecView : public BaseView
{
public:

	/**
	* @param btn data source
	* @param out an output stream for printing data source
	*/
	SpecView(Button *btn, std::ostream *out);
	virtual ~SpecView();
protected:
	virtual void printHeader();
	virtual void printContent();
	virtual void printFooter();
};