#include <iostream>
#include "TimeManager.h"

#include "KeyboardButton.h"
#include "..\khalin03\BaseView.cpp"
#include "SpecView.h"
using namespace std;

void main() {
	KeyboardButton btn(ButtonForm::RECTANGULAR, 123, "ABZCZZ");
	SpecView<KeyboardButton> spec(&btn, &cout);
	spec.setOnTimerAction([]() { cout << "spec::OnTimer" << endl; });
	spec.OnTimerAction();
	btn -= 'Z';
	cout << btn.getName();
	system("pause");
}