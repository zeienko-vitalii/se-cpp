/*
 * Manipulator.cpp
 *
 *  Created on: 5 ����. 2017 �.
 *      Author: ����
 */
#include <string>
#include <iostream>
#include "Manipulator.h"

using namespace std;

Manipulator::Manipulator() {
	// TODO Auto-generated constructor stub
	count = 0;
	type = "NULL_type";
	cout << "����� ������������ Manipulator ��� ����������" << endl;
}

Manipulator::Manipulator(int count, string type){
	// ������������� this ��� ������� � ��������
	this->count = count;
	this->type = type;
	cout << "����� ������������ Manipulator � �����������" << endl;
}

int Manipulator::getCount(){
	return this->count;
}

string Manipulator::getType(){
	return this->type;
}

void Manipulator::setCoutn(int count){
	this->count = count;
}

void Manipulator::setType(string type){
	this->type = type;
}

Manipulator::~Manipulator() {
	// TODO Auto-generated destructor stub
	cout << "����� ����������� Manipulator" << endl;
}

