/*
 * @file MouseScreen.h
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Mouse.h"
#include "Screen.h"
#ifndef MOUSESCREEN_H_
#define MOUSESCREEN_H_

class MouseScreen: public Screen {
private:
	Mouse data;

public:
	MouseScreen();

	MouseScreen(Mouse data);

	void showMouse();

	virtual void showHeader() ;

	virtual void showContent();

	virtual void showFooter();

	virtual ~MouseScreen();
};

#endif /* MOUSESCREEN_H_ */
