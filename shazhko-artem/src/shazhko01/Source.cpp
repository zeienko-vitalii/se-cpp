#include "People.h"
#include "PeopleViewer.h"
#include <iostream>
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

/**
* Точка входа консольной программы.
*
* @return 0
*/
int main() {
	setlocale(LC_ALL, "");
	{
		People people(195, 85, { 17,12,1997 });
		PeopleViewer peopleView1(people);
		peopleView1.Show();
	}
	_CrtDumpMemoryLeaks();
	return 0;
}