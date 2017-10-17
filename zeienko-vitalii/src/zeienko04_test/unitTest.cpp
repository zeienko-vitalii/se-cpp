/**
* @file unitTest.cpp
* In this file  project zeienko04`s unit tests are implemented.
* @author Vitalii Zeienko
* @version 0.0.3
* @date 2017.10.03
*/
#include "gtest\gtest.h"

#include <stdio.h>

#include "BaseView.cpp"
#include "ManipulatorView.cpp"
#include "ComputerManipulatorView.cpp"
#include "GraphicalView.cpp"

#include "Manipulator.cpp"
#include "ComputerManipulator.cpp"

#include <Utility.h>

TEST(TestOverloadedOperator, TestComparisonOperatorEquality_WithManipulatorInstances) {
	Manipulator* manipualtorUnderTest_1 = new Manipulator;
	Manipulator* manipualtorUnderTest_2 = new Manipulator;
	bool actual;
	if (*manipualtorUnderTest_1 == *manipualtorUnderTest_1) {
		actual = true;
	}
	else actual = false;
	EXPECT_TRUE(actual);
	delete manipualtorUnderTest_1;
	delete manipualtorUnderTest_2;
}

TEST(TestOverloadedOperator, TestComparisonOperatorEquality_WithComputerManipulatorInstances) {
	ComputerManipulator* computerManipualtorUnderTest_1 = new ComputerManipulator;
	ComputerManipulator* computerManipualtorUnderTest_2 = new ComputerManipulator;
	bool actual;
	if (*computerManipualtorUnderTest_1 == *computerManipualtorUnderTest_2) {
		actual = true;
	}
	else actual = false;
	EXPECT_TRUE(actual);
	delete computerManipualtorUnderTest_1;
	delete computerManipualtorUnderTest_2;
}

TEST(TestOverloadedOperator, TestAssignmentOperator_WithComputerManipulatorInstances) {
	ComputerManipulator* computerManipualtorUnderTest = new ComputerManipulator;
	char* expect = "Balling";
	*computerManipualtorUnderTest = 0;
	char* actual = computerManipualtorUnderTest->getSensorType();
	EXPECT_EQ(expect, actual);
	delete computerManipualtorUnderTest;
}

GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	const int RUN_ALL_TESTS_CONST = RUN_ALL_TESTS();
	system("pause");
	return RUN_ALL_TESTS_CONST;
}