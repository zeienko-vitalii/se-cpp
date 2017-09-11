/*
 * @file Screen.cpp
 * Part of lab1
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Manipulator.h"
#include "Screen.h"

using namespace std;

Screen::Screen() {
	// TODO Auto-generated constructor stub
	manip;
}

Screen::Screen(Manipulator manip){
	this->manip = manip;
	cout << "Вызов конструктора Screen с параметром" << endl;
}

void Screen::dataOutput(){
	cout << "" << endl;
	cout << "Тип пристрою: " << manip.getType() << endl;
	cout << "Кількість кнопок: " << manip.getCount() << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "Вызов деструктора Screen" << endl;
}

