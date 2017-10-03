/**
 * @file GraphScreen.h
 * Declaration of the GraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.12
 */

#include "Manipulator.h"

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

/**
 * Representation of text-pseudo-graphic display of data.
 * */
class GraphScreen {

private:
	const Manipulator* iManipulator;
public:

	/**
	 * Constructor with parameter. Sets GraphScreen::iManipulator
	 * @param manip is a manipulator which will be used to set GraphScreen::iManipulator
	 * */
	GraphScreen(const Manipulator& manip);

	/**
	 * Changes a source object.
	 * @param sManipulator is a source manipulator, which will be used to set GraphScreen::iManipulator
	 * */
	void SetDataSource(const Manipulator& sManipulator);

	/**
	 * Displays the information about GraphScreen::iManipulator.
	 * @param manipulator will be printed on the screen.
	 * */
	void PrintData(const Manipulator& manipulator);

	/**
	* Calls the PrintData which takes a parameter manipulator and outputs it.
	* */
	void PrintData();

	~GraphScreen();
};

#endif /* GRAPHSCREEN_H_ */
