#include "KeyboardButton.h"
#include "SpecView.h"
using namespace std;
#include <iostream>

void main() {
	Button btn(ButtonForm::RECTANGULAR);
	KeyboardButton kb(ButtonForm::RECTANGULAR, 101, "L");
	SpecView<KeyboardButton> spec(&btn, &(std::cout));
	spec.display();
	system("pause");
}