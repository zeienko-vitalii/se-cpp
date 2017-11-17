/**
 * @file Room.h
 * @brief  ������ �������� ������ Room
 * @author Kirnos Serhii
 * @version 0
 * @date 22.10.17
 */
#pragma once
#include <iostream>
using namespace std;

/**
 * ����� �������� �������� ������ 3 ����� �� �������
 */
class Room {
protected:
	int height;
	int width;
	int length;
public:
	/**
	 * ����������� ��� ����������.
	 */
	//Room();

	/**
	 * ����������� � �����������.
	 * @param H ������
	 * @param W ������
	 * @param L �����
	 */
	Room(int H, int W, int L);

	/**
	 * ����������� �����������
	 * @param r ������ �� ������ ���� ��������� �����
	 */
	Room(const Room& r);

	/**
	 * ����������
	 */
	virtual ~Room();

	/**
	 * ��������� ���� Room::height
	 * @param H ���������� � height
	 */
	//void setHeight(int H);

	/**
	 * ��������� ���� Room::width
	 * @param W ���������� � width
	 */
	//void setWidth(int W);

	/**
	 * ��������� ���� Room::length
	 * @param L ���������� � length
	 */
	//void setLength(int L);

	/**
	 * ���������� �������� ���� Room::height
	 * @return �������� ���� height
	 */
	int getHeight() const;

	/**
	 * ���������� �������� ���� Room::width
	 * @return �������� ���� width
	 */
	int getWidth() const;

	/**
	 * ���������� �������� ���� Room::length
	 * @return �������� ���� length
	 */
	int getLength() const;

	/**
	 * ��������� � ��������� ����� �������
	 * @return ����� �������
	 */
	int Volume() const;
};

