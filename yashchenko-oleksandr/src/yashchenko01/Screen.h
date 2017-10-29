/**
* @file Screen.h
* Declaration of class Screen.
* @author Ященко Олександр
* @version 0.0.1
* @date 2017.09.15
*/

#include "Window.h"
#ifndef SCREEN_H_
#define SCREEN_H_

/**
 * Shows information about window
 */
class Screen{
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
