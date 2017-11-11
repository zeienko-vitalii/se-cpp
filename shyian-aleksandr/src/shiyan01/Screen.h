/**
 * @file Screen.h
 * Объявление класса Screen
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#include "Button.h"

/**
 * Отображение данных о кнопке
 */
class CScreen
{
public :
	///Атрибут объекта кнопки
	CButton iButton;

	/**
	 * Конструктор без параметра.
	 */
	CScreen(void);
	/**
	 * Конструктор с параметром.
	 * @param aButton Указывается в качестве параметра метода CScreen::SetContent
	 */
	CScreen(CButton aButton);

	/**
	 * Пустой деструктор.
	 */
	~CScreen();

	/**
	 * Чтение поля CScreen::iButton
	 * @param aButton Текущее значение поля CButton::iButton
	 */
	void setContent(CButton aButton);

	/**
	 * Отображение данных кнопки.
	 */
	void showContent(void) ;
};
