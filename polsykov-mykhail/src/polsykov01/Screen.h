/**
 * @file Screen.h файл содержащий класс Screen
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef SCREEN_H_
#define SCREEN_H_

/**
 * Класс для отображения даных
 */
class Screen {
public:
	//Обьект типа Monitor
	Monitor monitor;

public:

	/**
	 * Инициализация полей.
	 * Конструктор без параметров
	 */
	Screen();

	/**
	 * Конструктор с параметром
	 * @param monitor обьекта типа Monitor
	 */
	Screen(Monitor monitor);

	/**
	 * Функция вывода данных
	 */
	void dataOutput();

	/**
	 * Деструктор.
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
