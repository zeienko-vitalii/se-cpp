/**
* @file ManipulatorView.h
* Declaration of the ManipulatorView class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.09.09
*/

#ifndef MANIPULATOR_VIEW_H_
#define MANIPULATOR_VIEW_H_
#include "Manipulator.h"
#include "BaseView.h"
/** This class provides an output information about manipulator */
class ManipulatorView : public BaseView {
public:
	/**
	 * Constructor takes constant Manipulator`s object and assigns if to ManipulatorView::manipulator.
	 * @param manipulator this object`s information will be printed on the screen.
	 * @param os is the type of an output stream 
	 * */
	ManipulatorView(Manipulator* manipulator, std::ostream* os);
	

	/**
	 * Outputs ManipulatorView::manipulator object.
	 * */
	void show();

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

	/**
	 * Destructor. Destroys object and  frees the memory which was allocated.
	 * */
	virtual ~ManipulatorView();
protected:
	/**
	* Constructor takes constant Manipulator`s object and assigns if to ManipulatorView::manipulator.
	* @param manipulator this object`s information will be printed on the screen.
	* @param os is the type of an output stream
	* */
	ManipulatorView(ComputerManipulator* manipulator, std::ostream* os);
};

#endif /* MANIPULATOR_VIEW_H_ */
