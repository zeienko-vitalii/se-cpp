/**
* @file main.cpp
* @author Khalin Yevhen
* @version 0
* @date 10.09.17
*/

#include "Screen.h"
#include "Logger.h"

using namespace std;

inline void testObjLifeCycle() {
	Button btn;
	Screen scr(btn);
	scr.printButtonState(cout);
}

void main() {
	testObjLifeCycle();
	system("pause");
}