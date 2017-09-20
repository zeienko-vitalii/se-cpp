/*
 * Button.h
 *
 *  Created on: 20 сент. 2017 г.
 *      Author: JR_Rider
 */
#pragma once

using namespace std;

class Button {
private:
	string label;
	string borderColor;
public:
	Button();
	virtual ~Button();

	void setLabel(string label);
	string getLabel();

	void setBorderColor(string borderColor);
	string getBorderColor();

};
