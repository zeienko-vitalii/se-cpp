/**
* @file CreateGraphScreen.hpp
* @brief �������� ���������� ������ CreateGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

#pragma once
#include "ScreenCreator.h"
#include "GraphScreen.h"
#include "NonScreen.h"

/**
* ����� ����������� ��������� ����� ��� �������� �������� GraphScreen
*/
class CreateGraphScreen :public ScreenCreator{
public:
	/**
	* ����������
	*/
	virtual ~CreateGraphScreen() {}

	/**
	* �����������
	*/
	CreateGraphScreen(Wheel *wheel){
		this->wheel = wheel;
	}
	/**
	* ����������� �������, ������� ������ ����������� ����� ScreenCreator
	* @return ������, ������� ��������� ��������� ScreenCreator, ��� ����������� ������ �� �����
	*/
	BaseScreen* CreateSreen() override{
		if (wheel)
			return new GraphScreen(wheel);
		else return new NonScreen();
	}
private:
	// ������
	Wheel *wheel;
};