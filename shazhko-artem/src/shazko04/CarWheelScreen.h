/**
* @file CScreen.h
* @brief Содержит объ¤вление класса  CScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "CarWheel.h"
#include "BaseScreen.h"
/**
*  Класс описывающий отображение объектов класса CWheel
*/
class CarWheelScreen :public BaseScreen{
public:
	/**
	* конструктор с одним параметром
	* @param _wheel колесо
	*/
	CarWheelScreen(CarWheel *_wheel);
	/**
	* конструктор
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