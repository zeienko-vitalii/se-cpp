#pragma once
#include "CarWheelFilter.h"

class CarWheelFilterDecorator :public CarWheelFilter {
public:
	CarWheelFilterDecorator(CarWheelFilter *_carWheelFilter);
	virtual ~CarWheelFilterDecorator();
	virtual  bool operator()(const CarWheel *carWheel)=0;
protected:
	CarWheelFilter *carWheelFilter;
};