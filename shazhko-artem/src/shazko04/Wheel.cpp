/**
* @file Wheel.cpp
* @brief Содержит реализацию класса Wheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/

#define _USE_MATH_DEFINES // for C++  
#include <cmath>  
#include "Wheel.h"

Wheel::Wheel() : diameter(0), width(0), units(EUNITS_CENTIMETERS) { }
Wheel::Wheel(double _diameter, double _width, EUnits _units) : diameter(_diameter), width(_width), units(_units) {}
Wheel::Wheel(const Wheel *_wheel) {
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

Wheel::~Wheel() {}

double Wheel::Volume() const {
	if (diameter == 0) return 0;
	return 3.14159265358979323846*pow(diameter / 2, 2)*width; // V=πR^2/h пускай колесо это цилиндр =)
}
void Wheel::SetDiameter(const double _diameter)
{
	this->diameter = _diameter;
}
void Wheel::SetWidth(const double _width)
{
	this->width = _width;
}
void Wheel::SetUnits(const EUnits _units)
{
	this->units = _units;
}

EUnits Wheel::GetUnits() const {
	return this->units;
}
double Wheel::GetDiameter() const
{
	return diameter;
}
double Wheel::GetWidth() const
{
	return this->width;
}

bool Wheel::operator==(Wheel const & arg)
{
	if (this->diameter != arg.diameter)return false;
	if (this->units != arg.units)return false;
	if (this->width != arg.width)return false;
	return true;
}
