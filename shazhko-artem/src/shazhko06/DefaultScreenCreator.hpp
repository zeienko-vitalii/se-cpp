#pragma once
/**
* @file DefaultScreenCreator.hpp
* @brief �������� ���������� ������ DefaultScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "DefaultScreen.h"

/**
* ����� ����������� ��������� ����� ��� �������� �������� DefaultScreen
*/
class DefaultScreenCreator :public ScreenCreator {
public:
	/**
	* ����������
	*/
	virtual ~DefaultScreenCreator(){}
	/**
	* �����������
	*/
	DefaultScreenCreator(Wheel *wheel) {
		this->wheel = wheel;
	}
	/**
	* ����������� �������, ������� ������ ����������� ����� ScreenCreator
	* @return ������, ������� ��������� ��������� ScreenCreator, ��� ����������� ������ �� �����
	*/
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new DefaultScreen(wheel);
		else throw "NullReferenceException";
	}
private:
	// ������
	Wheel *wheel;
};