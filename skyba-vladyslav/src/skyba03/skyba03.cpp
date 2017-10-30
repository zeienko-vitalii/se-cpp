/**
 * @file skyba.cpp
 * Program work demonstration.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <iostream>

#include "Room.h"
#include "GraphScreen.h"
#include "Screen.h"
#include "HousingRoom.h"
#include "HousingRoomScreen.h"
#include <string>

using namespace std;

int main() {

			const float LENGTH1 = 5.05;
			const float WIDHT1 = 3.03;
			const float	HEIGHT1 = 3.57;
			Room room1(LENGTH1, WIDHT1, HEIGHT1);

			const float LENGTH2 = 8.73;
			const float WIDHT2 = 4.19;
			const float	HEIGHT2 = 3.40;
			Room room2(LENGTH2, WIDHT2, HEIGHT2);

			const float LENGTH3 = 6.91;
			const float WIDHT3 = 5.21;
			const float	HEIGHT3 = 2.9;
			const string NAME1 = "Room #313";
			const int SEATSNUMBER1 = 20;
			const string PURPOSE1 = "Laboratory room";
			HousingRoom housingRoom(LENGTH3, WIDHT3, HEIGHT3, NAME1, SEATSNUMBER1, PURPOSE1);

			cout << "From Screen " << endl;

			cout << "room1: \n";
			Screen view(&room1);
			view.Display();

			cout << "room2: \n";
			Screen view2(&room2);
			view2.Display();


			GraphScreen gscreen;
			cout << "From Graph Screen \n";
			gscreen.setDataSource(&room1);
			gscreen.Display();

			HousingRoomScreen housingRoomScreen(&housingRoom);
			cout << "From Housing Room: \n";
			housingRoomScreen.Display();

			return 0;

}
