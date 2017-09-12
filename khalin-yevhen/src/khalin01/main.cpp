/**
* @file main.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Screen.h"
using namespace std;

void main() {
	Button btn;
	Screen scr(btn);
	scr.printButtonState(cout);
	system("pause");
}