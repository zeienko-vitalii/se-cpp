/*
 * @file GraphScreen.h
 * Part of lab02
 * @author Дима
 * @version 0.0.1
 * @date 2017.01.01
 */

#ifndef GRAPHSCREEN_H_
#define GRAPHSCREEN_H_

class GraphScreen {
private:

	const Manipulator* manip;

public:
	GraphScreen();

	void setDataSource(const Manipulator *manip);

	void printData(const Manipulator& manip);

	void printData();

	virtual ~GraphScreen();
};

#endif /* GRAPHSCREEN_H_ */
