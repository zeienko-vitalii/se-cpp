/**
* @file CreateGraphScreen.hpp
* @brief Содержит объявление класса CreateGraphScreen
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/

#pragma once
#include "ScreenCreator.h"
#include "GraphScreen.h"
#include "NonScreen.h"

/**
* Класс реализующий фабричный метод для создания объектов GraphScreen
*/
class CreateGraphScreen :public ScreenCreator{
public:
	/**
	* Деструктор
	*/
	virtual ~CreateGraphScreen() {}

	/**
	* Конструктор
	*/
	CreateGraphScreen(Wheel *wheel){
		this->wheel = wheel;
	}
	/**
	* Виртуальная функция, создает объект наследующий класс ScreenCreator
	* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
	*/
	BaseScreen* CreateSreen() override{
		if (wheel)
			return new GraphScreen(wheel);
		else return new NonScreen();
	}
private:
	// колесо
	Wheel *wheel;
};