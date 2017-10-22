#pragma once
/**
* @file CreateDefaultScreen.hpp
* @brief �������� ���������� ������ CreateDefaultScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "NonScreen.h"
#include "DefaultScreen.h"

/**
* ����� ����������� ��������� ����� ��� �������� �������� DefaultScreen
*/
class CreateDefaultScreen :public ScreenCreator {
public:
	/**
	* ����������
	*/
	virtual ~CreateDefaultScreen(){}
	/**
	* �����������
	*/
	CreateDefaultScreen(Wheel *wheel) {
		this->wheel = wheel;
	}
	/**
	* ����������� �������, ������� ������ ����������� ����� ScreenCreator
	* @return ������, ������� ��������� ��������� ScreenCreator, ��� ����������� ������ �� �����
	*/
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new DefaultScreen(wheel);
		else return new NonScreen();
	}
private:
	// ������
	Wheel *wheel;
};