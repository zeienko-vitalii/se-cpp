/**
* @file SpecViewEventArgs.h
* @brief Contains SpecViewEventArgs class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 30.09.17
*/

#pragma once

#include "SpecView.h"
#include "EventArgs.h"
#include "..\khalin03\BaseView.h"

/**
* @brief Contains BaseView pointer for printing data
* @author Khalin Yevhen
*/
class SpecViewEventArgs : public EventArgs {
public:
	BaseView *view;
	virtual  ~SpecViewEventArgs();
};
