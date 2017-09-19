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
	double *field1_data1;
	double *field2_data1;
	double *field3_data1;

	/**
	 * Конструктор буз параметрів.
	 */
	Room();

	/**
	 * Конструктор з параметрами.
	 * @param a ширина
	 * @param b довжина
	 * @param c висота
	 */
	Room(int a, int b, int c);

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
	 * Установка поля Room::field1_data1
	 * @param d копіюється в field1_data1
	 */
	void SetField1_data1(double d);

	/**
	 * Установка поля Room::field2_data1
	 * @param d копіюється в field2_data1
	 */
	void SetField2_data1(double d);

	/**
	 * Установка поля Room::field3_data1
	 * @param d копіюється в field3_data1
	 */
	void SetField3_data1(double d);
};
