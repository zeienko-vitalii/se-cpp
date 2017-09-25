/**
 * @file Main.cpp
 * Демонстрация работы программы.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.18
 */
#include <iostream>
#include <locale.h>
#include "Room.h"
#include "Screen.h"

using namespace std;
/**
 * Точка входа в программу
 * @return 0
 */
int main() {
	setlocale(LC_ALL, "Russian");
	Room oRoom (5.25, 6.20, 3.04);
	Screen view(oRoom);
	view.dataOutput();
	return 0;
}
