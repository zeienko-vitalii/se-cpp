/**
* @file BaseView.h
* Declaration of the BaseView class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.24
*/

#ifndef BASEVIEW_H_
#define BASEVIEW_H_

#include "Manipulator.h"
#include "ComputerManipulator.h"
#include <iostream>

/**
* The base class for all other classes which are responsible
* for output.
*/
class BaseView {
public:
	/**
	 * This constructor sets BaseView::iManipulator and BaseView::out with an appropriate arguments
	 * @param manipulator will be assigned to  BaseView::iManipulator
	 * @param os will be assigned to BaseView::out 
	 * */
	BaseView(Manipulator* manipulator, std::ostream* os);
	/**
	 * Outputs header, content and the footer.
	 * */
	void display();

	/**
	* Sets an output stream.
	* @param os is an output stream which will be assigned to BaseView::out
	**/
	void setOutputStream(std::ostream* os);

	/**
	* Gets an output stream.
	* @return BaseView::out
	*/
	std::ostream* getOutputStream();

	/**
	* Gets BaseView::iManipulator
	* @return BaseView::iManipulator
	*/
	Manipulator* getManipulator();

	/**
	* Sets BaseView::iManipulator
	* @param newManip is a Manipulator's  instance that will be assigned to iManipulator
	*/
	void setManipulator(Manipulator* newManip);

	/**
	* If memory was allocated for an BaseView`s object destructor
	* clears this memory.
	* */
	virtual ~BaseView();
protected:
	/**
	 * Outputs the Header.
	 * */
	virtual void showHeader()  = 0;
	/**
	 * Outputs the Content.
	 * */
	virtual void showContent() = 0;
	/**
	 * Outputs the Footer.
	 * */
	virtual void showFooter() = 0;
private: 
	Manipulator* iManipulator; /// Manipulator`s instance which will be printed on the screen
	std::ostream *out;			/// An ostream`s object 
};


#endif /* BASEVIEW_H_ */
