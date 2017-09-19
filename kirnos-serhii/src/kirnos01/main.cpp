/**
* @file main.cpp
* @author Kirnos Sehii
* @version 0
* @date 18.09.17
*/

#include "View1.h"

using namespace std;

int main() {
	{
		Room r;

		r.SetField1_data1(10.1);
		r.SetField2_data1(20.2);
		r.SetField3_data1(30.3);
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
