/*
 * @file Screen.cpp
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Monitor.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
	// TODO Auto-generated constructor stub
	monitor;
}

Screen::Screen(Monitor monitor){
	this->monitor = monitor;
	cout << "Вызов конструктора Screen с параметром" << endl;
}

void Screen::dataOutput(){
	cout << "" << endl;
	cout << "ID монитора    : " << monitor.getId()<< "  ;" << endl;
	cout << "Вес моитора    : " << monitor.getWeight()<<"  кг; " << endl;
	cout << "Тип монитора   : " << monitor.getType()<<"  ; " << endl;
	cout << "Ширина монитора: " << monitor.getWide()<<" см; " << endl;
	cout << "Высота монитора: " << monitor.getHigh()<<" см; " << endl;
	cout << "Длина монитора : " << monitor.getDeep()<<" см; " << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "Вызов деструктора Screen" << endl;
}


