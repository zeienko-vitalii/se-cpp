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

// for tests
class Dummy;

int main() {
	const char* fileName = "test.txt";

	// Working with the developed list:
	{
		LinkedList<PKeyboardButton> list;
		CFileStorage *stor;
		auto btn1 = PKeyboardButton(ButtonForm::RECTANGULAR, 1, "btn1");
		auto btn2 = PKeyboardButton(ButtonForm::RECTANGULAR, 2, "btn2");
		auto btn3 = PKeyboardButton(ButtonForm::RECTANGULAR, 3, "btn3");
		auto btn4 = PKeyboardButton(ButtonForm::RECTANGULAR, 4, "btn4");
		list.addLast(&btn1);
		list.addLast(&btn2);
		list.addLast(&btn3);
		list.addLast(&btn4);

		// saving to the file.
		{
			stor = CFileStorage::Create(list, fileName);
			stor->Store();
		}

		// loading from the file.
		{
			LinkedList<PKeyboardButton> loadedList;
			stor = CFileStorage::Create(loadedList, fileName);
			stor->Load();

			// print loaded data
			for (auto i = 0; i < loadedList.size(); i++) {
				if (loadedList[i]) {
					cout << loadedList[i]->toString() << endl;
				} else {
					cout << "nullptr" << endl;
				}
			}
		}
	}
	system("pause");
	return _CrtDumpMemoryLeaks();
}

class Dummy {
public:
	int x;
	Dummy(int x) :x(x) {}
};