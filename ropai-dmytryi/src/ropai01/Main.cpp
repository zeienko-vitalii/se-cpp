//============================================================================
// Name        : lab1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Manipulator.h"
#include "Screen.h"

using namespace std;
/**
 * ����� ������� �� ��������
 * @return 0
 */
int main() {
	Manipulator oManipulator(5, "��������");
	Screen view(oManipulator);
	view.dataOutput();
	return 0;
}
