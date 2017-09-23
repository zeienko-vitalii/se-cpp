/**
* @file Utilities.h
* @brief Contains different utilities
* @author Khalin Yevhen
* @version 0.0.2
* @date 22.09.17
*/

#pragma once

/**
* @brief Compares 'obj' type with specified 'Base' type in the template.
*
* @warning 'obj' must be an instance of a polymorphic type.
* @return true if a type of the 'obj' is a subtype of the 'Base' type.
*/
template<typename Base, typename T> inline bool instanceof(T* obj) {
	return dynamic_cast<Base*>(obj);
}
