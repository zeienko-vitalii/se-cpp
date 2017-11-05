#pragma once
/**
* @file CarWheelFilter.h
* @brief �������� ���������� ������ CarWheelFilter
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheel.h"
/**
* ����������� �����, ������� ������ ��������� ��������
*/
class CarWheelFilter abstract{
public:
	/**
	* ����������
	*/
	virtual ~CarWheelFilter(){}
	/**
	* �������� ������� ������
	*/
	virtual  bool operator()(const Wheel::CarWheel *carWheel)=0;
};