/**
* @file CScreen.h
* @brief Содержит объявление класса  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"
/**
* Класс описывающий отображение объектов класса CWheel
*/
class CScreen {
public:
	/**
	* Конструктор по-умолчанию
	*/
	CScreen();
	/**
	* Конструктор с одним параметром
	* @param _wheel колесо 
	*/
	CScreen(CWheel _wheel);
	/**
	* Деструктор
	*/
	virtual ~CScreen();
	/**
	* Вывод данных объекта
	*/
	void PrintData();
private:
	// колесо
	CWheel *wheel;
};