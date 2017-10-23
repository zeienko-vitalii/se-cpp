/*
 * AutoWheel.cpp Содержит реализацию касса "Колесо автомобиля"
 *
 *  Created on: 8 окт. 2017 г.
 *      Author: Viktotia
 */

#include <iostream>
#include<string>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"
using namespace std;
AutoWheel::AutoWheel() {
	// TODO Auto-generated constructor stub

}
AutoWheel::AutoWheel(int diameter, int width, string unit, string rubberName,
		string manufacturerRubber) :
		Wheel(diameter, width, unit), rubberName(rubberName), manufacturerRubber(
				manufacturerRubber) {
}

AutoWheel::~AutoWheel() {
	// TODO Auto-generated destructor stub
}
const string& AutoWheel::getManufacturerRubber() {
	return manufacturerRubber;
}

void AutoWheel::setManufacturerRubber(const string& manufacturerRubber) {
	this->manufacturerRubber = manufacturerRubber;
}

const string& AutoWheel::getRubberName() {
	return rubberName;
}

void AutoWheel::setRubberName(const string& rubberName) {
	this->rubberName = rubberName;
}

string AutoWheel::ToString() {
	string oSt;
	oSt += "diameter: ";
	oSt += to_string(this->getdiameter()) + "\n";
	oSt += "width: ";
	oSt += to_string(this->getwidth()) + "\n";
	oSt += "unit: " + this->getunit() + "\n";
	oSt += "rubberName: " + this->getRubberName() + "\n";
	oSt += "manufacturerRubber: " + this->getManufacturerRubber() + "\n";

	return oSt;
}

