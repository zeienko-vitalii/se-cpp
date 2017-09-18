/*
 * @file Manipulator.h
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */
#pragma once
using namespace std;
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_

class Manipulator {

public:

	int count;

private:

	string type;

public:

	Manipulator();

	Manipulator(int count, string type);

	int getCount() const;

	string getType() const;

	void setCount(int count);

	void setType(string type);

	bool isSimple() const;

	bool isGame() const;

	virtual ~Manipulator();
};

#endif /* MANIPULATOR_H_ */
