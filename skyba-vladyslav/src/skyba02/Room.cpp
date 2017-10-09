#include <iostream>
#include <string>

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

void Room::setHeight(float type){
	this->height = height;
}

float Room::Volume() const{
	return getHeight()*getWidht()*getLength();
}

Room::~Room() {
	// TODO Auto-generated destructor stub
}
