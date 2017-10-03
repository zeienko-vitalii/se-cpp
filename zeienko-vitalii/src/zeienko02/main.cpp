/**
 * @file main.cpp
 * Realization of the main() function.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "GraphScreen.h"
#include "Manipulator.h"
#include "Screen.h"
#include <iostream>

#ifdef  _DEBUG
#define _CRDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

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
	GraphScreen* gs[SIZE];
	
	// Create 3 objects of type CManipulator
	// to demonstrate the work of each constructor
	Manipulator* manip[SIZE];
	manip[0] = new Manipulator();
	manip[1] = new Manipulator(8, Manipulator::Joystick);
	manip[2] = new Manipulator(*manip[0]);

	int index = 0; /// temporary variable to access to the object

	 // Output CManipulator's objects
	for (; index < SIZE; index++) {
		gs[index] = new GraphScreen(*manip[index]);
		gs[index]->PrintData();
	}

	// Deleting created objects to free the memory after allocating
	for (index = 0; index < SIZE; index++) {
		delete gs[index];
		delete manip[index];
	}
	// ...
}

/**
 * Entry point of program.
 * @param argc is an amount of parameters which were sent to the main.
 * @param argv keeps certain arguments which were sent to the main. 
 * @return 0 in case if there is no error during runtime.
 * */
int main(int argc, char* argv) {
	launch();
	system("pause");
	return _CrtDumpMemoryLeaks();
}

#endif /* _DEBUG*/
