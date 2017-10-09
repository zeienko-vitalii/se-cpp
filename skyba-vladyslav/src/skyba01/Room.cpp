/**
 * @file Room.cpp
 * Реализация функций Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.18
 */
#include <string>
#include <iostream>
#include "Room.h"
#include <locale.h>

using namespace std;

Room::Room(): length(0.0), width(0.0), height(0.0){
	// TODO Auto-generated constructor stub
	cout << "Default constructor Room" << endl;
}

Room::Room(float length, float width, float height): length(length), width(width), height(height){
	cout << "Constructor with parameters Room" << endl;
}

float Room::getLength(){
	return this->length;
}

float Room::getWidth(){
	return this->width;
}
float Room::getHeight(){
	return this->height;
}
void Room::setLength(float length ){
	this->length = length;
}

void Room::setWidth(float width){
	this->width = width;
}
void Room::setHeight(float height){
	this->height = height;
}
Room::~Room() {
	// TODO Auto-generated destructor stub
	cout << "Destructor Room" << endl;
}
