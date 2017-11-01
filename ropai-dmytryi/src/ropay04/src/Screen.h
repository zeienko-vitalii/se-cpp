/*
 * @file Screen.h

 * Part of lab1
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */


#ifndef SCREEN_H_
#define SCREEN_H_
#include "BaseView.h"
/**
 * Класс для відображення даних
 */
class Screen: public BaseView {


public:
	Screen();
	/**
	 * Конструктор із параметром
	 * @param manip об'єкт типу Manipulator
	 */
	Screen(Manipulator* manip);

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
