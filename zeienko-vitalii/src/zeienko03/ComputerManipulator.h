/*
 * ComputerManipulator.h
 *
 *  Created on: 24 сент. 2017 г.
 *      Author: Bjorn
 */

#include "Manipulator.h"

#ifndef COMPUTERMANIPULATOR_H_
#define COMPUTERMANIPULATOR_H_

class ComputerManipulator : public Manipulator{
private:

	/// The connction interface of the computer manipulator
	char* connectionInterface; // PS/2, USB, USB+PS/2, USB Type-C, Wireless

	/// Computer manipulator`s sensor type (balling, optical, laser)
	char* sensorType;
public:
	ComputerManipulator();
	ComputerManipulator(const ComputerManipulator& CManip);
	ComputerManipulator(int amountOfBtns, char* type,
						char* CInterface, char* SType);

	char* getConnectionInterface() const;
	char* getSensorType() const ;

	void setConnectionInterface(char* CInterface);
	void setSensorType(char* SType);

	~ComputerManipulator();
};

#endif /* COMPUTERMANIPULATOR_H_ */
