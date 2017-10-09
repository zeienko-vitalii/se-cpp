/*
 * @file Monitor.cpp
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */

#include "Monitor.h"
#include <string>
#include <iostream>

using namespace std;

Monitor::Monitor() {
	// TODO Auto-generated constructor stub
	id = 0;
	weight = 0;
	type = "NULL";
	wide = 0;
	high = 0;
	deep = 0;
}
Monitor::Monitor(int id, int weight, string type, int wide, int high,
		int deep) {
	this->id = id;
	this->weight = weight;
	this->type = type;
	this->wide = wide;
	this->high = high;
	this->deep = deep;
}
int Monitor::getId() {
	return this->id;
}
int Monitor::getWeight() {
	return this->weight;
}
string Monitor::getType() {
	return this->type;
}
int Monitor::getWide() {
	return this->wide;
}
int Monitor::getHigh() {
	return this->high;
}
int Monitor::getDeep() {
	return this->deep;
}
void Monitor::setId(int id) {
	this->id = id;
}
void Monitor::setWeight(int weight) {
	this->weight = weight;
}
void Monitor::setType(string type) {
	this->type = type;
}
void Monitor::setWide(int wide) {
	this->wide = wide;
}
void Monitor::setHigh(int high) {
	this->high = high;
}
void Monitor::setDeep(int deep) {
	this->deep = deep;
}
Monitor::~Monitor() {
	// TODO Auto-generated destructor stub
}

string Monitor::toString() {
	string res;
	res += "ID монитора    : " + to_string(this->getId()) + "  ;\n";
	res += "Вес моитора    : " + to_string(this->getWeight()) + "  кг; \n";
	res += "Тип монитора   : " + this->getType() + "  ; \n";
	res += "Ширина монитора: " + to_string(this->getWide()) + " см; \n";
	res += "Высота монитора: " + to_string(this->getHigh()) + " см; \n";
	res += "Длина монитора : " + to_string(this->getDeep()) + " см; \n";
	return res;
}
