﻿/**
* @file CarWheel.cpp
* @brief Содержит реализацию класса CarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "CarWheel.h"
#include "SimpleStreamHelperFactory.h"


CarWheel::CarWheel(double _diameter, double _width, EUnits _unit, std::string _tireName, std::string _tireManufacturer): Wheel(_diameter, _width, _unit), tireName(_tireName), tireManufacturer(_tireManufacturer){}

CarWheel::CarWheel(const CarWheel * carWheel)
{
	this->diameter = carWheel->diameter;
	this->units = carWheel->units;
	this->width = carWheel->width;
	this->tireManufacturer = carWheel->tireManufacturer;
	this->tireName = carWheel->tireName;
}

bool CarWheel::operator==(CarWheel const& arg)
{
	if (!Wheel::operator==(arg)) return false;
	if (this->tireManufacturer != arg.tireManufacturer) return false;
	if (this->tireName != arg.tireName) return false;
	return true;
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

void CarWheel::OnStore(std::ostream & aStream)
{
	Wheel::OnStore(aStream);

	StreamHelperFactory *streamHelperFactory = new SimpleStreamHelperFactory();
	OutputStreamHelper *oStream = streamHelperFactory->CreateOutputStreamHelper(aStream);
	StreamHelperArg *data = new StreamHelperArg();

	data->nameVulue = "tireManufacturer";
	data->value= this->tireManufacturer;
	oStream->Write(data);

	data->nameVulue = "tireName";
	data->value= this->tireName;
	oStream->Write(data);

	delete streamHelperFactory;
	delete oStream;
	delete data;
}

void CarWheel::OnLoad(std::istream & aStream)
{
	Wheel::OnLoad(aStream);

	StreamHelperFactory *streamHelperFactory = new SimpleStreamHelperFactory();
	InputStreamHelper *iStream = streamHelperFactory->CreateInputStreamHelper(aStream);
	StreamHelperArg *data = NULL;
	int loadCount = 2;
	while (!iStream->isEnd() && loadCount!=0) {
		data = iStream->Read();
		if (!data)continue;
		if (std::string("tireManufacturer") == data->nameVulue) {
			this->tireManufacturer= data->value;
			loadCount--;
		}
		else if (std::string("tireName") == data->nameVulue) {
			this->tireName = data->value;
			loadCount--;
		}
		if(data)
		delete data;
	}
	delete streamHelperFactory;
	delete iStream;
}

CarWheel::~CarWheel()
{
}
