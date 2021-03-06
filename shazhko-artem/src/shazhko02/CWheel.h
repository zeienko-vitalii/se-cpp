﻿/**
* @file CWheel.h
* @brief Содержит объявление класса  CWheel
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include <string>
/**
* Перечисление единиц измерения
*/
enum EUnits
{
	EUNITS_CENTIMETERS, EUNITS_MILLIMETRES, EUNITS_INCHES
};

/**
* Класс описывающий колесо
*/
class CWheel {
public:
	// Диаметр
	double diameter;
	// Шырина
	double width;
	/**
	* Конструктор по-умолчанию
	*/
	CWheel();
	/**
	* Конструктор с тремя параметром
	* @param _diameter Диаметр
	* @param _width Шырина
	* @param _unit Единицы измерения
	*/
	CWheel(double _diameter, double _width, EUnits _unit);
	/**
	* Конструктор копировнаия
	* @param wheel копируемый объект
	*/
	CWheel(const CWheel *wheel);

	/**
	* Деструктор
	*/
	virtual ~CWheel();
	/**
	* Подсчет объема колеса
	* @return Объем колеса
	*/
	double Volume() const;
	/**
	* Единицы измерения
	* @return Объем колеса
	*/
	EUnits GetUnits() const;
	/**
	* Конвертирует тип EUnit в String
	* @return строка описывающая значение объекта EUnit
	*/
	static std::string ConvertEUnitToString(const EUnits _unit);
private:
	// Единицы измерения
	EUnits units;
};