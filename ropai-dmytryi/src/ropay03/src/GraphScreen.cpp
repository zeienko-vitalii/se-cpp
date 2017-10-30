/*
 * @file GraphScreen.cpp
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>
#include <string>

#include "Manipulator.h"
#include "GraphScreen.h"


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


	cout << "\n Device type: " << manip.getType() << endl;
	cout << "Number of buttons: " << manip.getCount() << endl;
	cout << "" << endl;
}

void GraphScreen::printData(){

	printData(*manip);

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

