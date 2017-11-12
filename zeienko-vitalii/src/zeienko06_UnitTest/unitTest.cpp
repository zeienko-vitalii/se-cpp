/**
* @file unitTest.cpp
* In this file  project zeienko05`s unit tests are implemented.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.03
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
		listOfComputerManipulators.push_back(new ComputerManipulator(15, Manipulator::Joystick, "PCP", ComputerManipulator::Balling));
	}

	virtual void TearDown() { 	
		listOfComputerManipulators.clear();
	}
};

TEST_F(MouseListTest, testPushBackMethod) {	
	listOfComputerManipulators.push_back(new ComputerManipulator(16, Manipulator::Mouse, "VIM", ComputerManipulator::Laser));
	int expectedAmountOfButtons = 16;
	int actualAmountOfButtons = (listOfComputerManipulators.getDataByIndex(listOfComputerManipulators.getSize() - 1))->getAmountOfButtons();
	ASSERT_EQ(expectedAmountOfButtons, actualAmountOfButtons);
}

TEST_F(MouseListTest, testRemoveElementByIndexMethod) {
	ASSERT_TRUE(listOfComputerManipulators.remove_element(0));
	int expectedAmountOfButtons = 13;
	int actualAmountOfButtons = listOfComputerManipulators.getDataByIndex(0)->getAmountOfButtons();
	EXPECT_NE(expectedAmountOfButtons, actualAmountOfButtons);
}

TEST_F(MouseListTest, testInsertMethod) {
	ASSERT_TRUE(listOfComputerManipulators.insert(new ComputerManipulator(16, Manipulator::Mouse, "VIM", ComputerManipulator::Laser), 1));
	int expectedAmountOfButtons = 16;
	int actualAmountOfButtons = listOfComputerManipulators.getDataByIndex(1)->getAmountOfButtons();
	EXPECT_NE(expectedAmountOfButtons, actualAmountOfButtons);
}

TEST_F(MouseListTest, testClearMethod) {
	listOfComputerManipulators.clear();
	int expectedSize = -1;
	int actualSize = listOfComputerManipulators.getSize();
	EXPECT_EQ(expectedSize, actualSize);
}

TEST_F(MouseListTest, testGetDataByIndexMethod) {
	ComputerManipulator* expectComputerManipulator = new ComputerManipulator(14, Manipulator::Mouse, "Bluetooth", ComputerManipulator::Optical);
	ComputerManipulator* actualComputerManipulator = listOfComputerManipulators.getDataByIndex(1);
	bool result = false;
	if (*expectComputerManipulator == *actualComputerManipulator) {
		result = true;
	}
	ASSERT_TRUE(result);
}

GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	const int RUN_ALL_TESTS_CONST = RUN_ALL_TESTS();
	system("pause");
	return RUN_ALL_TESTS_CONST;
}
