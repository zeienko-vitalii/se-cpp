/**
* @file PrintableKeyboardButton.cpp
* @brief Contains PrintableKeyboardButton class implementation
* @author Khalin Yevhen
* @version 0.0.1
* @date 06.09.17
*/

#include "PrintableKeyboardButton.h"
#include "..\khalin04\KeyboardButton.cpp"
#include <string>

using std::endl;
using std::string;

string PrintableKeyboardButton::toString()
{
	string name = getName();
	string condition = std::to_string(getCondition());
	string code = std::to_string(getCode());
	string data = "KeyboardButton: [" + name + "; " + code + "; " + condition + "]";
	return data;
}

void PrintableKeyboardButton::OnStore(std::ostream & aStream)
{
	aStream << getName() << endl;
	aStream << getCode() << endl;
	aStream << getCondition() << endl;
}

void PrintableKeyboardButton::OnLoad(std::istream & aStream)
{
	string name;
	int code;
	bool condition;

	aStream >> name;
	aStream >> code;
	aStream >> condition;

	setName(name);
	setCode(code);
	setCondition(condition);
}

PrintableKeyboardButton::PrintableKeyboardButton(ButtonForm form, int code, string name) :
	KeyboardButton(form, code, name)
{
}

PrintableKeyboardButton::PrintableKeyboardButton() :
	KeyboardButton(ButtonForm::RECTANGULAR, 0, "undefined")
{
}

PrintableKeyboardButton::~PrintableKeyboardButton()
{
}
