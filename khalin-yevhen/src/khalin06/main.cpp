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
		list.insert(2, &Dummy(5));
		Dummy *d = list[3];
		cout << d->x << endl;
		cout << list.size() << endl;
	}
	system("pause");
	return _CrtDumpMemoryLeaks();
}