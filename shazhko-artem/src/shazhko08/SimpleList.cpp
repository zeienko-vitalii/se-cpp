#include "SimpleList.h"
#include <stdexcept>
/**
* @file SimpleList.cpp
* @brief Реализация класса SimpleList
* @author Shazhko Artem
* @version 0
* @date 09.10.17
*/
namespace Collection {

	template<typename item>
	SimpleList<item>::SimpleList() :top(NULL), bottom(NULL), count(0) {}

	template<typename item>
	SimpleList<item>::~SimpleList()
	{
		this->RemoveAll();
	}

	template<typename item>
	item SimpleList<item>::operator[](int index) throw(std::out_of_range)
	{
		if (index >= this->count || index < 0)throw std::out_of_range("The index is outside the list boundary");
		Node * walker = NULL;
		if (index < this->count / 2) {
			walker = this->top;
			for (int i = index; i != 0; i--) walker = walker->next;
		}
		else {
			walker = this->bottom;
			for (int i = this->count - index - 1; i != 0; i--)
				walker = walker->previous;
		}
		return walker->element;
	}

	template<typename item>
	void SimpleList<item>::Insert(const int index, const item &_item)throw(std::out_of_range)
	{
		if (index >= this->count + 1 || index < 0)throw std::out_of_range("The index is outside the list boundary");
		if (!this->top) {
			top = bottom = new Node(NULL, NULL, _item);
			top->element = _item;
			this->count++;
			return;
		}
		Node * walker = NULL;
		if (index < this->count / 2) {
			walker = this->top;
			for (int i = index; i > 0; i--)
				walker = walker->next;
		}
		else {
			walker = this->bottom;
			for (int i = this->count - index - 1; i > 0; i--)
				walker = walker->previous;
		}
		walker->next = new Node(walker, walker->next, _item);
		walker = walker->next;
		if (walker->previous == NULL) {
			this->top = walker;
		}
		if (walker->next != NULL) {
			walker->next->previous = walker;
		}
		else {
			this->bottom = walker;
		}
		this->count++;
	}

	template<typename item>
	void SimpleList<item>::Push(const item & _item)
	{
		if (!top) {
			top = bottom = new Node(NULL, NULL, _item);
			top->element = _item;
		}
		else {
			bottom->next = new Node(bottom, NULL, _item);
			bottom = bottom->next;
		}
		count++;
	}

	template<typename item>
	item SimpleList<item>::Pop()throw (std::runtime_error)
	{
		if (count == 0) throw std::runtime_error("don't found data");
		item result = this->bottom->element;
		if (count == 1) {
			delete  this->bottom;
			this->top = NULL;
			this->bottom = NULL;
		}
		else {
			this->bottom = this->bottom->previous;
			delete  this->bottom->next;
			this->bottom->next = NULL;
		}
		count--;
		return result;
	}

	template<typename item>
	bool SimpleList<item>::Remove(const item & _element)
	{
		if (this->count < 1)return false;
		Node * walker = this->top;
		for (int i = this->count; i != 0; i--) {
			if (walker->element == _element) {
				if (walker->previous != NULL) {
					walker->previous->next = walker->next;
				}
				else {
					this->top = walker->next;
				}
				if (walker->next != NULL) {
					walker->next->previous = walker->previous;
				}
				else {
					this->bottom = walker->previous;
				}
				delete walker;
				//delete walker->element;
				this->count--;
				return true;
			}
			walker = walker->next;
		}
		return false;
	}

	template<typename item>
	void SimpleList<item>::RemoveAt(const int index)throw(std::out_of_range)
	{
		_ASSERT_EXPR((index < this->count && index >= 0), L"The index is outside the list boundary");
		if (index >= this->count || index < 0) throw std::out_of_range("The index is outside the list boundary");
		Node * walker = NULL;
		if (index < this->count / 2) {
			walker = this->top;
			for (int i = index; i != 0; i--)
				walker = walker->next;
		}
		else {
			walker = this->bottom;
			for (int i = this->count - index - 1; i != 0; i--)
				walker = walker->previous;
		}
		if (walker->previous != NULL) {
			walker->previous->next = walker->next;
		}
		else {
			this->top = walker->next;
		}

		if (walker->next != NULL) {
			walker->next->previous = walker->previous;
		}
		else {
			this->bottom = walker->previous;
		}
		this->count--;

		delete walker;
		//delete walker->element;
	}

	template<typename item>
	void SimpleList<item>::RemoveAll()
	{
		Node * walker = NULL;
		for (int i = this->count; i != 0; i--) {
			walker = this->top;
			this->top = this->top->next;
			delete walker;
		}
		this->bottom = NULL;
		this->count = 0;
	}

	template<typename item>
	int SimpleList<item>::Count()const
	{
		return this->count;
	}

	template<typename item>
	Iterator::IIterator<item>* SimpleList<item>::CreateIterator()const
	{
		return new SimpleListIterator(this->top, this->bottom);
	}

	template <typename item>
	SimpleList<item>::SimpleListIterator::SimpleListIterator(Node * _begin, Node * _end) :begin(_begin), currentItem(_begin), end(_end) {}

	template <typename item>
	SimpleList<item>::SimpleListIterator::~SimpleListIterator() {
		this->currentItem = NULL;
	}

	template<typename item>
	void SimpleList<item>::SimpleListIterator::First()
	{
		this->currentItem = this->begin;
	}

	template<typename item>
	void SimpleList<item>::SimpleListIterator::Last()
	{
		this->currentItem = this->end;
	}

	template<typename item>
	void SimpleList<item>::SimpleListIterator::Next()
	{
		this->currentItem = this->currentItem->next;
	}

	template<typename item>
	void SimpleList<item>::SimpleListIterator::Previous()
	{
		this->currentItem = this->currentItem->previous;
	}

	template<typename item>
	bool SimpleList<item>::SimpleListIterator::IsDone() const
	{
		if (this->currentItem == NULL)return true;
		return false;
	}

	template<typename item>
	item SimpleList<item>::SimpleListIterator::CurrentItem()const
	{
		return this->currentItem->element;
	}

}