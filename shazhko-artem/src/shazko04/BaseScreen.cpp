/**
* @file BaseScreen.cpp
* @brief �������� ���������� ������ BaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
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
