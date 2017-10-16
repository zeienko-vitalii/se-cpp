﻿/**
* @file GraphScreen.h
* @brief Содержит объявление класса  GraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "Wheel.h"
#include "BaseScreen.h"
#include <Windows.h>
/**
* Класс описывающий расширенное отображение объектов класса Wheel
*/
class GraphScreen :public BaseScreen{
private:
	/**
	* Напечатает линию соответствующую толщине колеса, относительно заданных координат
	* @param width Ширина колеса
	* @param pos Координаты
	*/
	void PrintWidth(double width, COORD pos);
public:
	/**
	* Конструктор по-умолчанию
	*/
	GraphScreen(Wheel *_wheel);
	/**
	* Деструктор
	*/
	virtual ~GraphScreen();
	/**
	* Задать данные колеса
	* @param _wheel колесо
	*/
	void SetDataSource(const Wheel &_wheel);
	/**
	* Задать данные колеса
	* @return Данные колеса
	*/
	Wheel GetDataSource() const;
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader() override;
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent() override;

	/**
	* Outputs footer of information.
	*/
	void ShowFooter() override;
private:
	// колесо
	Wheel *wheel;
};
