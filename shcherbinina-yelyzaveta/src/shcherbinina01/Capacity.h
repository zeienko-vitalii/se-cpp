/*
 * @file Capacity.h
 * Містить опис об'єкту класа Capacity
 * @date 2017.09.10
 * @author shcherbinina
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <iostream>
using namespace std;
enum units { ml, l };

/**
* Клас, що містить реалізацію ємності.
*/
class Capacity {
	/**
	* Перевантаження оператора виводу для коректного відображення об'єкта класу
	* @param out - поток виводу
	* @param capacity - об'єкт, що виводиться
	* @return форматований поток із даними
	*/
	friend ostream& operator <<(ostream& out, Capacity capacity);
public:
	/**
		 * Конструктор без параметра
		 */
	Capacity();
	/**
		 * Конструктор з параметрами
		 * @param _unit - Задає одиницю вимірювання
		 * @param _v - Задає об'єм
		 */
	Capacity(units _unit, float _v);
	/**
		 * Конструктор копіювання
		 * @param _Capacity - Вихідний об'єкт із даними для копіювання
		 */
	Capacity(const Capacity& _Capacity);
	/**
		 * Деструктор
		 */
	virtual ~Capacity();
public:
	///одиниця вимірювання
	units unit;
	///об'єм
	float v;
};

#endif /* CAPACITY_H_ */
