/*
* @file Screen.h
* Містить опис об'єкту класа Screen
* @date 2017.10.03
* @author shcherbinina
*/

#ifndef CSCREEN_H_
#define CSCREEN_H_

#include "Capacity.h"
#include "BaseView.h"
/**
* Клас відображення інформації про об'єкт класу Capacity
*/
class Screen : public BaseView {
public:

	///Об'єкт класу, що має бути відображений
	Capacity capacity;
	/**
	* Конструктор без параметра
	*/
	Screen();
	/**
	* Конструктор для всіх полей
	* @param capacity - встановлюєме значення
	*/
	Screen(Capacity capacity);
	/**
	* Деструктор
	*/
	virtual ~Screen();
	/**
	 * Функція відображення даних об'єкта класу Capacity
	 */
	void view();
	/**
	* Виводить заголовок відображення
	*/
	virtual void showHeader() override;
	/**
	* Виводить головну інформацію про об'єкт
	*/
	virtual void showContent() override;
	/**
	* Виводить нижній колонтитул відображення
	*/
	virtual void showFooter() override;
};

#endif /* CSCREEN_H_ */
