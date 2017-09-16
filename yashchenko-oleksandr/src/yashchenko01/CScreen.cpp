/*
 * CScreen.cpp
 * Created on: 10 сент. 2017 г.
 * @author: yashchenko
 * @description: CScreen implementation
 */


#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <CScreen.h>

//конструктор без параметра
CScreen::CScreen() {

}

//Деструктор
CScreen::~CScreen() {

}

//Функція відображення даних об'єкта класу CWindow
void CScreen::view(CWindow& CWindow) {
	std::cout << "ID = " << CWindow.ID << std::endl;
	std::cout << "x1 = " << CWindow.x1 << std::endl;
	std::cout << "y1 = " << CWindow.y1 << std::endl;
	std::cout << "x2 = " << CWindow.x2 << std::endl;
	std::cout << "y2 = " << CWindow.y2 << std::endl;

}
