/**
* @file unitTest.cpp
* In this file  project zeienko07`s unit tests are implemented.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.11.03
*/

#include "gtest\gtest.h"

#include <stdio.h>
#include "gtest/gtest.h"
#include "ComputerManipulator.h"
#include "ComputerManipulator.cpp"
#include "Manipulator.h"
#include "Manipulator.cpp"
#include "MouseList.h"

/**
Test fixture in which 
*/
class MouseListTest : public ::testing::Test {
protected:
	MouseList<ComputerManipulator> listOfComputerManipulators;
	virtual void SetUp() {
		listOfComputerManipulators.push_back(new ComputerManipulator(13, Manipulator::Joystick, "USB", ComputerManipulator::Laser));
		listOfComputerManipulators.push_back(new ComputerManipulator(14, Manipulator::Mouse, "Bluetooth", ComputerManipulator::Optical));
		listOfComputerManipulators.push_back(new ComputerManipulator(15, Manipulator::Joystick, "Bluetooth", ComputerManipulator::Balling));
	}

	virtual void TearDown() { 	
		listOfComputerManipulators.clear();
	}
};

TEST_F(MouseListTest, testPushBackMethod) {	
	Functor funct;
	int actualAmount = listOfComputerManipulators.count(listOfComputerManipulators, funct);
	int expectAmount = 2;
	ASSERT_EQ(expectAmount, actualAmount);
}

GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	const int RUN_ALL_TESTS_CONST = RUN_ALL_TESTS();
	system("pause");
	return RUN_ALL_TESTS_CONST;
}
