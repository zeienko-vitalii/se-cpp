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
		else throw "NullReferenceException";
	}
private:
	// ������
	Wheel *wheel;
};