/**
 * @file Main.cpp - файл входа в программу
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>

#include "Monitor.h"
#include "Screen.h"

using namespace std;
/**
 * функция демонстрации работы программы
 */
int main(void) {
	const int ID = 225;
	const int WEIGHT = 3;
	const string TYPE = "TFT";
	const int WIDE = 30;
	const int HIGH = 20;
	const int DEEP = 15;
	Monitor iMonitor(225, 3, "TFT", 30, 20, 15);
	Screen view(iMonitor);

	view.dataOutput();

}
