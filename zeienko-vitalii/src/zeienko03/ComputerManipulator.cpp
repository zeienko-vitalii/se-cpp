/**
* @file  ComputerManipulator.cpp
* Realization of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.09
*/

#include "ComputerManipulator.h"

ComputerManipulator::ComputerManipulator() :
	Manipulator(), connectionInterface("USB"),sensorType("Laser") {
}

ComputerManipulator::ComputerManipulator(int amountOfBtns, Type type,
	char* CInterface, char* SType) :
	Manipulator(amountOfBtns, type), connectionInterface(CInterface), sensorType(
		SType) {
}

ComputerManipulator::ComputerManipulator(const ComputerManipulator& CManip) :	
	Manipulator(CManip.getAmountOfButtons(), CManip.typeOfManipulator),
	connectionInterface(CManip.connectionInterface), sensorType(CManip.sensorType) {}

char* ComputerManipulator::getConnectionInterface() const {
	return connectionInterface;
}

char* ComputerManipulator::getSensorType() const {
	return sensorType;
}

void ComputerManipulator::setConnectionInterface(char* CInterface) {
	this->connectionInterface = CInterface;
}

void ComputerManipulator::setSensorType(char* SType) {
	this->sensorType = SType;
}

ComputerManipulator::~ComputerManipulator() {

}
