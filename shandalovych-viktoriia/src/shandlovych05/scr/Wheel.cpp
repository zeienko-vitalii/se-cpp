/*
 * @file Wheel.cpp Содержит реализацию класса "Колесо".
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */

#include <iostream>
#include<string>
#include <StorageInterface.h>

#include <bitset>
#include "Wheel.h"


using namespace std;

void Wheel::OnStore(std::ostream& aStream) {
	string res;
	res += bitset<32>(this->getwidth()).to_string();
	res += bitset<32>(this->getdiameter()).to_string();
	for (unsigned int i = 0; i < this->getunit().length(); i++) {
			res += bitset<9>(this->getunit().at(i)).to_string();
		}
	res+=" ";
	aStream << res;

}
void Wheel::OnLoad(std::istream& aStream) {
	bitset<32> input;
	aStream >> input;
	this->width = input.to_ulong();
	aStream >> input;
	this->diameter = input.to_ulong();
	string tmpStr;
	bitset<8> inputS;
	while (aStream.get() != ' ') {
			aStream >> inputS;
			tmpStr += (char) inputS.to_ulong();

		}
	this->setunit(tmpStr);
}
Wheel::Wheel() :
		diameter(0), unit(" "), width(0) {
	cout << "Вызов коструктора без параметра \n";
}

Wheel::~Wheel() {
	cout << "Вызов деструктора \n";
	// TODO Auto-generated destructor stub
}

Wheel::Wheel(int diameter, int width, string unit) :
		diameter(diameter), unit(unit), width(width) {
	cout << "Вызов коструктора с параметром\n";

}

double Wheel::volume() const {
	return 3.14 * diameter / 4 * width;
}
void Wheel::setdiameter(int diameter) {
	this->diameter = diameter;
}
int Wheel::getdiameter() {
	return this->diameter;
}

void Wheel::setwidth(int width) {
	this->width = width;
}
int Wheel::getwidth() {
	return this->width;
}
void Wheel::setunit(string unit) {
	this->unit = unit;
}
string Wheel::getunit() {
	return this->unit;
}

ostream& operator <<(ostream& oSt, Wheel Wheel) {
	oSt << "diameter: " << Wheel.getdiameter() << "\n";
	oSt << "width: " << Wheel.getwidth() << "\n";
	oSt << "unit: " << Wheel.getunit() << "\n";

	return oSt;
}

void operator >>(istream& iSt, Wheel &Wheel) {

	int intTmp;
	string stringTmp;

	iSt >> intTmp;
	Wheel.setdiameter(intTmp);

	iSt >> stringTmp;
	Wheel.setunit(stringTmp);

	iSt >> intTmp;
	Wheel.setwidth(intTmp);

	;

}

string Wheel::ToString() {
	string oSt;
	oSt += "diameter: ";
	oSt += to_string(this->getdiameter());

	oSt += "\nwidth: ";
	oSt += to_string(this->getwidth()) + "\n";
	oSt += "unit: " + this->getunit() + "\n";

	return oSt;
}
