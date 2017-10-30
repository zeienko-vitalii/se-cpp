#include "CarWheelFilterByDiameter.h"
/**
* @file CarWheelFilterByDiameter.cpp
* @brief Реализация класса CarWheelFilterByDiameter
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
CarWheelFilterByDiameter::CarWheelFilterByDiameter(double _diameter, CarWheelFilterDecorator*carWheelFilterDecorator):diameter(_diameter), CarWheelFilterDecorator(carWheelFilterDecorator){}

CarWheelFilterByDiameter::~CarWheelFilterByDiameter(){}

bool CarWheelFilterByDiameter::operator()(const CarWheel * carWheel)
{
	if(this->carWheelFilter)
		return (*carWheelFilter)(carWheel) && carWheel->GetDiameter()==this->diameter;
	else
		return carWheel->GetDiameter() == this->diameter;
}
