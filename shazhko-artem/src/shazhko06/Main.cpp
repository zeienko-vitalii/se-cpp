#include "FileStorage.h"
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "CarWheelScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>

#include "SimpleList.cpp"
void WheelListShow(ICollection<CarWheel*>::iterator it);

int main() {
	{
		SimpleList<CarWheel*> wheelList;
		wheelList.Push(new CarWheel(30, 50, EUNITS_CENTIMETERS, "UltraGrip Performance G1", "Goodyear"));
		wheelList.Push(new CarWheel(304.8, 500, EUnits::EUNITS_MILLIMETRES, "MP-16 ", "Matador"));
		wheelList.Push(new CarWheel(355.6, 185, EUnits::EUNITS_MILLIMETRES, "WinterContact TS 860", "Continental"));
		wheelList.Push(new CarWheel(508, 275, EUnits::EUNITS_MILLIMETRES, "Hakkapeliitta 9 (шип)", "Nokian"));

		auto forRemove = wheelList[1];
		wheelList.Remove(forRemove);
		delete forRemove;
		forRemove = wheelList[0];
		wheelList.RemoveAt(0);
		delete forRemove;
		forRemove = wheelList.Pop();
		delete forRemove;
		wheelList.Insirt(1, new CarWheel(514.5, 295, EUnits::EUNITS_CENTIMETERS, "Proxes T1 Sport SUV 295/40", "Toyo"));

		SimpleList<CarWheel*>::iterator it = wheelList.CreateIterator();
		WheelListShow(it);

#pragma region Очистка памяти
		for (it->First(); !it->IsDone(); it->Next()) {
			delete it->CurrentItem();
		}
		delete it;
#pragma endregion
	}
	_CrtDumpMemoryLeaks();
	return 0;
}

void Show(ScreenCreator *sc) {
	if (sc == NULL)throw "NullReferenceException";
	auto screen= sc->CreateSreen();
	screen->ShowHeader();
	screen->ShowContent();
	screen->ShowFooter();
	delete screen;
}

void WheelListShow(ICollection<CarWheel*>::iterator it){
	for (it->First(); !it->IsDone(); it->Next()) {
		auto sc = new CarWheelScreenCreator(it->CurrentItem());
		Show(sc);
		delete sc;
	}
}