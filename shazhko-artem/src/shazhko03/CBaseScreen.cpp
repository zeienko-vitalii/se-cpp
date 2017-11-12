/**
* @file CBaseScreen.cpp
* @brief Содержит реализацию класса CBaseScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CBaseScreen.h"
#include <stdlib.h>
#include <iostream>


CBaseScreen::CBaseScreen(){}
CBaseScreen::~CBaseScreen(){
}

void CBaseScreen::Show()
{
	ShowHeader();
	ShowContent();
	ShowFooter();
}

