/**
* @file View1.h
* @brief Містить клас Screen
* @author Kirnos Serhii
* @version 0
* @date 18.09.17
*/

#pragma once
#include "Room.h"

/**
 * Клас призначений для виведення об'єкту класу Screen.
 */
class Screen
{
public:

	Room *room;

	/**
	 * Конструктор буз параметрів.
	 */
	Screen();

	/**
	 * Конструктор з параметром, за допомогою якого відбувається приведення типу Room до Screen
	 * @param r об'єкт на основі я кого створюється новий
	 */
	Screen(Room r);

	/**
	 * Виведення Room::room.
	 */
	void ShowContent();

	/**
	 * Конструктор копіювання.
	 * @param s об'єкт копіювання
	 */
	Screen(const Screen& s);

	/**
	 * Деструктор
	*/
	~Screen();
};
