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
#include "Output.h"
#include "ComputerManipulator.h"
#include "CMScreen.h"
#include <conio.h>
#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

#endif
 /**
 * Entry point of program
 * @return 0 in case if there is no error during runtime.
 * */
int main() {

	// ...
	Output *p;
	Manipulator* m = new Manipulator(5, "mouse");
	ComputerManipulator* cm = new ComputerManipulator(3, "joystick", "USB", "optical");
	Screen* sc = new Screen(*m);
	CMScreen* cms = new CMScreen(*cm);
	GraphScreen* gs = new GraphScreen(*m);
	p = sc;
	p->Display();
	_getch();
	p = cms;
	p->Display();
	_getch();
	p = gs;
	p->Display();
	_getch();
	
	delete m;
	delete sc;
	delete cm;
	delete cms;
	delete gs;
	_getch();
	return _CrtDumpMemoryLeaks();
}


