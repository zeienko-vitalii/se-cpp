/**
* @file GraphView.h
* @brief Contains GraphView class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

#include "BaseView.h"

/**
* @brief Prints graphical representation of the data source into an output stream
*/
class GraphView : BaseView
{
public:

	/**
	* @param btn data source
	* @param out an output stream for printing data source
	*/
	GraphView(Button *btn, std::ostream *out);

	virtual ~GraphView();
protected:
	virtual void printHeader();
	virtual void printContent();
	virtual void printFooter();
};