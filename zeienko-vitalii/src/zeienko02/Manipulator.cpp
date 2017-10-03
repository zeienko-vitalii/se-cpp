/**
 * @file  Manipulator.cpp
 * Realization of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Manipulator.h"

#include <stdio.h>

const int Manipulator::MIN_NUM_BTNS = 2;
const int Manipulator::MAX_NUM_BTNS = 20;

Manipulator::Manipulator(void) : amountOfButtons(MIN_NUM_BTNS), typeOfManipulator(Mouse) {}

Manipulator::Manipulator(int amountOfBtns, Type typeOfManip) :
	amountOfButtons(amountOfBtns), typeOfManipulator(typeOfManip) {
}

Manipulator::Manipulator(const Manipulator& Manipulator) :
	amountOfButtons(Manipulator.amountOfButtons), typeOfManipulator(Manipulator.typeOfManipulator) {
}

Manipulator::~Manipulator() {}

int Manipulator::getAmountOfButtons() const {
	return amountOfButtons;
}

void Manipulator::setAmountOfButtons(int amountOfBtns) {
	this->amountOfButtons = amountOfBtns;
}


bool Manipulator::IsSimple() const {

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

bool Manipulator::IsGame() const {
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