#pragma once
#include "ScreenCreator.hpp"
#include "GraphScreen.h"
#include "NonScreen.h"

class CreateGraphScreen : ScreenCreator{
public:
	CreateGraphScreen(Wheel *wheel){
		this->wheel = wheel;
	}
	BaseScreen* CreateSreen() override{
		if (wheel)
			return new GraphScreen(wheel);
		else return new NonScreen();
	}
private:
	Wheel *wheel;
};