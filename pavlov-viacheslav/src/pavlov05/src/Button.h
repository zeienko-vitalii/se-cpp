/*
 * @file Button.h
 * Contains the declaration of the "Button" object.
 * @author pavlov-vs
 * @version 0.0.1
 * @date 2017.09.09
 **/
#pragma once

//TODO create multilpe constructors for button

#include "Window.h"
using namespace std;

/**
 * Class containing the implementation of a button.
 * <br><b>label</b> - text on a button.
 * <br><b>borderColor</b> - color of button border.
 */
class Button: public Window {
private:
	///text on a button
	string label;
	///color of button border
	string borderColor;
public:
	/**
	 * Default constructor, all fields are set to default.
	 */
	Button();

	Button(string label, string borderColor);

	Button(int _windowId, int _x1, int _y1, int _x2, int _y2, string label,
			string borderColor);

	virtual ~Button();

	/**
	 * Setter of button label.
	 * @param label - button label to be set.
	 */
	void setLabel(string label);
	/**
	 * Getter of button label.
	 * @return button label.
	 */
	string getLabel();

	/**
	 * Setter of button border color.
	 * @param borderColor - button border color to be set.
	 */
	void setBorderColor(string borderColor);
	/**
	 * Getter of button border color.
	 * @return button border color.
	 */
	string getBorderColor();

	virtual string toString();

	/**
	 * Завантажує дані із потоку
	 * @param aStream Відкритий потік для завантаження даних
	 */
	virtual void OnLoad(std::istream& aStream);

	virtual string toBitsetString();
};
