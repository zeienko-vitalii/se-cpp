/**
 * @file Button.h
 * Declaration of class Button.
 * @author Ященко Олександр
 * @version 0.0.1
 * @date 2017.10.20
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#include "Window.h"

/**
 * Stores information about button.
 */
class Button: public Window {
public:
	/**
	 * Constructor.
	 */
	Button();

	/**
	 * Constructor with parameters.
	 * @param aId sets Button::iId
	 * @param aX1 sets Button::iX1
	 * @param aY1 sets Button::iY1
	 * @param aX2 sets Button::iX2
	 * @param aY2 sets Button::iY2
	 * @param aTitle sets Button::iTitle
	 * @param aBorderColor sets Button::iBorderColor
	 */
	Button(int aId, int aX1, int aY1, int aX2, int aY2, char * aTitle,
			char * aBorderColor);

	/**
	 * Destructor.
	 */
	~Button();
private:
	char iTitle[32]; ///< Text of button title
	char iBorderColor[32]; ///< Color of button border
public:
	/**
	 * Returns Button::iTitle.
	 * @return pointer to text of button title
	 */
	const char* getTitle() const;

	/**
	 * Returns Button::iBorderColor.
	 * @return pointer to text of color of border of button
	 */
	const char* getBorderColor() const;

	/**
	 * Sets Button::iTitle.
	 */
	void setTitle(char * aTitle);

	/**
	 * Sets Button::iBorderColor.
	 */
	void setBorderColor(char * aBorderColor);
};

#endif /* BUTTON_H_ */
