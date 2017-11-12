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
namespace Screen {
	/**
	*  Класс описывающий отображение объектов класса CarWheelScreen
	*/
	class CarWheelScreen :public BaseScreen {
	public:
		/**
		* конструктор с одним параметром
		* @param _wheel колесо
		*/
		CarWheelScreen(Wheel::CarWheel *_wheel);
		/**
		* Деструктор
		*/
		virtual ~CarWheelScreen();
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
		Wheel::CarWheel *wheel;
	};
}