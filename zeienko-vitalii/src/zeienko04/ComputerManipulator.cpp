/**
* @file  ComputerManipulator.cpp
* Realization of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.09
*/

#include "ComputerManipulator.h"
#include <cstring>
ComputerManipulator::ComputerManipulator() :
	Manipulator(), connectionInterface("USB"),sensorType(SensorType::Laser) {
}

ComputerManipulator::ComputerManipulator(int amountOfBtns, Type type,
	char* cInterface, SensorType sType) :
	Manipulator(amountOfBtns, type), connectionInterface(cInterface), sensorType(SensorType::Laser) {
}

ComputerManipulator::ComputerManipulator(const ComputerManipulator& CManip) :	
	Manipulator(CManip.getAmountOfButtons(), CManip.typeOfManipulator),
	connectionInterface(CManip.connectionInterface), sensorType(CManip.sensorType) {}

char* ComputerManipulator::getConnectionInterface() const {
	return connectionInterface;
}

char* ComputerManipulator::getSensorType() const {
	if (sensorType == Balling) {
		return "Balling";
	}
	else if (sensorType == Laser) {
		return "Laser";
	}
	else if (sensorType == Optical) {
		return "Optical";
	}
}

void ComputerManipulator::setConnectionInterface(char* CInterface) {
	this->connectionInterface = CInterface;
}

void ComputerManipulator::setSensorType(char* SType) {
	if (SType == "Balling") {
		this->sensorType = SensorType::Balling;
	}
	else if (SType == "Laser") {
		this->sensorType = SensorType::Laser;
	}
	else if (SType == "Optical") {
		this->sensorType = SensorType::Optical;
	}
}

void ComputerManipulator::setSensorType(int sensorTypeNumericValue)
{
	switch (sensorTypeNumericValue) {
	case 0:
		sensorType = SensorType::Balling;
		break;
	case 1:
		sensorType = SensorType::Optical;
		break;
	case 2:
		sensorType = SensorType::Laser;
		break;
	default: sensorType = SensorType::Balling;
		break;
	}
	

}


inline bool ComputerManipulator::operator == (const ComputerManipulator& computerManipulator) const {
	return typeOfManipulator == computerManipulator.typeOfManipulator &&
		getAmountOfButtons() == computerManipulator.getAmountOfButtons() &&
		getConnectionInterface() == computerManipulator.getConnectionInterface() &&
		(strcmp(getSensorType(), computerManipulator.getSensorType()) == 0);
}

/*inline bool ComputerManipulator::operator == (const Manipulator& manipulator) const {
	return (this->typeOfManipulator == manipulator.typeOfManipulator &&
		this->getAmountOfButtons() == manipulator.getAmountOfButtons());
}
*/
ComputerManipulator& ComputerManipulator::operator = (int sensorTypeNumericValue) {
	const int MIN_NUMERIC_VALUE_OF_SENSOR_TYPE = 0;
	const int MAX_NUMERIC_VALUE_OF_SENSOR_TYPE = 2;
	if (sensorTypeNumericValue < MIN_NUMERIC_VALUE_OF_SENSOR_TYPE ||
		sensorTypeNumericValue > MAX_NUMERIC_VALUE_OF_SENSOR_TYPE) {
		return *this;
	}
	else {
		this->setSensorType(sensorTypeNumericValue);
		return *this;
	}

}

ComputerManipulator::~ComputerManipulator() {

}
