#pragma once
#include "IIterator.h"

template<typename item>
class ICollection abstract{
public:
	virtual ~ICollection() {}
	virtual item operator[](int i)=0;
	virtual void Push(const item&) = 0;
	virtual void Insirt(const int index,const item&) = 0;
	virtual item Pop() = 0;
	virtual bool Remove(const item&) = 0;
	virtual bool RemoveAt(const int i) = 0;
	virtual void RemoveAll() = 0;
	virtual int Count()const = 0;
	virtual IIterator<item>* CreateIterator()const =0;
	typedef IIterator<item>* iterator;
};