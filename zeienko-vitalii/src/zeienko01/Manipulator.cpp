/**
 * @file  Manipulator.cpp
 * Realization of the CManipulator class.
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
		amountOfButtons(amountOfBtns), type(type) {
	printf("Constructor with params is called!\n");
}

Manipulator::Manipulator(const Manipulator& Manipulator) :
		amountOfButtons(Manipulator.amountOfButtons), type(Manipulator.type) {
	printf(" Copiyng constructor is called!\n");
}

Manipulator::~Manipulator() {
	printf("~Manipulator()\n");
}
