

#include <iostream>
#include <conio.h>
using namespace std;

#include "MouseList.h"
#include "../zeienko05_FileStorage/StorageInterface.h"
#include "ComputerManipulator.h"
#include "Functor.h"

/*

1. ��������� assert ���������, ���� ����������� �������
�������� ��������������� �������� ���������.
������������ ������� �������� Microsoft compiler.
2. ���������� �������� [] ������ MouseList<T>, 
����� �� �������� �������������� �������� ��������� ���������� �� ����,
���� ������ ������� �� ������� �������. 
��������� ���������� ����� �������������� ��������.

*/

int main() {
	ComputerManipulator* cManip1 = new ComputerManipulator(13, Manipulator::Joystick, "USB/PCP", ComputerManipulator::Laser);
	ComputerManipulator* cManip2 = new ComputerManipulator(14, Manipulator::Mouse, "Bluetooth", ComputerManipulator::Optical);
	ComputerManipulator* cManip3 = new ComputerManipulator(15, Manipulator::Joystick, "Bluetooth", ComputerManipulator::Balling);
	ComputerManipulator* cManip4 = new ComputerManipulator(18, Manipulator::Mouse, "GIGI", ComputerManipulator::Balling);
	MouseList<ComputerManipulator> q;
	
	
	// = new MouseList<ComputerManipulator>();


	q.push_back(cManip1);
	q.push_back(cManip2);
	q.push_back(cManip3);
	Functor f;
	int a = q.count(q, f);
	cout << "Count of bluetooth connection: " << a << endl;
	*q[5] = *cManip4;
	for (int i = 0; i < q.getSize();i++) {
		cout << q[i]->getConnectionInterface() << endl;
	}
	
	delete cManip1;
	delete cManip2;
	delete cManip3;

	_getch();
	return 0;
}