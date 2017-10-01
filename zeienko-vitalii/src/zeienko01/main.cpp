/**
 * @file main.cpp
 * Realization of the main() function.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */

#include "Screen.h"

/**
 * Entry point of program
 * @return 0 in case if there is no error during runtime.
 * */
int main() {

	// ...
	// Size of the CManipulator's array of objects.
	const int SIZE = 3;
	// Creates an instance of CScreen
	// to call CScreen::Show()
	Screen* cs[SIZE];

	// Create 5 objects of type CManipulator
	// to demonstrate the work of each constructor
	Manipulator* manip[SIZE];
	manip[0] = new Manipulator();
	manip[1] = new Manipulator(4, "Mouse");
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
	return 0;
}

