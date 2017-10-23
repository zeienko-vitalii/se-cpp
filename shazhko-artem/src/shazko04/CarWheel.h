/**
* @file CarWheel.h
* @brief Содержит объявление базового класса  CarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once
#include "Wheel.h"
#include <string.h>

class  CarWheel:public Wheel
{
public:
	/**
	* Конструктор с тремя параметром
	* @param _diameter Диаметр
	* @param _width Шырина
	* @param _unit Единицы измерения
	*/
	CarWheel(double _diameter, double _width, EUnits _unit,std::string tireName,std::string tireManufacturer);
	/**
	* Конструктор копировнаия
	* @param carWheel копируемый объект
	*/
	CarWheel(const CarWheel *carWheel);
	/**
	* Задает название шины
	* @param _tireName название шины
	*/
	void SetTireName(const std::string _tireName);
	/**
	* Задает производителя
	* @param _tireName производитель
	*/
	void SetTireManufacturer(const std::string _tireManufacturer);
	/**
	* Получает название шины
	* @return название шины
	*/
	std::string GetTireName() const;
	/**
	* Получает производителя
	* @return производитель
	*/
	std::string GetTireManufacturer() const;

	CarWheel& operator=(CarWheel &wheel);
private:
	// название шины
	std::string tireName;
	// производитель
	std::string tireManufacturer;
};