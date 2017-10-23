/**
 * @file Room.h
 * @brief  Хранит описание класса Room
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */
#pragma once
#include <iostream>
using namespace std;

/**
 * Класс описания размеров комнат 3 этажа ВК корпусу
 */
class Room {
private:
	int height;
	int width;
	int length;
public:
	/**
	 * Конструктор без параметров.
	 */
	Room();

	/**
	 * Конструктор с параметрами.
	 * @param H висота
	 * @param W ширина
	 * @param L длина
	 */
	Room(int H, int W, int L);

	/**
	 * Конструктор копирования
	 * @param r объект на основе кого создается новый
	 */
	Room(const Room& r);

	/**
	 * Деструктор
	 */
	~Room();

	/**
	 * Установка поля Room::height
	 * @param H копируется в height
	 */
	void setHeight(int H);

	/**
	 * Установка поля Room::width
	 * @param W копируется в width
	 */
	void setWidth(int W);

	/**
	 * Установка поля Room::length
	 * @param L копируется в length
	 */
	void setLength(int L);

	/**
	 * Возвращает значение поля Room::height
	 * @return значение поля height
	 */
	int getHeight() const;

	/**
	 * Возвращает значение поля Room::width
	 * @return значение поля width
	 */
	int getWidth() const;

	/**
	 * Возвращает значение поля Room::length
	 * @return значение поля length
	 */
	int getLength() const;

	/**
	 * Вычисляет и озвращает объем комнаты
	 * @return объем комнаты
	 */
	int Volume() const;
};

