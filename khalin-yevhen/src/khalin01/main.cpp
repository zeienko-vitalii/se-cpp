/**
* @file main.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Button.h"
using namespace std;

void main() {
	Button btn;

	cout << "before changing: " << endl;
	btn.print(std::cout);

	cout << "after changing: " << endl;
	btn.setState(true);
	btn.print(std::cout);

	system("pause");
}