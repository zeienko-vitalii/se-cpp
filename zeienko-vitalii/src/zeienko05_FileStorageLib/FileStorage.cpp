/**
* @file FileStorage.cpp
* Realization of the FileStorage class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.10.22
*/

#include "FileStorage.h"

FileStorage::FileStorage(Serializable* ser, const char* fName) : serObject(ser), fileName(fName) {};

bool FileStorage::Save() {
	ofstream out;
	out.open(fileName, ofstream::trunc);
	if (out.is_open()) {
		serObject->toSave(out);
		out.close();
		return true;
	}
	else {
		out.close();
		return false;
	}
}

bool FileStorage::Load() {
	ifstream in;
	in.open(fileName);
	if (in.is_open()) {
		serObject->toLoad(in);
		in.close();
		return true;
	}
	else {
		in.close();
		return false;
	}
}