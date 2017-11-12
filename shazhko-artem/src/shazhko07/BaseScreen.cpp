/**
* @file BaseScreen.cpp
* @brief �������� ���������� ������ BaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#include "BaseScreen.h"
#include <iostream>
namespace Screen {
	void BaseScreen::Show()
	{
		ShowHeader();
		ShowContent();
		ShowFooter();
	}
}