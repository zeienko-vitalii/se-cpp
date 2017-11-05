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
	 * Зберігає дані в потік
	 * @param aStream Відкритий потік для збереження даних
	 */
	virtual void OnStore(std::ostream& aStream) = 0;

	/**
	 * Завантажує дані із потоку
	 * @param aStream Відкритий потік для завантаження даних
	 */
	virtual void OnLoad(std::istream& aStream) = 0;
};

#endif	// STORAGE_INTERFACE_H
