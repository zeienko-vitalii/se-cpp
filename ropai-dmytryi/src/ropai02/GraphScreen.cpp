/*
 * @file GraphScreen.cpp
 * Part of lab02
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Manipulator.h"
#include "GraphScreen.h"

using namespace std;

GraphScreen::GraphScreen(): manip(){
	cout << "" << endl;
	cout << "GraphScreen constructor" << endl;

}

void GraphScreen::setDataSource(const Manipulator* manip){
	this->manip = manip;
}


void GraphScreen::printData(const Manipulator& manip){


	cout  << "           /	        \n";
	cout  << "          /	        \n";
	cout  << "         /	        \n";
	cout  << "        /	            \n";
	cout  << "       /           	\n";
	cout  << "       \\	            \n";
	cout  << "        \\	        \n";
	cout  << "         \\	        \n";
	cout  << "          \\	        \n";
	cout  << "       ---------  	\n";
	cout  << "      /   **    \\	\n";
	cout  << "     /    **     \\   \n";
	cout  << "     |    ||      |	\n";
	cout  << "     |    ||      | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "     |            | 	\n";
	cout  << "      \\          / 	\n";
	cout  << "       \\        / 	\n";
	cout  << "        --------	    \n";


	cout << "" << endl;
	cout << "Device type: " << manip.getType() << endl;
	cout << "Number of buttons: " << manip.getCount() << endl;
	cout << "" << endl;
}

void GraphScreen::printData(){

	printData(*manip);

}

GraphScreen::~GraphScreen() {

	cout << "GraphScreen destructor" << endl;

	// TODO Auto-generated destructor stub
}

