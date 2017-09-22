/*
 * Screen.h
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: Screen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include "Capacity.h"

/**
* Клас відображення інформації про об'єкт класу Capacity
*/
class Screen {
public:
	/**
	* Конструктор без параметра
	*/
	Screen();
	/**
	* Конструктор для всіх полей
	* @param capacity
	*/
	Screen(Capacity capacity);
	/**
	* Деструктор
	*/
	virtual ~Screen();
	/**
	 * Функція відображення даних об'єкта класу Capacity
	 */
	void view();
public:
	///Об'єкт класу, що має бути відображений
	Capacity capacity;
};

#endif /* CSCREEN_H_ */
