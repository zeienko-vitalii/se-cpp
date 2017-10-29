/**
 * @file Screen.h
 * Declaration of class Screen.
 * @author Ященко Олександр
 * @version 0.0.3
 * @date 2017.10.20
 */

#include "Window.h"
#include "BaseView.h"

#ifndef SCREEN_H_
#define SCREEN_H_

/**
 * Shows information about window
 */
class Screen: public BaseView {
public:
	/**
	 * Constructor
	 * @param window sets Screen::iWindow
	 */
	Screen(Window window);

	/**
	 * Empty destructor.
	 */
	~Screen();

	Window iWindow; ///< Information about window

	/**
	 * Shows header for information.
	 */
	final void showHeader() ovveride;

	/**
	 * Shows main contentof information.
	 */
	final void showContent() ovveride;

	/**
	 * Shows footer of information.
	 */
	final void showFooter() ovveride;
};

#endif // SCREEN_H_
