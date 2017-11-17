/**
 * @file main.cpp
 * @author Kirnos Sehii
 * @version 0
 * @date 30.10.17
 */
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include "Screen.h"
#include "GraphScreen.h"
#include <iostream>
#include <windows.h>
#include "debug_new.h"
#include "View3.h"
#include "TimerEx.h"

using namespace std;

int main() {
	// Демонстрация перегрузки методов
	RoomHousing r(4,8,8,"k 202", 28, PRACTICAL);
	BaseView *bw = new View3(r);
	cout << "->before" << endl;
	bw->Display();

	r.SetData(29);
	r.SetData(LECTURES);
	cout << "->after" << endl;
	bw->Display();
	delete bw;
	// Демонстрация перегрузки операторов
	Room r2_1(4,10,10);
	Room r2_2(4,12,10);
	if(r2_1 < r2_2)
		cout << "Volume r2_1(" << r2_1.Volume() << ") < Volume r2_2(" << r2_2.Volume() << ");" << endl;
	else
		cout << "Volume r2_1(" << r2_1.Volume() << ") >= Volume r2_2(" << r2_2.Volume() << ");" << endl;
	RoomHousing r3(4,8,8,"k 202", 28, PRACTICAL);
	cout << "Name room before " << r3.getNmae() << endl;
	char *newName = (char*)"abc";
	r3 = newName;
	cout << "Name room after " << r3.getNmae() << endl;
	// Демонстрация работы таймера
	Room r4(4, 8, 8);
	TimerEx TE(4, 2000, r4);
	TE.go();
	return 0;
}
