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

						// create a timer
	SimpleTimer timer(args, 1000);

	// create an event listener for the timer
	EventListener l;
	l.setOnEventAction([](Sender *sender, EventArgs *args) {
		// we wanna be sure that received necessary args
		SpecViewEventArgs *ptr = dynamic_cast<SpecViewEventArgs*>(args);
		if (ptr) {
			ptr->view->display();
		}
	});

	timer.getOnTimerAction()->addListener(&l);
	timer.start(); // it's supposed to print KeyboardButton data after 1000 ms

	delete args;
}

void main() {
	showTaskPerformance();
	system("pause");
}