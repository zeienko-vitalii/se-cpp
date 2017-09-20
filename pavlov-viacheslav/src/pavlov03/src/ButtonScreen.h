/*
 * ButtonScreen.h
 *
 *  Created on: 21 сент. 2017 г.
 *      Author: JR_Rider
 */

#pragma once

class ButtonScreen {
private:
	Button button;
public:
	ButtonScreen();
	virtual ~ButtonScreen();
	void setButton(Button button);
	void viewButton();
};
