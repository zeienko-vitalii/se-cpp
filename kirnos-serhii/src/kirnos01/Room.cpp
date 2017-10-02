/**
* @file Room.cpp
* @brief Містить реалізацію класу Room
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#include "Room.h"

Room::Room():height(0), width(0), length(0) {
	cout << "Room()" << endl;
}

Room::Room(int H, int W, int L) {
	height = H;
	width = W;
	length = L;
	cout << "Room(int, int, int)" << endl;
}

Room::Room(const Room& r) {
	this->height = r.height;
	this->width = r.width;
	this->length = r.length;
	cout << "Room(const Room&)" << endl;
}

Room::~Room() {
	cout << "~Room()" << endl;
}

void Room::SetHeight(double H){
	height = H;
}

void Room::SetWidth(double W){
	width = W;
}

void Room::SetLength(double L){
	length = L;
}
