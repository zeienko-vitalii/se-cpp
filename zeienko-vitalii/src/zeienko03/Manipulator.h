/**
 * @file Manipulator.h
 * Declaration of the Manipulator class.
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
private:
	/// Amount of buttons
	int amountOfButtons;
public:
	static const int MIN_NUM_BTNS;  /// The min number of buttons is 2
	static const int MAX_NUM_BTNS;  /// The max number of buttons is 20
	static const char* TYPE[]; /// Types that manipulator can be (mouse and joystick)

	/// Type of the mouse
	char* type;

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
	 * Reading member Manipulator::amountOfButtons
	 * @return attribute Manipulator::amountOfButtons
	 * */
	int getAmountOfButtons() const;

	/**
	 * Setting member Manipulator::amountOfButtons
	 * @param amountOfBtns is the manipulator`s number of buttons
	 * */
	void setAmountOfButtons(int amountOfBtns);

	/**
	 *  Destructor. Destroys object for which memory was allocated.
	 */
	~Manipulator();
public:
	/**
	 * @return true in case if mouse has the number of buttons between 2 and 4
	 * */
	bool IsSimple() const;

	/**
	 * @return true in case if mouse has the number of buttons more than 4
	 * */
	bool IsGame() const;
};

#endif  /* MANIPULATOR_H_ */
