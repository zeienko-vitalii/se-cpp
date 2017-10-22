/**
* @file  ComputerManipulator.cpp
* Realization of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.09
*/

#include "ComputerManipulator.h"
#include <cstring>
#include <string>
#include <sstream>
using std::string;
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

ComputerManipulator::~ComputerManipulator() { }

void ComputerManipulator::toSave(std::ofstream& os) {
	os << "Type: " << this->getType() << std::endl;
	os << "Sensor_type: " << this->getSensorType() << std::endl;
	os << "Amount_of_buttons: " << this->getAmountOfButtons() << std::endl;
	os << "Connection_interface: " << this->getConnectionInterface() << std::endl;
	
}

void ComputerManipulator::toLoad(std::ifstream& in) {
	string line;
	string label;
	while (!in.eof()) {
		getline(in, line);
		std::stringstream ss(line);
		ss >> label;
		if (label.compare("Type:") == 0) {
			char* restoreType = new char[12];
			ss >> restoreType;
			this->setType(restoreType);
			delete restoreType;
		}
		else if (label.compare("Sensor_type:") == 0) {
			char* restoreSensorType = new char[12];
			ss >> restoreSensorType;
			this->setSensorType(restoreSensorType);
			delete restoreSensorType;
		}
		else if (label.compare("Amount_of_buttons:") == 0) {
			unsigned restoreAmountOfButtons;
			ss >> restoreAmountOfButtons;
			this->setAmountOfButtons(restoreAmountOfButtons);
		}
		else if (label.compare("Connection_interface:") == 0) {
			char* restoreConnectionInterface = new char[16];
			ss >> restoreConnectionInterface;
			this->setConnectionInterface(restoreConnectionInterface);
			delete restoreConnectionInterface;
		}
		
	}
}