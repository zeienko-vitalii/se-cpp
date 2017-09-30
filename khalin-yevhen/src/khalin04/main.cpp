#include <iostream>
#include "SimpleTimer.h"
#include "KeyboardButton.h"
#include "..\khalin03\BaseView.cpp"
#include "SpecView.h"
#include "SimpleTimer.h"
#include "SpecViewEventArgs.h"
#include <vld.h>

using namespace std;

inline void demoOverloadedOperators() {
	cout << "\ninside demoOverloadedOperators() method:\n";
	
	// create button for demo
	int btnCode = 100;
	char *btnName = "ABCDB";
	ButtonForm btnForm = ButtonForm::ROUND;
	KeyboardButton btn(btnForm, btnCode, btnName);
	cout << "Button info:\n"
		<< "\tCode: " << btnCode
		<< "\n\tName: " << btnName << endl;

	// remove 'B' char from 'ABCDB' button name:
	const char removingChar = 'B';
	btn -= removingChar;
	cout << "After removing " << removingChar << " char button name is: "
		<< btn.getName() << endl;

	// comare button code with a literal:
	bool codeCompRes = btn == 100;
	cout << "Result of code comparison: " << codeCompRes << endl;
}

inline void demoTimer() {
	cout << "\ninsode demoTimer() method:" << endl;

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
			cout << "BaseView::display():" << endl;
			ptr->view->display();
		}
	});

	// create a timer
	SimpleTimer timer(&e, args, 1000);

	// run timer
	timer.getOnTimerAction()->addListener(&l);
	timer.start(); // it's expected to print KeyboardButton data after 1000 ms

	delete args;
}

void main() {
	demoOverloadedOperators();
	demoTimer();
	system("pause");
}