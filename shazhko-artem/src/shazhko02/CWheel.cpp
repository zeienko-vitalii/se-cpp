/**
* @file CWheel.cpp
* @brief Содержит реализацию класса CWheel
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CWheel.h"
#define _USE_MATH_DEFINES // for C++  
#include <cmath>  

CWheel::CWheel() : diameter(0), width(0), unit(EUNIT_CENTIMETERS) { }
CWheel::CWheel(double _diameter, double _width, EUnit _unit) : diameter(_diameter), width(_width), unit(_unit) {}
CWheel::CWheel(const CWheel *wheel) {
	this->diameter = wheel->diameter;
	this->unit = wheel->unit;
	this->width = wheel->width;
}
CWheel::~CWheel() {}
double CWheel::Volume() const {
	if (diameter == 0) return 0;
	return 3.14159265358979323846*pow(diameter / 2, 2)*width; // V=πR^2/h пускай колесо это цилиндр =)
}
EUnit CWheel::GetUnit() const {
	return this->unit;
}

std::string CWheel::ConvertEUnitToString(const EUnit _unit) {
	switch (_unit)
	{
	case EUNIT_CENTIMETERS: {
		return std::string("CENTIMETERS");
	}
	case EUNIT_INCHES: {
		return std::string("INCHES");
	}
	case EUNIT_MILLIMETRES: {
		return std::string("MILLIMETRES");
	}
	default:
		return NULL;
	}
}
