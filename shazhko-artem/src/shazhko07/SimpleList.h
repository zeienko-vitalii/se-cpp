#pragma once
/**
* @file SimpleList.h
* @brief Содержит объявление класса SimpleList
* @author Shazhko Artem
* @version 0
* @date 18.09.17
*/
#include "ICollection.h"
#include <stdlib.h>
namespace Collection {
	/**
	* Класс коллекции, который реализует интерфейс ICollection<item>
	*/
	template <typename item>
	class SimpleList : public ICollection<item> {
	protected:
		/**
		* Структура, благодаря которой связываются элементы между собой и хранят пользовательские данные
		*/
		struct Node {
			Node(Node *_previous, Node *_next, item _element) :previous(_previous), next(_next), element(_element) {}
			// указатель на следующий элемент
			Node * next;
			// указатель на предыдущий элемент
			Node * previous;
			// пользовательские данные
			item element;
		}*top, *bottom;
		// количество элементов в коллекции
		int count;

		/**
		* Класс итератор, благодаря которому можно делать обход коллекции
		*/
		class SimpleListIterator : public Iterator::IIterator<item>
		{
		public:
			/**
			* Конструктор
			* @param _begin указатель на первый элемент списка
			* @param _end указатель на последний элемент списка
			*/
			SimpleListIterator(Node *_begin, Node *_end);
			/**
			* Деструктор
			*/
			virtual ~SimpleListIterator();
			/**
			* Смещает указатель на первый элемент
			*/
			virtual void First();
			/**
			* Смещает указатель на последний элемент
			*/
			virtual void Last();
			/**
			* Смещает указатель на следующий элемент
			*/
			virtual void Next();
			/**
			* Смещает указатель на предыдущий элемент
			*/
			virtual void Previous();
			/**
			* Указывает на завершение обхода
			*/
			virtual bool IsDone() const;
			/**
			* Получение текущего элемента
			*/
			virtual item CurrentItem()const;
		protected:
			// указатель на первый элемент
			Node *begin;
			// указатель на последний элемент
			Node *end;
			// указатель на текущий элемент
			Node *currentItem;
		};

	public:
		/**
		* Конструктор
		*/
		SimpleList<item>();
		/**
		* Деструктор
		*/
		~SimpleList<item>();
		/**
		* Оператор индексации
		* @param i индекс
		* @return объект, который хранится указанному индексу
		*/
		virtual item operator[](int i);
		/**
		* Вставка элемента в указанную позицию
		* @param index индекс по которому нужно вставить элемент
		* @param _element элемент, который нужно добавить
		*/
		virtual void Insirt(const int index, const item&);
		/**
		* Добавление в конец коллекции
		* @param _element элемент, который нужно добавить
		*/
		virtual void Push(const item&);
		/**
		* Получение элемента из конца коллекции с предварительным удалением из списка
		* @return элемент из конца колекции
		*/
		virtual item Pop();
		/**
		* Удаление элемента
		* @param _element эдемент, который нужно удалить
		* @param успех выполнения операции
		*/
		virtual bool Remove(const item&);
		/**
		* Удаление элемента
		* @param i индекс элемента, который нужно удалить
		* @param успех выполнения операции
		*/
		virtual bool RemoveAt(const int i);
		/**
		* Удаление всех элементов
		*/
		virtual void RemoveAll();
		/**
		* Получение количества элементов в коллекции
		* @return количество
		*/
		virtual int Count()const;
		/**
		* Создание итератора для обхода коллекции
		* @return итератор
		*/
		virtual Iterator::IIterator<item>* CreateIterator()const;
	};
}