/**
 * @file Room.cpp
 * @brief Хранит реализацию класса Room
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */
#include "Room.h"

/*Room::Room() :
		height(0), width(0), length(0) {
	//cout << "Room()" << endl;
}*/

Room::Room(int H, int W, int L) :
		height(H), width(W), length(L) {
	//cout << "Room(int, int, int)" << endl;
}

Room::Room(const Room& r) :
		height(r.height), width(r.width), length(r.length) {
	//cout << "Room(const Room&)" << endl;
}

Room::~Room() {
	//cout << "~Room()" << endl;
}
/*
void Room::setHeight(int H) {
	height = H;
}

void Room::setWidth(int W) {
	width = W;
}

void Room::setLength(int L) {
	length = L;
}
*/
int Room::getHeight() const {
	return height;
}

int Room::getWidth() const {
	return width;
}

int Room::getLength() const {
	return length;
}

int Room::Volume() const {
	return (height * width * length);
}
