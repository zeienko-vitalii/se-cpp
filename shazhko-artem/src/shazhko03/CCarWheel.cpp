/**
* @file CCarWheel.cpp
* @brief Содержит реализацию класса CCarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CCarWheel.h"

CCarWheel::CCarWheel(double _diameter, double _width, EUnits _unit, std::string _tireName, std::string _tireManufacturer): CWheel(_diameter, _width, _unit), tireName(_tireName), tireManufacturer(_tireManufacturer){}

CCarWheel::CCarWheel(const CCarWheel * carWheel)
{
	this->diameter = carWheel->diameter;
	this->units = carWheel->units;
	this->width = carWheel->width;
	this->tireManufacturer = carWheel->tireManufacturer;
	this->tireName = carWheel->tireName;
}

void CCarWheel::SetTireName(const std::string _tireName)
{
	this->tireName = _tireName;
}

void CCarWheel::SetTireManufacturer(const std::string _tireManufacturer)
{
	this->tireManufacturer = _tireManufacturer;
}

std::string CCarWheel::GetTireName() const
{
	return this->tireName;
}

std::string CCarWheel::GetTireManufacturer() const
{
	return this->tireManufacturer;
}

bool CCarWheel::operator==(CCarWheel const& arg)
{
	if (!CWheel::operator==(arg)) return false;
	if(this->tireManufacturer!=arg.tireManufacturer) return false;
	if(this->tireName!=arg.tireName) return false;
	return true;
}
