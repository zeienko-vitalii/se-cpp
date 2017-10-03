/**
* @file CScreen.h
* @brief Содержит объявление класса  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CCarWheel.h"
#include "CBaseScreen.h"
/**
* Класс описывающий отображение объектов класса CWheel
*/
class CScreenCarWheel :public CBaseScreen{
public:
	/**
	* Конструктор с одним параметром
	* @param _wheel колесо
	*/
	CScreenCarWheel(CCarWheel *_wheel);
	/**
	* Деструктор
	*/
	virtual ~CScreenCarWheel();
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
	CCarWheel *wheel;
};