/**
 * @file Manipulator.h
 * Declaration of the CManipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.1
 * @date 2017.09.09
 */
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_

/**
 * Represents abstraction of mouse periphery.
 * */
class Manipulator {
public:
	static const int MIN_NUM_BTNS;  /// The min number of buttons is 2
	static const int MAX_NUM_BTNS;  /// The max number of buttons is 20
	static const char* TYPE[];/// Types that manipulator can be (mouse and joystick)

	/// Type of the mouse
	char* type;

	/// Amount of buttons
	int amountOfButtons;
public:

	/**
	 * Constructor without parameters
	 */
	Manipulator(void);

	/**
	 * Constructor with parameters
	 * @param amountOfBtns set an amount of manipulator's buttons
	 * @param type set the manipulator`s type
	 **/

	Manipulator(int amountOfBtns, char* type);

	/**
	 * Copying constructor
	 * @param Manipulator outer object with data which will be copied
	 */
	Manipulator(const Manipulator& Manipulator);

	/**
	 *  Destructor. Destroys object for which memory was allocated.
	 */
	~Manipulator();

};

#endif  /* MANIPULATOR_H_ */
