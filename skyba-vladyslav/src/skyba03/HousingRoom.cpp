/**
 * @file HousingRoom.cpp
 * HousingRoom functions realization.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include "HousingRoom.h"
#include "Room.h"

HousingRoom::HousingRoom() {
	// TODO Auto-generated constructor stub
}

HousingRoom::HousingRoom(string name, int seatsNumber, string purpose) :
		name(name), seatsNumber(seatsNumber), purpose(purpose) {

}

HousingRoom::HousingRoom(float length, float widht, float height, string name, int seatsNumber, string purpose) :
		Room(length, widht, height), name(name), seatsNumber(seatsNumber), purpose(purpose) {

}

string HousingRoom::getName() {
	return this->name;
}

int HousingRoom::getSeatsNumber() {
	return this->seatsNumber;
}

string HousingRoom::getPurpose() {
	return this->purpose;
}

void HousingRoom::setName(string name) {
	this->name = name;
}

void HousingRoom::setSeatsNumber(int seatsNumber) {
	this->seatsNumber = seatsNumber;
}

void HousingRoom::setPurpose(string purpose) {
	this->purpose = purpose;
}

string HousingRoom::toString() {
	string str;
	str += ": " + name + "\n";
	str += ": " + purpose + "\n";

	return str;
}

HousingRoom::~HousingRoom() {
	// TODO Auto-generated destructor stub
}
