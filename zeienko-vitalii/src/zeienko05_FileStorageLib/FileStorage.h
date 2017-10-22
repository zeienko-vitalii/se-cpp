/**
* @file FileStorage.h
* Declaration of the FileStorage class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.10.22
*/

#include <fstream>
#include "Serializable.h"
#pragma once

using std::ofstream;
using std::ifstream;

/**
* This class represent file storage.
* It saves and restore objects which implements Serializable interface.
*/
class FileStorage {
private:
	const char* fileName; /// It`s the name of the file
	Serializable* serObject; /// Serializable object which will be stored or restored
public:
	/**
	* Initialize fields of the FileStorage with appropriate parameters.
	* @param ser is a object which will handled for saving or loading to/from file
	* @param fName is a file name
	**/
	FileStorage(Serializable* ser, const char* fName);

	/**
	* Saves serObject to file fileName
	* @return true in case if the file will be open
	**/
	bool Save();

	/**
	* Restore serObject from file fileName
	* @return true in case if the file will be open
	**/
	bool Load();

};
