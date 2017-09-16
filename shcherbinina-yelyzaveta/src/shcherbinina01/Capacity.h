/*
 * Capacity.h
 * Created on: 10 сент. 2017 г.
 * Author: shcherbinina
 * Description: Capacity declaration
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <Windows.h>
enum unit { F, mkF, nF, pF };

//CLASS DECLARATION
class Capacity {
public:
	/**
		 * Конструктор без параметра
		 */
	Capacity();
	/**
		 * Конструктор з параметрами
		 * @param _unit Задає одиницю вимірювання
		 * @param _v Задає об'єм
		 */
	Capacity(unit _unit, float _v);
	/**
		 * Конструктор копіювання
		 * @param _Capacity Вихідний об'єкт із даними для копіювання
		 */
	Capacity(const Capacity& _Capacity);
	/**
		 * Деструктор
		 */
	~Capacity();
public:
	//одиниця вимірювання
	unit _unit;
	//об'єм
	float v;
};

#endif /* CAPACITY_H_ */
