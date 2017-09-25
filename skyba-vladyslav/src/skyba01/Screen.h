/**
 * @file Screen.h
 * Содержит класс для просмотра объектов Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.18
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <locale.h>
/**
 *Класс, который просматривает информацию об объекте Room.
 * room - объект, который должен быть просмотрен
 */
class Screen {
public:
	//
	Room room;

public:

	/**
	 *Конструктор по умолчанию
	 */
	Screen();

	/**
	 *Конструктор для всех полей
	 * @param room - room, которое должно быть установлено
	 */
	Screen(Room room);

	/**
	 *Выводит информацию о 'room` в консоль
	 */
	void dataOutput();

	/**
	 * Виртуальный деструктор
	 */

	virtual ~Screen();
};

#endif /* SCREEN_H_ */
