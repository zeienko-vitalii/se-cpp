/*
 * CScreen.h
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: CScreen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include <Capacity.h>

//CLASS DECLARATION
class CScreen {
public:
	/**
		 * Конструктор без параметра
		 */
	CScreen();
	/**
		 * Деструктор
		 */
	~CScreen();
	/**
		 * Функція відображення даних об'єкта класу Capacity
		 */
	void view(Capacity& cCapacity);
};

#endif /* CSCREEN_H_ */
