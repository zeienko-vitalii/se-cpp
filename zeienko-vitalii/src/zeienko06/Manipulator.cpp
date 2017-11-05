/**
 * @file  Manipulator.cpp
 * Realization of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Manipulator.h"

#include <stdio.h>
#include <ostream>
#include <istream>

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

bool Manipulator::operator == (const Manipulator& manipualtor) const {
	return (typeOfManipulator == manipualtor.typeOfManipulator &&
		getAmountOfButtons() == manipualtor.getAmountOfButtons());
}

char* Manipulator::getConnectionInterface() const { return NULL; };

char* Manipulator::getSensorType() const { return NULL; };

void Manipulator::setTypeOfManipulator(char* typeOfManip) {
	//std::cout << "setTypeOfManipulator()::typeOfManipulator = " << typeOfManip;
	//char* temp = typeOfManip;
	 if (strcmp(typeOfManip, "Joystick") == 0) {
		this->typeOfManipulator = Joystick;
	} else if (strcmp(typeOfManip, "Mouse") == 0) {
		this->typeOfManipulator = Mouse;
	}
}

// interfaces
void Manipulator::OnStore(std::ostream& aStream) {
	//aStream << amountOfButtons << " " << getType() << "\n";
	aStream.write((const char*)&amountOfButtons, sizeof(amountOfButtons));
	int lenOfType = strlen(getType());
	aStream.write((const char*)&lenOfType, sizeof(lenOfType));
	aStream.write(getType(), lenOfType);
}

void Manipulator::OnLoad(std::istream& aStream) {

	/*char buf[256], buf2[256];
	aStream.getline(buf, 256);
	std::cout << "Buffer #1 "<< buf << std::endl;
	//setAmountOfButtons() = (int)buf;

	aStream.getline(buf2, 256);
	std::cout << "Buffer #2 " << buf2 << std::endl;
	setTypeOfManipulator(buf2);*/
	//aStream >> amountOfButtons >> 
	int tempAmountOfButtons = 0;
	aStream.read((char*)&tempAmountOfButtons, sizeof(tempAmountOfButtons));
	setAmountOfButtons(tempAmountOfButtons);
	int lenOfType = 0;
	aStream.read((char*)&lenOfType, sizeof(lenOfType));
	char* tempType;
	tempType = new char[lenOfType + 1];
	aStream.read(tempType, lenOfType);
	tempType[lenOfType] = 0;
	setTypeOfManipulator(tempType);
	//delete[] tempType;
}