/**
 * @file GraphScreen.h
 * Declaration of class GraphScreen
 * @author Ященко Олександр
 * @version 0.0.3
 * @date 2017.10.20
 */

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

#include "Window.h"
#include "BaseView.h"

/**
 * Prints information about window with pseudographics.
 */
class GraphScreen: public BaseView {
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

#endif /* GRAPHSCREEN_H_ */
