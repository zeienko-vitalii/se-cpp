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
#include "List.h"
#include <string>
#include <conio.h>
#include <windows.h>
#include "Capacity.h"


using namespace std;
/**
* Точка входу в програму
*/
int main() {
	setlocale(LC_ALL, "Russian");

	Capacity test1(l, 1000);
	Capacity test2(ml, 500);
	Capacity test3(cubicMeter, 2000);

	List list;
	list.add(test1);
	list.add(test2);
	list.add(test3);

	list.show();

	list.save("temp.bin");

	List list2;
	list2.load("temp.bin", 3);
	list2.show();
	
	getch();
	return 0;
}

