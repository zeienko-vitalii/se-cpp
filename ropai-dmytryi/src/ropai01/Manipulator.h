/*
 * Manipulator.h
 *
 *  Created on: 5 сент. 2017 г.
 *      Author: Дима
 */
#pragma once
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_
/**
 * Класс, який описує об`ект девайс
 */
class Manipulator {
public:

	//Кіількість кнопок
	int count;

	//Тип девайсу
	string type;

public:

	/**
	 * Ініціалізація полей
	 * Конструктор без параметрів
	 */
	Manipulator();

	/**
	 * Конструктор із параметрами
	 * @param count кількість кнопок
	 * @param type тип девайсу
	 */
	Manipulator(int count, string type);

	/**
	 * Отримання кількості кнопок
	 * @return кількість кнопок
	 */
	int getCount();

	/**
	 * Отримання типу девайсу
	 * @return тип девайсу
	 */
	string getType();

	/**
	* Установка кількості кнопок
	* @param count присваюється полю count
	*/
	void setCoutn(int count);

	/**
	* Установка типу девайсу
	* @param type присваюється полю type
	*/
	void setType(string type);

	/**
	 * Деструктор
	 */
	virtual ~Manipulator();
};


#endif /* MANIPULATOR_H_ */
