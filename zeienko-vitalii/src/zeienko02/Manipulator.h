/**
 * @file Manipulator.h
 * Declaration of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_

 /**
 * Represents abstraction of mouse periphery.
 * */
class Manipulator {
private:
	static const int MIN_NUM_BTNS;  /// The min number of buttons is 2
	static const int MAX_NUM_BTNS;  /// The max number of buttons is 20
	int amountOfButtons;			/// Amount of buttons
public:
	enum Type { Mouse, Joystick };	/// Types that manipulator can be 
	Type typeOfManipulator;			/// Type of the mouse

	/**
	 * Constructor without parameters
	 */
	Manipulator(void);

	/**
	 * Constructor with parameters
	 * @param amountOfBtns set an amount of manipulator's buttons
	 * @param typeOfManip set the manipulator`s type
	 **/
	Manipulator(int amountOfBtns, Type typeOfManip);

	/**
	* Is returns type of the manipulator as a string value.
	* @return string which defines type of the current object.
	*/
	char* getType() const {
		if (typeOfManipulator == Joystick) {
			return "Joystick";
		}
		else if(typeOfManipulator == Mouse) {
			return "Mouse";
		}
	}

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
	 * Copying constructor
	 * @param Manipulator outer object with data which will be copied
	 */
	Manipulator(const Manipulator& Manipulator);

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

#endif  /** MANIPULATOR_H_ */
