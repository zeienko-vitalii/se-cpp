/**
 * @file ButtonScreen.h
 * Decalaration of class ButtonScreen
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#ifndef BUTTONSCREEN_H_
#define BUTTONSCREEN_H_

#include "BaseView.h"
#include "Button.h"

/**
 * Shows information about button.
 */
class ButtonScreen: public BaseView {
public:
	ButtonScreen(Button button);
	~ButtonScreen();

	Button iButton; ///< Information about button

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

#endif /* BUTTONSCREEN_H_ */
