#include "FileStorage.h"
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "CarWheelScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "SimpleList.cpp"
#include "IOCollection.cpp"
#include "SimpleStreamHelperFactory.h"
// Функция, которая позволяет отобразить элементы коллекции
void WheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it);
Wheel::CarWheel* StringToObgect(std::string type){
	//if (type == std::string("Wheel"))return new Wheel::Wheel();
	if (type == std::string("CarWheel"))return new Wheel::CarWheel();
	else return NULL;
}
int main() {
	{
		Collection::ICollection<Wheel::CarWheel*> *wheelList=NULL; // создаем контейнер в стеке, который будет хранить указатели

		auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
//		Stream::IOCollection<Wheel::CarWheel*>::Save(&wheelList,"wheelList", "wheelList.txt", sh);
		wheelList=Stream::IOCollection<Wheel::CarWheel*>::Load("wheelList", "wheelList.txt", sh, StringToObgect);

		delete sh;
		auto forRemove = (*wheelList)[1]; // получим второй элемент "MP-16 ", "Matador"
		wheelList->Remove(forRemove); // удалим второй элемент из коллекции
		delete forRemove; // освободим память
		forRemove = (*wheelList)[0]; // получим первый элемент "UltraGrip Performance G1", "Goodyear"
		wheelList->RemoveAt(0); // удалим превый элемент из коллекции
		delete forRemove; // освободим память
		forRemove = wheelList->Pop(); // достаним элемент из конца коллекции "Hakkapeliitta 9 (шип)", "Nokian"
		delete forRemove; // освободим память
		wheelList->Insirt(0, 
			new Wheel::CarWheel(514.5, 295,
				EUnits::EUNITS_CENTIMETERS,
				"Proxes T1 Sport SUV 295/40","Toyo")); // вставим элемент во вторую позицию

		auto it = wheelList->CreateIterator(); // получение итератора
		WheelListShow(it); // выводим на экран

#pragma region Очистка памяти
		for (it->First(); !it->IsDone(); it->Next()) {
			delete it->CurrentItem();
		}
		delete it;
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

void WheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it){
	for (it->First(); !it->IsDone(); it->Next()) {
		auto sc = new Screen::ScreenCreator::CarWheelScreenCreator(it->CurrentItem());
		Show(sc);
		delete sc;
	}
}