/*
 * CollectionHandler.h
 *
 *  Created on: 22 ���. 2017 �.
 *      Author: JR_Rider
 */

#pragma once
#include"Window.h"
#include"WindowVector.h"
#include"Verificator.h"

template<typename F>
class CollectionHandler {
public:
	CollectionHandler();
	virtual ~CollectionHandler();
	void displayInverted(WindowVector &vec, F &ver);
};

