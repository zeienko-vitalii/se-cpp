#include "LinkedList.h"
#include <string>
#include <iostream>
#include "..\khalin05\PrintableKeyboardButton.h"
#include "..\khalin05\PrintableKeyboardButton.cpp"
#include "FileStorage.h"
#include "..\khalin03\Utilities.h"
#include "StorageInterface.h"
#include "..\khalin03\Utilities.h"
using namespace std;

class Dummy;

inline void testListLoading(const char *fileName) {
	LinkedList<PKeyboardButton> list;
	CFileStorage *stor = CFileStorage::Create(list, fileName);
	stor->Load();
	cout << list.get(0)->toString() << endl;
}

inline void testListSaving(const char* fileName) {
	auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 0, "btn1");
	auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 0, "btn2");
	LinkedList<PKeyboardButton> list;
	list.addLast(&btn1);
	list.addLast(&btn2);
	CFileStorage *stor = CFileStorage::Create(list, fileName);
	stor->Store();
}

int main() {
	const char* fileName = "test.txt";

	testListSaving(fileName);
	//testListLoading(fileName);

	system("pause");
	return _CrtDumpMemoryLeaks();
}

class Dummy {
public:
	int x;
	Dummy(int x) :x(x) {}
};