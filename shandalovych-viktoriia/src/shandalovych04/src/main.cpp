/*
 * @file main.cpp �������� ����� ����� � ���������.
 * @date 10 ����. 2017 �.
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
	//��������� ��� ������������� ������� �������.
			const int DIAMETER = 20;
			const int WIDTH = 10;
			const string UNIT = "��";
			Wheel data( DIAMETER, WIDTH, UNIT);
	TimerExecutor<Wheel> timer(GraphScreen::onTimerAction, data);
		timer.start();
	}
