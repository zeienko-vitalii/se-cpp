#pragma once

template<typename item>
class IIterator abstract {
public:
	virtual ~IIterator(){}
	virtual void First() = 0;
	virtual void Last() = 0;
	virtual void Next() = 0;
	virtual void Previous() = 0;
	virtual bool IsDone() const = 0;
	virtual item CurrentItem() const = 0;
};