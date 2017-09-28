/*
 * @file Screen.cpp
 * Part of lab1
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Manipulator.h"
#include "Screen.h"

using namespace std;

Screen::Screen(): manip(){

}

Screen::Screen(Manipulator manip): manip(manip){
	cout << "" << endl;
	cout << "Screen constructor" << endl;

}

void Screen::dataOutput(){
	cout << "" << endl;
	cout << "Device type: " << manip.getType() << endl;
	cout << "Number of buttons: " << manip.getCount() << endl;
	cout << "" << endl;
}

Screen::~Screen() {
	// TODO Auto-generated destructor stub
	cout << "" << endl;
	cout << "Screen destructor" << endl;

}

