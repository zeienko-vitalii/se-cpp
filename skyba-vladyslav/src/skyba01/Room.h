/**
 * @file Room.h
 * Содержит класс для просмотра объектов Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.18
 */
#include <locale.h>
using namespace std;
#ifndef ROOM_H_
#define ROOM_H_
/**
 * Класс, содержащий реализацию Room
 */
class Room {
public:


	float length;
	float width;
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
	Room(float length, float width, float height);

	/**
	 * Геттер length
	 * @return length
	 */
	float getLength();

	/**
	 * Сеттер width
	 * @return width
	 */
	float getWidth();

	/**
	 * Геттер height
	 * @return height
	 */
		float getHeight();

	/**
	* Сеттер length
	* @param length
	*/
	void setLength(float length);

	/**
	* Сеттер width
	* @param width
	*/
	void setWidth(float width);

	/**
	* Сеттер height
	* @param height - высота комнаты
	*/
	void setHeight(float height);

	/**
	 * Деструктор
	 */
	virtual ~Room();
};


#endif /* ROOM_H_ */
