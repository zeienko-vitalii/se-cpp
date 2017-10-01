#pragma once
#include "CWheel.h"
#include <string.h>

class  CCarWheel:CWheel
{
public:
	 CCarWheel();
	~ CCarWheel();
private:
	std::string tireName;
	std::string tireManufacturer;
};

 CCarWheel:: CCarWheel()
{
}

 CCarWheel::~ CCarWheel()
{
}