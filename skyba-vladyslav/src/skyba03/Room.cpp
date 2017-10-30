/**
 * @file Room.cpp
 * Room functions realization.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <iostream>
#include <string>
#include <sstream>

#include "Room.h"

using namespace std;

Room::Room(): length(0.0), widht(0.0), height(0.0){
	// TODO Auto-generated constructor stub

}

Room::Room(float length, float widht, float height): length(length), widht(widht), height(height){

};

float Room::getLength() const{
	return this->length;
}

float Room::getWidht() const{
	return this->widht;
}

float Room::getHeight() const{
	return this->height;
}

void Room::setLength(float length){
	this->length = length;
}

void Room::setWidht(float widht){
	this->widht = widht;
}

void Room::setHeight(float height){
	this->height = height;
}

float Room::Volume() const{
	return getHeight()*getWidht()*getLength();
}



string Room::toString(){

	string str ;

	str += "Êîëè÷åñòâî êíîïîê: " + to_string(length) + "\n";
	str += "Êîëè÷åñòâî êíîïîê: " + to_string(widht) + "\n";
	str += "Êîëè÷åñòâî êíîïîê: " + to_string(height) + "\n";
	return  str;
}


Room::~Room() {
	// TODO Auto-generated destructor stub
}
