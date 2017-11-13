/**
* @file CWheel.cpp
* @brief Содержит реализацию класса CWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/

#include "CWheel.h"
#define _USE_MATH_DEFINES // for C++  
#include <cmath>  
#include "CWheel.h"

CWheel::CWheel() : diameter(0), width(0), units(EUNITS_CENTIMETERS) { }
CWheel::CWheel(double _diameter, double _width, EUnits _units) : diameter(_diameter), width(_width), units(_units) {}
CWheel::CWheel(const CWheel *_wheel) {
	if (_wheel == NULL) {
		this->diameter = 0;
		this->units = EUNITS_CENTIMETERS;
		this->width = 0;
		return;
	}
	this->diameter = _wheel->diameter;
	this->units = _wheel->units;
	this->width = _wheel->width;
}

CWheel::~CWheel() {}

double CWheel::Volume() const {
	if (diameter == 0) return 0;
	return 3.14159265358979323846*pow(diameter / 2, 2)*width; // V=πR^2/h пускай колесо это цилиндр =)
}
void CWheel::SetDiameter(const double _diameter)
{
	this->diameter = _diameter;
}
void CWheel::SetWidth(const double _width)
{
	this->width = _width;
}
void CWheel::SetUnits(const EUnits _units)
{
	this->units = _units;
}

EUnits CWheel::GetUnits() const {
	return this->units;
}
double CWheel::GetDiameter() const
{
	return diameter;
}
double CWheel::GetWidth() const
{
	return this->width;
}

std::string CWheel::ConvertEUnitToString(const EUnits _units) {
	switch (_units)
	{
	case EUNITS_CENTIMETERS: {
		return std::string("CENTIMETERS");
	}
	case EUNITS_INCHES: {
		return std::string("INCHES");
	}
	case EUNITS_MILLIMETRES: {
		return std::string("MILLIMETRES");
	}
	default:
		return NULL;
	}
}

bool CWheel::operator==(CWheel const & arg)
{
	if (this->diameter != arg.diameter)return false;
	if (this->units != arg.units)return false;
	if(this->width!=arg.width)return false;
	return true;
}
