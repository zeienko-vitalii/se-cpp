/*
 * @file Manipulator.cpp
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include<algorithm>
#include "Manipulator.h"

using namespace std;

Manipulator::Manipulator() :
		count(0) {
	// TODO Auto-generated constructor stub

}

Manipulator::Manipulator(int count, string type) :
		count(count), type(type) {

}
;

int Manipulator::getCount() const {
	return this->count;
}

string Manipulator::getType() const {
	return this->type;
}

void Manipulator::setCount(int count) {
	this->count = count;
}

void Manipulator::setType(string type) {
	this->type = type;
}

bool Manipulator::isSimple() const {
	return count <= 2;
}

bool Manipulator::isGame() const {
	return count >= 4;
}

string Manipulator::toString() {

	string str;

	str += "Количество кнопок: " + to_string(count) + "\n";
	str += "Тип устройства : " + type + "\n";

	return str;
}

Manipulator::~Manipulator() {
	// TODO Auto-generated destructor stub
}

void Manipulator::OnStore(std::ostream& aStream) {
	aStream << toBitsetString();
}

void Manipulator::OnLoad(std::istream& aStream) {

	bitset<32> input;
	aStream >> input;
	count = input.to_ulong();

	bitset<8> inputS;
	string tmpStr;
	while (aStream.get() != ' ') {
			aStream >> inputS;
			tmpStr += (char) inputS.to_ulong();
		}
		this->setType(tmpStr);

}

string Manipulator::toBitsetString() {

	string res;

	res += bitset<32>(this->getCount()).to_string();

	for (unsigned int i = 0; i < this->getType().length(); i++) {
		res += bitset<9>(this->getType().at(i)).to_string();
	}
		res += " ";
		return res;
}

ostream& operator <<(ostream& oSt, Manipulator Manipulator) {

	oSt << "Count: " << Manipulator.getCount() << "\n";
	oSt << "Type: " << Manipulator.getType() << " ";

	return oSt;
}

void operator >>(istream& iSt, Manipulator &Manipulator) {

	int intTmp;
	string stringTmp;
	iSt >> intTmp;
	Manipulator.setCount(intTmp);

	iSt >> stringTmp;
	Manipulator.setType(stringTmp);

}
