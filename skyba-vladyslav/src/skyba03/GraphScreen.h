/**
 * @file GraphScreen.h
 * Graphical output of Room object.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include "BaseView.h"
#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_
/**
 * Class which views Room object with use of pseudo-graphic.
 */
class GraphScreen: public BaseView {
private:

	const Room* room;



public:
	/**
	* Default constructor, room set to default.
	*/
	GraphScreen();

	/**
	* Sets data to interior object of this class.
	*/
	void setDataSource(const Room *room);

	/**
	* Prints data from data object.
	*/
	void printData(const Room& room);

	/**
	* Prints data from interior object of this class.
	*/
	void printData();


	virtual void showHeader();

	virtual void showContent();

	virtual void showFooter();

	virtual ~GraphScreen();
};

#endif /* GRAPHSCREEN_H_ */
