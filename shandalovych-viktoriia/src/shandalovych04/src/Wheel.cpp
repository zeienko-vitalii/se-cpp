/*
 * @file Wheel.cpp �������� ���������� ������ "������".
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */

#include <iostream>
#include<string>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"

using namespace std;

Wheel::Wheel() :
		diameter(0), unit(" "), width(0) {
	cout << "����� ����������� ��� ��������� \n";
}

Wheel::~Wheel() {
	cout << "����� ����������� \n";
	// TODO Auto-generated destructor stub
}

Wheel::Wheel(int diameter, int width, string unit) :
		diameter(diameter), unit(unit), width(width) {
	cout << "����� ����������� � ����������\n";

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
