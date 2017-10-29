/**
* @file CarWheelScreen.h
* @brief Содержит объ¤вление класса  CarWheelScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CarWheel.h"
#include "BaseScreen.h"
/**
*  Класс описывающий отображение объектов класса CarWheelScreen
*/
class CarWheelScreen :public BaseScreen{
public:
	/**
	* конструктор с одним параметром
	* @param _wheel колесо
	*/
	CarWheelScreen(CarWheel *_wheel);
	/**
	* Деструктор
	*/
	virtual ~CarWheelScreen();
	/**
	* Outputs header of information.
	*/	
	virtual void ShowContent() override;
private:
	// колесо
	CarWheel *wheel;
};