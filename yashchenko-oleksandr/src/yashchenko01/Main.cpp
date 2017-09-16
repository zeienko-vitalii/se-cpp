/*
 * Main.cpp
 * Created on: 10 сент. 2017 г.
 * @author: yashchenko
 * @description: point of entry
 */
#include <CScreen.h>
#include <iostream>
#include <stdio.h>
#include <Windows.h>

//point of entry
int main() {

	CWindow cWindow1(1, 200, 100, 100, 200);
	CScreen view;
	view.view(cWindow1);

}


