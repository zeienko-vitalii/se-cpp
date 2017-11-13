/**
* @file Wheel.cpp
* @brief Содержит реализацию класса Wheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/

#include "Wheel.h"
#define _USE_MATH_DEFINES // for C++  

#include "SimpleStreamHelperFactory.h"
#include <sstream>
namespace Wheel {
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
	bool Wheel::operator==(const Wheel &arg)
	{
		if (this->diameter != arg.diameter)return false;
		if (this->units != arg.units)return false;
		if (this->width != arg.width)return false;
		return true;
	}

	void Wheel::OnStore(std::ostream & aStream)
	{
		using namespace Stream;
		StreamHelper::StreamHelperFactory *streamHelperFactory = new StreamHelper::SimpleStreamHelperFactory();
		StreamHelper::OutputStreamHelper *oStream = streamHelperFactory->CreateOutputStreamHelper(aStream);
		StreamHelper::StreamHelperArg *data = new StreamHelper::StreamHelperArg();
		std::stringstream ss;

		data->nameVulue = "BEGIN";
		data->value = "Wheel";
		oStream->Write(data);

		data->nameVulue = "diameter";
		ss << this->diameter;
		ss >> data->value; ss.clear();
		oStream->Write(data);

		data->nameVulue = "units";
		ss << this->units;
		ss >> data->value; ss.clear();
		oStream->Write(data);

		data->nameVulue = "width";
		ss << this->width;
		ss >> data->value; ss.clear();
		oStream->Write(data);

		delete streamHelperFactory;
		delete oStream;
		delete data;
	}


	void Wheel::OnLoad(std::istream & aStream)
	{
		using namespace Stream;
		StreamHelper::StreamHelperFactory *streamHelperFactory = new StreamHelper::SimpleStreamHelperFactory();
		StreamHelper::InputStreamHelper *iStream = streamHelperFactory->CreateInputStreamHelper(aStream);
		StreamHelper::StreamHelperArg *data = NULL;
		std::stringstream ss;
		int loadCount = 3;
		while (!iStream->isEnd() && loadCount != 0) {
			data = iStream->Read();
			if (!data)continue;
			if (std::string("diameter") == data->nameVulue) {
				ss << data->value.c_str();
				ss >> this->diameter;
				ss.str(""); ss.clear();
				loadCount--;
			}
			else if (std::string("width") == data->nameVulue) {
				ss << data->value.c_str();
				ss >> this->width;
				ss.str(""); ss.clear();
				loadCount--;
			}
			else if (std::string("units") == data->nameVulue) {
				ss << data->value.c_str();
				int iValue = 0;
				ss >> iValue;
				this->units = (EUnits)iValue;
				ss.str(""); ss.clear();
				loadCount--;
			}
			if (data)
				delete data;
		}
		delete streamHelperFactory;
		delete iStream;
		if (loadCount != 0)throw "Don't found full \"CarWheel\" data.";
	}

	Wheel::~Wheel() {
	}

	double Wheel::Volume() const {
		if (diameter == 0) return 0;
		return 3.14159*pow(diameter / 2, 2)*width; // V=πR^2/h пускай колесо это цилиндр =)
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
}