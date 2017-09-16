/*
 * Name: CScreen.h
 * Created on: 10 сент. 2017 г.
 * @author: yashchenko
 * @description: CScreen declaration
 */

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include <CWindow.h>

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
public:
	/**
	 * Функція відображення даних об'єкта класу CWindow
	 */
	void view(CWindow& cWindow);
};

#endif /* CSCREEN_H_ */
