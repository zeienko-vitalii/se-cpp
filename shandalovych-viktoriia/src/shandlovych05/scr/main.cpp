/*
 * @file main.cpp Содержит точку входа в программу.
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */
#include <iostream>
#include<string>
#include <FileStorage.h>
#include "Wheel.h"

using namespace std;


int main(void) {

	Wheel test(10,20,"м");
		CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
		testStorage->Store();
		Wheel test2;
		testStorage = CFileStorage::Create(test2, "Test.bin");
		testStorage->Load();
		cout << test2;




return 0;
}
