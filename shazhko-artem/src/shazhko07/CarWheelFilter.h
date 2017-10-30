#pragma once
#include "CarWheel.h"

class CarWheelFilter abstract{
public:
	virtual ~CarWheelFilter(){}
	virtual  bool operator()(const CarWheel *carWheel)=0;
};