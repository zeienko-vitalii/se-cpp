/**
 * @file HousingRoom.h
 * Contains class for viewing of housing room objects.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include "HousingRoom.h"
#include "Screen.h"
#ifndef HOUSINGROOMSCREEN_H_
#define HOUSINGROOMSCREEN_H_
/**
 * Class which views information of Button object.
 */
class HousingRoomScreen: public Screen {

public:
	/**
	* Default constructor, housing room set to default.
	*/
	HousingRoomScreen();
	/**
	* Constructor for all fields.
	*/
	HousingRoomScreen(HousingRoom* housingRoom);
	/**
	*Outputs information about `housing room` into console.
	*/
	void showHousingRoom();
	/**
	* Outputs header of information.
	*/
	virtual void showHeader() ;
	/**
	* Outputs main information about window.
	*/
	virtual void showContent();
	/**
	* Outputs footer of information.
	*/
	virtual void showFooter();

	virtual ~HousingRoomScreen();
};

#endif /* HOUSINGROOMSCREEN_H_ */
