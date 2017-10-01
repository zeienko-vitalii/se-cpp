/**
 * @file Screen.h
 * Declaration of the Screen class.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */

#include "Manipulator.h"
#include "Output.h"

#ifndef SCREEN_H_
#define SCREEN_H_

/** This class provides an output information about manipulator */
class Screen: public Output {
private:
	/// Manipulator`s instance which information will be printed on the screen.
	Manipulator* manipulator;
public:
	/// Counter of the printed objects
	int static counter;

	/**
	* It`s a deafault constructor explicitly declaring.
	*/
	Screen();

	/**
	 * Constructor which is getting a constant Manipulator object
	 * @param manipulator will set the object Screen::manipulator
	 * */
	Screen(const Manipulator& manipulator);

	/**
	 * Outputs Manipulator's object in such order: header, content and the footer.
	 * */
	virtual void Display();

	/**
	* If memory was allocated for an Output`s object destructor
	* clears this memory.
	* */
	virtual ~Screen();

protected:
	/**
	 * Outputs the Header of the Screen::manipulator
	 * */
	virtual void ShowHeader();
	/**
	 * Outputs the Content of the Screen::manipulator
	 * */
	virtual void ShowContent();
	/**
	 * Outputs the Footer of the Screen::manipulator
	 * */
	virtual void ShowFooter();

};

#endif /* SCREEN_H_ */
