#pragma once
/**
* @file CarWheelFilterDecorator.h
* @brief �������� ���������� ������ CarWheelFilterDecorator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheelFilter.h"

/**
* ����� ���������, �� �������� ����� ���������� ���������
*/
class CarWheelFilterDecorator :public CarWheelFilter {
public:
	/**
	* �����������
	* @param carWheelFilterDecorator ��������� �� ���������
	*/
	CarWheelFilterDecorator(CarWheelFilter *_carWheelFilter);
	/**
	* ����������
	*/
	virtual ~CarWheelFilterDecorator();
protected:
	// ��������� �� ���������
	CarWheelFilter *carWheelFilter;
};