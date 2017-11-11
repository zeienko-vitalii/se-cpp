/**
 * @file Button.h
 * Объявление класса Button
 * @author Shyian
 * @version 1.0.0
 * @date 11.11.2017
 */

#ifndef BUTTON_H
#define BUTTON_H

/**
 * Создание объекта класса CButton
 */
class CButton
{
public:
	/// Атрибут состояния кнопки(вкл/выкл)
	bool iOnState;
	///Атрибут формы кнопки(Прямоугольная,Овальная)
	enum Shape { RECTANGULAR, OVAL } iShape;

	/**
	 * Конструктор без параметра.
	 */
	CButton(void);

	/**
	 * Конструктор с двумя параметрами.
	 * @param aOnState Указывается в качестве первого параметра метода CButton::SetParameters
	 * @param aShape Указывается в качестве второго параметра метода CButton::SetParameters
	 */
	CButton(bool aOnState, Shape aShape);

	/**
	 * Конструктор копирования.
	 * @param aButton Исходный объект с данными для копирования
	 */
	CButton(const CButton& aButton);

	/**
	 * Пустой деструктор.
	 */
	~CButton();

	/**
	 * Чтение полей CButton::iOnState и CButton::iShape
	 * @param aOnState Текущее значение поля CButton::iOnState
	 * @param aShape Текущее значение поля CButton::iShape
	 */
	void setParameters(bool aOnState, Shape aShape);

};

#endif
