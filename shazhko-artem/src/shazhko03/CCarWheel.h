/**
* @file CCarWheel.h
* @brief Содержит объявление базового класса  CCarWheel
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once
#include "CWheel.h"
#include <string.h>

/**
* Класс описывающий колесо машины
*/
class  CCarWheel:public CWheel
{
public:
	/**
	* Конструктор с тремя параметром
	* @param _diameter Диаметр
	* @param _width Шырина
	* @param _unit Единицы измерения
	*/
	CCarWheel(double _diameter, double _width, EUnits _unit,std::string tireName,std::string tireManufacturer);
	/**
	* Конструктор копировнаия
	* @param carWheel копируемый объект
	*/
	CCarWheel(const CCarWheel *carWheel);
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
private:
	// название шины
	std::string tireName;
	// производитель
	std::string tireManufacturer;
};