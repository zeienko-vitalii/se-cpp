/**
* @file Room.h
* @brief  Містить клас Room
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

/**
 * Клас опису розмірів 3 поверху ВК
 */
class Room
{
public:
	double height;
	double width;
	double length;

	/**
	 * Конструктор буз параметрів.
	 */
	Room();

	/**
	 * Конструктор з параметрами.
	 * @param H висота
	 * @param W ширина
	 * @param L довжина
	 */
	Room(int H, int W, int L);

	/**
	 * Конструктор копіювання
	 * @param r об'єкт на основі я кого створюється новий
	 */
	Room(const Room& r);

	/**
	 * Деструктор
	 */
	~Room();

	/**
	 * Установка поля Room::height
	 * @param H копіюється в height
	 */
	void SetHeight(double H);

	/**
	 * Установка поля Room::width
	 * @param W копіюється в width
	 */
	void SetWidth(double W);

	/**
	 * Установка поля Room::length
	 * @param L копіюється в length
	 */
	void SetLength(double L);
};
