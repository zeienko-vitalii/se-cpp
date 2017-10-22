#pragma once
/*
============================================================================
Name        : StorageInterface.h
Author      : Rostyslav Gryb
Version     : 1.00.001
Copyright   : Mobile Effort
Description : Interface for CFileStore
============================================================================
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
