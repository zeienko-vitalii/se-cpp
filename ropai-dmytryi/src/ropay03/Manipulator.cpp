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

#include "Manipulator.h"

using namespace std;

Manipulator::Manipulator(): count(0){
	// TODO Auto-generated constructor stub

}

Manipulator::Manipulator(int count, string type): count(count), type(type){

};

int Manipulator::getCount() const{
	return this->count;
}

string Manipulator::getType() const{
	return this->type;
}

void Manipulator::setCount(int count){
	this->count = count;
}

void Manipulator::setType(string type){
	this->type = type;
}

bool Manipulator::isSimple() const{
	return count <= 2;
}

bool Manipulator::isGame() const{
	return count >= 4;
}

string Manipulator::toString(){

	string str ;

	str += "Количество кнопок: " + to_string(count) + "\n";
	str += "Тип устройства : " + type + "\n";

	return  str;
}

Manipulator::~Manipulator() {
	// TODO Auto-generated destructor stub
}

