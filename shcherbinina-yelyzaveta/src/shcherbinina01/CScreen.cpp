/*
 * CScreen.cpp
 * Created on: 10 ����. 2017 �.
 * Author: shcherbinina
 * Description: CScreen implementation
 */


#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include "CScreen.h"

//����������� ��� ���������
CScreen::CScreen() {
	// TODO Auto-generated constructor stub

}
//����������
CScreen::~CScreen() {
	// TODO Auto-generated destructor stub
}

//������� ����������� ����� ��'���� ����� Capacity
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
