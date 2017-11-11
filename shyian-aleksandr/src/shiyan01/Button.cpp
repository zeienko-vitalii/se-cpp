/**
 * @file Button.cpp
 * Реализация класса Button
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#include "Button.h"

CButton::CButton()
{
	iOnState = false;
	iShape = RECTANGULAR;
}

CButton::CButton(bool aOnState, Shape aShape)
{
	setParameters(aOnState, aShape);
}

CButton::CButton(const CButton& aButton)
{
	setParameters(aButton.iOnState,aButton.iShape);
}

CButton::~CButton()
{
//	OutputDebugString("Destructor  is called! " );
}

void CButton::setParameters(bool aOnState, Shape aShape)
{
	iOnState = aOnState;
	iShape = aShape;
}
