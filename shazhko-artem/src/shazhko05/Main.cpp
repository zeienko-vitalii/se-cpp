#include "FileStorage.h"
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW

#include "StorageInterface.h"

#include "CarWheelScreenCreator.hpp"
#include "DefaultScreenCreator.hpp"
#include "GraphScreenCreator.hpp"
#include "CarWheel.h"
#include <iostream>
#include "Delegate.hpp"
#include "SimpleTimer.h"

void RunPrintTimer(BaseScreen ** , int);
void RunCreaterScreen(ScreenCreator **, int );

int main() {
	Wheel *iWheel1 = new Wheel(6, 10, EUNITS_CENTIMETERS);
	CarWheel *iWheel2 = new CarWheel(0, 0, EUnits::EUNITS_CENTIMETERS, "", "");
	CFileStorage *file = CFileStorage::Create(*iWheel2, "Test.txt");
	file->Load();
	auto screenCreator = new ScreenCreator*[3]{
		new CarWheelScreenCreator(iWheel2),
		new DefaultScreenCreator(iWheel1),
		new GraphScreenCreator(iWheel1) };
	RunCreaterScreen(screenCreator,3);
#pragma region Очистка памяти
	for (int i = 0; i < 3; i++) {
		delete screenCreator[i];
		screenCreator[i] = NULL;
	}
	delete screenCreator;
	delete file;
	delete iWheel1;
	delete iWheel2;
#pragma endregion
	_CrtDumpMemoryLeaks();
	return 0;
}

void RunCreaterScreen(ScreenCreator **arrayScreenCreator, int count) {
	BaseScreen ** arrayScreen = new BaseScreen*[count];
	for (int i = 0; i < count; i++)
		arrayScreen[i] = arrayScreenCreator[i]->CreateSreen();
	RunPrintTimer(arrayScreen, count);
#pragma region Очистка памяти
	for (int i = 0; i < count; i++) {
		delete arrayScreen[i];
		arrayScreen[i] = NULL;
	}
	delete arrayScreen;
#pragma endregion
}

void RunPrintTimer(BaseScreen ** arrayScreen, int count) {
	Timer::SimpleTimer timer(4, 1000);
	for (int i = 0; i < count; i++)
		timer.OnTimerTact += Delegate::CreateDelegate<BaseScreen>(arrayScreen[i], &BaseScreen::Show);
	timer.Start();
	timer.Wait(INFINITE);
}