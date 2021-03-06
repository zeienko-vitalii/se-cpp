/*
 * @file Manipulator.h

 * Part of lab02
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <string>
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_
/**
 * ���� ����� ������������
 */
class Manipulator {
public:
	int count;

protected:

	//��� �������
	string type;

public:
	/**
	* ������������ �����
	* ����������� ��� ���������
	*/
	Manipulator();

	/**
	* ����������� �� �����������
	* @param count ������� ������
	* @param type ��� �������
	*/
	Manipulator(int count, string type);

	virtual string toString();

	/**
	* ��������� ������� ������
	* @return ������� ������
	*/
	int getCount() const;

	/**
	* ��������� ���� �������
	* @return ��� �������
	*/
	string getType() const;

	/**
	* ��������� ������� ������
	* @param count ������������ ���� count
	*/
	void setCount(int count);

	/**
	* ��������� ���� �������
	* @param type ������������ ���� type
	*/
	void setType(string type);

	/**
	 * ����� ������� true, ����
	 * count <= 2
	 * @return
	 */
	bool isSimple() const;

	/**
	 * ����� ������� true, ����
	 * count >= 4
	 * @return
	 */
	bool isGame() const;

	/**
	* ����������
	*/
	virtual ~Manipulator();
};

#endif /* MANIPULATOR_H_ */
