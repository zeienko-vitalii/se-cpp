/*
 * @file GraphScreen.h
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

class GraphScreen {
private:

	const Manipulator* manip;


public:
	/**
	 * Конструктор без параметрів
	 */
	GraphScreen();

	/**
	 *Метод для зміни об'єкта-джерела даних
	 * @param manip об'єкт типу Manipulator
	 */
	void setDataSource(const Manipulator *manip);

	/**
	 * Метод для виводу на екран інформацію про
	 * отриміний об'єкт у якості аргументу
	 * @param manip об'єкт типу Manipulator
	 */
	void printData(const Manipulator& manip);

	/**
	 * Метод для виводу на екран інформацію про
	 * об'єкт, заданний методом setDataSource
	 */
	void printData();
	/**
	 * Деструктор
	 */
	virtual ~GraphScreen();
};

#endif /* GRAPHSCREEN_H_ */
