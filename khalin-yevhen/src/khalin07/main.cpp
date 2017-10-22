#include "ObjectsCounter.h"
#include <iostream>
#include "..\khalin06\LinkedList.h"
#include "..\khalin05\PrintableKeyboardButton.h"
#include "..\khalin05\PrintableKeyboardButton.cpp"
using namespace std;

int main() {
	LinkedList<PKeyboardButton> list;

	// create a predicate
	class ConditionPredicate : public functors::Predicate<PKeyboardButton> {
	public:
		virtual bool test(PKeyboardButton * obj) {
			return obj->getCondition();
		}
	} predicate;

	ObjectsCounter<PKeyboardButton> counter(&predicate);

	cout << "Were created 3 buttons" << endl;
	// add buttons
	auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 1, "btn1");
	auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 2, "btn2");
	auto btn3 = PKeyboardButton(ButtonForm::RECTANGULAR, 3, "btn3");
	btn1.setCondition(true); // 2 of 3 have pressed
	btn2.setCondition(true);

	cout << "Were pressed 2 of 3" << endl;
	list.addLast(&btn1);
	list.addLast(&btn2);
	list.addLast(&btn3);
	
	list.forEach(&counter); // check for pressed buttons
	cout << "Foreach method was called . . ." << endl;

	cout << "There are " << counter.getValue() << " pressed buttons." << endl;
	system("pause");
}