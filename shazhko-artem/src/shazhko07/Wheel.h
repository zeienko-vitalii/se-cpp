/**
* @file Wheel.h
* @brief Содержит объявление класса  Wheel
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include <string>
#include "StorageInterface.h"
#include "Units.hpp"
#include <iostream>

/**
* Класс описывающий колесо
*/
class Wheel: public MStorageInterface {
public:
	/**
	* Конструктор по-умолчанию
	*/
	Wheel();
	/**
	* Конструктор с тремя параметром
	* @param _diameter Диаметр
	* @param _width Шырина
	* @param _unit Единицы измерения
	*/
	Wheel(double _diameter, double _width, EUnits _unit);
	/**
	* Конструктор копировнаия
	* @param wheel копируемый объект
	*/
	Wheel(const Wheel *wheel);

	bool operator==(const Wheel &wheel);


	/**
	* Зберігає дані в потік
	* @param aStream Відкритий потік для збереження даних
	*/
	virtual void OnStore(std::ostream& aStream);

	/**
	* Завантажує дані із потоку
	* @param aStream Відкритий потік для завантаження даних
	*/
	virtual void OnLoad(std::istream& aStream);

	/**
	* Деструктор
	*/
	virtual ~Wheel();
	/**
	* Подсчет объема колеса
	* @return Объем колеса
	*/
	double Volume() const;

	/**
	* Задать диаметр
	* @param _diameter диаметр
	*/
	void SetDiameter(const double _diameter);
	/**
	* Задать ширину
	* @param _width ширина
	*/
	void SetWidth(const double _width);
	/**
	* Задать единицы измерения
	* @param _units единицы измерения
	*/
	void SetUnits(const EUnits _units);

	/**
	* Возвращает единицы измерения
	* @return Объем колеса
	*/
	EUnits GetUnits() const;
	/**
	* Возвращает диаметр
	* @return диаметр
	*/
	double GetDiameter() const;
	/**
	* Возвращает ширину
	* @return ширина
	*/
	double GetWidth() const;
protected:
	// Единицы измерения
	EUnits units;
	// Диаметр
	double diameter;
	// ширина
	double width;
};