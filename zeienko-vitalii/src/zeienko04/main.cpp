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

#include "Timer.h"

#ifdef _DEBUG
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define new new (_NORMAL_BLOCK, __FILE__, __LINE__)

 // Operator overloading demo
void operatorOverloadingDemonstration() {
	Manipulator* manipulator = new Manipulator;
	ComputerManipulator* computerManipulator = new ComputerManipulator;
	printf("Compare manipulators by two parameters: amount of buttons and its type.\n");
	printf("Testing 2 objects on equality: ");
	if (*manipulator == *computerManipulator) {
		printf("manipualtors are equal. \n");
	}
	else {
		printf("manipualtors are different. \n");
	}
	printf("Try to assign number to ComputerManipulator's object and change its \n sensor type to Ballng.\n");
	printf("Sensor type before assigning: %s\n", computerManipulator->getSensorType());
	*computerManipulator = 0;
	printf("Sensor type after assigning: %s\n", computerManipulator->getSensorType());
	delete manipulator;
	delete computerManipulator;
}


// Timer demo
void timerDemonstration() {

	ComputerManipulator* compManip = new ComputerManipulator();
	ComputerManipulatorView* compManipView = new ComputerManipulatorView(*compManip, &(std::cout));

	printf("Creating timer object \n");
	Timer<ManipulatorView>* timer = new Timer<ManipulatorView>(compManipView, &ComputerManipulatorView::OnTimerAction);
	printf("Setting is_running to true \n");
	timer->setIsRunning(true);
	printf("Starting the timer \n");
	timer->startTheThread();

	timer->Join();
	printf("Done\n ");
	delete compManip;
	delete compManipView;
	delete timer;
}

/**
* Entry point of program.
* @param argc is an amount of parameters which were sent to the main.
* @param argv keeps certain arguments which were sent to the main.
* @return 0 in case if there is no error during runtime.
* */
int main() {

	operatorOverloadingDemonstration();
	timerDemonstration();
	_getch();
	return _CrtDumpMemoryLeaks();
}


#endif // _DEBUG
