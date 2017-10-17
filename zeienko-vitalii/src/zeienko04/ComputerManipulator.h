/**
* @file ComputerManipulator.h
* Declaration of the ComputerManipulator class.
* @author Vitalii Zeienko
* @version 0.0.4
* @date 2017.10.01
*/

#include "Manipulator.h"

#ifndef COMPUTERMANIPULATOR_H_
#define COMPUTERMANIPULATOR_H_

/**
* This class represents computer`s manipulators
* */
class ComputerManipulator : public Manipulator {
public:

	enum SensorType { Balling, Optical, Laser };	/// Types that manipulator can be balling, optical, laser
	
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
		char* cInterface, SensorType sType);

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

	/**
	* It assigns ComputerManipulator::sensorType with the value appropriate sensorTypeNumericValue
	* @param sensorTypeNumericValue is numeric value of the enum type ComputerManipulator::SensorType
	*/
	void setSensorType(int sensorTypeNumericValue);

	/**
	* Overloading operator==. If parameter computerManipulator`s fields equal current object's  fields then comparable objects are equal.
	* @param computerManipulator compares with current object
	* @return true in case if computerManipulator's fields equal current object`s fields then comparable objects are equal.
	*/
	inline bool operator == (const ComputerManipulator& computerManipulator) const;
	
	/**
	* Overloading assignment operator. If number that is assigned to current ComputerManipulator's object is accessible (form 0 to 2), then
	* calling the setSensorType(int sensorTypeNumericValue)
	* @param sensorTypeNumericValue is numeric value of the enum type ComputerManipulator::SensorType
	* @return *this -  object reference of type ComputerManipulator
	**/
	ComputerManipulator& operator = (int sensorTypeNumericValue);

	/**
	* Free memory which was allocated for ComputerManipulator's object.
	*/
	~ComputerManipulator();

private:

	/// The connection interface of the computer manipulator
	char* connectionInterface; // PS/2, USB, USB+PS/2, USB Type-C, Wireless

	/// Computer manipulator`s sensor type (balling, optical, laser)
	SensorType sensorType;
};


#endif /* COMPUTERMANIPULATOR_H_ */
