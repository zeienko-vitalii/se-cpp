/*
 * @file Screen.cpp
 * Part of lab1
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "BaseView.h"
#include "Manipulator.h"
#include "Screen.h"

using namespace std;


Screen::Screen(){

}

Screen::Screen(Manipulator* manip): BaseView(manip){
	cout << "" << endl;
	cout << "Screen constructor" << endl;

}

void Screen::dataOutput(){
	cout << (*manip).toString();
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
