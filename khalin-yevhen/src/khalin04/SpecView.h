/**
* @file SpecView.h
* @brief Contains SpecView class declaration
* @author Khalin Yevhen
* @version 0.0.3
* @date 28.09.17
*/

#pragma once

#include "..\khalin03\BaseView.h"
#include <iostream>
#include "..\khalin03\Utilities.h"
#include <string>
#include "TimeManager.h"

using std::string;

/**
* @brief Prints data source features into an output stream if the source
* is an instance of the T class, otherwise works with incoming object
* like ScreenView class.
* @tparam T necessary type of the data source
* @author Khalin Yevhen
*/
template<class T>
class SpecView : public BaseView
{
public:

	SpecView(Button * btn, std::ostream *out) : BaseView(btn, out)
	{
	}

	virtual ~SpecView()
	{
	}

protected:

	/**
	* @TODO it's supposed to implement any behavior
	*/
	inline string getSecPrint(Button *btn, string callingMethod) {
		if (instanceof<T>(btn)) {
			return callingMethod + "data source is a KeyboardButton instance\n";
		} else {
			return callingMethod + "data source is not a KeyboardButton instance\n";
		}
	}

	virtual void SpecView::printHeader()
	{
		(*getOutputStream()) << getSecPrint(getDataSource(), "SpecView::printHeader():\n\t");
	}

	virtual void SpecView::printContent()
	{
		(*getOutputStream()) << getSecPrint(getDataSource(), "SpecView::printContent():\n\t");
	}

	virtual void SpecView::printFooter()
	{
		(*getOutputStream()) << getSecPrint(getDataSource(), "SpecView::printFooter():\n\t");
	}
};