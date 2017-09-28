/*
 * @file Manipulator.h

 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include <string>
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_
/**
 * Клас опису маніпулятору
 */
class Manipulator {

public:
	//Кіількість кнопок
	int count;

private:
	//Тип девайсу
	string type;

public:
	/**
	* Ініціалізація полей
	* Конструктор без параметрів
	*/
	Manipulator();

	/**
	* Конструктор із параметрами
	* @param count кількість кнопок
	* @param type тип девайсу
	*/
	Manipulator(int count, string type);

	/**
	* Отримання кількості кнопок
	* @return кількість кнопок
	*/
	int getCount() const;

	/**
	* Отримання типу девайсу
	* @return тип девайсу
	*/
	string getType() const;

	/**
	* Установка кількості кнопок
	* @param count присваюється полю count
	*/
	void setCount(int count);

	/**
	* Установка типу девайсу
	* @param type присваюється полю type
	*/
	void setType(string type);

	/**
	 * Метод повертає true, якщо
	 * count <= 2
	 * @return
	 */
	bool isSimple() const;

	/**
	 * Метод повертає true, якщо
	 * count >= 4
	 * @return
	 */
	bool isGame() const;

	/**
	* Деструктор
	*/
	virtual ~Manipulator();
};

#endif /* MANIPULATOR_H_ */
