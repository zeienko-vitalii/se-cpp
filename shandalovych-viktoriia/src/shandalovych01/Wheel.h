/*
 * Wheel.h
 *
 *  Created on: 10 сент. 2017 г.
 *      Author: Viktotia
 */


#pragma once

#include <iostream>
#include <string.h>
using namespace std;


class Wheel {

	friend ostream& operator <<(ostream& oSt, Wheel Wheel);


	friend void operator >>(istream& iSt, Wheel &Wheel);
private:

	int diameter;
	int width;
	string unit;



public:

	Wheel();


	 ~Wheel();

	Wheel( int diameter, int width, string unit);


	int getdiameter();

	void setdiameter(int diameter);

	int getwidth();

	void setwidth(int width);

	string getunit();

	void setunit(string unit);

	
};
