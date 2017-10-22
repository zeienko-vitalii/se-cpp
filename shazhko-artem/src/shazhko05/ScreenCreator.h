/**
* @file ScreenCreator.hpp
* @brief �������� ���������� ������  ScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "BaseScreen.h"
#include "Wheel.h"

/**
* ����������� �����, ������� ������ ��������� ���������� ������ ��� �������� �������� ����������� ����� ScreenCreator
*/
class ScreenCreator abstract{
public:
	/**
	* ����������� �������, ������� ������ ����������� ����� ScreenCreator
	* @return ������, ������� ��������� ��������� ScreenCreator, ��� ����������� ������ �� �����
	*/
	virtual BaseScreen* CreateSreen() = 0;
	/**
	* ����������
	*/
	virtual	~ScreenCreator(){}
};