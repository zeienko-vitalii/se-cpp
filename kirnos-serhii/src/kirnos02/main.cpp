/**
 * @file main.cpp
 * @author Kirnos Sehii
 * @version 0
 * @date 01.10.17
 */
#include "Room.h"
#include "Screen.h"
#include "GraphScreen.h"
#include <iostream>

using namespace std;

int main() {
	cout << "Begin." << endl;
	Room r(10, 11, 12);
	GraphScreen gs(r);
	gs.PrintData();
	Room r2(1, 2, 3);
	gs.PrintData(r2);
	cout << "done." << endl;
	system("pause");
	return 0;
}
