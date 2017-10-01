/**
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
	/**
	* Конвертирует тип EUnit в String
	* @return строка описывающая значение объекта EUnit
	*/
	static std::string ConvertEUnitToString(const EUnits _unit);
protected:
	// Единицы измерения
	EUnits units;
	// Диаметр
	double diameter;
	// ширина
	double width;
};