/*
 * @file Mouse.cpp
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

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

