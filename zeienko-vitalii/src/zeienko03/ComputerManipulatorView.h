/**
* @file ComputerManipulatorView.h
* Declaration of the ComputerManipulatorView class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.25
*/
#include "ComputerManipulator.h"
#include "ManipulatorView.h"

#ifndef COMPUTER_MANIPULATOR_VIEW_H_
#define COMPUTER_MANIPULATOR_VIEW_H_

/**
* This class provides output of the CpmputerMnipulator`s information
*/
class ComputerManipulatorView: public ManipulatorView {
private:
	/// ComputerManipulator`s instance which information will be printed on the screen.
	ComputerManipulator CManipulator;
public:

	/**
	* Constructor which is getting a constant ComputerManipulator object
	* @param CManip will set the object ManipulatorView::manipulator
	* */
	ComputerManipulatorView(const ComputerManipulator& CManip, std::ostream* os);

	/**
	 * Outputs ComputerManipulator's object
	 * */
	//void display();
	
	/**
	* If memory was allocated for an BaseView`s object destructor
	* clears this memory.
	* */
	~ComputerManipulatorView();
protected:
	/**
	 * Outputs the Header of the ComputerManipulatorView::CMnipulator
	 * */
	virtual void showHeader(); 
	/**
	 * Outputs the Content of  the ComputerManipulatorView::CMnipulator
	 * */
	virtual void showContent();
	/**
	 * Outputs the Footer of  the ComputerManipulatorView::CMnipulator
	 * */
	virtual void showFooter();
};

#endif /* COMPUTER_MANIPULATOR_VIEW_H_ */
