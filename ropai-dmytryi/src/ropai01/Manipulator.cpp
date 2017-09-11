/*
 * Manipulator.cpp
 *
 *  Created on: 5 сент. 2017 г.
 *      Author: Дима
 */
#include <string>
#include <iostream>
#include "Manipulator.h"

using namespace std;

Manipulator::Manipulator() {
	// TODO Auto-generated constructor stub
	count = 0;
	type = "NULL_type";
	cout << "Вызов конструктора Manipulator без параметров" << endl;
}

Manipulator::Manipulator(int count, string type){
	// Використовуємо this для доступу к атрибуту
	this->count = count;
	this->type = type;
	cout << "Вызов конструктора Manipulator с параметрами" << endl;
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
	cout << "Вызов деструктора Manipulator" << endl;
}

