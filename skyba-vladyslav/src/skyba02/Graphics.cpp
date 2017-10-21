/**
 * @file Graphics.cpp
 * Graphics functions realization.
 * @author skyba-vv
 * @version 0.1.1
 * @date 2017.09.25
 */
#include <iostream>
#include <string>

#include "Room.h"
#include "Graphics.h"

using namespace std;

Graphics::Graphics(): room(){
	cout << "" << endl;
	cout << "Constructor class Graphics" << endl;

}

void Graphics::setData(const Room* room){
	this->room = room;
}


void Graphics::Data(const Room& room){


	cout  << "    ______________________   "<< endl;
	cout  << "   /|                    /|  "<< endl;
	cout  << "  / |                   / |  "<< endl;
	cout  << " /  |                  /  |  "<< endl;
	cout  << "/___|_________________/   |  "<< endl;
	cout  << "|   |                 |   |  "<< endl;
	cout  << "|   |                 |   |  "<< endl;
	cout  << "|   |                 |   |  "<< endl;
	cout  << "|   |_ _ _ _ _ _ _ _ _|_ _|  "<< endl;
	cout  << "|   /                 |   /  "<< endl;
	cout  << "|  /                  |  /   "<< endl;
	cout  << "| /                   | /    "<< endl;
	cout  << "|/____________________|/     "<< endl;


	cout << "" << endl;
	cout << "Room length: " << room.getLength() << endl;
	cout << "Room widht: " << room.getWidht() << endl;
	cout << "Room height: " << room.getHeight() << endl;
	cout << "" << endl;
}

void Graphics::Data(){

	Data(*room);

}

Graphics::~Graphics() {

	cout << "Destructor class Graphics" << endl;

	// TODO Auto-generated destructor stub
}
