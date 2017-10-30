#pragma once
#include "CarWheelFilterDecorator.h"
#include <stdlib.h>

class CarWheelFilterByDiameter:public CarWheelFilterDecorator {
public:
	CarWheelFilterByDiameter(double _diameter, CarWheelFilterDecorator*carWheelFilterDecorator);
	virtual ~CarWheelFilterByDiameter();
	virtual  bool operator()(const CarWheel *carWheel);
private:
	double diameter;
};