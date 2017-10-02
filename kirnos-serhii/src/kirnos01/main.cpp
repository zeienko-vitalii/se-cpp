/**
* @file main.cpp
* @author Kirnos Sehii
* @version 0
* @date 18.09.17
*/

#include "Screen.h"

using namespace std;

int main() {
	{
		Room r;

		r.SetHeight(10.1);
		r.SetWidth(20.2);
		r.SetLength(30.3);
		cout << endl;

		Screen view1(r);

		view1.ShowContent();

		cout << "---" << endl;
		{
			Room* r1 = new Room();
			Room r2 = *r1;
			Room r3(*r1);

			delete r1;
		}
		cout << "---" << endl;
	}
	return 0;
}
