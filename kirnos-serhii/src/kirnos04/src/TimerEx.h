#pragma once
#include "TimerParam.h"
#include "Room.h"
#include "GraphScreen.h"
#include <threadpoolapiset.h>
#include <windows.h>
#include <stdio.h>

class TimerEx {
private:
	TimerParam TP;
	UINT ms;
public:
	TimerEx(int C, UINT MS, const Room& r) :
			ms(MS) {
		TP.numCntActions = C;
		TP.paramRoom = &r;
	}

	void go();

};
