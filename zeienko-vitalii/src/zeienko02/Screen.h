/**
* @file Screen.h
* Declaration of the Screen class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.09.09
*/

#ifndef SCREEN_H_
#define SCREEN_H_
#include "Manipulator.h"

/** This class provides an output information about manipulator */
class Screen {
public:
	const Manipulator* manipulator;

	/**
	 * Constructor takes constant Manipulator`s object and assigns if to Screen::manipulator.
	 * @param manipulator this object`s information will be printed on the screen.
	 * */
	Screen(const Manipulator& manipulator);

	/**
	 * Outputs Screen::manipulator object.
	 * */
	void Show();

	/**
	 * Destructor. Destroys object and  frees the memory which was allocated.
	 * */
	~Screen();
};

#endif /* SCREEN_H_ */
