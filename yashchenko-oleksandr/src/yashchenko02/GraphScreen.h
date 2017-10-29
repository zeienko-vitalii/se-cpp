/**
 * @file GraphScreen.h
 * Declaration of class GraphScreen
 * @author Zhmaiev Anatolii
 * @version 1.0.0
 * @date 12.09.2015
 */

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

#include "Window.h"

/**
 * Prints information about window with pseudographics.
 */
class GraphScreen {
public:
	/**
	 * Constructor.
	 * @param window source object
	 */
	GraphScreen(Window* window);

	/**
	 * Empty destructor.
	 */
	~GraphScreen();

	const Window* iWindow; ///< Information about window

	/**
	 * Sets data source object.
	 * @param iWindow source object
	 */
	void setDataSource(const Window* window);

	/**
	 * Prints information about window using pseudographics.
	 * @param window
	 */
	void printData(const Window& window);

	/**
	 * Shows data from Screen::iWindow
	 */
	void showInfo();
};

#endif /* GRAPHSCREEN_H_ */
