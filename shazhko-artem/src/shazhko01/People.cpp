/**
* @file People.h
* @brief Содержит реализацию класса People
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "People.h"
#include <iostream>

People::People(){
	std::cout << "Вызов конструктора People без параметров\n";
}
People::People(float _height, float _weight,Date _birthDay){
	std::cout << "Вызов конструктора People с параметрами\n";
	this->birthDay = _birthDay;
	this->height = _height;
	this->weight = _weight;
}

void People::SetHeight(float _height) { this->height = _height; }
void People::SetWeight(float _weight) {
	this->weight = _weight;
}
void People::SetBirthDay(Date _birthDay) {
	this->birthDay = _birthDay;
}

float People::GetHeight() {
	return this->height;
}
float People::GetWeight(){ return this->weight; }
Date People::GetBirthDay(){ return this->birthDay; }
People::~People() {
	std::cout << "Вызов деструктора People\n";
}