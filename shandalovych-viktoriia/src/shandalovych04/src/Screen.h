/*
 * @file Screen.h Содержит описания класса для вывода объекта колесо .
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */

#ifndef Screen_H_
#define Screen_H_
#include <iostream>
#include<string.h>
#include "Wheel.h"
#include "BaseScreen.h"
/**
 * Класс, который выводит информацию про колесо.
 * Wheel - объект, который должен быть выведен.
 */
class Screen: public BaseScreen {
public:
	/**
	 * Конструктор без параметров.
	 */
	Screen();

	Screen(Wheel* wheel);

	/**
	 * Деструктор.
	 */
	virtual ~Screen();

	/**
	 * Функция вывода информации на экран.
	 */
	void ViewWheel();

	virtual void ShowHeader();
	virtual void ShowContent();
	virtual void ShowFooter();
};

#endif /* Screen_H_ */
