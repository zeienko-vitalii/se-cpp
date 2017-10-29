/**
 * @file Screen.h
 * Declaration of class Screen.
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.01
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include "Window.h"

/**
 * Shows information about window
 */
class Screen {
public:
	/**
	 * Constructor
	 * @param window sets Screen::iWindow
	 */
	Screen(Window window);

	/**
	 * Empty destructor
	 */
	~Screen();

	Window iWindow; ///< Information about window

	/**
	 * Shows data from Screen::iWindow
	 */
	void showInfo();
};

#endif // SCREEN_H_
