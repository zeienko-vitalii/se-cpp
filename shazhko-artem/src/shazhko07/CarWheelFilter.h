#pragma once
/**
* @file CarWheelFilter.h
* @brief —одержит объ€вление класса CarWheelFilter
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheel.h"
/**
* јбстрактный класс, который задает интерфейс фильтров
*/
class CarWheelFilter abstract{
public:
	/**
	* ƒеструктор
	*/
	virtual ~CarWheelFilter(){}
	/**
	* ќператор круглые скобки
	*/
	virtual  bool operator()(const CarWheel *carWheel)=0;
};