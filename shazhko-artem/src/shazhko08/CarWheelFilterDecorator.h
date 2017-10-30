#pragma once
/**
* @file CarWheelFilterDecorator.h
* @brief Содержит объявление класса CarWheelFilterDecorator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "CarWheelFilter.h"

/**
* Класс декоратор, от которого будут поражаться подклассы
*/
class CarWheelFilterDecorator :public CarWheelFilter {
public:
	/**
	* Конструктор
	* @param carWheelFilterDecorator указатель на декоратор
	*/
	CarWheelFilterDecorator(CarWheelFilter *_carWheelFilter);
	/**
	* Деструктор
	*/
	virtual ~CarWheelFilterDecorator();
protected:
	// указатель на декоратор
	CarWheelFilter *carWheelFilter;
};