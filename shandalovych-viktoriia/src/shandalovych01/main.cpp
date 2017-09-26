/*
 * @file main.cpp
 * Содержит точку входа в программу.
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */
#include <iostream>
#include "Wheel.h"
#include "Screen.h"



using namespace std;


int main(void) {

	//Константы для инициализации первого объекта.
	const int diameter = 20;
	const int width = 10;
	const string unit = "см";
	

	Wheel data( diameter, width, unit);

	Screen screen(data);

	screen.ViewWheel();

	return 0;
}
