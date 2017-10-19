/**
* @file StubPredicate.h
* @brief Contains StubPredicate class declaration.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#pragma once

#include "..\khalin06\Functors.h"

/**
* Always returns true or false depends on the inner state.
*
* @author Khalin Yevhen
*/
template <class T>
class StubPredicate : public functors::Predicate<T> {
public:
	StubPredicate(bool retVal) : retVal(retVal) { }

	virtual ~StubPredicate() { }

	virtual bool test(T *obj) override {
		return retVal;
	}

	void setRetValue(bool retVal) {
		this->retVal = retVal;
	}
private:
	bool retVal;
};
