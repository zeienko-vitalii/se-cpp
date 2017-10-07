/**
* @file PrintableButton.cpp
* @brief Contains PrintableButton class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 07.09.17
*/

#include "PrintableButton.h"

using std::string;

PrintableButton::PrintableButton(ButtonForm form) :
	Button(form)
{
}

PrintableButton::~PrintableButton()
{
}

string PrintableButton::toString()
{
	return "Button: [" + std::to_string(getCondition()) + "]";
}

void PrintableButton::OnStore(std::ostream & aStream)
{
	aStream << getCondition() << std::endl;
}

void PrintableButton::OnLoad(std::istream & aStream)
{
	bool condition = false;
	aStream >> condition;
	setCondition(condition);
}
