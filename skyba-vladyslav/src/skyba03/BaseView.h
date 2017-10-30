/**
 * @file BaseView.h
 * Contains base class for viewing of Room objects.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include "Room.h"
#ifndef BASEVIEW_H_
#define BASEVIEW_H_
/**
 * Class which views information of Room object.
 * room - object which must be viewed.
 */
class BaseView {

protected:
	//Object to be viewed.
	Room *room;
	/**
	* Outputs header of information.
	*/
	virtual void showHeader() = 0;
	/**
	 * Outputs main information about room.
	*/
	virtual void showContent() = 0;
	/**
	* Outputs footer of information.
	*/
	virtual void showFooter() = 0;

public:
	/**
	* Default constructor, room set to default.
	*/
	BaseView();
	/**
	* Constructor for all fields.
	*/
	BaseView(Room *room);
	/**
	*Outputs information about `room` into console.
	*/
	void Display();

	virtual ~BaseView();


};

#endif /* BASEVIEW_H_ */
