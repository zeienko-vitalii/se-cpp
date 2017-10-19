/**
* @file Functors.h
* @brief Contains different functors declarations.
* @author Khalin Yevhen
* @version 0.0.1
* @date 19.10.17
*/

#pragma once

/**
* @brief Contains different functors declarations.
*
* @author Khalin Yevhen
*/
namespace functors {

	/**
	* @brief Checks some state of the passed object
	*
	* @author Khalin Yevhen
	*/
	template <class T>
	class Predicate abstract {
	public:

		/**
		* @brief An assertion of the object state.
		*
		* @param obj a handling object
		*/
		virtual bool test(T *obj) = 0;
	};


	/**
	* @brief Represents some action over the object.
	*
	* @author Khalin Yevhen
	*/
	template <class T>
	class Action abstract {
	public:

		/**
		* @brief An action over the passed object.
		*
		* @param obj a handling object
		*/
		virtual void act(T *obj) = 0;
	};
}