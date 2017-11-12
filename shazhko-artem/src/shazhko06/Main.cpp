#include "FileStorage.h"
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "DefaultScreenCreator.hpp"
#include "CarWheelScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "SimpleList.cpp"
#include "IOCollection.cpp"
#include "SimpleStreamHelperFactory.h"
// Функция, которая позволяет отобразить элементы коллекции
void CarWheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it);
void WheelListShow(Collection::ICollection<Wheel::Wheel*>::iterator it);
void DemonstratingDeletion(Collection::ICollection<Wheel::CarWheel*> *wheelList);
void DemonstratingAddition(Collection::ICollection<Wheel::CarWheel*> *wheelList);

Wheel::CarWheel* StringToObgect1(std::string type) {
	if (type == std::string("CarWheel"))return new Wheel::CarWheel();
	else return NULL;
}
Wheel::Wheel* StringToObgect2(std::string type) {
	if (type == std::string("Wheel"))return new Wheel::Wheel();
	if (type == std::string("CarWheel"))return new Wheel::CarWheel();
	else return NULL;
}
int main() {
	{
		Collection::ICollection<Wheel::CarWheel*> *carWheelList=NULL; //  контейнер, который будет хранить указатели
		auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
		carWheelList = Stream::IOCollection::Load<Wheel::CarWheel*>("wheelList",
			"CarWheelListLoad.txt", sh, StringToObgect1); // загружаем данные из файла
		DemonstratingDeletion(carWheelList);
		auto it1 = carWheelList->CreateIterator(); // получение итератора
		CarWheelListShow(it1); // выводим на экран
		DemonstratingAddition(carWheelList);
		Stream::IOCollection::Save<Wheel::CarWheel*>(carWheelList,"wheelList", "CarWheelListSave.txt", sh);
		CarWheelListShow(it1); // выводим на экран
		Collection::ICollection<Wheel::Wheel*> *wheelList = NULL; //  контейнер, который будет хранить указатели
		wheelList = Stream::IOCollection::Load<Wheel::Wheel*>("wheelList", "CarWheelListSave.txt", sh, StringToObgect2);
		wheelList->Push(new Wheel::Wheel(42, 60, EUNITS_CENTIMETERS)); // добавим еще один элемент
		Stream::IOCollection::Save<Wheel::Wheel*>(wheelList, "wheelList", "WheelListSave.txt", sh); // сохраняем
		auto it2 = wheelList->CreateIterator(); // получение
		WheelListShow(it2); // выводим на экран
#pragma region Очистка памяти
		for (it1->First(); !it1->IsDone(); it1->Next()) {
			delete it1->CurrentItem();
		}
		for (it2->First(); !it2->IsDone(); it2->Next()) {
			delete it2->CurrentItem();
		}
		delete sh;
		delete it1;
		delete it2;
		delete carWheelList;
		delete wheelList;
#pragma endregion
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

void Show(Screen::ScreenCreator::ScreenCreator *sc) {
	if (sc == NULL)throw "NullReferenceException";
	auto screen= sc->CreateSreen();
	screen->ShowHeader();
	screen->ShowContent();
	screen->ShowFooter();
	delete screen;
}

void CarWheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it) {
	for (it->First(); !it->IsDone(); it->Next()) {
		auto sc = new Screen::ScreenCreator::CarWheelScreenCreator(it->CurrentItem());
		Show(sc);
		delete sc;
	}
}
void WheelListShow(Collection::ICollection<Wheel::Wheel*>::iterator it) {
	for (it->First(); !it->IsDone(); it->Next()) {
		auto sc = new Screen::ScreenCreator::DefaultScreenCreator(it->CurrentItem());
		Show(sc);
		delete sc;
	}
}
void DemonstratingDeletion(Collection::ICollection<Wheel::CarWheel*> *wheelList) {
	auto forRemove = (*wheelList)[1]; // получим второй элемент "MP-16 ", "Matador"
	wheelList->Remove(forRemove); // удалим второй элемент из коллекции
	delete forRemove; // освободим память
	forRemove = (*wheelList)[0]; // получим первый элемент "UltraGrip Performance G1", "Goodyear"
	wheelList->RemoveAt(0); // удалим превый элемент из коллекции
	delete forRemove; // освободим память
	forRemove = wheelList->Pop(); // достаним элемент из конца коллекции "Hakkapeliitta 9 (шип)", "Nokian"
	delete forRemove; // освободим память
}
void DemonstratingAddition(Collection::ICollection<Wheel::CarWheel*> *wheelList) {
	wheelList->Insirt(0, new Wheel::CarWheel(514.5, 295, EUNITS_CENTIMETERS,
		"Proxes T1 Sport SUV 295/40", "Toyo")); // вставим элемент во вторую позицию
	wheelList->Push(new Wheel::CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
	wheelList->Push(new Wheel::CarWheel(508, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Nokian"));
	wheelList->Push(new Wheel::CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian"));
}