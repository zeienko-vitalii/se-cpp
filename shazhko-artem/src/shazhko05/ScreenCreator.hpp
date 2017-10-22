#pragma once
#include "BaseScreen.h"
#include "Wheel.h"

class ScreenCreator abstract{
public:
	virtual BaseScreen* CreateSreen() = 0;
	virtual	~ScreenCreator(){}
};