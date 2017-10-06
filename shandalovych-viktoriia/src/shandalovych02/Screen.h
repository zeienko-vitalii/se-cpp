/*
 * @file Screen.h Содержит описания класса для вывода объекта колесо .
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */

#ifndef Screen_H_
#define Screen_H_

/**
 * Класс, который выводит информацию про колесо.
 * Wheel - объект, который должен быть выведен.
 */
class Screen {
public:
	/**
	 * Конструктор без параметров.
	 */
	Screen();

	/**
	 * Конструктор для записи объекта, который выводим.
	 * @param  wheel - объект, который выводим.
	 */
	Screen(Wheel wheel);

	/**
	 * Деструктор.
	 */
	virtual ~Screen();

	/**
	 * Функция вывода информации на экран.
	 */
	void ViewWheel();
private:
	///Объект, который выводит.
	Wheel wheel;
};

#endif /* Screen_H_ */
