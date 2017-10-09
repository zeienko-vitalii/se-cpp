/**
 * @file Room.h
 * �������� ����� ��� ��������� �������� Room
 * @author skyba-vv
 * @version 0.0.1
 * @date 2017.09.25
 */
#pragma once
using namespace std;
#ifndef ROOM_H_
#define ROOM_H_
/**
 * �����, ���������� ���������� Room
 */
class Room {

public:

	float length;
	float widht;
	float height;

public:
/**
* ����������� �� ���������
*/
	Room();
/**
 * ����������� ��� ���� �����
 * @param length
 * @param width
 * @param height
 */

	Room(float length, float widht,	float height);

/**
* ������ length
* @return length
*/
	float getLength() const;
/**
* ������ width
* @return width
*/
    float getWidht() const;
/**
* ������ height
* @return height
*/
	float getHeight() const;

	/**
	* ������ length
	* @param length
	*/
	void setLength(float length);

	/**
	* ������ width
	* @param width
	*/
	void setWidht(float widht);

	/**
	* ������ height
	* @param height
	*/
	void setHeight(float height);


/**
* ������� ������� ������ �������
* @param
*/
	float Volume() const;

/**
* ����������
*/
	virtual ~Room();
};

#endif /* ROOM_H_ */
