#include "KeyboardButton.h"
#include "SpecView.h"
#include <iostream>

void testCastingAndDisplaying() {
	using std::cout;
	using std::endl;

	// init Data objects
	Button btn(ButtonForm::RECTANGULAR);
	KeyboardButton kb(ButtonForm::RECTANGULAR, 101, "L");
	Button *btnPtr = &kb; // using a pointer to the base class 

	// init Screen objects 
	SpecView<KeyboardButton> spec(&btn, &(std::cout));
	BaseView *baseViewPtr = &spec; // using a pointer to the base class

	// displaying data using BaseView pointer
	cout << "Button instance was sent to SpecView using BaseView pointer:" << endl;
	baseViewPtr->display(); // Button is supposed to be not a KeyboardButton instance

	// changing data source
	baseViewPtr->setDataSource(btnPtr);
	cout << endl << "KeyboardButton instance was sent to SpecView:" << endl;
	baseViewPtr->display(); // it's supposed to be a KeyboardButton instance
}

void main() {
	testCastingAndDisplaying();
	system("pause");
}