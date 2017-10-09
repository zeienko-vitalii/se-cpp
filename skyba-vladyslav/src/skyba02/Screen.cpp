#include <iostream>
#include <string>

#include "Room.h"
#include "Screen.h"

using namespace std;

Screen::Screen(): room(){

}

Screen::Screen(Room room): room(room){
	cout << "" << endl;
	cout << "Ñonstructor class Screen" << endl;

}

void Screen::Output(){
	cout << "" << endl;
	cout << "Room length: " << room.getLength() << endl;
	cout << "Room widht: " << room.getWidht() << endl;
	cout << "Room height: " << room.getHeight() << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "" << endl;
	cout << "Destructor class Screen" << endl;

}
