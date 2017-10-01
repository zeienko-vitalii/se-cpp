/*
 * ComputerManipulator.cpp
 *
 *  Created on: 24 сент. 2017 г.
 *      Author: Bjorn
 */

#include "ComputerManipulator.h"

ComputerManipulator::ComputerManipulator() :
		Manipulator() {
	connectionInterface = "USB";
	sensorType = "Laser";
}

ComputerManipulator::ComputerManipulator(int amountOfBtns, char* type,
		char* CInterface, char* SType) :
		Manipulator(amountOfBtns, type), connectionInterface(CInterface), sensorType(
				SType) {
}

ComputerManipulator::ComputerManipulator(const ComputerManipulator& CManip) : 
	Manipulator(CManip.getAmountOfButtons(), CManip.type), 
	connectionInterface(CManip.connectionInterface), sensorType(CManip.sensorType){}

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
