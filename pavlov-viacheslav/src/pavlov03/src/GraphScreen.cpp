/**
 * @file GraphScreen.cpp
 * GraphScreen functions realization.
 * @author pavlov-vs
 * @version 0.1.1
 * @date 2017.09.09
 */

#include<iostream>
#include "GraphScreen.h"

GraphScreen::GraphScreen() {
	cout << "GraphScreen default constructor\n";

}

GraphScreen::~GraphScreen() {
	cout << "GraphScreen destructor\n";
}

void GraphScreen::setDataSource(Window* data) {
	this->data = data;
}
void GraphScreen::printData(const Window& data) {

	for (int i = 0; i < data.width(); i++)
		cout << "1";

	for (int i = 0; i < data.height(); i++) {
		cout << "\n1";
		for (int j = 1; j < data.width() - 1; j++)
			cout << " ";
		cout << "1";
	}
	cout << "\n";
	for (int i = 0; i < data.width(); i++)
		cout << "1";
	cout << "\n";
}

void GraphScreen::printData() {

	printData(*this->data);
}

void GraphScreen::showHeader() {
	cout << "\n|--------------------------\n";
	cout << "Graph screen output\n";
}

void GraphScreen::showContent() {
	cout << "WindowId" << (*this->data).getWindowId() << endl;
	printData();
}

void GraphScreen::showFooter() {
	cout << "|--------------------------\n\n";
}

