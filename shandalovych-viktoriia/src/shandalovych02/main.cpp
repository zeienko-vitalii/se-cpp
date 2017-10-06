/*
 * @file main.cpp Содержит точку входа в программу.
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */
#include <iostream>
#include "Wheel.h"
#include "Screen.h"
#include "GraphScreen.h"



using namespace std;


int main(void) {

	//Константы для инициализации первого объекта.
	const int DIAMETER = 20;
	const int WIDTH = 10;
	const string UNIT = "см";
	

	Wheel data( DIAMETER, WIDTH, UNIT);

	Screen screen(data);

	screen.ViewWheel();

	GraphScreen view2(&data);
	view2.PrintData();

	return 0;
}
