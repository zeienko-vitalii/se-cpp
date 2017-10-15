/**
* @file BaseView.h
* Declaration of the BaseView class.
* @author Vitalii Zeienko
* @version 0.0.1
* @date 2017.10.01
*/
#include "Manipulator.h"

#ifndef COMPUTERMANIPULATOR_H_
#define COMPUTERMANIPULATOR_H_

/**
* This class represents computer`s manipulators
* */
class ComputerManipulator : public Manipulator {
private:

	/// The connection interface of the computer manipulator
	char* connectionInterface; // PS/2, USB, USB+PS/2, USB Type-C, Wireless

	/// Computer manipulator`s sensor type (balling, optical, laser)
	char* sensorType;
public:
	/**
	* This constructor sets class` fields by default
	* */
	ComputerManipulator();

	/**
	 * Copying constructor
	 * @param computerManipulator outer object with data which will be copied
	* */
	ComputerManipulator(const ComputerManipulator& computerManipulator);

	/**
	* It assigns parameters to class` fields
	* @param amountOfBtns is an amount of buttons
	* @param type is a type of manipulator
	* @param cInterface is a connection interface
	* @param sType is a sensor type of manipulator
	* */
	ComputerManipulator(int amountOfBtns, Type type,
		char* cInterface, char* sType);

	/**
	* Returns connection interface of the current object
	* @return ComputerManipulator::connectionInterface
	* */
	char* getConnectionInterface() const;
	/**
	* Returns sensor type of the current object
	* @return ComputerManipulator::sensorType
	* */
	char* getSensorType() const;

	/**
	* It assigns ComputerManipulator::connectionInterface with cInterface value
	* @param cInterface will be assigned to ComputerManipulator::connectionInterface
	*/
	void setConnectionInterface(char* cInterface);

	/**
	* It assigns ComputerManipulator::sensorType with sType value
	* @param sType will be assigned to ComputerManipulator::sensorType
	*/
	void setSensorType(char* sType);

	~ComputerManipulator();
};


#endif /* COMPUTERMANIPULATOR_H_ */
