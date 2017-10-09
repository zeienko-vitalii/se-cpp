/*
 * AutoWheelScreen.h
 *
 *  Created on: 8 окт. 2017 г.
 *      Author: Viktotia
 */

#ifndef AUTOWHEELSCREEN_H_
#define AUTOWHEELSCREEN_H_

#include "AutoWheel.h"
#include "Screen.h"

class AutoWheelScreen: public Screen {
public:
	AutoWheelScreen();
	AutoWheelScreen(AutoWheel* autoWheel);

	virtual ~AutoWheelScreen();


	virtual void ShowHeader();
	virtual void ShowContent();
	virtual void ShowFooter();
};

#endif /* AUTOWHEELSCREEN_H_ */
