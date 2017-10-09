/**
* @file CScreen.h
* @brief Содержит объявление класса  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CWheel.h"
#include "CBaseScreen.h"

/**
* Класс описывающий отображение объектов класса CWheel
*/
class CScreen: public CBaseScreen {
public:
	/**
	* Конструктор по-умолчанию
	*/
	CScreen();
	/**
	* Конструктор с одним параметром
	* @param _wheel колесо
	*/
	CScreen(CWheel *_wheel);
	/**
	* Деструктор
	*/
	virtual ~CScreen();
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader();
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent();

	/**
	* Outputs footer of information.
	*/
	virtual void ShowFooter();
private:
	// колесо
	CWheel *wheel;
};