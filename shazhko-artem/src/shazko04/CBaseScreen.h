/**
* @file CScreen.h
* @brief Содержит объявление базового класса  CBaseScreen
* @author Shazhko Artem
* @version 0
* @date 03.10.17
*/
#pragma once
#include "SimpleTimer.h"
#include "TimerHelper.h"

/**
* Класс описывающий базовое отображение объектов
*/
class CBaseScreen: public TimerHelper{
public:
	/**
	* Конструктор по-умолчанию
	*/
	CBaseScreen();
	/**
	* Деструктор
	*/
	virtual ~CBaseScreen();
protected:
	virtual	void OnTimerAction() {
		ShowHeader();
		ShowContent();
		ShowFooter();
	}

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
};