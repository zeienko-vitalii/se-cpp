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

using namespace std;

int main() {
	Room **r = new Room*[4];
	r[0] = new RoomHousing(4,8,8,"k 202", 28, PRACTICAL);
	r[1] = new RoomHousing(4,12,10,"k 313", 25, LABORATORY);
	r[2] = new Room(4,10,10);
	r[3] = new Room(4,8,10);

	BaseView **bw = new BaseView*[4];
	bw[0] = new GraphScreen(*r[0]);
	bw[1] = new Screen(*r[1]);
	bw[2] = new GraphScreen(*r[2]);
	bw[3] = new Screen(*r[3]);

	for(int i = 0; i < 4; i++)
		bw[i]->Display();

	for(int i = 0; i < 4; i++){
		delete r[i];
		delete bw[i];
	}
	delete []r;
	delete []bw;

	getchar();
	return 0;
}
