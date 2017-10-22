/**
* @file GraphScreenCreator.hpp
* @brief �������� ���������� ������ GraphScreenCreator
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
class GraphScreenCreator :public ScreenCreator{
public:
	/**
	* ����������
	*/
	virtual ~GraphScreenCreator() {}

	/**
	* �����������
	*/
	GraphScreenCreator(Wheel *wheel){
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