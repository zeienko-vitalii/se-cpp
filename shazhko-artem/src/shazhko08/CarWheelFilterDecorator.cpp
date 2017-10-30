#include "CarWheelFilterDecorator.h"
/**
* @file CarWheelFilterDecorator.cpp
* @brief Реализация класса CarWheelFilterDecorator
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
CarWheelFilterDecorator::CarWheelFilterDecorator(CarWheelFilter * _carWheelFilter):carWheelFilter(_carWheelFilter){}

CarWheelFilterDecorator::~CarWheelFilterDecorator() {
	if (this->carWheelFilter) {
		delete this->carWheelFilter;
		this->carWheelFilter=NULL;
	}
}
