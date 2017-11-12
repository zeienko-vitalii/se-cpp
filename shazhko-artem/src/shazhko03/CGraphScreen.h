/**
* @file CGraphScreen.h
* @brief Содержит объявление класса  CGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"
#include "CBaseScreen.h"
#include <Windows.h>
/**
* Класс описывающий расширенное отображение объектов класса CWheel
*/
class CGraphScreen :public CBaseScreen{
private:
	/**
	* Напечатает линию соответствующую толщине колеса, относительно заданных координат
	* @param width Ширина колеса
	* @param pos Координаты
	*/
	void PrintWidth(double width, COORD pos);
	/**
	* Напечатает разделительную линию, относительно заданных координат
	* @param width Ширина колеса
	* @param pos Координаты
	*/
	void PrintLine(double width, SHORT pos);
public:
	/**
	* Конструктор по-умолчанию
	*/
	CGraphScreen(CWheel *_wheel);
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
	CWheel GetDataSource() const;
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader() override;
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent()override;

	/**
	* Outputs footer of information.
	*/
	virtual void ShowFooter()override;
private:
	// колесо
	CWheel *wheel;
};
