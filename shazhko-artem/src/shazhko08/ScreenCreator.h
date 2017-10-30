/**
* @file ScreenCreator.h
* @brief Содержит объявление класса  ScreenCreator
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once
#include "BaseScreen.h"
#include "Wheel.h"

/**
* Абстрактный класс, который задает интерфейс фабричного метода для создания объектов наследующий класс ScreenCreator
*/
class ScreenCreator abstract{
public:
	/**
	* Виртуальная функция, создает объект наследующий класс ScreenCreator
	* @return объект, который реализует интерфейс ScreenCreator, для отображения данных на экран
	*/
	virtual BaseScreen* CreateSreen() = 0;
	/**
	* Деструктор
	*/
	virtual	~ScreenCreator(){}
};