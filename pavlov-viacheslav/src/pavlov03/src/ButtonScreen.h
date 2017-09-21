/**
 * @file ButtonScreen.h
 * Contains class for viewing of Button objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once

#include "Button.h"
#include "Screen.h"

/**
 * Class which views information of Button object.
 * button - object which must be viewed.
 */
class ButtonScreen: public Screen {
private:
	///object which must be viewed.
	Button data;
public:
	/**
	 * Default constructor, button set to default.
	 */
	ButtonScreen();
	virtual ~ButtonScreen();

	/**
	 * Constructor for all fields.
	 * @param button - button which must be set
	 */
	ButtonScreen(Button button);

	/**
	 * Sets information into internal button object of this class.
	 * @param button - object to be set.
	 */
	void setButton(Button button);
	/**
	 *Outputs information about `button` into console.
	 */
	void viewButton();
	/**
	 * Outputs footer of information.
	 */
	virtual void showHeader() override;
	/**
	 * Outputs main information about window.
	 */
	virtual void showContent() override;
	/**
	 * Outputs header of information.
	 */
	virtual void showFooter() override;
};
