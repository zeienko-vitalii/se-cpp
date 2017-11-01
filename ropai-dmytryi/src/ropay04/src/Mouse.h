/*
 * @file Mouse.h
 * Part of lab03
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#include "Manipulator.h"
#include <string>
#ifndef MOUSE_H_
#define MOUSE_H_

class Mouse : public Manipulator
{
private:
	string connection;

	string sensorType;

public:
	Mouse();

	Mouse(string connection, string sensorType);

	Mouse(int count, string type, string connection, string sensorType);

	string getConnection();

	string getSensorType();

	void setConnection(string connection);

	void setSensorType(string sensorType);

	virtual string toString();

	virtual ~Mouse();
};

#endif /* MOUSE_H_ */
