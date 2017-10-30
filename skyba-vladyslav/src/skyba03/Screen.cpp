/**
 * @file Screen.cpp
 * Screen functions realization.
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.10.02
 */
#include <iostream>
#include <string>

#include "BaseView.h"
#include "Room.h"
#include "Screen.h"

using namespace std;


Screen::Screen(){

}
Screen::Screen(Room* room): BaseView(room){
	cout << "" << endl;
	cout << "Screen constructor" << endl;

}



void Screen::dataOutput(){
	cout << (*room).toString();
}

void Screen::showHeader(){
	cout << "Screen::showHeader() \n";
}

void Screen::showContent(){
	dataOutput();
}

void Screen::showFooter(){
	cout << "\n Screen::showFooter() \n";
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "" << endl;
	cout << "Screen destructor" << endl;

}
