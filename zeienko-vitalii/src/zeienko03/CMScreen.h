/**
* @file CMScreen.h
* Declaration of the CMScreen class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.25
*/
#include "ComputerManipulator.h"
#include "Screen.h"

#ifndef CMSCREEN_H_
#define CMSCREEN_H_

/**
* This class provides output of the CpmputerMnipulator`s information
*/
class CMScreen: public Screen {
private:
	/// ComputerManipulator`s instance which information will be printed on the screen.
	const ComputerManipulator* CManipulator;
public:

	/**
	* Constructor which is getting a constant ComputerManipulator object
	* @param CManip will set the object Screen::manipulator
	* */
	CMScreen(const ComputerManipulator& CManip);

	/**
	 * Outputs ComputerManipulator's object
	 * */
	virtual void Display();
	
	/**
	* If memory was allocated for an Output`s object destructor
	* clears this memory.
	* */
	~CMScreen();
protected:
	/**
	 * Outputs the Header of the CMScreen::CMnipulator
	 * */
	virtual void ShowHeader(); 
	/**
	 * Outputs the Content of  the CMScreen::CMnipulator
	 * */
	virtual void ShowContent();
	/**
	 * Outputs the Footer of  the CMScreen::CMnipulator
	 * */
	virtual void ShowFooter();
};

#endif /* CMSCREEN_H_ */
