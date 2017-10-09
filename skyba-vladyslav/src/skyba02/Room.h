/**
 * @file Room.h
 * Содержит класс для просмотра объектов Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#pragma once
using namespace std;
#ifndef ROOM_H_
#define ROOM_H_
/**
 * Класс, содержащий реализацию Room
 */
class Room {

public:

	float length;
	float widht;
	float height;

public:
/**
* Конструктор по умолчанию
*/
	Room();
/**
 * Конструктор для всех полей
 * @param length
 * @param width
 * @param height
 */

	Room(float length, float widht,	float height);

/**
* Геттер length
* @return length
*/
	float getLength() const;
/**
* Геттер width
* @return width
*/
    float getWidht() const;
/**
* Геттер height
* @return height
*/
	float getHeight() const;

	/**
	* Сеттер length
	* @param length
	*/
	void setLength(float length);

	/**
	* Сеттер width
	* @param width
	*/
	void setWidht(float widht);

	/**
	* Сеттер height
	* @param height
	*/
	void setHeight(float height);


/**
* Функция рвсчета объема комнаты
* @param
*/
	float Volume() const;

/**
* Деструктор
*/
	virtual ~Room();
};

#endif /* ROOM_H_ */
