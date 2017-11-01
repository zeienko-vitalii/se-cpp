/*
 * @file Mouse.cpp
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <bitset>
#include<algorithm>
#include "Mouse.h"
#include "Manipulator.h"

Mouse::Mouse() {
	// TODO Auto-generated constructor stub
}

Mouse::Mouse(string connection, string sensorType) :
		connection(connection), sensorType(sensorType) {

}

Mouse::Mouse(int count, string type, string connection, string sensorType) :
		Manipulator(count, type), connection(connection), sensorType(sensorType) {

}

string Mouse::getConnection() {
	return this->connection;
}

string Mouse::getSensorType() {
	return this->sensorType;
}

void Mouse::setConnection(string connection) {
	this->connection = connection;
}

void Mouse::setSensorType(string sensorType) {
	this->sensorType = sensorType;
}

string Mouse::toString() {
	string str;
	str += "Количество кнопок: " + to_string(count) + "\n";
	str += "Тип устройства : " + type + "\n";
	str += "Тип соединения: " + connection + "\n";
	str += "Тип сенсора: " + sensorType + "\n";

	return str;
}

Mouse::~Mouse() {
	// TODO Auto-generated destructor stub
}

void Mouse::OnLoad(std::istream& aStream) {

	Manipulator::OnLoad(aStream);
	string tmpStr;
	bitset<8> input;

	while (aStream.get() != ' ') {

		aStream >> input;
		tmpStr += (char) input.to_ulong();

	}
	this->setConnection(tmpStr);

	tmpStr.clear();
	while (aStream.get() != ' ') {
		aStream >> input;
		tmpStr += (char) input.to_ulong();
	}
	this->setSensorType(tmpStr);

}

string Mouse::toBitsetString() {

	string res = Manipulator::toBitsetString();

	for (unsigned int i = 0; i < this->getConnection().length(); i++) {
		res += bitset<9>(this->getConnection().at(i)).to_string();
	}
	res += " ";

	for (unsigned int i = 0; i < this->getSensorType().length(); i++) {
		res += bitset<9>(this->getSensorType().at(i)).to_string();
	}
	res += " ";
	return res;
}

//void Mouse::OnStore(std::ostream& aStream) {
//}
