/*
* @file Jar.h
* Містить опис об'єкту класа Jar
* @date 2017.10.01
* @author shcherbinina
*/
#pragma once
#include "Capacity.h"
/**
* Клас, що містить реалізацію банки
*/
class Jar :
	public Capacity
{
private:
	///Тип кришки
	string typeOfCap;
	///Матеріал
	string material;
public:
	/**
	* Конструктор без параметрів
	*/
	Jar();
	/**
	* Конструктор з параметрами для власних полів
	*/
	Jar(string typeOfCap, string material);
	/**
	* Конструктор копіювання
	*/
	Jar(const Jar& jar);
	/**
	* Конструктор з параметрами для власних полів і тих, що унаслідувались
	*/
	Jar(units unit, float v, string typeOfCap, string material);
	/**
	* Деструктор
	*/
	virtual ~Jar();
	/**
	* Сеттер для типу кришки
	* @param встановлюєме значення типу кришки
	*/
	void setTypeOfCap(string typeOfCap);
	/**
	* Геттер для типу кришки
	* @return тип кришки
	*/
	string getTypeOfCap();
	/**
	* Сеттер для поля матеріалу
	* @param встановлюєме значення матеріалу
	*/
	void setMaterial(string material);
	/**
	* Геттер для поля матеріалу
	* @return матеріал
	*/
	string getMaterial();
};

