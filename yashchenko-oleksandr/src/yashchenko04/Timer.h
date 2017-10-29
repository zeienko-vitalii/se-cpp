#ifndef SCREEN_H_
#define SCREEN_H_

#define _WIN32_WINNT 0x0600

#include "Windows.h"
#include <iostream>

using namespace std;

class Timer{
public:
	int start(UINT ms, int numCntActions);
};
#endif
