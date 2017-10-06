/*
 * @file Wheel.h Содержит описания объкта "Колесо".
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */

#pragma once

#include <iostream>
#include <string.h>
using namespace std;
/**
 * Класс который содержит описание колеса. <br>
 * diameter - диаметр колеса. <br>
 * width - ширина колеса. <br>
 * unit - единица измерения размеров колеса. <br>
 */
class Wheel {
	/**
	 * Перегрузка оператора вывода для форматированого вывода.
	 */
	friend ostream& operator <<(ostream& oSt, Wheel Wheel);

	/**
	 * Перегрузка оператора ввода.
	 */
	friend void operator >>(istream& iSt, Wheel &Wheel);
private:

///Единица езмерения.
	string unit;

public:
	///Диаметр.
	int diameter;
	///Ширина.
	int width;

	/**
	 *  Конструктор колеса без параметров.
	 */
	Wheel();
	/**
	 * Деструктор.
	 */

	~Wheel();

	/**
	 * Конструктор для установки начальных значений.
	 * @param diameter - Начальное значение диаметра.
	 * @param width - Начальное значение ширины.
	 * @param unit - Начальное значение единицы измерения.
	 */
	Wheel(int diameter, int width, string unit);
	double volume() const;
	/**
	 * Геттер диаметра колеса.
	 * @return диаметр колеса.
	 */
	int getdiameter();

	/**
	 * Сеттер диаметра.
	 * @param diameter - диаметр колеса.
	 */
	void setdiameter(int diameter);

	/**
	 * Геттер ширина колеса.
	 * @return ширина колеса.
	 */
	int getwidth();

	/**
	 * Сеттер ширины.
	 * @param width - ширина колеса.
	 */
	void setwidth(int width);

	/**
	 * Геттер единица измерения колеса.
	 * @return единица измерения колеса.
	 */
	string getunit();

	/**
	 * Сеттер еденицы измерения.
	 * @param unit - еденица измерения колеса.
	 */
	void setunit(string unit);

};
