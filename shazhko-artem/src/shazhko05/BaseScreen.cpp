#include "BaseScreen.h"
#include <iostream>

void BaseScreen::ShowHeader()
{
	std::cout << "----------------------------" << std::endl;
}

void BaseScreen::ShowContent()
{
	std::cout << "Data not available" << std::endl;
}

void BaseScreen::ShowFooter()
{
	std::cout << "----------------------------" << std::endl;
}
