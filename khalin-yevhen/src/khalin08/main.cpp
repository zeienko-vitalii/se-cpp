#include "../khalin06/LinkedList.h"
#include "..\khalin05\PrintableKeyboardButton.h"
#include "..\khalin05\PrintableKeyboardButton.cpp"
#include <iostream>
using namespace std;

void main() {
	LinkedList<PKeyboardButton> list;

	auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 1, "btn1");
	auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 2, "btn2");
	list.addLast(&btn1);
	list.addLast(&btn2);
	cout << "Was created a list with " << list.size() << " elements." << endl;

	const int correctIndex = 1;
	cout << "Try to access to [" << correctIndex << "] element . . ." << endl;
	PKeyboardButton *returned = list[correctIndex];
	cout << "Successfully: ";
	cout << returned->toString() << endl;

	const int incorrectIndex = -5;
	returned = nullptr;
	cout << "Try to access to [" << incorrectIndex << "] element . . ." << endl;

	try {
		returned = list[incorrectIndex];
	} catch (std::range_error e) {
		cout << "Exception was thrown" << endl;
	}

	system("pause");
}