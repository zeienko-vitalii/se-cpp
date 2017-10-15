#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;

class Dummy { };

int main() {
	LinkedList<Dummy> a;
	a.addLast(&Dummy());
	a.clean();
	return _CrtDumpMemoryLeaks();
}