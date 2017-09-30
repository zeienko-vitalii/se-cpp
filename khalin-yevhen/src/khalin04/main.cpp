#include <iostream>
#include "SimpleTimer.h"
#include "KeyboardButton.h"
#include "..\khalin03\BaseView.cpp"
#include "SpecView.h"
#include "SimpleTimer.h"
#include "SpecViewEventArgs.h"

using namespace std;

inline void showTaskPerformance() {
	// create data for printing
	KeyboardButton btn(ButtonForm::RECTANGULAR, 100, "K");
	SpecView<KeyboardButton> view(&btn, &std::cout);
	SpecViewEventArgs *args = new SpecViewEventArgs();
	args->view = &view; // put view into EventArgs

	// create members for the timer
	SimpleEvent e;
	EventListener l;
	l.setOnEventAction([](Sender *sender, EventArgs *args) {
		// we wanna be sure that received necessary args
		SpecViewEventArgs *ptr = dynamic_cast<SpecViewEventArgs*>(args);
		if (ptr) {
			ptr->view->display();
		}
	});

	// create a timer
	SimpleTimer timer(&e, args, 1000);

	timer.getOnTimerAction()->addListener(&l);
	timer.start(); // it's expected to print KeyboardButton data after 1000 ms

	delete args;
}

void main() {
	showTaskPerformance();
	system("pause");
}