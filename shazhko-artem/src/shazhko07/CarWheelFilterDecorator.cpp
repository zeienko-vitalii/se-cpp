#include "CarWheelFilterDecorator.h"

CarWheelFilterDecorator::CarWheelFilterDecorator(CarWheelFilter * _carWheelFilter):carWheelFilter(_carWheelFilter){}

CarWheelFilterDecorator::~CarWheelFilterDecorator() {
	if (this->carWheelFilter) {
		delete this->carWheelFilter;
		this->carWheelFilter=NULL;
	}
}
