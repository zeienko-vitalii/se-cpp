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

inline void loadListFromFile(const char *fileName) {
	LinkedList<PKeyboardButton> list;
	CFileStorage *stor = CFileStorage::Create(list, fileName);
	stor->Load();

	// print loaded buttons
	for (auto i = 0; i < list.size(); i++) {
		if (list[i]) {
			cout << list[i]->toString() << endl;
		} else {
			cout << "nullptr" << endl;
		}
	}
}

inline void saveFilledListToFile(const char* fileName) {
	LinkedList<PKeyboardButton> list;
	auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 1, "btn1");
	auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 2, "btn2");
	auto btn3 = PKeyboardButton(ButtonForm::RECTANGULAR, 3, "btn3");
	auto btn4 = PKeyboardButton(ButtonForm::RECTANGULAR, 4, "btn4");
	list.addLast(&btn1);
	list.addLast(&btn2);
	list.addLast(&btn3);
	list.addLast(&btn4);

	CFileStorage *stor = CFileStorage::Create(list, fileName);
	stor->Store();
}

int main() {
	const char* fileName = "test.txt";

	saveFilledListToFile(fileName);
	loadListFromFile(fileName);

	system("pause");
	return _CrtDumpMemoryLeaks();
}

class Dummy {
public:
	int x;
	Dummy(int x) :x(x) {}
};