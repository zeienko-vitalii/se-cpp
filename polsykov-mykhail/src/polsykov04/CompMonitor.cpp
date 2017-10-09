/*
 * CompMonitor.cpp
 *
 *  Created on: 9 окт. 2017 г.
 *      Author: Snow Pandemic
 */

#include "CompMonitor.h"

CompMonitor::CompMonitor() {
	// TODO Auto-generated constructor stub

}

CompMonitor::~CompMonitor() {
	// TODO Auto-generated destructor stub
}

int CompMonitor::getPlugInCount() const {
	return plugInCount;
}

void CompMonitor::setPlugInCount(int plugInCount) {
	this->plugInCount = plugInCount;
}

const string& CompMonitor::getPortInterface() const {
	return portInterface;
}

void CompMonitor::setPortInterface(const string& portInterface) {
	this->portInterface = portInterface;
}

string CompMonitor::toString() {
	string res;
	res += "ID монитора    : " + to_string(this->getId()) + "  ;\n";
	res += "Вес моитора    : " + to_string(this->getWeight()) + "  кг; \n";
	res += "Тип монитора   : " + this->getType() + "  ; \n";
	res += "Ширина монитора: " + to_string(this->getWide()) + " см; \n";
	res += "Высота монитора: " + to_string(this->getHigh()) + " см; \n";
	res += "Длина монитора : " + to_string(this->getDeep()) + " см; \n";
	res += "Интерфейс подключения : " + this->getPortInterface() + " ; \n";
	res += "Количество портов : " + to_string(this->getPlugInCount()) + " ; \n";
	return res;
}
