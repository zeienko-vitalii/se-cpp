/**
* @file CGraphScreen.h
* @brief Содержит объявление класса  CGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"

class CGraphScreen
{
public:
	/**
	* Конструктор по-умолчанию
	*/
	CGraphScreen();
	/**
	* Деструктор
	*/
	virtual ~CGraphScreen();
	/**
	* Задать данные колеса
	* @param _wheel колесо
	*/
	void SetDataSource(const CWheel &_wheel);
	/**
	* Задать данные колеса
	* @return Данные колеса
	*/
	CWheel GetDataSource()const;
	/**
	* Вывод данных объекта
	*/
	void PrintData(const CWheel &_wheel);
	/**
	* Вывод данных объекта
	*/
	void PrintData();
private:
	// колесо
	CWheel *wheel;
};
