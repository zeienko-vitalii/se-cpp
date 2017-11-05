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
	Manipulator(), sensorType(SensorType::Laser) {
	setConnectionInterface("USB");
}

ComputerManipulator::ComputerManipulator(int amountOfBtns, Type type,
	char* cInterface, SensorType sType) :
	Manipulator(amountOfBtns, type), sensorType(SensorType::Laser) {
	setConnectionInterface(cInterface);
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
	connectionInterface = new char[strlen(CInterface) + 1];
	strcpy(connectionInterface, CInterface);
}

void ComputerManipulator::setSensorType(char* SType) {
	if (strcmp(SType, "Balling") == 0) {
		this->sensorType = SensorType::Balling;
	}
	else if (strcmp(SType,"Laser") == 0) {
		this->sensorType = SensorType::Laser;
	}
	else if (strcmp(SType, "Optical")==0) {
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

ComputerManipulator::~ComputerManipulator() {
	delete[] connectionInterface;
}

void ComputerManipulator::OnStore(std::ostream& aStream) {
	Manipulator::OnStore(aStream);
	int lenOfConnectionInterface = strlen(connectionInterface);
	aStream.write((const char*)&lenOfConnectionInterface, sizeof(lenOfConnectionInterface));
	aStream.write(connectionInterface, lenOfConnectionInterface);

	int lenOfSensorType = strlen(getSensorType());
	aStream.write((const char*)&lenOfSensorType, sizeof(lenOfSensorType));
	aStream.write(getSensorType(), lenOfSensorType);
}

void ComputerManipulator::OnLoad(std::istream& aStream) {
	Manipulator::OnLoad(aStream);
	int lenOfConnection = 0;
	aStream.read((char*)&lenOfConnection, sizeof(lenOfConnection));
	
	char* tempConnectionInterface;
	tempConnectionInterface = new char[lenOfConnection + 1];
	aStream.read(tempConnectionInterface, lenOfConnection);
	
	tempConnectionInterface[lenOfConnection] = 0;
	setConnectionInterface(tempConnectionInterface);
	//delete[] tempConnectionInterface;

	int lenOfSensorType = 0;
	aStream.read((char*)&lenOfSensorType, sizeof(lenOfSensorType));
	char* tempSensorType;
	tempSensorType = new char[lenOfSensorType + 1];
	aStream.read(tempSensorType, lenOfSensorType);
	tempSensorType[lenOfSensorType] = 0;
	setSensorType(tempSensorType);
	//delete[] tempSensorType;
}