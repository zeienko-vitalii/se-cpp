/**
 * @file CScreen.cpp
 * Реализация класса CScreen
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#include "Screen.h"
#include "Button.h"
#include <iostream>

using namespace std;

CScreen::CScreen(void)
{
	iButton.iOnState = false;
	iButton.iShape = iButton.RECTANGULAR;
}

CScreen::CScreen(CButton aButton) {
	setContent(aButton);
}

CScreen::~CScreen()
{
//	OutputDebugString("Destructor  is called! " );
}

void CScreen::setContent(CButton aButton)
{
	iButton.iOnState = aButton.iOnState;
	iButton.iShape = aButton.iShape;
}

void CScreen::showContent(void)
{

	if(iButton.iShape == 1) {

		cout << "Shape : Oval "  <<endl;

	}
	if(iButton.iShape == 0) {
		cout << "Shape : Rectangular" <<endl;
	}

	cout << "On State  : " << iButton.iOnState <<endl;
}
