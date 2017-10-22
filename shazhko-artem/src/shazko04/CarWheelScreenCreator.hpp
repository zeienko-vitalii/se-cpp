#pragma once
/**
* @file CarWheelScreenCreator.hpp
* @brief �������� ���������� ������ CarWheelScreenCreator
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
class CarWheelScreenCreator :public ScreenCreator {
public:
	/**
	* ����������
	*/
	virtual ~CarWheelScreenCreator(){}
	/**
	* �����������
	*/
	CarWheelScreenCreator(CarWheel *wheel) {
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