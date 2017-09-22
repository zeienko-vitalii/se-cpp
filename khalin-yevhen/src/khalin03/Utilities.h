/**
* @file Utilities.h
* @brief Contains different utilities
* @author Khalin Yevhen
* @version 0.0.1
* @date 22.09.17
*/

#pragma once

/**
* @brief Compares the type of the argument with specified Base type in the template
* @return true if the 'T' type is a subtype of the 'Base' type
*/
template<typename Base, typename T> inline bool instanceof(const T*) {
	return std::is_base_of<Base, T>::value;
}