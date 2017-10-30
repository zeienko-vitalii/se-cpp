#pragma once
/**
* @file CarWheelFilterByDiameter.h
* @brief �������� ���������� ������ CarWheelFilterByDiameter
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheelFilterDecorator.h"
#include <stdlib.h>

/**
* �����, ������� ��������� ������ �� ��������
*/
class CarWheelFilterByDiameter:public CarWheelFilterDecorator {
public:
	/**
	* �����������
	* @param _diameter �������
	* @param carWheelFilterDecorator ��������� �� ���������
	*/
	CarWheelFilterByDiameter(double _diameter, CarWheelFilterDecorator*carWheelFilterDecorator);
	/**
	* ����������
	*/
	virtual ~CarWheelFilterByDiameter();
	/**
	* �������� ������� ������
	*/
	virtual  bool operator()(const CarWheel *carWheel);
private:
	// �������
	double diameter;
};