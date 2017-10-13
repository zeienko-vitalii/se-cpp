/**
 * @file Monitor.h файл содержащий класс Monitor
 * Part of polshkov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <string>
#include <iostream>

#ifndef MONITOR_H_
#define MONITOR_H_

using namespace std;
/**
 * Класс содержащий основные параметры описания монитора
 *  id - личный номер монитора
 *  weight - вес монитора
 *  type - тип монитора
 *  wide - ширина монитора
 *  high - высота моитора
 *  deep - глубина монитора
 */
class Monitor {
private:
	int id;
	int weight;
	string type;
	int wide;
	int high;
	int deep;
public:
	/**
	 * Конструктор с параметрами
	 * @param id - личный номер монитора
	 * @param weight - вес монитора
	 * @param type - тип монитора
	 * @param wide - ширина монитора
	 * @param high - высота моитора
	 * @param deep - глубина монитора
	 */
	Monitor();
	Monitor(int id, int weight, string type, int wide, int high, int deep);

	int getId();

	int getWeight();

	string getType();

	int getWide();

	int getHigh();

	int getDeep();

	void setId(int id);

	void setWeight(int weight);

	void setType(string type);

	void setWide(int wide);

	void setHigh(int high);

	void setDeep(int deep);
	virtual ~Monitor();
};

#endif /* MONITOR_H_ */
