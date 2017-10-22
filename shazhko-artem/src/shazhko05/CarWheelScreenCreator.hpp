#pragma once
/**
* @file CreateCarWheelScreen.hpp
* @brief Содержит объявление класса CreateCarWheelScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "CarWheelScreen.h"
#include "NonScreen.h"

/**
* Класс реализующий фабричный метод для создания объектов CarWheelScreen
*/
class CreateCarWheelScreen :public ScreenCreator {
public:
	/**
	* Деструктор
	*/
	virtual ~CreateCarWheelScreen(){}
	/**
	* Конструктор
	*/
	CreateCarWheelScreen(CarWheel *wheel) {
		this->wheel = wheel;
	}
	/**
	* Виртуальная функция, создает объект наследующий класс ScreenCreator
	* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
	*/
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new CarWheelScreen(wheel);
		else return new NonScreen();
	}
private:
	// колесо
	CarWheel *wheel;
};