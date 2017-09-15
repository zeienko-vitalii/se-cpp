/*
 * @file Screen.h
 * Part of lab1
 * @author Дима
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
	//Об'єкт типу Manipulator
	Manipulator manip;

public:

	/**
	 * Ініціалізація полей.
	 * Конструктор без параметрів
	 */
	Screen();

	/**
	 * Конструктор із параметром
	 * @param manip об'єкт типу Manipulator
	 */
	Screen(Manipulator manip);

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
