/**
 * @file  Manipulator.cpp
 * Realization of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Manipulator.h"
#include <string>
#include <sstream>
using std::string;
#include <stdio.h>

const int Manipulator::MIN_NUM_BTNS = 2;
const int Manipulator::MAX_NUM_BTNS = 20;

Manipulator::Manipulator(void) : amountOfButtons(MIN_NUM_BTNS), typeOfManipulator(Mouse) {}

Manipulator::Manipulator(int amountOfBtns, Type typeOfManip) :
	amountOfButtons(amountOfBtns), typeOfManipulator(typeOfManip) {
}

Manipulator::Manipulator(const Manipulator& manipulator) :
	amountOfButtons(manipulator.amountOfButtons), typeOfManipulator(manipulator.typeOfManipulator) {
}

Manipulator::~Manipulator() {}

int Manipulator::getAmountOfButtons() const {
	return amountOfButtons;
}

void Manipulator::setAmountOfButtons(int amountOfBtns) {
	this->amountOfButtons = amountOfBtns;
}

char* Manipulator::getType() const {
	if (typeOfManipulator == Joystick) {
		return "Joystick";
	}
	else if (typeOfManipulator == Mouse) {
		return "Mouse";
	}
}

bool Manipulator::isSimple() const {

	int simpleMouseAmountOfButtons = 4;
	// In this condition is checking if this object exists
	// and then checks if the amount of buttons corresponds to Simple mouse.
	if (this->amountOfButtons >= MIN_NUM_BTNS && this->amountOfButtons <= simpleMouseAmountOfButtons) {
		return true;
	}
	else {
		return false;
	}

}

bool Manipulator::isGame() const {
	int simpleMouseAmountOfButtons = 4;
	// In this condition is checking if this object exists
	// and then checks if the amount of buttons corresponds to Game mouse.
	if (this->amountOfButtons > simpleMouseAmountOfButtons && this->amountOfButtons <= MAX_NUM_BTNS) {
		return true;
	}
	else {
		return false;
	}
}

bool Manipulator::operator == (const Manipulator& manipualtor) const{
	return (typeOfManipulator == manipualtor.typeOfManipulator &&
		getAmountOfButtons() == manipualtor.getAmountOfButtons());
}

void Manipulator::setType(char* newType) {
	if (strcmp(newType, "Joystick") == 0) {
		typeOfManipulator = Joystick;
	}
	else if (strcmp(newType, "Mouse") == 0) {
		typeOfManipulator = Mouse;
	}
};


void Manipulator::toSave(std::ofstream& os) {
	os << "Type: " << this->getType() << std::endl;
	os << "Amount_of_buttons: " << this->getAmountOfButtons() << std::endl;
}

void Manipulator::toLoad(std::ifstream& in) {
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
		else if (label.compare("Amount_of_buttons:") == 0) {
			unsigned restoreAmountOfButtons;
			ss >> restoreAmountOfButtons;
			this->setAmountOfButtons(restoreAmountOfButtons);
		}
	}
}