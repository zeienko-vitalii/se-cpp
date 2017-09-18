/**
* @file People.h
* @brief �������� ���������� ������ PeopleViewer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "PeopleViewer.h"
#include <iostream>

PeopleViewer::PeopleViewer()
{
	std::cout << "����� ������������ PeopleViewer � �����������\n";
}
PeopleViewer::PeopleViewer(People _people) {
	std::cout << "����� ������������ PeopleViewer � �����������\n";
	this->people = _people;
}
void PeopleViewer::Show() {
	Date birthDay = people.GetBirthDay();
		std::cout << "birthDay: " << birthDay.day << "." <<birthDay.month << "." << birthDay.year << "\n"
			<< "height: "<< people.GetHeight()<<"\n"<<
			"weight: "<< people.GetWeight()<<"\n\n";
}
PeopleViewer::~PeopleViewer()
{
	std::cout << "����� ����������� PeopleViewer\n";
}