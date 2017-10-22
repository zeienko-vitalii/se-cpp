/*
 * CollectionHandler.cpp
 *
 *  Created on: 22 окт. 2017 г.
 *      Author: JR_Rider
 */
#include<iostream>

#include "CollectionHandler.h"

template<typename F>
CollectionHandler<F>::CollectionHandler() {
	// TODO Auto-generated constructor stub

}
template<typename F>
CollectionHandler<F>::~CollectionHandler() {
	// TODO Auto-generated destructor stub
}
template<typename F>
void CollectionHandler<F>::displayInverted(WindowVector &vec, F &ver) {

	for (int i = 0; i < vec.size(); i++) {
		if (ver(*vec.get(i)))
			cout << *vec.get(i);
	}
}

template class CollectionHandler<Verificator> ;
