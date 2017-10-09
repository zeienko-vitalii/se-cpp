/**
 * @file GraphScreen.h
 * Graphical output of Window object.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once

#include "Window.h"
#include "BaseScreen.h"
/**
 * Class which views Window object with use of pseudo-graphic.
 * data - object which must be viewed.
 */
class GraphScreen: public BaseScreen {
public:
	/**
	 * Default constructor, window set to default.
	 */
	GraphScreen();
	virtual ~GraphScreen();

	/**
	 * Sets data to interior object of this class.
	 * @param data - object to be viewed
	 */
	void setDataSource(Window* data);

	/**
	 * Prints data from data object.
	 * @param data - object to be viewed
	 */
	void printData(const Window& data);

	static void onTimerAction(Window data);
	/**
	 * Prints data from interior object of this class.
	 */
	void printData();

	virtual void showHeader() override;

	virtual void showContent() override;

	virtual void showFooter() override;

};

