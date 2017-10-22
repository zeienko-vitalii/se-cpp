/**
* @file Serializable.h
* Declaration of the Serializable class.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.22
*/

#include <fstream>

#ifndef SERIALIZABLE_H_
#define SERIALIZABLE_H_

/**
* This interace is used to safe and 
* restore data of an object that implements it.
**/
class Serializable {
public:
	/**
	* This method must be implemented to save an object.
	* @param os is an object to write to the file
	*/
	virtual void toSave(std::ofstream &os) = 0;
	/**
	* This method must be implemented to restore the data of an object.
	* @param in is an object to read from the file
	*/
	virtual void toLoad(std::ifstream& in) = 0;
};

#endif