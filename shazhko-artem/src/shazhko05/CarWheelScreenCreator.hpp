#pragma once
#include "ScreenCreator.hpp"
#include "CarWheelScreen.h"
#include "NonScreen.h"

class CreateCarWheelScreen :public ScreenCreator {
public:
	virtual ~CreateCarWheelScreen(){}
	CreateCarWheelScreen(CarWheel *wheel) {
		this->wheel = wheel;
	}
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new CarWheelScreen(wheel);
		else return new NonScreen();
	}
private:
	CarWheel *wheel;
};