/*
 * CompMonitor.cpp
 *
 *  Created on: 9 ���. 2017 �.
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
	res += "ID ��������    : " + to_string(this->getId()) + "  ;\n";
	res += "��� �������    : " + to_string(this->getWeight()) + "  ��; \n";
	res += "��� ��������   : " + this->getType() + "  ; \n";
	res += "������ ��������: " + to_string(this->getWide()) + " ��; \n";
	res += "������ ��������: " + to_string(this->getHigh()) + " ��; \n";
	res += "����� �������� : " + to_string(this->getDeep()) + " ��; \n";
	res += "��������� ����������� : " + this->getPortInterface() + " ; \n";
	res += "���������� ������ : " + to_string(this->getPlugInCount()) + " ; \n";
	return res;
}
