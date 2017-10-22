/**
* @file DefaultScreen.h
* @brief Содержит объявление класса  DefaultScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "Wheel.h"
#include "BaseScreen.h"

/**
* Класс описывающий отображение объектов класса DefaultScreen
*/
class DefaultScreen : public BaseScreen {
public:

	/**
	* Конструктор с одним параметром
	* @param _wheel колесо
	*/
	DefaultScreen(Wheel *_wheel);
	/**
	* Деструктор
	*/
	virtual ~DefaultScreen();
	/**
	* Outputs main information about window.
	*/
	virtual void ShowContent() override;
private:
	// колесо
	Wheel *wheel;
};