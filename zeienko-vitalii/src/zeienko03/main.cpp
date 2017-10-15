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
#include "GraphicalView.h"

#include "Manipulator.h"
#include "ComputerManipulator.h"

#include <conio.h> // _getch()

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

/**
* Entry point of program.
* @param argc is an amount of parameters which were sent to the main.
* @param argv keeps certain arguments which were sent to the main.
* @return 0 in case if there is no error during runtime.
* */
int main() {
	
	{
		Manipulator* manipulator = new Manipulator();
		ComputerManipulator* computerManipulator = new ComputerManipulator();
		ComputerManipulatorView compManipView(*computerManipulator, &(std::cout));
		BaseView* bv = &compManipView;
		bv->display();
		delete computerManipulator;
		delete manipulator;
	}

	_getch();
	return _CrtDumpMemoryLeaks();
}


#endif // _DEBUG
