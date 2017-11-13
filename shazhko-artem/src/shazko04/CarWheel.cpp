/**
* @file CarWheel.cpp
* @brief Содержит реализацию класса CarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CarWheel.h"

CarWheel::CarWheel(double _diameter, double _width, EUnits _unit, std::string _tireName, std::string _tireManufacturer): Wheel(_diameter, _width, _unit), tireName(_tireName), tireManufacturer(_tireManufacturer){}

CarWheel::CarWheel(const CarWheel * carWheel)
{
	this->diameter = carWheel->diameter;
	this->units = carWheel->units;
	this->width = carWheel->width;
	this->tireManufacturer = carWheel->tireManufacturer;
	this->tireName = carWheel->tireName;
}

void CarWheel::SetTireName(const std::string _tireName)
{
	this->tireName = _tireName;
}

void CarWheel::SetTireManufacturer(const std::string _tireManufacturer)
{
	this->tireManufacturer = _tireManufacturer;
}

std::string CarWheel::GetTireName() const
{
	return this->tireName;
}

std::string CarWheel::GetTireManufacturer() const
{
	return this->tireManufacturer;
}

CarWheel & CarWheel::operator=(CarWheel & _wheel)
{
	this->tireName = _wheel.tireName;
	this->tireManufacturer = _wheel.tireManufacturer;
	return *this;
}

bool CarWheel::operator==(CarWheel const & arg)
{
	if (!Wheel::operator==(arg)) return false;
	if (this->tireManufacturer != arg.tireManufacturer) return false;
	if (this->tireName != arg.tireName) return false;
	return true;
}
