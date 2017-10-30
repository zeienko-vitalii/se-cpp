#pragma once
/**
* @file CarWheelFilterByManufacturer.h
* @brief �������� ���������� ������ CarWheelFilterByManufacturer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

#include "CarWheelFilterDecorator.h"
#include <string.h>

/**
* �����, ������� ��������� ������ �� �������������
*/
class CarWheelFilterByManufacturer: public CarWheelFilterDecorator {
public:
	/**
	* �����������
	* @param _manufacturer �������������
	* @param carWheelFilterDecorator ��������� �� ���������
	*/
	CarWheelFilterByManufacturer(std::string _manufacturer, CarWheelFilterDecorator*carWheelFilterDecorator);
	/**
	* ����������
	*/
	virtual ~CarWheelFilterByManufacturer();
	/**
	* �������� ������� ������
	*/
	virtual  bool operator()(const CarWheel *carWheel);
private:
	// �������������
	std::string manufacturer;
};