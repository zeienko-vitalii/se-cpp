/*
 * @file Main.cpp
 * Точка входу в програму
 * @date 2017.09.10
 * @author shcherbinina
 */
//#include "gtest\gtest.h"

#include <iostream>
#include <FileStorage>
#include <StorageInterface>
#include <string>
#include <conio.h>
#include <windows.h>
#include "Capacity.h"
#include "Jar.h"


using namespace std;
/**
* Точка входу в програму
*/
int main() {
	setlocale(LC_ALL, "Russian");

	Capacity test(l, 1000);
	cout << "Данные перед записью в файл: " << test;
	CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
	testStorage->Store();
	Capacity test2;
	testStorage = CFileStorage::Create(test2, "Test.bin");
	testStorage->Load();
	cout << "Данные, записанные из файла: " << test2;

	Jar btest(l, 100, "закручуюється", "пластик");
	cout << "Данные перед записью в файл: " << btest.toString();
	CFileStorage *testStorageB = CFileStorage::Create(btest, "Test2.bin");
	testStorageB->Store();
	Jar btest2;
	testStorageB = CFileStorage::Create(btest2, "Test2.bin");

	testStorageB->Load();
	cout << "Данные, записанные из файла: " << btest2.toString();
	getch();
	return 0;
}

