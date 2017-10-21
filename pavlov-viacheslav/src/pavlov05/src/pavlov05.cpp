//============================================================================
// Name        : pavlov05.cpp
// Author      : pavlov-viacheslav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <FileStorage.h>
#include"Window.h"
#include"Button.h"
using namespace std;

int main() {

	Window test(1, 100, 100, 100, 100);
	CFileStorage *testStorage = CFileStorage::Create(test, "Test.bin");
	testStorage->Store();
	Window test2;
	testStorage = CFileStorage::Create(test2, "Test.bin");
	testStorage->Load();
	cout << test2;

	Button btest(1, 100, 100, 100, 100, "label", "borderColor");
	CFileStorage *testStorageB = CFileStorage::Create(btest, "Test2.bin");
	testStorageB->Store();
	Button btest2;
	testStorageB = CFileStorage::Create(btest2, "Test2.bin");

	testStorageB->Load();
	cout << btest2.toString();
	return 0;
}
