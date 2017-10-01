/**
* @file CScreen.h
* Declaration of the CScreen class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.09.09
*/

#ifndef SCREEN_H_
#define SCREEN_H_
#include "Manipulator.h"

/** This class provides an output information about manipulator */
class Screen {
private:

	Manipulator* manipulator;
public:
	/// Counter of the printed objects
	int static counter;

	/**
	 * Default constructor
	 * */
	Screen(const Manipulator& manipulator);

	/**
	 * Outputs CManipulator's object
	 * */
	void Show();

	/**
	 * Destructor
	 * */
	~Screen();
};

#endif /* SCREEN_H_ */
