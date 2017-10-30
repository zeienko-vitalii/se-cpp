#include "CarWheelFilterByManufacturer.h"
/**
* @file CarWheelFilterByManufacturer.cpp
* @brief Реализация класса CarWheelFilterByManufacturer
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
CarWheelFilterByManufacturer::CarWheelFilterByManufacturer(std::string _manufacturer, CarWheelFilterDecorator*carWheelFilterDecorator = NULL):manufacturer(_manufacturer), CarWheelFilterDecorator(carWheelFilterDecorator){}

CarWheelFilterByManufacturer::~CarWheelFilterByManufacturer(){}

bool CarWheelFilterByManufacturer::operator()(const CarWheel * carWheel)
{
	if (this->carWheelFilter)
		return (*carWheelFilter)(carWheel) && carWheel->GetTireManufacturer() == this->manufacturer;
	else
		return carWheel->GetTireManufacturer() == this->manufacturer;
}
