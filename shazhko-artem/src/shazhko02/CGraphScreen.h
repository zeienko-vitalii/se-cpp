#pragma once
#include "CWheel.h"

class CGraphScreen
{
public:
	CGraphScreen();
	virtual ~CGraphScreen();
	void SetDataSource(const CWheel &_wheel);
	CWheel GetDataSource()const;
	void PrintData(const CWheel &_wheel);
	void PrintData();
private:
	CWheel *wheel;
};
