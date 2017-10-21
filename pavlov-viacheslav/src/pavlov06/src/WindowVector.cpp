/*
 * WindowVector.cpp
 *
 *  Created on: 21 окт. 2017 г.
 *      Author: JR_Rider
 */
#include<iostream>
#include<string>
#include "WindowVector.h"
using namespace std;
WindowVector::WindowVector() :
		vSize(0), vCapacity(10) {
	// TODO Auto-generated constructor stub
	this->vector = new Window[vCapacity];
}

WindowVector::~WindowVector() {
	// TODO Auto-generated destructor stub
}

void WindowVector::resize() {
	int newCapacity = (this->vCapacity * 3) / 2 + 1;
	Window* newVector = new Window[newCapacity];

	for (int i = 0; i < this->vCapacity; i++) {
		newVector[i] = this->vector[i];
	}

	delete[] this->vector;
	this->vector = newVector;
	this->vCapacity = newCapacity;
}

void WindowVector::push(const Window& win) {
	if (this->vSize == this->vCapacity)
		resize();
	this->vector[this->vSize++] = win;
}

Window* WindowVector::get(int pos) {
	if (pos < 0 || pos > this->vSize) {
		cout << "Illegal index: " << to_string(pos) << "\n";
		return new Window;
	}
	return &(this->vector[pos]);
}

int WindowVector::size() {
	return this->vSize;
}

void WindowVector::remove(int pos) {
	if (pos < 0 || pos > this->vSize) {
		cout << "Illegal index: " << to_string(pos) << "\n";
		return;
	}
	delete &this->vector[pos];
}

void WindowVector::clean() {
	this->vCapacity = 10;
	this->vSize = 0;
	delete[] this->vector;
	this->vector = new Window[vCapacity];
}
