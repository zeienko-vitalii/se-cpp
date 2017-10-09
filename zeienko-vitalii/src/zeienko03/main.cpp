/**
 * @file main.cpp
 * Realization of the main() function.
 * @author Vitalii Zeienko
 * @version 0.0.2
 * @date 2017.09.12
 */

#include "BaseView.h"
#include "ManipulatorView.h"
#include "ComputerManipulatorView.h"
#include "GraphScreen.h"

#include "Manipulator.h"
#include "ComputerManipulator.h"

#include <conio.h> // _getch()

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

 /**
 * This function contains a basic check for creating
 * instances of classes and displaying Manipulator`s objects on the screen.
 * */
void launch() {
	Manipulator* m = new Manipulator();
	ComputerManipulator* a = new ComputerManipulator();

	ComputerManipulatorView v(*a, &(std::cout));
	BaseView* bv = &v;
	bv->display();

	delete a;
	delete m;

}

/**
* Entry point of program.
* @param argc is an amount of parameters which were sent to the main.
* @param argv keeps certain arguments which were sent to the main.
* @return 0 in case if there is no error during runtime.
* */
int main() {
	
	launch();
	_getch();
	return _CrtDumpMemoryLeaks();
}


#endif // _DEBUG
