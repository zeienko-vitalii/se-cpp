/**
 * @file Screen.h
 * @brief Хранит описание класса Screen
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include <iostream>
using namespace std;

/**
 * Класс предназначен для вывода объекта класса Screen.
 */
class Screen: public BaseView {
public:
	/**
	 * Конструктор без парамметров.
	 */
	Screen();
	/**
	 * Конструктор с параметром
	 * @param r объект на основе кого создается новый
	 */
	Screen(const Room& R);
	/**
	 * Конструктор копирования.
	 * @param s объект копирования
	 */
	Screen(const Screen& s);

	void ShowHeader();
	/**
	 * Вывод Room::room.
	 */
	void ShowContent();
	void ShowFooter();

	/**
	 * Деструктор
	 */
	~Screen();
};
