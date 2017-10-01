/**
 * @file  Manipulator.cpp
 * Realization of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */

#include "Manipulator.h"

#include <stdio.h>
#include <cstring>
#include <ctype.h>


const int Manipulator::MIN_NUM_BTNS = 2;
const int Manipulator::MAX_NUM_BTNS = 20;
const char *Manipulator::TYPE[] = { "mouse", "joystick" };



Manipulator::Manipulator(void) : amountOfButtons(MIN_NUM_BTNS) {
	printf("Constructor without params is called!\n");
	// Setting the deafult parameters for the CManipulator class' attributes
	type = new char[strlen(TYPE[0])];
	type = const_cast<char*>(TYPE[0]);
}

Manipulator::Manipulator(int amountOfBtns, char* type) :
		amountOfButtons(amountOfBtns), type(type){
	printf("Constructor with params is called!\n");
}

Manipulator::Manipulator(const Manipulator& Manipulator) :
		amountOfButtons(Manipulator.amountOfButtons), type(Manipulator.type) {
	printf(" Copiyng constructor is called!\n");
}

int Manipulator::getAmountOfButtons() const {
	return amountOfButtons;
}

void Manipulator::setAmountOfButtons(int amountOfBtns) {
	this->amountOfButtons = amountOfBtns;
}


bool Manipulator::IsSimple() const {

	// In this condition is checking if this object exists
	// and then checks if the amount of buttons corresponds to Simple mouse.
	if(this->amountOfButtons >= MIN_NUM_BTNS && this->amountOfButtons <= 4){
		return true;
	} else {
		return false;
	}

}

bool Manipulator::IsGame() const {
		// In this condition is checking if this object exists
		// and then checks if the amount of buttons corresponds to Game mouse.
		if(this->amountOfButtons > 4 && this->amountOfButtons <= MAX_NUM_BTNS){
			return true;
		} else {
			return false;
		}
}

Manipulator::~Manipulator() {
	printf("~Manipulator()\n");
}
