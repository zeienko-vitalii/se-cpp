#pragma once
#include "CWheel.h"

class CScreen {
public:
	CScreen();
	CScreen(CWheel wheel);
	virtual ~CScreen();
	void PrintData();
private:
	CWheel *wheel;
};