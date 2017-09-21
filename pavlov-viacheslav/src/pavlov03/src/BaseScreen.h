/**
 * @file BaseScreen.h
 * Contains base class for viewing of Window objects.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#pragma once

#include "Window.h"
/**
 * Class which views information of Window object.
 * window - object which must be viewed.
 */
class BaseScreen {
protected:
	///Object to be viewed.
	Window data;
	/**
	 * Outputs header of information.
	 */
	virtual void showHeader();
	/**
	 * Outputs main information about window.
	 */
	virtual void showContent();

	/**
	 * Outputs footer of information.
	 */
	virtual void showFooter();
public:
	/**
	 * Default constructor, window set to default.
	 */
	BaseScreen();
	/**
	 * Constructor for all fields.
	 * @param window - window which must be set
	 */
	BaseScreen(Window window);
	virtual ~BaseScreen();
	/**
	 *Outputs information about `window` into console.
	 */
	void Display();

};
