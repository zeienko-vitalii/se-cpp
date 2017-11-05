#include "FileStorage.h"

#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "CollectionRequest.hpp"
#include "CarWheelFilterByDiameter.h"
#include "CarWheelFilterByManufacturer.h"
#include "SimpleStreamHelperFactory.h"
#include "CarWheelScreenCreator.hpp"
#include <iostream>
#include "IOCollection.cpp"
#include "SimpleList.cpp"

void CarWheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it);
void CallBackFunct(Collection::ICollection<Wheel::CarWheel *>* collection) {
	std::cout << "\n****** CallBackFunct *****\n";
	if (collection) {
		auto it = collection->CreateIterator();
		CarWheelListShow(it);
		delete it;
	}
	else
		std::cout << "Don't found\n";
	std::cout << "============================\n";
}
Wheel::CarWheel* StringToObgect1(std::string type) {
	if (type == std::string("CarWheel"))return new Wheel::CarWheel();
	else return NULL;
}
int main() {
	{
		Collection::ICollection<Wheel::CarWheel*> *carWheelList =NULL;
		auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
		carWheelList = Stream::IOCollection<Wheel::CarWheel*>::Load("wheelList", "CarWheelListSave.txt", sh, StringToObgect1);

		CarWheelFilter *filter = new CarWheelFilterByDiameter(508.0, new CarWheelFilterByManufacturer("Nokian", NULL));

		CollectionRequest::Find<CarWheelFilter, Wheel::CarWheel*>(carWheelList, filter, &CallBackFunct);
#pragma region Очистка памяти
		Collection::SimpleList<Wheel::CarWheel*>::iterator it = carWheelList->CreateIterator();
		for (it->First(); !it->IsDone(); it->Next()) {
			delete it->CurrentItem();
		}
		delete sh;
		delete it;
		delete filter;
		delete carWheelList;
#pragma endregion
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

void Show(Screen::ScreenCreator::ScreenCreator *sc) {
	if (sc == NULL)throw "NullReferenceException";
	auto screen = sc->CreateSreen();
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