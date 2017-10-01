/*
 * @file Screen.h

 * Part of lab1
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "BaseView.h"

#ifndef SCREEN_H_
#define SCREEN_H_
/**
 * Класс для відображення даних
 */
class Screen: public BaseView {
public:
	//Об'єкт типу Manipulator
	Manipulator data;

public:
	Screen();
	/**
	 * Конструктор із параметром
	 * @param manip об'єкт типу Manipulator
	 */
	Screen(Manipulator data);

	/**
	 * Функція виводу данних
	 */
	void dataOutput();

	virtual void showHeader();

	virtual void showContent();

	virtual void showFooter();

	/**
	 * Деструктор.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
