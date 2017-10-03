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

Manipulator::Manipulator(void) : amountOfButtons(MIN_NUM_BTNS), typeOfManipulator(Mouse) {
	// Setting the deafult parameters for the CManipulator class' attributes
	printf("Constructor without params is called!\n");
}

Manipulator::Manipulator(int amountOfBtns, Type typeOfManip) :
	amountOfButtons(amountOfBtns), typeOfManipulator(typeOfManip) {
	printf("Constructor with params is called!\n");
}

Manipulator::Manipulator(const Manipulator& Manipulator) :
	amountOfButtons(Manipulator.amountOfButtons), typeOfManipulator(Manipulator.typeOfManipulator) {
	printf(" Copiyng constructor is called!\n");
}

Manipulator::~Manipulator() {
	printf("~Manipulator()\n");
}
