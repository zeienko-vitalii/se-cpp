/**
 * @file Monitor.h ���� ���������� ����� Monitor
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
 * ����� ���������� �������� ��������� �������� ��������
 *  id - ������ ����� ��������
 *  weight - ��� ��������
 *  type - ��� ��������
 *  wide - ������ ��������
 *  high - ������ �������
 *  deep - ������� ��������
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
	 * ����������� � �����������
	 * @param id - ������ ����� ��������
	 * @param weight - ��� ��������
	 * @param type - ��� ��������
	 * @param wide - ������ ��������
	 * @param high - ������ �������
	 * @param deep - ������� ��������
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
