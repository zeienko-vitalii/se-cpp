/**
* @file People.h
* @brief Содержит реализацию класса PeopleViewer
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "PeopleViewer.h"
#include <iostream>

PeopleViewer::PeopleViewer()
{
	std::cout << "Вызов конструктора PeopleViewer с параметрами\n";
}
PeopleViewer::PeopleViewer(People _people) {
	std::cout << "Вызов конструктора PeopleViewer с параметрами\n";
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
	std::cout << "Вызов деструктора PeopleViewer\n";
}