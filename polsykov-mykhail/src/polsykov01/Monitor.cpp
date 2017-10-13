/**
 * @file Monitor.cpp реализация функции Monitor
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */

#include "Monitor.h"
#include <string>
#include <iostream>

using namespace std;

Monitor::Monitor():id(0),weight(0),type("NULL"),wide(0),high(0),deep(0) {
	// TODO Auto-generated constructor stub
	cout<<"Generate default constructor"<<endl;
}

Monitor::Monitor(int id, int weight, string type, int wide, int high, int deep) :
		id(id), weight(weight), type(type), wide(wide), high(high), deep(deep) {
	cout << "Constructor with parameters" << endl;
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

