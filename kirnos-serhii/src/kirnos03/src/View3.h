#pragma once
#include "Room.h"
#include "RoomHousing.h"
#include "BaseView.h"
#include <iostream>
using namespace std;

class View3: public BaseView {
public:
	View3(const RoomHousing& R);

	void ShowHeader();
	void ShowContent();
	void ShowFooter();

	~View3();
};
