/*
 * WindowVector.h
 *
 *  Created on: 21 окт. 2017 г.
 *      Author: JR_Rider
 */

#pragma once
#include"Window.h"
using namespace std;

class WindowVector {
private:
	int vSize;
	int vCapacity;
	Window* vector;

	void resize();
public:
	WindowVector();
	virtual ~WindowVector();
	void push(const Window& win);
	Window* get(int pos);
	int size();
	void remove(int pos);
	void clean();
	Window* operator[](int pos) {
		return get(pos);
	}
};
