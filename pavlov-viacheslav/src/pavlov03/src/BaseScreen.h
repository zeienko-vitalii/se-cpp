/*
 * BaseScreen.h
 *
 *  Created on: 20 ����. 2017 �.
 *      Author: JR_Rider
 */

#pragma once

class BaseScreen {
protected:
	Window window;
	virtual void showHeader();
	virtual void showContent();
	virtual void showFooter();
public:
	BaseScreen();
	BaseScreen(Window window);
	virtual ~BaseScreen();
	void Display();
};
