#pragma once
#include "ScreenCreator.hpp"
#include "NonScreen.h"
#include "DefaultScreen.h"

class CreateDefaultScreen :public ScreenCreator {
public:
	virtual ~CreateDefaultScreen(){}
	CreateDefaultScreen(Wheel *wheel) {
		this->wheel = wheel;
	}
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new DefaultScreen(wheel);
		else return new NonScreen();
	}
private:
	Wheel *wheel;
};