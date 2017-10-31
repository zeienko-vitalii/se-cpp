/*
 * @file Main.cpp
 * Точка входу в програму
 * @date 2017.09.10
 * @author shcherbinina
 */
#include "gtest\gtest.h"

#include <iostream>
#include <conio.h>
#include <windows.h>

#include "Screen.h"
#include "GraphScreen.h"
#include "Jar.h"
#include "JarScreen.h"
#include "BaseView.h"
#include "Timer.h"

/**
* Точка входу в програму
*/
int main(int argc, char **argv) {
	setlocale(LC_ALL, "Russian");

	Capacity data(l,1000);

	Timer<Capacity> timer(GraphScreen::onTimerAction, data);
	timer.start();

	::testing::InitGoogleTest(&argc, argv);
	const int res = RUN_ALL_TESTS();
	getch();
	return res;
	//return 0;
}

