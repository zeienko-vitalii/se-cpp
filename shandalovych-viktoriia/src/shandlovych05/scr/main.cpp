/*
 * @file main.cpp �������� ����� ����� � ���������.
 * @date 10 ����. 2017 �.
 * @Author: Viktotia
 */
#include <iostream>
#include<string>
#include <FileStorage.h>
#include "Wheel.h"

using namespace std;


int main(void) {

	Wheel test(10,20,"�");
		CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
		testStorage->Store();
		Wheel test2;
		testStorage = CFileStorage::Create(test2, "Test.bin");
		testStorage->Load();
		cout << test2;




return 0;
}
