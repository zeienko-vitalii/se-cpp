#pragma once
/**
* @file CreateDefaultScreen.hpp
* @brief Содержит объявление класса CreateDefaultScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ScreenCreator.h"
#include "NonScreen.h"
#include "DefaultScreen.h"

/**
* Класс реализующий фабричный метод для создания объектов DefaultScreen
*/
class CreateDefaultScreen :public ScreenCreator {
public:
	/**
	* Деструктор
	*/
	virtual ~CreateDefaultScreen(){}
	/**
	* Конструктор
	*/
	CreateDefaultScreen(Wheel *wheel) {
		this->wheel = wheel;
	}
	/**
	* Виртуальная функция, создает объект наследующий класс ScreenCreator
	* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
	*/
	BaseScreen* CreateSreen() override {
		if (wheel)
			return new DefaultScreen(wheel);
		else return new NonScreen();
	}
private:
	// колесо
	Wheel *wheel;
};