/**
* @file Screen.h
* @brief Хранит описание класса Screen
* @author Kirnos Serhii
* @version 0
* @date 22.10.17
*/

#pragma once
#include "Room.h"
#include <iostream>
using namespace std;

/**
 * Класс предназначен для вывода объекта класса Screen.
 */
class Screen
{
public:

	Room room;

	/**
	 * Конструктор без парамметров.
	 */
	Screen();

	/**
	 * Конструктор с параметром
	 * @param r объект на основе кого создается новый
	 */
	Screen(Room r);

	/**
	 * Вывод Room::room.
	 */
	void ShowContent();

	/**
	 * Конструктор копирования.
	 * @param s объект копирования
	 */
	Screen(const Screen& s);

	/**
	 * Деструктор
	*/
	~Screen();
};
