#pragma once
#include "CarWheelFilterDecorator.h"
#include <string.h>

class CarWheelFilterByManufacturer: public CarWheelFilterDecorator {
public:
	CarWheelFilterByManufacturer(std::string _manufacturer, CarWheelFilterDecorator*carWheelFilterDecorator);
	virtual ~CarWheelFilterByManufacturer();
	virtual  bool operator()(const CarWheel *carWheel);
private:
	std::string manufacturer;
};