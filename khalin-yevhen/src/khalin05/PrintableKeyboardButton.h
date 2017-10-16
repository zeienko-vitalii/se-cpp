/**
* @file PrintableKeyboardButton.h
* @brief Contains PrintableKeyboardButton class declaration
* @author Khalin Yevhen
* @version 0.0.1
* @date 06.09.17
*/

#pragma once

#include "..\khalin04\KeyboardButton.h"
#include <StorageInterface.h>
#include "..\khalin01\Printable.h"

/**
* @brief It's just a printable version of KeyboardButton class.
* 
* Instances of this class are able to be printed into file and be represented in the string.
* @author Khalin Yevhen
*/
class PrintableKeyboardButton :
	public KeyboardButton, public MStorageInterface, public Printable {
public:
	PrintableKeyboardButton(ButtonForm form, int code, string name);

	PrintableKeyboardButton();

	virtual ~PrintableKeyboardButton();

	// inherited method
	virtual string toString();

	// inherited method
	virtual void OnStore(std::ostream& aStream);
	
	// inherited method
	virtual void OnLoad(std::istream& aStream);
};

typedef PrintableKeyboardButton PKeyboardButton;