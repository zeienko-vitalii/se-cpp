/*
 * @file Manipulator.h

 * Part of lab02
 * @author ����
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <string>
#include <StorageInterface.h>
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_
/**
 * ���� ����� �����������
 */
class Manipulator: public MStorageInterface {
public:
	int count;

	//��� �������
	string type;

public:
	/**
	* ����������� �����
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

	virtual void OnStore(std::ostream& aStream);

	virtual void OnLoad(std::istream& aStream);

	virtual string toBitsetString();

	/**
		 * Used to output a formatted object to a stream.
		 * @param oSt - stream to which we output
		 * @param Window - object which we output
		 * @return formatted stream with data
		 */
		friend ostream& operator <<(ostream& oSt, Manipulator Manipulator);

		/**
		 * Used to input an object from a stream.
		 * @param iSt - stream from which we input
		 * @param Window -  object which we input
		 */
		friend void operator >>(istream& iSt, Manipulator &Manipulator);

	/**
	* ����������
	*/
	virtual ~Manipulator();
};

#endif /* MANIPULATOR_H_ */
