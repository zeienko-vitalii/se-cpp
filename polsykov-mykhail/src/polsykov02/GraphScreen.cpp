/*
 * GraphScreen.cpp
 *
 *  Created on: 8 ���. 2017 �.
 *      Author: Snow Pandemic
 */

#include <iostream>
#include "Monitor.h"
#include "GraphScreen.h"

using namespace std;
GraphScreen::GraphScreen() {
	// TODO Auto-generated constructor stub
}

GraphScreen::GraphScreen(Monitor* monitor) {
	this->monitor = monitor;

}

GraphScreen::~GraphScreen() {
	// TODO Auto-generated destructor stub
}

void GraphScreen::setDataSource(const Monitor* monitor) {
	this->monitor = monitor;

}
void GraphScreen::PrintData(const Monitor& monitor) {
	cout << "  ____________________________  \n";
	cout << " | __________________________ | \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||           ASUS           || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||                          || \n";
	cout << " ||__________________________|| \n";
	cout << " |____________________________| \n";
	cout << "              / \\               \n";
	cout << "             /   \\              \n";
	cout << "           =========               \n";

}

void GraphScreen::PrintData() {
	PrintData(*this->monitor);
}
