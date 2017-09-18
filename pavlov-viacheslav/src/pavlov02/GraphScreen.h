/**
 * @file GraphScreen.h
 * Graphical output of Window object.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */

#pragma once

/**
 * Class which views Window object with use of pseudo-graphic.
 * data - object which must be viewed.
 */
class GraphScreen {
private:
	const Window* data;
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
	void setDataSource(const Window* data);

	/**
	 * Prints data from data object.
	 * @param data - object to be viewed
	 */
	void printData(const Window& data);

	/**
	 * Prints data from interior object of this class.
	 */
	void printData();
};

