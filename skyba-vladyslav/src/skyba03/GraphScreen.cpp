/**
 * @file GraphScreen.cpp
 * GraphScreen functions realization.
 * @author skyba-vv
 * @version 0.1.1
 * @date 2017.10.02
 */#include <iostream>
#include <string>

#include "Room.h"
#include "GraphScreen.h"


GraphScreen::GraphScreen(): room(){
	cout << "" << endl;
	cout << "GraphScreen constructor" << endl;

}

void GraphScreen::setDataSource(const Room* room){
	this->room = room;
}


void GraphScreen::printData(const Room& room){


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
cout << "Room width: " << room.getWidht() << endl;
cout << "Room height: " << room.getHeight() << endl;
cout << "" << endl;
}

void GraphScreen::printData(){

	printData(*room);

}

void GraphScreen::showHeader(){
	cout << "GraphScreen::showHeader() \n" << endl;
}

void GraphScreen::showContent(){
	printData();
}

void GraphScreen::showFooter(){
	cout << "\n GraphScreen::showFooter()" << endl;
}


GraphScreen::~GraphScreen() {

	cout << "GraphScreen destructor" << endl;

	// TODO Auto-generated destructor stub
}
