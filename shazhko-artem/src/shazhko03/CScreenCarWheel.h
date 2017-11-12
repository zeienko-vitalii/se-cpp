/**
* @file CScreenCarWheel.h
* @brief Содержит объ¤вление класса  CScreenCarWheel
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CCarWheel.h"
#include "CBaseScreen.h"
/**
*  Класс описывающий отображение объектов класса CCarWheel
*/
class CScreenCarWheel :public CBaseScreen{
public:
	/**
	* конструктор с одним параметром
	* @param _wheel колесо
	*/
	CScreenCarWheel(CCarWheel *_wheel);
	/**
	* конструктор
	*/
	virtual ~CScreenCarWheel();
	/**
	* Outputs header of information.
	*/
	virtual void ShowHeader()override;
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
	CCarWheel *wheel;
};