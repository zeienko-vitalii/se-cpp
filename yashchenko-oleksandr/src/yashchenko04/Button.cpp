/**
 * @file Button.cpp
 * Implementation of class Button.
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.27
 */

#include "Button.h"
#include "Window.h"
#include "string.h"

Button::Button() {
	strcpy(iTitle, "Default");
	strcpy(iBorderColor, "Default");
}

Button::Button(int aId, int aX1, int aY1, int aX2, int aY2, char * aTitle,
		char * aBorderColor) :
		Window(aId, aX1, aY1, aX2, aY2) {
	strcpy(iTitle, aTitle);
	strcpy(iBorderColor, aBorderColor);
}

Button::~Button() {

}

const char* Button::getTitle() const {
	return iTitle;
}

const char* Button::getBorderColor() const {
	return iBorderColor;
}

void Button::setTitle(char * aTitle) {
	strcpy(iTitle, aTitle);
}

void Button::setBorderColor(char * aBorderColor) {
	strcpy(iBorderColor, aBorderColor);
}

void Button::setData(const char* aTitle) {
	strcpy(iTitle, aTitle);
}

void Button::setData(const char* aTitle, const char* aBorderColor) {
	strcpy(iTitle, aTitle);
	strcpy(iBorderColor, aBorderColor);
}
