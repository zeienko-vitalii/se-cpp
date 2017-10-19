#include "ObjectsCounter.h"
#include <iostream>
#include "..\khalin06\LinkedList.h"
#include "..\khalin05\PrintableKeyboardButton.h"
#include "..\khalin05\PrintableKeyboardButton.cpp"
using namespace std;

void main() {
	LinkedList<PKeyboardButton> list;

	// create a predicate
	class ConditionPredicate : public functors::Predicate<PKeyboardButton> {
	public:
		bool assert(PKeyboardButton * obj) {
			return obj->getCondition();
		}
	} predicate;

	ObjectsCounter<PKeyboardButton> counter(&predicate);

	// add buttons
	auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 1, "btn1");
	auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 2, "btn2");
	auto btn3 = PKeyboardButton(ButtonForm::RECTANGULAR, 3, "btn3");
	btn1.setCondition(true); // 2 of 3 have pressed
	btn2.setCondition(true);
	list.addLast(&btn1);
	list.addLast(&btn2);
	list.addLast(&btn3);
	
	list.forEach(&counter); // check for pressed buttons
	
	cout << "There are " << counter.getValue() << " pressed buttons." << endl;
	system("pause");
}