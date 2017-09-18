/**
* @file GraphScreen.cpp
* @brief Contains GraphScreen class implementation
* @author Khalin Yevhen
* @version 0
* @date 17.09.17
*/

#include "GraphScreen.h"

GraphScreen::GraphScreen(const Button * btn) : btn(btn)
{
}

void GraphScreen::printData(const Button * btn, std::ostream & os) const
{
	char* isPressed = btn->isRoundPressed() ? "true" : "false";
	os << "Button is round and pressed: " << isPressed << std::endl;
}

void GraphScreen::setDataSource(const Button * btn)
{
	this->btn = btn;
}

const Button * GraphScreen::getDataSource()
{
	return btn;
}

void GraphScreen::printDataSource(std::ostream & os)
{
	printData(btn, std::cout);
}

GraphScreen::~GraphScreen()
{
}
