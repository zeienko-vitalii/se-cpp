/*
 * @file Main.cpp
 * Part of polshykov01
 * @author Mike
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <iostream>

#include "Monitor.h"
#include "Screen.h"
#include "GraphScreen.h"

using namespace std;

int main(void) {
	Monitor iMonitor(225, 3, "TFT", 30, 20, 15);
	Screen view(iMonitor);
	view.dataOutput();

	GraphScreen view2(&iMonitor);
	view2.PrintData();
}
