#include "LinkedList.h"
#include <string>
#include <iostream>
using namespace std;

class Dummy {
public:
	int x;
	Dummy(int x) :x(x) {}
};

int main() {
	{
		LinkedList<Dummy> list;
		list.addLast(&Dummy(1));
		list.addLast(&Dummy(2));
		list.addLast(&Dummy(3));
		Dummy *d = list[2];
		cout << d->x << endl;
	}
	system("pause");
	return _CrtDumpMemoryLeaks();
}