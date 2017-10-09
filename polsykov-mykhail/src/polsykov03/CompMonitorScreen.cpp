/**
 * @file CompMonitorScreen.cpp
 * CompMonitorScreen functions realization.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 */
#include<iostream>

#include "CompMonitorScreen.h"

CompMonitorScreen::CompMonitorScreen() {
	// TODO Auto-generated constructor stub

}

CompMonitorScreen::~CompMonitorScreen() {
	// TODO Auto-generated destructor stub
}

CompMonitorScreen::CompMonitorScreen(CompMonitor* compMonitor) :
		Screen(compMonitor) {
	// TODO Auto-generated constructor stub

}

void CompMonitorScreen::setCompMonitor(CompMonitor compMonitor) {

}
void CompMonitorScreen::viewCompMonitor() {
	cout << (*data).toString();
}

void CompMonitorScreen::showHeader() {
	cout << "\n|--------------------------\n";
	cout << "CompMonitorScreen output\n";
}

void CompMonitorScreen::showContent() {
	viewCompMonitor();
}

void CompMonitorScreen::showFooter() {
	cout << "|--------------------------\n\n";
}
