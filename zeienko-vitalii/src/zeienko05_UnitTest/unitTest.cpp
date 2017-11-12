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
#include <fstream>
#include <iostream>
#include <istream>

using std::ofstream;
using std::ifstream;
using std::ostream;
using std::istream;
using std::cout;
using std::endl;

/**
Test fixture in which 
*/
class ManipulatorStorageTest : public ::testing::Test {
protected:
	ofstream fileOStream;
	ifstream fileIStream;
	istream* iStream;
	const char* testFileName = "test.txt";
	Manipulator manipualtorUnderTest_1;

	virtual void SetUp() {
		
		fileOStream.open(testFileName,
			std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
		manipualtorUnderTest_1.OnStore(fileOStream);
		fileOStream.close();

		fileIStream.open(testFileName,
			std::ios_base::in | std::ios_base::binary);
		iStream = &fileIStream;
	}



	virtual void TearDown() { 	
		fileIStream.close();
	}
};

TEST_F(ManipulatorStorageTest, testingSavedDataInFile) {
	int actualAmountOfButtons = 0;
	iStream->read((char*)&actualAmountOfButtons, sizeof(actualAmountOfButtons));
	int expectedAmountOfButtons = manipualtorUnderTest_1.getAmountOfButtons();
	ASSERT_EQ(expectedAmountOfButtons, actualAmountOfButtons);

	int actualLengthOfTheTypeString = 0;
	iStream->read((char*)&actualLengthOfTheTypeString, sizeof(int));
	int expectedLengthOfTheTypeString = strlen(manipualtorUnderTest_1.getType());

	EXPECT_EQ(expectedLengthOfTheTypeString, actualLengthOfTheTypeString);
	char* actualType;
	char* expectType = manipualtorUnderTest_1.getType();
	actualType = new char[actualLengthOfTheTypeString + 1];
	iStream->read(actualType, actualLengthOfTheTypeString);
	actualType[actualLengthOfTheTypeString] = 0;
	ASSERT_STREQ(expectType, actualType);
	delete[] actualType;
}

GTEST_API_ int main(int argc, char **argv) {
	testing::InitGoogleTest(&argc, argv);
	const int RUN_ALL_TESTS_CONST = RUN_ALL_TESTS();
	system("pause");
	return RUN_ALL_TESTS_CONST;
}
