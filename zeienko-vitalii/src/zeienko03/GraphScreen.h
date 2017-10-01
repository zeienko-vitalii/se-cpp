/**
 * @file GraphScreen.h
 * Declaration of the CGraphScreen class.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "Manipulator.h"
#include "Output.h"

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

/**
 * Representation of text-pseudo-graphic display of data.
 * */
class GraphScreen: public Output {

private:
	const Manipulator* iManipulator;
	static int counter;
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
	 * */
	void PrintData(const Manipulator& manipulator);

	void Display();

	~GraphScreen();

protected:
	/**
	 * Outputs the Header of an object
	 * */
	virtual void ShowHeader();
	/**
	 * Outputs the Content of an object
	 * */
	virtual void ShowContent();
	/**
	 * Outputs the Footer of an object
	 * */
	virtual void ShowFooter();


};

#endif /* GRAPHSCREEN_H_ */
