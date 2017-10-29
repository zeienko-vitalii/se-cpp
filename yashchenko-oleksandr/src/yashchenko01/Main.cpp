/**
 * @file main.cpp
 * Implementation of main() function
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.09.15
 */

#include <Screen.h>

/**
 * Entry point.
 * @param argc number of command line parameters
 * @param argv array of command line parameters
 * @return exit code
 */
int main(int argc, char** argv) {
	Window window(1, 10, 20, 30, 40);
	Screen view2(window);
	view2.showInfo();
	return 0;
}
