#pragma once
/**
* @file CreateCarWheelScreen.hpp
* @brief �������� ���������� ������ CreateCarWheelScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "CarWheelScreen.h"
#include "NonScreen.h"

/**
* ����� ����������� ��������� ����� ��� �������� �������� CarWheelScreen
*/
class CreateCarWheelScreen :public ScreenCreator {
public:
	/**
	* ����������
	*/
	virtual ~CreateCarWheelScreen(){}
	/**
	* �����������
	*/
	CreateCarWheelScreen(CarWheel *wheel) {
		this->wheel = wheel;
	}
	/**
	* ����������� �������, ������� ������ ����������� ����� ScreenCreator
	* @return ������, ������� ��������� ��������� ScreenCreator, ��� ����������� ������ �� �����
	*/
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new CarWheelScreen(wheel);
		else return new NonScreen();
	}
private:
	// ������
	CarWheel *wheel;
};