/**
 * @file Screen.h
 * Contains class for viewing of Room objects.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#ifndef SCREEN_H_
#define SCREEN_H_
#include "BaseView.h"
/**
 * Class which views information of Room object.
 */
class Screen: public BaseView {


public:
	/**
    * Default constructor
    */
	Screen();
	/**
	* Constructor for all fields.
	*/
	Screen(Room* room);

	/**
    *Outputs information about `Room` into console.
    */
	void dataOutput();
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



	virtual ~Screen();
};

#endif /* SCREEN_H_ */
