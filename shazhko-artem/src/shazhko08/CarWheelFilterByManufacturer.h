#pragma once
/**
* @file CarWheelFilterByManufacturer.h
* @brief Содержит объявление класса CarWheelFilterByManufacturer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

#include "CarWheelFilterDecorator.h"
#include <string.h>

/**
* Класс, который фильтрует данные по производителю
*/
class CarWheelFilterByManufacturer: public CarWheelFilterDecorator {
public:
	/**
	* Конструктор
	* @param _manufacturer производитель
	* @param carWheelFilterDecorator указатель на декоратор
	*/
	CarWheelFilterByManufacturer(std::string _manufacturer, CarWheelFilterDecorator*carWheelFilterDecorator);
	/**
	* Деструктор
	*/
	virtual ~CarWheelFilterByManufacturer();
	/**
	* Оператор круглые скобки
	*/
	virtual  bool operator()(const Wheel::CarWheel *carWheel);
private:
	// производитель
	std::string manufacturer;
};