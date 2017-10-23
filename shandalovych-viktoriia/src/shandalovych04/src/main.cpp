/*
 * @file main.cpp Содержит точку входа в программу.
 * @date 10 сент. 2017 г.
 * @Author: Viktotia
 */
#include <iostream>
#include<string>
#include "Wheel.h"
#include "AutoWheel.h"
#include "BaseScreen.h"
#include "Screen.h"
#include "GraphScreen.h"
#include "AutoWheelScreen.h"
#include "TimerExecutor.h"

using namespace std;
void timerDemo();

int main(void) {

	timerDemo();

		//::testing::InitGoogleTest(&argc, argv);
		return 0; // RUN_ALL_TESTS();
}



void timerDemo() {
	//Константы для инициализации первого объекта.
			const int DIAMETER = 20;
			const int WIDTH = 10;
			const string UNIT = "см";
			Wheel data( DIAMETER, WIDTH, UNIT);
	TimerExecutor<Wheel> timer(GraphScreen::onTimerAction, data);
		timer.start();
	}
