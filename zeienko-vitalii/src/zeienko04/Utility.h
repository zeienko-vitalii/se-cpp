/**
* @file Utility.h
* This file keeps utilities 
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.09.09
*/

#pragma once

/**
* It checks the involvement of an object in hierarchy of classes which are inheriting the Base class
*
* @param obj is checked for belonging to the hierarchy of classes which are inheriting the Base class
* @warning parameter obj must be a polymorphic type
* @return true in case if obj belongs to the hierarchy of classes which are inheriting the Base class
*/
template<typename Base, typename T>
bool instanceof(T* obj) {
	return dynamic_cast<Base*>(obj);
}