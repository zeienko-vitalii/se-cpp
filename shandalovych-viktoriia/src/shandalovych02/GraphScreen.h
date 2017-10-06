/*
 *@file GraphScreen.h  содержит описание класса для вывода псевдографики
 *
 *@date  Created on: 26 сент. 2017 г.
 *@author: Viktotia
 */

#ifndef SRC_SHANDALOVYCH02_GRAPHSCREEN_H_
#define SRC_SHANDALOVYCH02_GRAPHSCREEN_H_

#include "Wheel.h"
 /**
  * Класс который выводит псевдографикой колесо
  * @param - объект, который должен выводиться
  */
class GraphScreen {
private:
	const Wheel* wheel;
public:

	/**
	 * Конструктор без параметров.
	 */
	GraphScreen();
	/**
	 * Конструктор для записи объекта, который выводим.
	 * @param  wheel - объект, который выводим.
	 */
	GraphScreen( Wheel* wheel);
	/**
     * Деструктор.
	 */
	virtual ~GraphScreen();
	/**
	 *  Уснавливает данные для внутреннего объекта этого класса
	 *   @param  wheel - объект, который выводим.
	 */
	void setDataSource (const Wheel* wheel);
	/**
	 * Выводит данные из объекта данных
	 * @param  wheel - объект, который выводим.
	 */
	void PrintData (const Wheel& wheel);
	/**
	 * Выводит данные извнутреннего объекта этого класса.
	 */
	void PrintData ();
};

#endif /* SRC_SHANDALOVYCH02_GRAPHSCREEN_H_ */
