#pragma once
/**
* @file ICollection.h
* @brief Содержит объявление класса ICollection
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "IIterator.h"
/**
* Абстрактный класс который задает интерфейс контейнеров
*/
template<typename item>
class ICollection abstract {
public:
	/**
	* Деструктор
	*/
	virtual ~ICollection() {}
	/**
	* Оператор индексации
	* @param i индекс
	* @return объект, который хранится указанному индексу
	*/
	virtual item operator[](int i) = 0;
	/**
	* Добавление в конец коллекции
	* @param _element элемент, который нужно добавить
	*/
	virtual void Push(const item& _element) = 0;
	/**
	* Вставка элемента в указанную позицию
	* @param index индекс по которому нужно вставить элемент
	* @param _element элемент, который нужно добавить
	*/
	virtual void Insirt(const int index, const item& _element) = 0;
	/**
	* Получение элемента из конца коллекции с предварительным удалением из списка
	* @return элемент из конца колекции
	*/
	virtual item Pop() = 0;
	/**
	* Удаление элемента
	* @param _element эдемент, который нужно удалить
	* @param успех выполнения операции
	*/
	virtual bool Remove(const item& _element) = 0;
	/**
	* Удаление элемента
	* @param i индекс элемента, который нужно удалить
	* @param успех выполнения операции
	*/
	virtual void RemoveAt(const int i) = 0;
	/**
	* Удаление всех элементов
	*/
	virtual void RemoveAll() = 0;
	/**
	* Получение количества элементов в коллекции
	* @return количество
	*/
	virtual int Count()const = 0;
	/**
	* Создание итератора для обхода коллекции
	* @return итератор
	*/
	virtual IIterator<item>* CreateIterator()const = 0;
	typedef IIterator<item>* iterator;
};