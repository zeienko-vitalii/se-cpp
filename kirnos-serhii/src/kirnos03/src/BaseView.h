/**
 * @file BaseView.h
 * @brief Хранит описание класса BaseView
 * @author Kirnos Serhii
 * @version 0
 * @date 30.10.17
 */

#pragma once
#include <iostream>
#include "Room.h"
#include "RoomHousing.h"
using namespace std;

/**
 * Базовый класс, задает способ вывода обьекта класса Room и его наследников
 */
class BaseView {
protected:
	const Room* room;
public:
	/**
	 * Конструктор без параметров
	 */
	BaseView() :
			room(nullptr) {
	}
	/**
	 * Конструктор копирования
	 * @param R объект копирования
	 */
	BaseView(const Room& R) :
			room(&R) {
	}
	/**
	 * Функция отображения объекта
	 */
	void Display() {
		ShowHeader();
		ShowContent();
		ShowFooter();
	}

	virtual ~BaseView() {
		cout << "~BaseView()" << endl;
	}

protected:
	virtual void ShowHeader() = 0;
	virtual void ShowContent() = 0;
	virtual void ShowFooter() = 0;
};
