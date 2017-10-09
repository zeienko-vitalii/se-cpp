/*
 * @file Screen.h
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef SCREEN_H_
#define SCREEN_H_

/**
 * Класс для відображення даних
 */
class Screen {
public:
	//Об'єкт типу Monitor
	Monitor monitor;

public:

	/**
	 * Ініціалізація полей.
	 * Конструктор без параметрів
	 */
	Screen();

	/**
	 * Конструктор із параметром
	 * @param manip об'єкт типу Monitor
	 */
	Screen(Monitor monitor);

	/**
	 * Функція виводу данних
	 */
	void dataOutput();

	/**
	 * Деструктор.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
