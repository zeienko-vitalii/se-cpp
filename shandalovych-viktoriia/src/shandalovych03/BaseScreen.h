/*
 * BaseScreen.h
 *
 *  Created on: 8 окт. 2017 г.
 *      Author: Viktotia
 */

#ifndef BASESCREEN_H_
#define BASESCREEN_H_
#include<string>
#include "Wheel.h"
class BaseScreen {
public:
	BaseScreen();
	/**
	 * Конструктор для записи объекта, который выводим.
	 * @param  wheel - объект, который выводим.
	 */
	BaseScreen(Wheel* wheel);
	virtual ~BaseScreen();
	void display();
protected:
	///Объект, который выводит.
	Wheel* wheel;
	virtual void ShowHeader()=0;
	virtual void ShowContent()=0;
	virtual void ShowFooter()=0;

};

#endif /* BASESCREEN_H_ */
