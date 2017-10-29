#pragma once
#include "ICollection.h"
#include <stdlib.h>

template <typename item>
class SimpleList : public ICollection<item> {
protected:	
	struct Node {
		Node(Node *_previous, Node *_next, item _element) :previous(_previous), next(_next), element(_element) {}
		Node * next;
		Node * previous;
		item element;
	}*top, *bottom;
	int count;

	class SimpleListIterator: public IIterator<item>
	{
	public:
		SimpleListIterator(Node *_begin, Node *_end);
		virtual ~SimpleListIterator();
		virtual void First();
		virtual void Last();
		virtual void Next();
		virtual void Previous();
		virtual bool IsDone()const;
		virtual item CurrentItem()const;
	protected:
		Node *begin;
		Node *end;
		Node *currentItem;
	};

public:
	SimpleList<item>();
	~SimpleList<item>();
	virtual item operator[](int i);
	virtual void Insirt(const int index, const item&);
	virtual void Push(const item&);
	virtual item Pop();
	virtual bool Remove(const item&);
	virtual bool RemoveAt(const int i);
	virtual void RemoveAll();
	virtual int Count()const;
	virtual IIterator<item>* CreateIterator()const;
	typedef IIterator<item>* iterator;
};