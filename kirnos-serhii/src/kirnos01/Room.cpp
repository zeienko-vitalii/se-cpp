/**
* @file Room.cpp
* @brief Містить реалізацію класу Room
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#include "Room.h"

Room::Room() {
	field1_data1 = new double;
	field2_data1 = new double;
	field3_data1 = new double;
	cout << "Room()" << endl;
}

Room::Room(int F1d, int F2d, int F3d) {
	field1_data1 = new double(F1d);
	field2_data1 = new double(F2d);
	field3_data1 = new double(F3d);
	cout << "Room(int, int, int)" << endl;
}

Room::Room(const Room& r) {
	this->field1_data1 = new double(*(r.field1_data1));
	this->field2_data1 = new double(*(r.field2_data1));
	this->field3_data1 = new double(*(r.field3_data1));
	cout << "Room(const Room&)" << endl;
}

Room::~Room() {
	delete field1_data1;
	delete field2_data1;
	delete field3_data1;
	cout << "~Room()" << endl;
}

void Room::SetField1_data1(double d){
	*field1_data1 = d;
}

void Room::SetField2_data1(double d){
	*field2_data1 = d;
}

void Room::SetField3_data1(double d){
	*field3_data1 = d;
}
