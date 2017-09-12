#include "Screen.h"
#include "Logger.h"

Screen::Screen(Button btn): button(btn)
{
	Logger::getLogger().info("Screen()");
}

Screen::~Screen()
{
	Logger::getLogger().info("~Screen()");
}

void Screen::printButtonState(std::ostream &out)
{
	char* btnState = button.state == true ? "ON" : "OFF";
	out << "state: " << btnState << std::endl;
}
