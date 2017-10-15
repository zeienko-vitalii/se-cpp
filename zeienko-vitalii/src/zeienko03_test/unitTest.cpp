/**
* @file unitTest.cpp
* In this file  project zeienko03`s unit tests are implemented.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.09.12
*/
#include "gtest\gtest.h"

#include <stdio.h>

#include "BaseView.cpp"
#include "ManipulatorView.cpp"
#include "ComputerManipulatorView.cpp"
#include "GraphicalView.cpp"

#include "Manipulator.cpp"
#include "ComputerManipulator.cpp"

#include <iostream>

#include <Utility.h>

TEST(TestManipulator, AmountOfButtons_SetByDefaultConstructor) {
	Manipulator* manipUnderTest = new Manipulator;
	int expect = 2;
	int actual = manipUnderTest->getAmountOfButtons();
	EXPECT_EQ(expect, actual);
	delete manipUnderTest;
}

TEST(TestManipulator, Type_SetByDefaultConstructor) {
	Manipulator* manipUnderTest = new Manipulator;
	char* expect = "Mouse";
	char* actual = manipUnderTest->getType();
	EXPECT_EQ(expect, actual);
	delete manipUnderTest;
}

TEST(TestManipulator, AmountOfButtons_SetByConstructorWithParameters) {
	Manipulator* manipUnderTest = new Manipulator(5, Manipulator::Type::Mouse);
	int expect = 5;
	int actual = manipUnderTest->getAmountOfButtons();
	EXPECT_EQ(expect, actual);
	delete manipUnderTest;
}

TEST(TestManipulator, Type_SetByConstructorWithParameters) {
	Manipulator* manipUnderTest = new Manipulator(5, Manipulator::Type::Joystick);
	char* expect = "Joystick";
	char* actual = manipUnderTest->getType();
	EXPECT_EQ(expect, actual);
	delete manipUnderTest;
}

TEST(TestManipulator, TestCopyingConstructor_ByCheckingAmountOfButtons) {
	Manipulator* temporaryManipUnderTest = new Manipulator(5, Manipulator::Type::Joystick);
	Manipulator* manipUnderTest = (temporaryManipUnderTest);
	int expect = 5;
	int actual = manipUnderTest->getAmountOfButtons();
	EXPECT_EQ(expect, actual);
	delete temporaryManipUnderTest;
}

TEST(TestManipulator, Test_IfManipulatorSimple) {
	Manipulator* manipUnderTest = new Manipulator;
	bool actual = manipUnderTest->isSimple();
	EXPECT_TRUE(actual);
	delete manipUnderTest;
}

TEST(TestManipulator, Test_IfManipulatorGame) {
	Manipulator* manipUnderTest = new Manipulator(5, Manipulator::Type::Joystick);
	bool actual = manipUnderTest->isGame();
	EXPECT_TRUE(actual);
	delete manipUnderTest;
}

TEST(TestComputerManipulator, TestConstructorByDefault_ByGettingConnectionInterface) {
	ComputerManipulator* computerManipUnderTest = new ComputerManipulator;
	char* expect = "USB";
	char* actual = computerManipUnderTest->getConnectionInterface();
	EXPECT_EQ(expect, actual);
	delete computerManipUnderTest;
}

TEST(TestComputerManipulator, TestConstructorWithParameters_ByGettingSensorType) {
	ComputerManipulator* computerManipUnderTest = new ComputerManipulator(4, Manipulator::Joystick, "Wireless", "Optical");
	char* expect = "Optical";
	char* actual = computerManipUnderTest->getSensorType();
	EXPECT_EQ(expect, actual);
	delete computerManipUnderTest;
}

TEST(TestComputerManipulator, TestCopyingConstructor_ByGettingConnectionInterface) {
	// temporaryManipUnderTest
	ComputerManipulator* temporaryComputerManipUnderTest = new ComputerManipulator;
	ComputerManipulator* computerManipUnderTest = (temporaryComputerManipUnderTest);
	char* expect = "USB";
	char* actual = computerManipUnderTest->getConnectionInterface();
	EXPECT_EQ(expect, actual);
	delete temporaryComputerManipUnderTest;
}

TEST(TestPolymorhism, ManipulatorViewInheritsBaseView) {
	Manipulator* manipualtorForTest = new Manipulator();
	ManipulatorView manipulatorViewUnderTest(*manipualtorForTest, &(std::cout));
	EXPECT_TRUE(instanceof<BaseView>(&manipulatorViewUnderTest));
	delete manipualtorForTest;
}

TEST(TestPolymorhism, GraphicalViewInheritsBaseView) {
	Manipulator* manipualtorForTest = new Manipulator();
	GraphicalView manipulatorViewUnderTest(*manipualtorForTest, &(std::cout));
	EXPECT_TRUE(instanceof<BaseView>(&manipulatorViewUnderTest));
	delete manipualtorForTest;	
}

TEST(TestPolymorhism, ComputerManipulatorViewInheritsManipulatorView) {
	ComputerManipulator* computerManipulatorForTest = new ComputerManipulator();
	ComputerManipulatorView computerManipulatorViewUnderTest(*computerManipulatorForTest, &(std::cout));
	EXPECT_TRUE(instanceof<BaseView>(&computerManipulatorViewUnderTest));
	delete computerManipulatorForTest;
}

GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	const int RUN_ALL_TESTS_CONST = RUN_ALL_TESTS();
	system("pause");
	return RUN_ALL_TESTS_CONST;
}