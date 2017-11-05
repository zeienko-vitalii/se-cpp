/**
* @file ComputerManipulator.h
* Interface for CFileStorage.
* @author Vitalii Zeienko
* @version 0.0.4
* @date 2017.10.01
*/


#ifndef STORAGE_INTERFACE_H
#define STORAGE_INTERFACE_H

#include <iostream>

class MStorageInterface {
public:
	virtual ~MStorageInterface() {};

	/**
	 * ������ ��� � ����
	 * @param aStream ³������� ���� ��� ���������� �����
	 */
	virtual void OnStore(std::ostream& aStream) = 0;

	/**
	 * ��������� ��� �� ������
	 * @param aStream ³������� ���� ��� ������������ �����
	 */
	virtual void OnLoad(std::istream& aStream) = 0;
};

#endif	// STORAGE_INTERFACE_H
