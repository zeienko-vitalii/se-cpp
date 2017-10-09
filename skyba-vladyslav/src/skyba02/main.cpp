/**
 * @file Main.cpp
 * Демонстрация работы программы.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#include <iostream>
#include "Room.h"
#include "Graphics.h"
#include "Screen.h"
#include <string>

using namespace std;
/**
 * Точка входа в программу
 * @return 0
 */
int main() {

	const float LENGTH_ROOM1 = 1.01;
	const float WIDHT_ROOM1 = 2.01;
	const float HEIGHT_ROOM1 = 3.01;
	Room room1(LENGTH_ROOM1,WIDHT_ROOM1, HEIGHT_ROOM1);

	const float LENGTH_ROOM2 = 5.01;
	const float WIDHT_ROOM2 = 6.01;
	const float HEIGHT_ROOM2 = 3.01;
	Room room2(LENGTH_ROOM2,WIDHT_ROOM2, HEIGHT_ROOM2);


	cout << "From Screen" << endl;

	cout << "manip1: " << endl;
	Screen view(room1);
	view.Output();

	cout << "manip2: " << endl;
	Screen view2(room2);
	view2.Output();


	Graphics gscreen;
	cout << "From Graph Screen" << endl;

	gscreen.setData(&room1);

	cout << "manip1: " << endl;
	gscreen.Data();

	cout << "manip2: " << endl;
	gscreen.Data(room2);

	cout << "Volume room1: " << room1.Volume() << endl;
	cout << "Volume room2: " << room2.Volume() << endl;

		return 0;
}
