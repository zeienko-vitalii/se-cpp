#pragma once
/**
* @file CarWheelFilterByDiameter.h
* @brief Содержит объявление класса CarWheelFilterByDiameter
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheelFilterDecorator.h"
#include <stdlib.h>

/**
* Класс, который фильтрует данные по диаметру
*/
class CarWheelFilterByDiameter:public CarWheelFilterDecorator {
public:
	/**
	* Конструктор
	* @param _diameter диаметр
	* @param carWheelFilterDecorator указатель на декоратор
	*/
	CarWheelFilterByDiameter(double _diameter, CarWheelFilterDecorator*carWheelFilterDecorator);
	/**
	* Деструктор
	*/
	virtual ~CarWheelFilterByDiameter();
	/**
	* Оператор круглые скобки
	*/
	virtual  bool operator()(const CarWheel *carWheel);
private:
	// диаметр
	double diameter;
};