/*
 * CScreen.cpp
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: CScreen implementation
 */


#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include "CScreen.h"

//конструктор без параметра
CScreen::CScreen() {
	// TODO Auto-generated constructor stub

}
//Деструктор
CScreen::~CScreen() {
	// TODO Auto-generated destructor stub
}

//Функція відображення даних об'єкта класу Capacity
void CScreen::view(Capacity& cCapacity) {
	switch(cCapacity._unit){
	case F:
		std::cout << "unit = F" << std::endl;
		break;
	case mkF:
		std::cout << "unit = mkF" << std::endl;
		break;
	case nF:
		std::cout << "unit = nF" << std::endl;
		break;
	case pF:
		std::cout << "unit = pF" << std::endl;
		break;
	}
	std::cout << "V = " << cCapacity.v << std::endl;
}
