/**
 * @file RoomHousing.cpp
 * @brief Хранит реализацию класса RoomHousing
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#include "RoomHousing.h"

RoomHousing::RoomHousing(int H, int W, int L, const char *NAME, int NS,
		AppointmentRoom A) :
		Room(H, W, L), numberOfSeats(NS), appointment(A) {
	name = new char[strlen(NAME) + 1];
	strcpy(name, NAME);
	//cout << "RoomHousing(int H, int W, int L, char *NAME, int NS, AppointmentRoom A)"
			//<< endl;
}

RoomHousing::RoomHousing(const RoomHousing& RH) :
		Room(RH), numberOfSeats(RH.numberOfSeats), appointment(RH.appointment) {
	name = new char[strlen(RH.name) + 1];
	strcpy(name, RH.name);
	//cout << "RoomHousing(const RoomHousing& R)" << endl;
}

RoomHousing::~RoomHousing() {
	if (name != nullptr)
		delete[] name;
	//cout << "~RoomHousing()" << endl;
}

const char* RoomHousing::getNmae() const {
	return name;
}

int RoomHousing::getNumberOfSeats() const {
	return numberOfSeats;
}

AppointmentRoom RoomHousing::getAppointment() const {
	return appointment;
}

/*void setNmae(char *NAME) {
 if (name != nullptr)
 delete[] name;
 name = new char[strlen(NAME) + 1];
 strcpy(name, NAME);
 }

 void setNumberOfSeats(int NS) {
 numberOfSeats = NS;
 }

 void setAppointment(AppointmentRoom A) {
 appointment = A;
 }*/
/*RoomHousing() :
 Room(), numberOfSeats(0), appointment(), name(nullptr) {
 }*/
