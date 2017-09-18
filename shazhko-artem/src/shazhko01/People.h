/**
* @file People.h
* @brief �������� ���������� ������ People
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#pragma once

/**
* ��������� ��� ������ � ������
*/
struct  Date{
	unsigned day : 5;
	unsigned month : 4;
	unsigned year : 12;
};

/**
* ����� ����������� ��������
*/
class  People
{
public:
	/**
	* ����������� ��-���������
	*/
	People();

	/**
	* ����������� � ����� ����������
	* @param _height ����
	* @param _weight ���
	* @param _birthDay ���� ��������
	*/
	People(float _height, float _weight, Date _birthDay);

	/**
	* ������ ����
	* @param height ����
	*/
	void SetHeight(float height);

	/**
	* ������ ���
	* @param weight ���
	*/
	void SetWeight(float weight);

	/**
	* ������ ���� ��������
	* @param birthDay ���� ��������
	*/
	void SetBirthDay(Date birthDay);

	/**
	* �������� ����
	* @return ����
	*/
	float GetHeight();

	/**
	* �������� ���
	* @return ���
	*/
	float GetWeight();

	/**
	* �������� ���� ��������
	* @return ���� ��������
	*/
	Date GetBirthDay();

	/*
	* ����������
	*/
	virtual ~People();
private:
	// ����
	float height;
	// ���
	float weight;
	//���� ��������
	Date birthDay;
};