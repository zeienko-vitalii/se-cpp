/**
 * @file Manipulator.h
 * Declaration of the Manipulator class.
 * @author Vitalii Zeienko
 * @version 0.0.3
 * @date 2017.09.09
 */
#include "StorageInterface.h"
#ifndef MANIPULATOR_H_
#define MANIPULATOR_H_


 /**
  * Represents abstraction of mouse periphery.
  * */
class Manipulator : public MStorageInterface {
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
	* Copying constructor
	* @param manipulator outer object with data which will be copied
	*/
	Manipulator(const Manipulator& manipulator);

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
	char* getType() const;


	/**
	* Reading member Manipulator::amountOfButtons
	* @return attribute Manipulator::amountOfButtons
	* */
	int getAmountOfButtons() const;

	/**
	* Setting member Manipulator::amountOfButtons
	* @param typeOfManipulator is a string value which will be assigned of the Manipulator's type
	* */
	void setTypeOfManipulator(char* typeOfManipulator);
	
	/**
	* Setting member Manipulator::amountOfButtons
	* @param amountOfBtns is the manipulator`s number of buttons
	* */
	void setAmountOfButtons(int amountOfBtns);

	/**
	* Overloading operator==. If parameter manipulator`s fields: Manipulator::typeOfManipulator and Manipulator::amountOfButtons
	* equal appropriate current object`s fields  then comparable objects are equal.
	* @param manipulator compares with current object
	* @return true in case if manipulator fields equal appropriate current object's fields then comparable objects are equal.
	**/
	bool operator == (const Manipulator& manipulator) const;

	/**
	* Returns connection interface of the current object
	* @return ComputerManipulator::connectionInterface
	* */
	virtual char* getConnectionInterface() const;
	/**
	* Returns sensor type of the current object
	* @return ComputerManipulator::sensorType
	* */
	virtual char* getSensorType() const;

	/**
	* It saves current object's data
	* @param os is an ofstream object that is used to write to the file
	*/
	void OnStore(std::ostream& aStream);

	/**
	* It restore current object's data
	* @param in is an ifstream object that is used to read from the file
	*/
	void OnLoad(std::istream& aStream);

	/**
	 *  Destructor. Destroys object for which memory was allocated.
	 */
	virtual ~Manipulator();
public:
	/**
	* @return true in case if mouse has the number of buttons between 2 and 4
	* */
	bool isSimple() const;

	/**
	* @return true in case if mouse has the number of buttons more than 4
	* */
	bool isGame() const;

};

#endif  /** MANIPULATOR_H_ */
