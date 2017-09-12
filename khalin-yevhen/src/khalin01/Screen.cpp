#include "Screen.h"

Screen::Screen(Button btn): button(btn)
{
}

Screen::~Screen()
{
}

void Screen::printButtonState(std::ostream &out)
{
	char* btnState = button.state == true ? "ON" : "OFF";
	out << "state: " << btnState << std::endl;
}
