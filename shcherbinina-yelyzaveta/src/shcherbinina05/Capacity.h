/*
 * @file Capacity.h
 * ̳����� ���� ��'���� ����� Capacity
 * @date 2017.09.17
 * @author shcherbinina
 */

#ifndef CAPACITY_H_
#define CAPACITY_H_

#include <iostream>
#include <FileStorage>
#include <StorageInterface>
using namespace std;
enum units { ml, l, cubicMeter };

/**
* ����, �� ������ ��������� ������.
*/
class Capacity : public MStorageInterface{
	/**
	* �������������� ��������� ������ ��� ���������� ����������� ��'���� �����
	* @param out - ����� ������
	* @param capacity - ��'���, �� ����������
	* @return ������������ ����� �� ������
	*/
	friend ostream& operator <<(ostream& out, Capacity capacity);
public:
	/**
		 * ����������� ��� ���������
		 */
	Capacity();
	/**
		 * ����������� � �����������
		 * @param _unit - ���� ������� ����������
		 * @param _v - ���� ��'��
		 */
	Capacity(units _unit, float _v);
	/**
		 * ����������� ���������
		 * @param _Capacity - �������� ��'��� �� ������ ��� ���������
		 */
	Capacity(const Capacity& _Capacity);
	/**
		 * ����������
		 */
	virtual ~Capacity();
	/**
	* ���������� �������� ������� ����������
	* @param unit - ��������, �� ��������������
	*/
	void setUnit(units unit);
	/**
	* ������� �������� ������� ����������
	*/
	units getUnit();
	/**
	* ������� ��� ����������� ����� ���������� ����
	*/
	const float square(float height);
	/**
	*
	*/
	virtual string toString();
	///��'��
	float v;
	/**
	*
	*/
	bool operator >= (Capacity data);
	virtual void OnStore(ostream& aStream);
	virtual void OnLoad(istream& aStream);
	virtual string toBitsetString();
private:
	///������� ����������
	units unit;
	
};

#endif /* CAPACITY_H_ */
