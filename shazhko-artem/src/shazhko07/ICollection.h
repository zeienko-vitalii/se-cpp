#pragma once
/**
* @file ICollection.h
* @brief �������� ���������� ������ ICollection
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "IIterator.h"
/**
* ����������� ����� ������� ������ ��������� �����������
*/
template<typename item>
class ICollection abstract {
public:
	/**
	* ����������
	*/
	virtual ~ICollection() {}
	/**
	* �������� ����������
	* @param i ������
	* @return ������, ������� �������� ���������� �������
	*/
	virtual item operator[](int i) = 0;
	/**
	* ���������� � ����� ���������
	* @param _element �������, ������� ����� ��������
	*/
	virtual void Push(const item& _element) = 0;
	/**
	* ������� �������� � ��������� �������
	* @param index ������ �� �������� ����� �������� �������
	* @param _element �������, ������� ����� ��������
	*/
	virtual void Insirt(const int index, const item& _element) = 0;
	/**
	* ��������� �������� �� ����� ��������� � ��������������� ��������� �� ������
	* @return ������� �� ����� ��������
	*/
	virtual item Pop() = 0;
	/**
	* �������� ��������
	* @param _element �������, ������� ����� �������
	* @param ����� ���������� ��������
	*/
	virtual bool Remove(const item& _element) = 0;
	/**
	* �������� ��������
	* @param i ������ ��������, ������� ����� �������
	* @param ����� ���������� ��������
	*/
	virtual bool RemoveAt(const int i) = 0;
	/**
	* �������� ���� ���������
	*/
	virtual void RemoveAll() = 0;
	/**
	* ��������� ���������� ��������� � ���������
	* @return ����������
	*/
	virtual int Count()const = 0;
	/**
	* �������� ��������� ��� ������ ���������
	* @return ��������
	*/
	virtual IIterator<item>* CreateIterator()const = 0;
	typedef IIterator<item>* iterator;
};