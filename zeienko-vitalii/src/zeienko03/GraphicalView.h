/**
 * @file GraphicalView.h
 * Declaration of the GraphicalView class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.12
 */

#include "Manipulator.h"
#include "BaseView.h"
#include <iostream>

#ifndef GRAPHICALVIEW_H_
#define GRAPHICALVIEW_H_

/**
 * Representation of text-pseudo-graphic display of data.
 * */
class GraphicalView : public BaseView {
public:

	/**
	 * Constructor with parameter. Sets BaseView::iManipulator
	 * @param manipulator will be assigned to  BaseView::iManipulator
	 * @param os is the type of an output stream 
	 * */
	GraphicalView(const Manipulator& manipulator, std::ostream* os);

	/**
	 * Changes a source object.
	 * @param sManipulator is a source manipulator, which will be used to set BaseView::iManipulator
	 * */
	void setDataSource(const Manipulator& sManipulator);

	/**
	* Calls the printData which takes a parameter manipulator and outputs it.
	* */
	void printData();

	~GraphicalView();
protected:
	/**
	* Outputs the Header.
	* */
	void showHeader();
	/**
	* Outputs the Content.
	* */
	void showContent();
	/**
	* Outputs the Footer.
	* */
	void showFooter();

private:
	/**
	* Displays the information about GraphicalView::iManipulator.
	* @param manipulator will be printed on the screen.
	* */
	void printData(const Manipulator& manipulator);

};

#endif /* GRAPHSCREEN_H_ */
