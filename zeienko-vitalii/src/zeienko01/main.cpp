/**
 * @file main.cpp
 * Realization of the main() function.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */

#include "Screen.h"
#include <iostream>

#ifdef  _DEBUG
#define _CRDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

using std::cout;
using std::endl;

/**
* This function contains a basic check for creating 
* instances of classes and displaying Manipulator`s objects on the screen.
* */
void launch() {
	// ...
	// Size of the CManipulator's array of objects.
	const int SIZE = 3;
	// Creates an instance of CScreen
	// to call CScreen::Show()
	Screen* cs[SIZE];

	// Create 3 objects of type CManipulator
	// to demonstrate the work of each constructor
	Manipulator* manip[SIZE];
	manip[0] = new Manipulator();
	manip[1] = new Manipulator(4, Manipulator::Joystick);
	manip[2] = new Manipulator(*manip[0]);


	int index = 0; /// temporary variable to access to the object

	// Output CManipulator's objects
	for (; index < SIZE; index++) {
		cs[index] = new Screen(*manip[index]);
		cs[index]->Show();
	}

	// Deleting created objects to free the memory after allocating
	for (index = 0; index < SIZE; index++) {
		delete cs[index];
		delete manip[index];
	}
	// ...
}


/**
 * Entry point of program.
 * @return 0 in case if there is no error and no memory leaks.
 * */
int main() {
	launch();
	system("pause");
	return _CrtDumpMemoryLeaks();
}

#endif //_DEBUG