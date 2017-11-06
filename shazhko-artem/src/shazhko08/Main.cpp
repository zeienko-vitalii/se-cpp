#include "FileStorage.h"
#include "CollectionRequest.hpp"
#include "CarWheelFilterByDiameter.h"
#include "CarWheelFilterByManufacturer.h"

#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "CarWheelScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "IOCollection.cpp"
#include "SimpleStreamHelperFactory.h"
#include "SimpleList.cpp"

void WheelListShow(Collection::ICollection<Wheel::CarWheel*>::iterator it);
void CallBackFunct(Collection::ICollection<Wheel::CarWheel *>* collection){
	std::cout << "\n****** CallBackFunct *****\n";
	if (collection) {
		auto it = collection->CreateIterator();
		WheelListShow(it);
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
		
		Collection::ICollection<Wheel::CarWheel*> *wheelList = NULL;
		auto sh = new Stream::StreamHelper::SimpleStreamHelperFactory();
		wheelList = Stream::IOCollection::Load<Wheel::CarWheel*>("wheelList", "CarWheelListSave.txt", sh, StringToObgect1);

		auto test = (*wheelList)[0];
		try {
			auto test = (*wheelList)[10]; // error
		}
		catch (std::out_of_range error) {
			std::cout << error.what();
		}
		try {
			wheelList->RemoveAt(10);// error
		}catch(...){}
		CarWheelFilter *filter = new CarWheelFilterByDiameter(508.0, new CarWheelFilterByManufacturer("Nokian", NULL));

		CollectionRequest::Find<CarWheelFilter,Wheel::CarWheel*>(wheelList, filter, &CallBackFunct);
#pragma region Очистка памяти
		Collection::ICollection<Wheel::CarWheel*>::iterator it = wheelList->CreateIterator();
		for (it->First(); !it->IsDone(); it->Next()) {
			delete it->CurrentItem();
		}
		delete it;
		delete wheelList;
		delete filter;
		delete sh;
#pragma endregion
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

void Show(Screen::ScreenCreator::CarWheelScreenCreator *sc) {
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